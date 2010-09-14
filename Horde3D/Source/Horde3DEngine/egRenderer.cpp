// *************************************************************************************************
//
// Horde3D
//   Next-Generation Graphics Engine
// --------------------------------------
// Copyright (C) 2006-2011 Nicolas Schulz
//
// This software is distributed under the terms of the Eclipse Public License v1.0.
// A copy of the license may be obtained at: http://www.eclipse.org/legal/epl-v10.html
//
// *************************************************************************************************

#include "egRenderer.h"
#include "utOpenGL.h"
#include "egParticle.h"
#include "egLight.h"
#include "egCamera.h"
#include "egModules.h"
#include "egCom.h"

#include "utDebug.h"


namespace Horde3D {

using namespace std;


const char *vsDefColor =
	"uniform mat4 viewProjMat;\n"
	"uniform mat4 worldMat;\n"
	"attribute vec3 vertPos;\n"
	"void main() {\n"
	"	gl_Position = viewProjMat * worldMat * vec4( vertPos, 1.0 );\n"
	"}\n";

const char *fsDefColor =
	"uniform vec4 color;\n"
	"void main() {\n"
	"	gl_FragColor = color;\n"
	"}\n";


Renderer::Renderer() : RenderDeviceInterface()
{
	_scratchBuf = 0x0;
	_scratchBufSize = 0;
	_frameID = 1;
	_defShadowMap = 0;
	_quadIdxBuf = 0;
	_particleVBO = 0;
	_curCamera = 0x0;
	_curLight = 0x0;
	_curShader = 0x0;
	_curRenderTarget = 0x0;
	_curShaderUpdateStamp = 1;
	_smSize = 0;
}


Renderer::~Renderer()
{
	releaseShadowRB();
	releaseTexture( _defShadowMap );
	releaseBuffer( _particleVBO );
	releaseVertexLayout( _vlPosOnly );
	releaseVertexLayout( _vlOverlay );
	releaseVertexLayout( _vlModel );
	releaseVertexLayout( _vlParticle );
	Modules::renderer().releaseShaderComb( _defColorShader );

	delete[] _scratchBuf;
	delete[] _overlayVerts;
}


// =================================================================================================
// Basic Initialization and Setup
// =================================================================================================

unsigned char *Renderer::useScratchBuf( uint32 minSize )
{
	if( _scratchBufSize < minSize )
	{
		delete[] _scratchBuf;
		_scratchBuf = new unsigned char[minSize + 15];
		_scratchBufSize = minSize;
	}

	return _scratchBuf + (size_t)_scratchBuf % 16;  // 16 byte aligned
}


bool Renderer::init()
{
	// Init backend
	if( !RenderDeviceInterface::init() ) return false;

	// Check capabilities
	if( !_caps[RenderCaps::Tex_Float] )
		Modules::log().writeWarning( "Renderer: No floating point texture support available" );
	if( !_caps[RenderCaps::Tex_NPOT] )
		Modules::log().writeWarning( "Renderer: No non-Power-of-two texture support available" );
	if( !_caps[RenderCaps::RT_Multisampling] )
		Modules::log().writeWarning( "Renderer: No multisampling for render targets available" );
	
	// Create vertex layouts
	_vlPosOnly = createVertexLayout( 1 );
	setVertexLayoutElem( _vlPosOnly, 0, "vertPos", 0, 3, 0 );

	_vlOverlay = createVertexLayout( 2 );
	setVertexLayoutElem( _vlOverlay, 0, "vertPos", 0, 2, 0 );
	setVertexLayoutElem( _vlOverlay, 1, "texCoords0", 0, 2, 8 );
	
	_vlModel = createVertexLayout( 7 );
	setVertexLayoutElem( _vlModel, 0, "vertPos", 0, 3, 0 );
	setVertexLayoutElem( _vlModel, 1, "normal", 1, 3, 0 );
	setVertexLayoutElem( _vlModel, 2, "tangent", 2, 4, 0 );
	setVertexLayoutElem( _vlModel, 3, "joints", 3, 4, 8 );
	setVertexLayoutElem( _vlModel, 4, "weights", 3, 4, 24 );
	setVertexLayoutElem( _vlModel, 5, "texCoords0", 3, 2, 0 );
	setVertexLayoutElem( _vlModel, 6, "texCoords1", 3, 2, 40 );

	_vlParticle = createVertexLayout( 4 );
	setVertexLayoutElem( _vlParticle, 0, "vertPos", 0, 3, 0 );
	setVertexLayoutElem( _vlParticle, 1, "parIdx", 0, 1, 24 );
	setVertexLayoutElem( _vlParticle, 2, "parCornerIdx", 0, 1, 20 );
	setVertexLayoutElem( _vlParticle, 3, "texCoords0", 0, 2, 12 );
	
	// Upload default shaders
	if( !createShaderComb( vsDefColor, fsDefColor, _defColorShader ) )
	{
		Modules::log().writeError( "Failed to compile default shaders" );
		return false;
	}

	// Cache common uniforms
	_defColShader_color = glGetUniformLocation( _defColorShader.shaderObj, "color" );
	
	// Create shadow map render target
	if( !createShadowRB( Modules::config().shadowMapSize, Modules::config().shadowMapSize ) )
	{
		Modules::log().writeError( "Failed to create shadow map" );
		return false;
	}

	// Create default shadow map
	float shadowTex[16] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
	_defShadowMap = createTexture( TextureTypes::Tex2D, 4, 4, TextureFormats::DEPTH, false, false, false, false );
	uploadTextureData( _defShadowMap, 0, 0, shadowTex );

	// Create index buffer used for drawing quads
	uint16 *quadIndices = new uint16[QuadIndexBufCount];
	for( uint32 i = 0; i < QuadIndexBufCount / 6; ++i )
	{
		quadIndices[i*6+0] = i * 4 + 0; quadIndices[i*6+1] = i * 4 + 1; quadIndices[i*6+2] = i * 4 + 2;
		quadIndices[i*6+3] = i * 4 + 2; quadIndices[i*6+4] = i * 4 + 3; quadIndices[i*6+5] = i * 4 + 0;
	}
	_quadIdxBuf = createIndexBuffer( QuadIndexBufCount * sizeof( uint16 ), quadIndices );
	delete[] quadIndices; quadIndices = 0x0;
	
	// Create particle geometry array
	ParticleVert v0( 0, 0, 0 );
	ParticleVert v1( 1, 0, 1 );
	ParticleVert v2( 1, 1, 2 );
	ParticleVert v3( 0, 1, 3 );
	
	ParticleVert *parVerts = new ParticleVert[ParticlesPerBatch * 4];
	for( uint32 i = 0; i < ParticlesPerBatch; ++i )
	{
		parVerts[i * 4 + 0] = v0; parVerts[i * 4 + 0].index = (float)i;
		parVerts[i * 4 + 1] = v1; parVerts[i * 4 + 1].index = (float)i;
		parVerts[i * 4 + 2] = v2; parVerts[i * 4 + 2].index = (float)i;
		parVerts[i * 4 + 3] = v3; parVerts[i * 4 + 3].index = (float)i;
	}
	_particleVBO = createVertexBuffer( ParticlesPerBatch * 4 * sizeof( ParticleVert ), (float *)parVerts );
	delete[] parVerts; parVerts = 0x0;

	_overlayBatches.reserve( 64 );
	_overlayVerts = new OverlayVert[MaxNumOverlayVerts];
	_overlayVB = createVertexBuffer( MaxNumOverlayVerts * sizeof( OverlayVert ), 0x0 );

	// Create unit primitives
	createPrimitives();

	// Init scratch buffer with some default size
	useScratchBuf( 4 * 1024*1024 );

	// Reset states
	finishRendering();

	// Start frame timer
	Timer *timer = Modules::stats().getTimer( EngineStats::FrameTime );
	ASSERT( timer != 0x0 );
	timer->setEnabled( true );
	
	return true;
}


void Renderer::resize( int x, int y, int width, int height )
{
	RenderDeviceInterface::resize( x, y, width, height );
}


// =================================================================================================
// Misc Helper Functions
// =================================================================================================

void Renderer::setupViewMatrices( const Matrix4f &viewMat, const Matrix4f &projMat )
{
	// Note: The viewing matrices should be set before a material is set, otherwise the general
	//       uniforms need to be commited manually
	
	_viewMat = viewMat;
	_viewMatInv = viewMat.inverted();
	_projMat = projMat;
	_viewProjMat = projMat * viewMat;

	++_curShaderUpdateStamp;
}


// =================================================================================================
// Rendering Helper Functions
// =================================================================================================

void Renderer::createPrimitives()
{
	// Unit cube
	float cubeVerts[8 * 3] = {  // x, y, z
		0.f, 0.f, 1.f,   1.f, 0.f, 1.f,   1.f, 1.f, 1.f,   0.f, 1.f, 1.f,
		0.f, 0.f, 0.f,   1.f, 0.f, 0.f,   1.f, 1.f, 0.f,   0.f, 1.f, 0.f
	};
	uint16 cubeInds[36] = {
		0, 1, 2, 2, 3, 0,   1, 5, 6, 6, 2, 1,   5, 4, 7, 7, 6, 5,
		4, 0, 3, 3, 7, 4,   3, 2, 6, 6, 7, 3,   4, 5, 1, 1, 0, 4
	};
	_vbCube = Modules::renderer().createVertexBuffer( 8 * 3 * sizeof( float ), cubeVerts );
	_ibCube = Modules::renderer().createIndexBuffer( 36 * sizeof( uint16 ), cubeInds );

	// Unit (geodesic) sphere (created by recursively subdividing a base octahedron)
	Vec3f spVerts[126] = {  // x, y, z
		Vec3f( 0.f, 1.f, 0.f ),   Vec3f( 0.f, -1.f, 0.f ),
		Vec3f( -0.707f, 0.f, 0.707f ),   Vec3f( 0.707f, 0.f, 0.707f ),
		Vec3f( 0.707f, 0.f, -0.707f ),   Vec3f( -0.707f, 0.f, -0.707f )
	};
	uint16 spInds[128 * 3] = {  // Number of faces: (4 ^ iterations) * 8
		2, 3, 0,   3, 4, 0,   4, 5, 0,   5, 2, 0,   2, 1, 3,   3, 1, 4,   4, 1, 5,   5, 1, 2
	};
	for( uint32 i = 0, nv = 6, ni = 24; i < 2; ++i )  // Two iterations
	{
		// Subdivide each face into 4 tris by bisecting each edge and push vertices onto unit sphere
		for( uint32 j = 0, prevNumInds = ni; j < prevNumInds; j += 3 )
		{
			spVerts[nv++] = ((spVerts[spInds[j + 0]] + spVerts[spInds[j + 1]]) * 0.5f).normalized();
			spVerts[nv++] = ((spVerts[spInds[j + 1]] + spVerts[spInds[j + 2]]) * 0.5f).normalized();
			spVerts[nv++] = ((spVerts[spInds[j + 2]] + spVerts[spInds[j + 0]]) * 0.5f).normalized();

			spInds[ni++] = spInds[j + 0]; spInds[ni++] = nv - 3; spInds[ni++] = nv - 1;
			spInds[ni++] = nv - 3; spInds[ni++] = spInds[j + 1]; spInds[ni++] = nv - 2;
			spInds[ni++] = nv - 2; spInds[ni++] = spInds[j + 2]; spInds[ni++] = nv - 1;
			spInds[j + 0] = nv - 3; spInds[j + 1] = nv - 2; spInds[j + 2] = nv - 1;
		}
	}
	_vbSphere = Modules::renderer().createVertexBuffer( 126 * sizeof( Vec3f ), spVerts );
	_ibSphere = Modules::renderer().createIndexBuffer( 128 * 3 * sizeof( uint16 ), spInds );
	
	// Unit cone
	float coneVerts[13 * 3] = {  // x, y, z
		0.f, 0.f, 0.f,
		0.f, 1.f, -1.f,   -0.5f, 0.866f, -1.f,   -0.866f, 0.5f, -1.f,
		-1.f, 0.f, -1.f,   -0.866f, -0.5f, -1.f,   -0.5f, -0.866f, -1.f,
		0.f, -1.f, -1.f,   0.5f, -0.866f, -1.f,   0.866f, -0.5f, -1.f,
		1.f, 0.f, -1.f,   0.866f, 0.5f, -1.f,   0.5f, 0.866f, -1.f,
	};
	uint16 coneInds[22 * 3] = {
		0, 1, 2,   0, 2, 3,   0, 3, 4,   0, 4, 5,   0, 5, 6,   0, 6, 7,
		0, 7, 8,   0, 8, 9,   0, 9, 10,   0, 10, 11,   0, 11, 12,   0, 12, 1,
		10, 6, 2,   10, 8, 6,   10, 9, 8,   8, 7, 6,   6, 4, 2,   6, 5, 4,   4, 3, 2,
		2, 12, 10,   2, 1, 12,   12, 11, 10
	};
	_vbCone = Modules::renderer().createVertexBuffer( 13 * 3 * sizeof( float ), coneVerts );
	_ibCone = Modules::renderer().createIndexBuffer( 22 * 3 * sizeof( uint16 ), coneInds );

	// Fullscreen polygon
	float fsVerts[3 * 5] = {  // x, y, z
		0.f, 0.f, 1.f,   2.f, 0.f, 1.f,   0.f, 2.f, 1.f
	};
	_vbFSPoly = Modules::renderer().createVertexBuffer( 3 * 5 * sizeof( float ), fsVerts );
}


void Renderer::drawAABB( const Vec3f &bbMin, const Vec3f &bbMax )
{
	ASSERT( _curShader != 0x0 );
	
	Matrix4f mat = Matrix4f::TransMat( bbMin.x, bbMin.y, bbMin.z ) *
		Matrix4f::ScaleMat( bbMax.x - bbMin.x, bbMax.y - bbMin.y, bbMax.z - bbMin.z );
	glUniformMatrix4fv( _curShader->uni_worldMat, 1, false, &mat.x[0] );
	
	setVertexBuffer( 0, _vbCube, 0, 12 );
	setIndexBuffer( _ibCube, IDXFMT_16 );
	setVertexLayout( _vlPosOnly );

	drawIndexed( PRIM_TRILIST, 0, 36, 0, 24 );
}


void Renderer::drawSphere( const Vec3f &pos, float radius )
{
	ASSERT( _curShader != 0x0 );

	Matrix4f mat = Matrix4f::TransMat( pos.x, pos.y, pos.z ) *
	               Matrix4f::ScaleMat( radius, radius, radius );
	glUniformMatrix4fv( _curShader->uni_worldMat, 1, false, &mat.x[0] );
	
	setVertexBuffer( 0, _vbSphere, 0, 12 );
	setIndexBuffer( _ibSphere, IDXFMT_16 );
	setVertexLayout( _vlPosOnly );

	drawIndexed( PRIM_TRILIST, 0, 128 * 3, 0, 126 );
}


void Renderer::drawCone( float height, float radius, const Matrix4f &transMat )
{
	ASSERT( _curShader != 0x0 );

	Matrix4f mat = transMat * Matrix4f::ScaleMat( radius, radius, height );
	glUniformMatrix4fv( _curShader->uni_worldMat, 1, false, &mat.x[0] );
	
	setVertexBuffer( 0, _vbCone, 0, 12 );
	setIndexBuffer( _ibCone, IDXFMT_16 );
	setVertexLayout( _vlPosOnly );

	drawIndexed( PRIM_TRILIST, 0, 22 * 3, 0, 39 );
}


// =================================================================================================
// Material System
// =================================================================================================

bool Renderer::createShaderComb( const char *vertexShader, const char *fragmentShader, ShaderCombination &sc )
{
	// Create shader program
	uint32 shdObj = createShader( vertexShader, fragmentShader );
	if( shdObj == 0 ) return false;
	
	sc.shaderObj = shdObj;
	bindShader( shdObj );
	
	// Set standard uniforms
	int loc = glGetUniformLocation( shdObj, "shadowMap" );
	if( loc >= 0 ) glUniform1i( loc, 12 );

	// Misc general uniforms
	sc.uni_frameBufSize = glGetUniformLocation( shdObj, "frameBufSize" );
	
	// View/projection uniforms
	sc.uni_viewMat = glGetUniformLocation( shdObj, "viewMat" );
	sc.uni_viewMatInv = glGetUniformLocation( shdObj, "viewMatInv" );
	sc.uni_projMat = glGetUniformLocation( shdObj, "projMat" );
	sc.uni_viewProjMat = glGetUniformLocation( shdObj, "viewProjMat" );
	sc.uni_viewerPos = glGetUniformLocation( shdObj, "viewerPos" );
	
	// Per-instance uniforms
	sc.uni_worldMat = glGetUniformLocation( shdObj, "worldMat" );
	sc.uni_worldNormalMat = glGetUniformLocation( shdObj, "worldNormalMat" );
	sc.uni_nodeId = glGetUniformLocation( shdObj, "nodeId" );
	sc.uni_skinMatRows = glGetUniformLocation( shdObj, "skinMatRows[0]" );
	
	// Lighting uniforms
	sc.uni_lightPos = glGetUniformLocation( shdObj, "lightPos" );
	sc.uni_lightDir = glGetUniformLocation( shdObj, "lightDir" );
	sc.uni_lightColor = glGetUniformLocation( shdObj, "lightColor" );
	sc.uni_shadowSplitDists = glGetUniformLocation( shdObj, "shadowSplitDists" );
	sc.uni_shadowMats = glGetUniformLocation( shdObj, "shadowMats" );
	sc.uni_shadowMapSize = glGetUniformLocation( shdObj, "shadowMapSize" );
	sc.uni_shadowBias = glGetUniformLocation( shdObj, "shadowBias" );
	
	// Particle-specific uniforms
	sc.uni_parCorners = glGetUniformLocation( shdObj, "parCorners" );
	sc.uni_parPosArray = glGetUniformLocation( shdObj, "parPosArray" );
	sc.uni_parSizeAndRotArray = glGetUniformLocation( shdObj, "parSizeAndRotArray" );
	sc.uni_parColorArray = glGetUniformLocation( shdObj, "parColorArray" );
	
	// Overlay-specific uniforms
	sc.uni_olayColor = glGetUniformLocation( shdObj, "olayColor" );

	return true;
}


void Renderer::releaseShaderComb( ShaderCombination &sc )
{
	releaseShader( sc.shaderObj );
}


void Renderer::setShaderComb( ShaderCombination *sc )
{
	if( _curShader != sc )
	{
		if( sc == 0x0 ) bindShader( 0 );
		else bindShader( sc->shaderObj );

		_curShader = sc;
	}
}


void Renderer::commitGeneralUniforms()
{
	ASSERT( _curShader != 0x0 );

	// Note: Make sure that all functions which modify one of the following params increase the stamp
	if( _curShader->lastUpdateStamp != _curShaderUpdateStamp )
	{
		if( _curShader->uni_frameBufSize >= 0 )
			glUniform2f( _curShader->uni_frameBufSize, (float)_fbWidth, (float)_fbHeight );
		
		// Viewer params
		if( _curShader->uni_viewMat >= 0 )
			glUniformMatrix4fv( _curShader->uni_viewMat, 1, false, _viewMat.x );
		
		if( _curShader->uni_viewMatInv >= 0 )
			glUniformMatrix4fv( _curShader->uni_viewMatInv, 1, false, _viewMatInv.x );
		
		if( _curShader->uni_projMat >= 0 )
			glUniformMatrix4fv( _curShader->uni_projMat, 1, false, _projMat.x );
		
		if( _curShader->uni_viewProjMat >= 0 )
			glUniformMatrix4fv( _curShader->uni_viewProjMat, 1, false, _viewProjMat.x );
		
		if( _curShader->uni_viewerPos >= 0 )
			glUniform3fv( _curShader->uni_viewerPos, 1, &_viewMatInv.x[12] );
		
		// Light params
		if( _curLight != 0x0 )
		{
			if( _curShader->uni_lightPos >= 0 )
				glUniform4f( _curShader->uni_lightPos, _curLight->_absPos.x, _curLight->_absPos.y,
				             _curLight->_absPos.z, _curLight->_radius );
			
			if( _curShader->uni_lightDir >= 0 )
				glUniform4f( _curShader->uni_lightDir, _curLight->_spotDir.x, _curLight->_spotDir.y,
				             _curLight->_spotDir.z, cosf( degToRad( _curLight->_fov / 2.0f ) ) );
			
			if( _curShader->uni_lightColor >= 0 )
			{
				Vec3f col = _curLight->_diffuseCol * _curLight->_diffuseColMult;
				glUniform3fv( _curShader->uni_lightColor, 1, &col.x );
			}
			
			if( _curShader->uni_shadowSplitDists >= 0 )
				glUniform4fv( _curShader->uni_shadowSplitDists, 1, &_splitPlanes[1] );

			if( _curShader->uni_shadowMats >= 0 )
				glUniformMatrix4fv( _curShader->uni_shadowMats, 4, false, &_lightMats[0].x[0] );
			
			if( _curShader->uni_shadowMapSize >= 0 )
				glUniform1f( _curShader->uni_shadowMapSize, _smSize );
			
			if( _curShader->uni_shadowBias >= 0 )
				glUniform1f( _curShader->uni_shadowBias, _curLight->_shadowMapBias );
		}

		_curShader->lastUpdateStamp = _curShaderUpdateStamp;
	}
}


bool Renderer::setMaterialRec( MaterialResource *materialRes, const string &shaderContext,
                               ShaderResource *shaderRes )
{
	if( materialRes == 0x0 ) return false;
	
	bool firstRec = (shaderRes == 0x0);
	bool result = true;
	
	// Set shader in first recursion step
	if( firstRec )
	{	
		shaderRes = materialRes->_shaderRes;
		if( shaderRes == 0x0 ) return false;	
	
		// Find context
		ShaderContext *context = shaderRes->findContext( shaderContext );
		if( context == 0x0 ) return false;
		
		// Set shader combination
		ShaderCombination *sc = shaderRes->getCombination( *context, materialRes->_combMask );
		if( sc != _curShader ) setShaderComb( sc );
		if( _curShader == 0x0 || _curShaderObj == 0 ) return false;

		// Setup standard shader uniforms
		commitGeneralUniforms();

		// Configure depth mask
		if( context->writeDepth ) glDepthMask( GL_TRUE );
		else glDepthMask( GL_FALSE );

		// Configure cull mode
		if( !Modules::config().wireframeMode )
		{
			switch( context->cullMode )
			{
			case CullModes::Back:
				glEnable( GL_CULL_FACE );
				glCullFace( GL_BACK );
				break;
			case CullModes::Front:
				glEnable( GL_CULL_FACE );
				glCullFace( GL_FRONT );
				break;
			case CullModes::None:
				glDisable( GL_CULL_FACE );
				break;
			}
		}
		
		// Configure blending
		switch( context->blendMode )
		{
		case BlendModes::Replace:
			glDisable( GL_BLEND );
			break;
		case BlendModes::Blend:
			glEnable( GL_BLEND );
			glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );
			break;
		case BlendModes::Add:
			glEnable( GL_BLEND );
			glBlendFunc( GL_ONE, GL_ONE );
			break;
		case BlendModes::AddBlended:
			glEnable( GL_BLEND );
			glBlendFunc( GL_SRC_ALPHA, GL_ONE );
			break;
		case BlendModes::Mult:
			glEnable( GL_BLEND );
			glBlendFunc( GL_DST_COLOR, GL_ZERO );
			break;
		}

		// Configure depth test
		if( context->depthTest )
		{
			glEnable( GL_DEPTH_TEST );
			
			switch( context->depthFunc )
			{
			case TestModes::LessEqual:
				glDepthFunc( GL_LEQUAL );
				break;
			case TestModes::Equal:
				glDepthFunc( GL_EQUAL );
				break;
			case TestModes::Always:
				glDepthFunc( GL_ALWAYS );
				break;
			case TestModes::Less:
				glDepthFunc( GL_LESS );
				break;
			case TestModes::Greater:
				glDepthFunc( GL_GREATER );
				break;
			case TestModes::GreaterEqual:
				glDepthFunc( GL_GEQUAL );
				break;
			}
		}
		else
		{
			glDisable( GL_DEPTH_TEST );
		}

		// Configure alpha-to-coverage
		if( context->alphaToCoverage && Modules::config().sampleCount > 0 )
			glEnable( GL_SAMPLE_ALPHA_TO_COVERAGE );
		else
			glDisable( GL_SAMPLE_ALPHA_TO_COVERAGE );
	}

	// Setup texture samplers
	for( size_t i = 0, si = shaderRes->_samplers.size(); i < si; ++i )
	{
		if( _curShader->customSamplers[i] < 0 ) continue;
		
		ShaderSampler &sampler = shaderRes->_samplers[i];
		TextureResource *texRes = 0x0;
		int target = 0;
		bool mips = false;

		// Use default texture
		if( firstRec) texRes = sampler.defTex;
		
		// Find sampler in material
		for( size_t j = 0, sj = materialRes->_samplers.size(); j < sj; ++j )
		{
			if( materialRes->_samplers[j].name == sampler.id )
			{
				if( materialRes->_samplers[j].texRes->isLoaded() )
					texRes = materialRes->_samplers[j].texRes;
				break;
			}
		}

		// Bind texture
		if( texRes != 0x0 )
		{
			if( texRes->getTexType() != sampler.type ) break;  // Wrong type
			
			if( texRes->getTexType() == TextureTypes::Tex2D )
			{
				target = GL_TEXTURE_2D;
				mips = texRes->hasMipMaps();
				
				if( texRes->getRBObject() == 0 )
				{
					bindTexture( shaderRes->_samplers[i].texUnit, texRes->getTexObject() );
				}
				else if( texRes->getRBObject() != _curRendBuf )
				{
					bindTexture( shaderRes->_samplers[i].texUnit, getRenderBufferTex( texRes->getRBObject(), 0 ) );
				}
				else  // Trying to bind active render buffer as texture
				{
					bindTexture( shaderRes->_samplers[i].texUnit, TextureResource::defTex2DObject );
				}
			}
			else if( texRes->getTexType() == TextureTypes::TexCube )
			{
				target = GL_TEXTURE_CUBE_MAP;
				mips = texRes->hasMipMaps();
				bindTexture( shaderRes->_samplers[i].texUnit, texRes->getTexObject() );
			}
		}

		// Find sampler in pipeline
		if( firstRec )
		{
			for( size_t j = 0, sj = _pipeSamplerBindings.size(); j < sj; ++j )
			{
				if( strcmp( _pipeSamplerBindings[j].sampler, sampler.id.c_str() ) == 0 )
				{
					target = GL_TEXTURE_2D;
					mips = false;

					bindTexture( shaderRes->_samplers[i].texUnit, getRenderBufferTex(
						_pipeSamplerBindings[j].rbObj, _pipeSamplerBindings[j].bufIndex ) );
					glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_COMPARE_MODE, GL_NONE );

					break;
				}
			}
		}

		if( target == 0 ) continue;

		// Address mode
		switch( sampler.addressMode )
		{
		case TexAddressModes::Wrap:
			glTexParameteri( target, GL_TEXTURE_WRAP_S, GL_REPEAT );
			glTexParameteri( target, GL_TEXTURE_WRAP_T, GL_REPEAT );
			glTexParameteri( target, GL_TEXTURE_WRAP_R, GL_REPEAT );
			break;
		case TexAddressModes::Clamp:
			glTexParameteri( target, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE );
			glTexParameteri( target, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE );
			glTexParameteri( target, GL_TEXTURE_WRAP_R, GL_CLAMP_TO_EDGE );
			break;
		}

		// Filtering
		switch( sampler.filterMode )
		{
		case TexFilterModes::Trilinear:
			if( Modules::config().trilinearFiltering )
			{
				glTexParameteri( target, GL_TEXTURE_MAG_FILTER, GL_LINEAR );
				if( mips )
					glTexParameteri( target, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR );
				else
					glTexParameteri( target, GL_TEXTURE_MIN_FILTER, GL_LINEAR );
				break;
			} // else go to case TexFilterModes::Bilinear
		case TexFilterModes::Bilinear:
			glTexParameteri( target, GL_TEXTURE_MAG_FILTER, GL_LINEAR );
			if( mips )
				glTexParameteri( target, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_NEAREST );
			else
				glTexParameteri( target, GL_TEXTURE_MIN_FILTER, GL_LINEAR );
			break;
		case TexFilterModes::None:
			glTexParameteri( target, GL_TEXTURE_MAG_FILTER, GL_NEAREST );
			if( mips )
				glTexParameteri( target, GL_TEXTURE_MIN_FILTER, GL_NEAREST_MIPMAP_NEAREST );
			else
				glTexParameteri( target, GL_TEXTURE_MIN_FILTER, GL_NEAREST );
			break;
		}

		// Anisotropy
		if( mips )
		{
			glTexParameteri( target, GL_TEXTURE_MAX_ANISOTROPY_EXT,
				std::min( sampler.maxAnisotropy, Modules::config().maxAnisotropy ) );
		}
		else
		{
			glTexParameteri( target, GL_TEXTURE_MAX_ANISOTROPY_EXT, 1 );
		}
	}

	// Set custom uniforms
	for( size_t i = 0, si = shaderRes->_uniforms.size(); i < si; ++i )
	{
		if( _curShader->customUniforms[i] < 0 ) continue;
		
		float *unifData = 0x0;

		// Find uniform in material
		for( size_t j = 0, sj = materialRes->_uniforms.size(); j < sj; ++j )
		{
			MatUniform &matUniform = materialRes->_uniforms[j];
			
			if( matUniform.name == shaderRes->_uniforms[i].id )
			{
				unifData = matUniform.values;
				break;
			}
		}

		// Use default values if not found
		if( unifData == 0x0 && firstRec )
			unifData = shaderRes->_uniforms[i].defValues;

		if( unifData )
		{
			switch( shaderRes->_uniforms[i].size )
			{
			case 1:
				glUniform1f( _curShader->customUniforms[i], *unifData );
				break;
			case 4:
				glUniform4fv( _curShader->customUniforms[i], 1, unifData );
				break;
			}
		}
	}

	if( firstRec )
	{
		// Handle link of stage
		if( _curStageMatLink != 0x0 && _curStageMatLink != materialRes )
			result &= setMaterialRec( _curStageMatLink, shaderContext, shaderRes );

		// Handle material of light source
		if( _curLight != 0x0 && _curLight->_materialRes != 0x0 && _curLight->_materialRes != materialRes )
			result &= setMaterialRec( _curLight->_materialRes, shaderContext, shaderRes );
	}

	// Handle link of material resource
	if( materialRes->_matLink != 0x0 )
		result &= setMaterialRec( materialRes->_matLink, shaderContext, shaderRes );

	return result;
}


bool Renderer::setMaterial( MaterialResource *materialRes, const string &shaderContext )
{
	if( materialRes == 0x0 )
	{	
		setShaderComb( 0x0 );
		glDisable( GL_BLEND );
		glDisable( GL_SAMPLE_ALPHA_TO_COVERAGE );
		glEnable( GL_DEPTH_TEST );
		glDepthFunc( GL_LEQUAL );
		glDepthMask( GL_TRUE );
		return false;
	}

	if( !setMaterialRec( materialRes, shaderContext, 0x0 ) )
	{
		_curShader = 0x0;
		return false;
	}

	return true;
}


// =================================================================================================
// Shadowing
// =================================================================================================

bool Renderer::createShadowRB( uint32 width, uint32 height )
{
	_shadowRB = createRenderBuffer( width, height, TextureFormats::BGRA8, true, 0, 0 );
	
	return _shadowRB != 0;
}


void Renderer::releaseShadowRB()
{
	releaseRenderBuffer( _shadowRB );
}


void Renderer::setupShadowMap( bool noShadows )
{
	// Bind shadow map
	if( !noShadows && _curLight->_shadowMapCount > 0 )
	{
		bindTexture( 12, getRenderBufferTex( _shadowRB, 32 ) );
		_smSize = (float)Modules::config().shadowMapSize;
	}
	else
	{
		bindTexture( 12, _defShadowMap );
		_smSize = 4;
	}

	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MAX_ANISOTROPY_EXT, 1 );
	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR );
	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR );
	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_BORDER );
	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_BORDER );
	float borderColor[] = {1.0f, 1.0f, 1.0f, 1.0f};
	glTexParameterfv(GL_TEXTURE_2D, GL_TEXTURE_BORDER_COLOR, borderColor);
	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_COMPARE_MODE, GL_COMPARE_R_TO_TEXTURE );
	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_COMPARE_FUNC, GL_LEQUAL );
}


Matrix4f Renderer::calcCropMatrix( const Frustum &frustSlice, const Matrix4f &lightViewProjMat )
{
	// Find AABB of scene objects in slice
	Modules::sceneMan().updateQueues( frustSlice, 0x0, RenderingOrder::None, false, true );
	BoundingBox aabb;
	for( size_t j = 0, s = Modules::sceneMan().getRenderableQueue().size(); j < s; ++j )
	{
		aabb.makeUnion( Modules::sceneMan().getRenderableQueue()[j].node->getBBox() );
	}

	float frustMinX =  Math::MaxFloat, bbMinX =  Math::MaxFloat;
	float frustMinY =  Math::MaxFloat, bbMinY =  Math::MaxFloat;
	float frustMinZ =  Math::MaxFloat, bbMinZ =  Math::MaxFloat;
	float frustMaxX = -Math::MaxFloat, bbMaxX = -Math::MaxFloat;
	float frustMaxY = -Math::MaxFloat, bbMaxY = -Math::MaxFloat;
	float frustMaxZ = -Math::MaxFloat, bbMaxZ = -Math::MaxFloat;
	
	// Get frustum and scene AABB extents in post-projective space
	for( uint32 i = 0; i < 8; ++i )
	{
		// Frustum slice
		Vec4f v1 = lightViewProjMat * Vec4f( frustSlice.getCorner( i ) );
		v1.w = fabs( v1.w );	// Use absolute value to reduce problems with back projection when v1.w < 0
		v1.x /= v1.w; v1.y /= v1.w; v1.z /= v1.w;

		if( v1.x < frustMinX ) frustMinX = v1.x;
		if( v1.y < frustMinY ) frustMinY = v1.y;
		if( v1.z < frustMinZ ) frustMinZ = v1.z;
		if( v1.x > frustMaxX ) frustMaxX = v1.x;
		if( v1.y > frustMaxY ) frustMaxY = v1.y;
		if( v1.z > frustMaxZ ) frustMaxZ = v1.z;

		// Scene AABB
		v1 = lightViewProjMat * Vec4f( aabb.getCorner( i ) );
		v1.w = fabs( v1.w );
		v1.x /= v1.w; v1.y /= v1.w; v1.z /= v1.w;

		if( v1.x < bbMinX ) bbMinX = v1.x;
		if( v1.y < bbMinY ) bbMinY = v1.y;
		if( v1.z < bbMinZ ) bbMinZ = v1.z;
		if( v1.x > bbMaxX ) bbMaxX = v1.x;
		if( v1.y > bbMaxY ) bbMaxY = v1.y;
		if( v1.z > bbMaxZ ) bbMaxZ = v1.z;
	}

	// Merge frustum and AABB bounds and clamp to post-projective range [-1, 1]
	float minX = clamp( maxf( frustMinX, bbMinX ), -1, 1 );
	float minY = clamp( maxf( frustMinY, bbMinY ), -1, 1 );
	float minZ = clamp( minf( frustMinZ, bbMinZ ), -1, 1 );
	float maxX = clamp( minf( frustMaxX, bbMaxX ), -1, 1 );
	float maxY = clamp( minf( frustMaxY, bbMaxY ), -1, 1 );
	float maxZ = clamp( minf( frustMaxZ, bbMaxZ ), -1, 1 );

	// Zoom-in slice to make better use of available shadow map space
	float scaleX = 2.0f / (maxX - minX);
	float scaleY = 2.0f / (maxY - minY);
	float scaleZ = 2.0f / (maxZ - minZ);

	float offsetX = -0.5f * (maxX + minX) * scaleX;
	float offsetY = -0.5f * (maxY + minY) * scaleY;
	float offsetZ = -0.5f * (maxZ + minZ) * scaleZ;

	// Build final matrix
	float cropMat[16] = { scaleX, 0, 0, 0,
	                      0, scaleY, 0, 0,
	                      0, 0, scaleZ, 0,
	                      offsetX, offsetY, offsetZ, 1 };

	return Matrix4f( cropMat );
}


void Renderer::updateShadowMap()
{
	if( _curLight == 0x0 ) return;
	
	uint32 prevRendBuf = _curRendBuf;
	setRenderBuffer( _shadowRB );
	
	glColorMask( GL_FALSE, GL_FALSE, GL_FALSE, GL_FALSE );
	glDepthMask( GL_TRUE );
	glClearDepth( 1.0f );
	glClear( GL_DEPTH_BUFFER_BIT );

	// ********************************************************************************************
	// Cascaded Shadow Maps
	// ********************************************************************************************
	
	// Find AABB of lit geometry
	BoundingBox aabb;
	Modules::sceneMan().updateQueues( _curCamera->getFrustum(), &_curLight->getFrustum(),
	                                  RenderingOrder::None, false, true );
	for( size_t j = 0, s = Modules::sceneMan().getRenderableQueue().size(); j < s; ++j )
	{
		aabb.makeUnion( Modules::sceneMan().getRenderableQueue()[j].node->getBBox() ); 
	}

	// Find depth range of lit geometry
	float minDist = Math::MaxFloat, maxDist = 0.0f;
	for( uint32 i = 0; i < 8; ++i )
	{
		float dist = -(_curCamera->getViewMat() * aabb.getCorner( i )).z;
		if( dist < minDist ) minDist = dist;
		if( dist > maxDist ) maxDist = dist;
	}

	// Don't adjust near plane; this means less precision if scene is far away from viewer but that
	// shouldn't be too noticeable and brings better performance since the nearer split volumes are empty
	minDist = _curCamera->_frustNear;
	
	// Calculate split distances using PSSM scheme
	const float nearDist = maxf( minDist, _curCamera->_frustNear );
	const float farDist = maxf( maxDist, minDist + 0.01f );
	const uint32 numMaps = _curLight->_shadowMapCount;
	const float lambda = _curLight->_shadowSplitLambda;
	
	_splitPlanes[0] = nearDist;
	_splitPlanes[numMaps] = farDist;
	
	for( uint32 i = 1; i < numMaps; ++i )
	{
		float f = (float)i / numMaps;
		float logDist = nearDist * pow( farDist / nearDist, f );
		float uniformDist = nearDist + (farDist - nearDist) * f;
		
		_splitPlanes[i] = (1 - lambda) * uniformDist + lambda * logDist;  // Lerp
	}
	
	// Prepare shadow map rendering
	glEnable( GL_DEPTH_TEST );
	//glCullFace( GL_FRONT );	// Front face culling reduces artefacts but produces more "peter-panning"
	
	// Split viewing frustum into slices and render shadow maps
	Frustum frustum;
	for( uint32 i = 0; i < numMaps; ++i )
	{
		// Create frustum slice
		if( !_curCamera->_orthographic )
		{
			float newLeft = _curCamera->_frustLeft * _splitPlanes[i] / _curCamera->_frustNear;
			float newRight = _curCamera->_frustRight * _splitPlanes[i] / _curCamera->_frustNear;
			float newBottom = _curCamera->_frustBottom * _splitPlanes[i] / _curCamera->_frustNear;
			float newTop = _curCamera->_frustTop * _splitPlanes[i] / _curCamera->_frustNear;
			frustum.buildViewFrustum( _curCamera->_absTrans, newLeft, newRight, newBottom, newTop,
			                          _splitPlanes[i], _splitPlanes[i + 1] );
		}
		else
		{
			frustum.buildBoxFrustum( _curCamera->_absTrans, _curCamera->_frustLeft, _curCamera->_frustRight,
			                         _curCamera->_frustBottom, _curCamera->_frustTop,
			                         -_splitPlanes[i], -_splitPlanes[i + 1] );
		}
		
		// Get light projection matrix
		float ymax = _curCamera->_frustNear * tan( degToRad( _curLight->_fov / 2 ) );
		float xmax = ymax * 1.0f;  // ymax * aspect
		Matrix4f lightProjMat = Matrix4f::PerspectiveMat(
			-xmax, xmax, -ymax, ymax, _curCamera->_frustNear, _curLight->_radius );
		
		// Build optimized light projection matrix
		Matrix4f lightViewProjMat = lightProjMat * _curLight->getViewMat();
		lightProjMat = calcCropMatrix( frustum, lightViewProjMat ) * lightProjMat;
		
		// Generate render queue with shadow casters for current slice
		frustum.buildViewFrustum( _curLight->getViewMat(), lightProjMat );
		Modules::sceneMan().updateQueues( frustum, 0x0, RenderingOrder::None, false, true );
		
		// Create texture atlas if several splits are enabled
		if( numMaps > 1 )
		{
			const int hsm = Modules::config().shadowMapSize / 2;
			const int scissorXY[8] = { 0, 0,  hsm, 0,  hsm, hsm,  0, hsm };
			const float transXY[8] = { -0.5f, -0.5f,  0.5f, -0.5f,  0.5f, 0.5f,  -0.5f, 0.5f };
			
			glEnable( GL_SCISSOR_TEST );

			// Select quadrant of shadow map
			lightProjMat.scale( 0.5f, 0.5f, 1.0f );
			lightProjMat.translate( transXY[i * 2], transXY[i * 2 + 1], 0.0f );
			glScissor( scissorXY[i * 2], scissorXY[i * 2 + 1], hsm, hsm );
		}
	
		_lightMats[i] = lightProjMat * _curLight->getViewMat();
		setupViewMatrices( _curLight->getViewMat(), lightProjMat );
		
		// Render
		drawRenderables( _curLight->_shadowContext, "", false, &frustum, 0x0, RenderingOrder::None, -1 );
	}

	// Map from post-projective space [-1,1] to texture space [0,1]
	for( uint32 i = 0; i < numMaps; ++i )
	{
		_lightMats[i].scale( 0.5f, 0.5f, 1.0f );
		_lightMats[i].translate( 0.5f, 0.5f, 0.0f );
	}

	// ********************************************************************************************

	glCullFace( GL_BACK );
	glDisable( GL_SCISSOR_TEST );
		
	setRenderBuffer( prevRendBuf );
	glColorMask( GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE );
}


// =================================================================================================
// Occlusion Culling
// =================================================================================================

int Renderer::registerOccSet()
{
	for( int i = 0; i < (int)_occSets.size(); ++i )
	{
		if( _occSets[i] == 0 )
		{
			_occSets[i] = 1;
			return i;
		}
	}

	_occSets.push_back( 1 );
	return (int)_occSets.size() - 1;
}


void Renderer::unregisterOccSet( int occSet )
{
	if( occSet >= 0 && occSet < (int)_occSets.size() )
		_occSets[occSet] = 0;
}


void Renderer::drawOccProxies( uint32 list )
{
	ASSERT( list < 2 );
	
	GLboolean colMask[4], depthMask;
	glGetBooleanv( GL_COLOR_WRITEMASK, colMask );
	glGetBooleanv( GL_DEPTH_WRITEMASK, &depthMask );
	
	setMaterial( 0x0, "" );
	glColorMask( GL_FALSE, GL_FALSE, GL_FALSE, GL_FALSE );
	glDepthMask( GL_FALSE );
	
	setShaderComb( &Modules::renderer()._defColorShader );
	commitGeneralUniforms();
	setVertexBuffer( 0, _vbCube, 0, 12 );
	setIndexBuffer( _ibCube, IDXFMT_16 );
	setVertexLayout( _vlPosOnly );

	// Draw occlusion proxies
	for( size_t i = 0, s = _occProxies[list].size(); i < s; ++i )
	{
		OccProxy &proxy = _occProxies[list][i];

		beginQuery( proxy.queryObj );
		
		Matrix4f mat = Matrix4f::TransMat( proxy.bbMin.x, proxy.bbMin.y, proxy.bbMin.z ) *
			Matrix4f::ScaleMat( proxy.bbMax.x - proxy.bbMin.x, proxy.bbMax.y - proxy.bbMin.y, proxy.bbMax.z - proxy.bbMin.z );
		glUniformMatrix4fv( _curShader->uni_worldMat, 1, false, &mat.x[0] );

		// Draw AABB
		drawIndexed( PRIM_TRILIST, 0, 36, 0, 24 );

		endQuery( proxy.queryObj );
	}

	setShaderComb( 0x0 );
	glDepthMask( depthMask );
	glColorMask( colMask[0], colMask[1], colMask[2], colMask[3] );

	_occProxies[list].resize( 0 );
}


// =================================================================================================
// Overlays
// =================================================================================================

void Renderer::showOverlays( const float *verts, uint32 vertCount, float *colRGBA,
                             MaterialResource *matRes, int flags )
{
	uint32 numOverlayVerts = 0;
	if( !_overlayBatches.empty() )
		numOverlayVerts = _overlayBatches.back().firstVert + _overlayBatches.back().vertCount;
	
	if( numOverlayVerts + vertCount > MaxNumOverlayVerts ) return;

	memcpy( &_overlayVerts[numOverlayVerts], verts, vertCount * sizeof( OverlayVert ) );
	
	// Check if previous batch can be extended
	if( !_overlayBatches.empty() )
	{
		OverlayBatch &prevBatch = _overlayBatches.back();
		if( matRes == prevBatch.materialRes && flags == prevBatch.flags &&
			memcmp( colRGBA, prevBatch.colRGBA, 4 * sizeof( float ) ) == 0 )
		{
			prevBatch.vertCount += vertCount;
			return;
		}
	}
	
	// Create new batch
	_overlayBatches.push_back( OverlayBatch( numOverlayVerts, vertCount, colRGBA, matRes, flags ) );
}


void Renderer::clearOverlays()
{
	_overlayBatches.resize( 0 );
}


void Renderer::drawOverlays( const string &shaderContext )
{
	uint32 numOverlayVerts = 0;
	if( !_overlayBatches.empty() )
		numOverlayVerts = _overlayBatches.back().firstVert + _overlayBatches.back().vertCount;
	
	if( numOverlayVerts == 0 ) return;
	
	// Upload overlay vertices
	updateBufferData( _overlayVB, 0, MaxNumOverlayVerts * sizeof( OverlayVert ), _overlayVerts );

	setVertexBuffer( 0, _overlayVB, 0, sizeof( OverlayVert ) );
	setIndexBuffer( _quadIdxBuf, IDXFMT_16 );
	ASSERT( QuadIndexBufCount >= MaxNumOverlayVerts * 6 );

	float aspect = (float)_vpWidth / (float)_vpHeight;
	setupViewMatrices( Matrix4f(), Matrix4f::OrthoMat( 0, aspect, 1, 0, -1, 1 ) );
	
	MaterialResource *curMatRes = 0x0;
	
	for( size_t i = 0, s = _overlayBatches.size(); i < s; ++i )
	{
		OverlayBatch &ob = _overlayBatches[i];
		
		if( curMatRes != ob.materialRes )
		{
			if( !setMaterial( ob.materialRes, shaderContext ) ) continue;
			setVertexLayout( _vlOverlay );
			curMatRes = ob.materialRes;
		}
		
		if( _curShader->uni_olayColor >= 0 )
			glUniform4fv( _curShader->uni_olayColor, 1, ob.colRGBA );
		
		// Draw batch
		drawIndexed( PRIM_TRILIST, ob.firstVert * 6/4, ob.vertCount * 6/4, ob.firstVert, ob.vertCount );
	}
}


// =================================================================================================
// Pipeline Functions
// =================================================================================================

void Renderer::bindPipeBuffer( uint32 rbObj, const string &sampler, uint32 bufIndex )
{
	if( rbObj == 0 )
	{
		// Clear buffer bindings
		_pipeSamplerBindings.resize( 0 );
	}
	else
	{
		// Check if binding is already existing
		for( size_t i = 0, s = _pipeSamplerBindings.size(); i < s; ++i )
		{
			if( strcmp( _pipeSamplerBindings[i].sampler, sampler.c_str() ) == 0 )
			{
				_pipeSamplerBindings[i].rbObj = rbObj;
				_pipeSamplerBindings[i].bufIndex = bufIndex;
				return;
			}
		}
		
		// Add binding
		_pipeSamplerBindings.push_back( PipeSamplerBinding() );
		size_t len = std::min( sampler.length(), (size_t)63 );
		strncpy_s( _pipeSamplerBindings.back().sampler, 63, sampler.c_str(), len );
		_pipeSamplerBindings.back().sampler[len] = '\0';
		_pipeSamplerBindings.back().rbObj = rbObj;
		_pipeSamplerBindings.back().bufIndex = bufIndex;
	}
}


void Renderer::clear( bool depth, bool buf0, bool buf1, bool buf2, bool buf3,
                      float r, float g, float b, float a )
{
	int mask = 0;
	uint32 prevBuffers[4] = { 0 };

	glDisable( GL_BLEND );	// Clearing floating point buffers causes problems when blending is enabled on Radeon 9600
	glDepthMask( GL_TRUE );
	glClearColor( r, g, b, a );

	if( _curRendBuf != 0x0 )
	{
		// Store state of glDrawBuffers
		for( uint32 i = 0; i < 4; ++i ) glGetIntegerv( GL_DRAW_BUFFER0 + i, (int *)&prevBuffers[i] );
		
		RDIRenderBuffer &rb = _rendBufs.getRef( _curRendBuf );
		uint32 buffers[4], cnt = 0;

		if( depth && rb.depthTex != 0 ) mask |= GL_DEPTH_BUFFER_BIT;
		
		if( buf0 && rb.colTexs[0] != 0 ) buffers[cnt++] = GL_COLOR_ATTACHMENT0_EXT;
		if( buf1 && rb.colTexs[1] != 0 ) buffers[cnt++] = GL_COLOR_ATTACHMENT1_EXT;
		if( buf2 && rb.colTexs[2] != 0 ) buffers[cnt++] = GL_COLOR_ATTACHMENT2_EXT;
		if( buf3 && rb.colTexs[3] != 0 ) buffers[cnt++] = GL_COLOR_ATTACHMENT3_EXT;

		if( cnt > 0 )
		{	
			mask |= GL_COLOR_BUFFER_BIT;
			glDrawBuffers( cnt, buffers );
		}
	}
	else
	{
		if( depth ) mask |= GL_DEPTH_BUFFER_BIT;
		if( buf0 ) mask |= GL_COLOR_BUFFER_BIT;
		glScissor( _vpX, _vpY, _vpWidth, _vpHeight );
		glEnable( GL_SCISSOR_TEST );
	}
	
	if( mask != 0 ) glClear( mask );
	glDisable( GL_SCISSOR_TEST );
	
	// Restore state of glDrawBuffers
	if( _curRendBuf != 0x0 )
		glDrawBuffers( 4, prevBuffers );
}


void Renderer::drawFSQuad( Resource *matRes, const string &shaderContext )
{
	if( matRes == 0x0 || matRes->getType() != ResourceTypes::Material ) return;

	setupViewMatrices( _curCamera->getViewMat(), Matrix4f::OrthoMat( 0, 1, 0, 1, -1, 1 ) );
	
	if( !setMaterial( (MaterialResource *)matRes, shaderContext ) ) return;

	setVertexBuffer( 0, _vbFSPoly, 0, 12 );
	setIndexBuffer( 0, IDXFMT_16 );
	setVertexLayout( _vlPosOnly );

	draw( PRIM_TRILIST, 0, 3 );
}


void Renderer::drawGeometry( const string &shaderContext, const string &theClass,
                             RenderingOrder::List order, int occSet )
{
	Modules::sceneMan().updateQueues( _curCamera->getFrustum(), 0x0, order, false, true );
	
	setupViewMatrices( _curCamera->getViewMat(), _curCamera->getProjMat() );
	drawRenderables( shaderContext, theClass, false, &_curCamera->getFrustum(), 0x0, order, occSet );
}


void Renderer::drawLightGeometry( const string shaderContext, const string &theClass,
                                  bool noShadows, RenderingOrder::List order, int occSet )
{
	string context = shaderContext;
	
	Modules::sceneMan().updateQueues( _curCamera->getFrustum(), 0x0, RenderingOrder::None, true, false );
	
	for( size_t i = 0, s = Modules::sceneMan().getLightQueue().size(); i < s; ++i )
	{
		_curLight = (LightNode *)Modules::sceneMan().getLightQueue()[i];

		// Check if light is not visible
		if( _curCamera->getFrustum().cullFrustum( _curLight->getFrustum() ) ) continue;

		// Check if light is occluded
		if( occSet >= 0 )
		{
			if( occSet > (int)_curLight->_occQueries.size() - 1 )
			{
				_curLight->_occQueries.resize( occSet + 1, 0 );
				_curLight->_lastVisited.resize( occSet + 1, 0 );
			}
			if( _curLight->_occQueries[occSet] == 0 )
			{
				_curLight->_occQueries[occSet] = Modules::renderer().createOcclusionQuery();
				_curLight->_lastVisited[occSet] = 0;
			}
			else
			{
				if( _curLight->_lastVisited[occSet] != Modules::renderer().getFrameID() )
				{
					_curLight->_lastVisited[occSet] = Modules::renderer().getFrameID();
				
					Vec3f bbMin, bbMax;
					_curLight->getFrustum().calcAABB( bbMin, bbMax );
					
					// Check that viewer is outside light bounds
					if( nearestDistToAABB( _curCamera->getFrustum().getOrigin(), bbMin, bbMax ) > 0 )
					{
						Modules::renderer().pushOccProxy( 1, bbMin, bbMax, _curLight->_occQueries[occSet] );

						// Check query result from previous frame
						if( Modules::renderer().getQueryResult( _curLight->_occQueries[occSet] ) < 1 )
						{
							continue;
						}
					}
				}
			}
		}
	
		// Calculate light screen space position
		float bbx, bby, bbw, bbh;
		_curLight->calcScreenSpaceAABB( _curCamera->getProjMat() * _curCamera->getViewMat(),
		                                bbx, bby, bbw, bbh );

		// Update shadow map
		if( !noShadows && _curLight->_shadowMapCount > 0 ) updateShadowMap();

		// Set scissor rectangle
		if( bbx != 0 || bby != 0 || bbw != 1 || bbh != 1 )
		{
			glScissor( ftoi_r( bbx * _fbWidth ), ftoi_r( bby * _fbHeight ),
			           ftoi_r( bbw * _fbWidth ), ftoi_r( bbh * _fbHeight ) );
			glEnable( GL_SCISSOR_TEST );
		}
		
		setupShadowMap( noShadows );

		if( shaderContext == "" ) context = _curLight->_lightingContext;
		
		// Render
		Modules::sceneMan().updateQueues( _curCamera->getFrustum(), &_curLight->getFrustum(),
		                                  order, false, true );
		setupViewMatrices( _curCamera->getViewMat(), _curCamera->getProjMat() );
		drawRenderables( context, theClass, false, &_curCamera->getFrustum(),
		                 &_curLight->getFrustum(), order, occSet );
		Modules().stats().incStat( EngineStats::LightPassCount, 1 );

		// Reset
		glDisable( GL_SCISSOR_TEST );
	}

	_curLight = 0x0;

	// Draw occlusion proxies
	if( occSet >= 0 )
	{
		setupViewMatrices( _curCamera->getViewMat(), _curCamera->getProjMat() );
		Modules::renderer().drawOccProxies( 1 );
	}
}


void Renderer::drawLightShapes( const string shaderContext, bool noShadows, int occSet )
{
	MaterialResource *curMatRes = 0x0;
	string context = shaderContext;
	
	Modules::sceneMan().updateQueues( _curCamera->getFrustum(), 0x0, RenderingOrder::None, true, false );
	
	GPUTimer *timer = Modules::stats().getGPUTimer( EngineStats::DefLightsGPUTime );
	if( Modules::config().gatherTimeStats ) timer->beginQuery( _frameID );
	
	for( size_t i = 0, s = Modules::sceneMan().getLightQueue().size(); i < s; ++i )
	{
		_curLight = (LightNode *)Modules::sceneMan().getLightQueue()[i];
		
		// Check if light is not visible
		if( _curCamera->getFrustum().cullFrustum( _curLight->getFrustum() ) ) continue;
		
		// Check if light is occluded
		if( occSet >= 0 )
		{
			if( occSet > (int)_curLight->_occQueries.size() - 1 )
			{
				_curLight->_occQueries.resize( occSet + 1, 0 );
				_curLight->_lastVisited.resize( occSet + 1, 0 );
			}
			if( _curLight->_occQueries[occSet] == 0 )
			{
				_curLight->_occQueries[occSet] = Modules::renderer().createOcclusionQuery();
				_curLight->_lastVisited[occSet] = 0;
			}
			else
			{
				if( _curLight->_lastVisited[occSet] != Modules::renderer().getFrameID() )
				{
					_curLight->_lastVisited[occSet] = Modules::renderer().getFrameID();
				
					Vec3f bbMin, bbMax;
					_curLight->getFrustum().calcAABB( bbMin, bbMax );
					
					// Check that viewer is outside light bounds
					if( nearestDistToAABB( _curCamera->getFrustum().getOrigin(), bbMin, bbMax ) > 0 )
					{
						Modules::renderer().pushOccProxy( 1, bbMin, bbMax, _curLight->_occQueries[occSet] );

						// Check query result from previous frame
						if( Modules::renderer().getQueryResult( _curLight->_occQueries[occSet] ) < 1 )
						{
							continue;
						}
					}
				}
			}
		}
		
		// Update shadow map
		if( !noShadows && _curLight->_shadowMapCount > 0 )
		{	
			timer->endQuery();
			updateShadowMap();
			setupShadowMap( false );
			curMatRes = 0x0;
			if( Modules::config().gatherTimeStats ) timer->beginQuery( _frameID );
		}
		else
		{
			setupShadowMap( true );
		}

		if( shaderContext == "" ) context = _curLight->_lightingContext;

		setupViewMatrices( _curCamera->getViewMat(), _curCamera->getProjMat() );

		if( curMatRes != _curLight->_materialRes )
		{
			if( !setMaterial( _curLight->_materialRes, context ) ) continue;
			curMatRes = _curLight->_materialRes;
		}
		else
		{
			commitGeneralUniforms();
		}

		glCullFace( GL_FRONT );
		glDisable( GL_DEPTH_TEST );

		if( _curLight->_fov < 180 )
		{
			float r = _curLight->_radius * tanf( degToRad( _curLight->_fov / 2 ) );
			drawCone( _curLight->_radius, r, _curLight->_absTrans );
		}
		else
		{
			drawSphere( _curLight->_absPos, _curLight->_radius );
		}

		Modules().stats().incStat( EngineStats::LightPassCount, 1 );

		// Reset
		glEnable( GL_DEPTH_TEST );
		glCullFace( GL_BACK );
	}

	_curLight = 0x0;

	timer->endQuery();

	// Draw occlusion proxies
	if( occSet >= 0 )
	{
		setupViewMatrices( _curCamera->getViewMat(), _curCamera->getProjMat() );
		Modules::renderer().drawOccProxies( 1 );
	}
}


// =================================================================================================
// Scene Node Rendering Functions
// =================================================================================================

void Renderer::drawRenderables( const string &shaderContext, const string &theClass, bool debugView,
                                const Frustum *frust1, const Frustum *frust2, RenderingOrder::List order,
                                int occSet )
{
	ASSERT( _curCamera != 0x0 );
	
	if( Modules::config().wireframeMode && !Modules::config().debugViewMode )
	{
		glDisable( GL_CULL_FACE );
		glPolygonMode( GL_FRONT_AND_BACK, GL_LINE );
	}
	else
	{
		glEnable( GL_CULL_FACE );
	}
	
	map< int, NodeRegEntry >::const_iterator itr = Modules::sceneMan()._registry.begin();
	while( itr != Modules::sceneMan()._registry.end() )
	{
		if( itr->second.renderFunc != 0x0 )
			(*itr->second.renderFunc)( shaderContext, theClass, debugView, frust1, frust2, order, occSet );

		++itr;
	}

	// Reset states
	if( Modules::config().wireframeMode && !Modules::config().debugViewMode )
	{
		glPolygonMode( GL_FRONT_AND_BACK, GL_FILL );
	}
}


void Renderer::drawMeshes( const string &shaderContext, const string &theClass, bool debugView,
                           const Frustum *frust1, const Frustum *frust2, RenderingOrder::List order,
                           int occSet )
{
	if( frust1 == 0x0 ) return;
	
	GeometryResource *curGeoRes = 0x0;
	MaterialResource *curMatRes = 0x0;

	// Loop over mesh queue
	for( size_t i = 0, si = Modules::sceneMan().getRenderableQueue().size(); i < si; ++i )
	{
		if( Modules::sceneMan().getRenderableQueue()[i].type != SceneNodeTypes::Mesh ) continue;
		
		MeshNode *meshNode = (MeshNode *)Modules::sceneMan().getRenderableQueue()[i].node;
		ModelNode *modelNode = meshNode->getParentModel();
		
		// Check that mesh is valid
		if( modelNode->getGeometryResource() == 0x0 )
			continue;
		if( meshNode->getBatchStart() + meshNode->getBatchCount() > modelNode->getGeometryResource()->_indexCount )
			continue;
		
		bool modelChanged = true;
		uint32 queryObj = 0;

		// Occlusion culling
		if( occSet >= 0 )
		{
			if( occSet > (int)meshNode->_occQueries.size() - 1 )
			{
				meshNode->_occQueries.resize( occSet + 1, 0 );
				meshNode->_lastVisited.resize( occSet + 1, 0 );
			}
			if( meshNode->_occQueries[occSet] == 0 )
			{
				queryObj = Modules::renderer().createOcclusionQuery();
				meshNode->_occQueries[occSet] = queryObj;
				meshNode->_lastVisited[occSet] = 0;
			}
			else
			{
				if( meshNode->_lastVisited[occSet] != Modules::renderer().getFrameID() )
				{
					meshNode->_lastVisited[occSet] = Modules::renderer().getFrameID();
				
					// Check query result (viewer must be outside of bounding box)
					if( nearestDistToAABB( frust1->getOrigin(), meshNode->getBBox().min,
					                       meshNode->getBBox().max ) > 0 &&
						Modules::renderer().getQueryResult( meshNode->_occQueries[occSet] ) < 1 )
					{
						Modules::renderer().pushOccProxy( 0, meshNode->getBBox().min, meshNode->getBBox().max,
						                                  meshNode->_occQueries[occSet] );
						continue;
					}
					else
						queryObj = meshNode->_occQueries[occSet];
				}
			}
		}
		
		// Bind geometry
		if( curGeoRes != modelNode->getGeometryResource() )
		{
			curGeoRes = modelNode->getGeometryResource();
			ASSERT( curGeoRes != 0x0 );
		
			// Indices
			Modules::renderer().setIndexBuffer( curGeoRes->getIndexBuf(),
			                                    curGeoRes->_16BitIndices ? IDXFMT_16 : IDXFMT_32 );

			// Vertices
			uint32 posVBuf = curGeoRes->getPosVBuf();
			uint32 tanVBuf = curGeoRes->getTanVBuf();
			uint32 staticVBuf = curGeoRes->getStaticVBuf();
			
			Modules::renderer().setVertexBuffer( 0, posVBuf, 0, sizeof( Vec3f ) );
			Modules::renderer().setVertexBuffer( 1, tanVBuf, 0, sizeof( VertexDataTan ) );
			Modules::renderer().setVertexBuffer( 2, tanVBuf, sizeof( Vec3f ), sizeof( VertexDataTan ) );
			Modules::renderer().setVertexBuffer( 3, staticVBuf, 0, sizeof( VertexDataStatic ) );
		}

		Modules::renderer().setVertexLayout( Modules::renderer()._vlModel );
		
		ShaderCombination *prevShader = Modules::renderer().getCurShader();
		
		if( !debugView )
		{
			if( !meshNode->getMaterialRes()->isOfClass( theClass ) ) continue;
			
			// Set material
			if( curMatRes != meshNode->getMaterialRes() )
			{
				if( !Modules::renderer().setMaterial( meshNode->getMaterialRes(), shaderContext ) )
				{	
					curMatRes = 0x0;
					continue;
				}
				curMatRes = meshNode->getMaterialRes();
			}
		}
		else
		{
			Modules::renderer().setShaderComb( &Modules::renderer()._defColorShader );
			Modules::renderer().commitGeneralUniforms();
			
			uint32 curLod = meshNode->getLodLevel();
			Vec4f color;
			if( curLod == 0 ) color = Vec4f( 0.5f, 0.75f, 1, 1 );
			else if( curLod == 1 ) color = Vec4f( 0.25f, 0.75, 0.75f, 1 );
			else if( curLod == 2 ) color = Vec4f( 0.25f, 0.75, 0.5f, 1 );
			else if( curLod == 3 ) color = Vec4f( 0.5f, 0.5f, 0.25f, 1 );
			else color = Vec4f( 0.75f, 0.5, 0.25f, 1 );

			// Darken models with skeleton so that bones are more noticable
			if( !modelNode->_jointList.empty() ) color = color * 0.3f;

			glUniform4fv( Modules::renderer()._defColShader_color, 1, &color.x );
		}

		ShaderCombination *curShader = Modules::renderer().getCurShader();
		
		if( modelChanged || curShader != prevShader )
		{
			// Skeleton
			if( curShader->uni_skinMatRows >= 0 && !modelNode->_skinMatRows.empty() )
			{
				// Note:	OpenGL 2.1 supports mat4x3 but it is internally realized as mat4 on most
				//			hardware so it would require 4 instead of 3 uniform slots per joint
				
				glUniform4fv( curShader->uni_skinMatRows, (int)modelNode->_skinMatRows.size(),
				              (float *)&modelNode->_skinMatRows[0] );
			}

			modelChanged = false;
		}

		// World transformation
		if( curShader->uni_worldMat >= 0 )
		{
			glUniformMatrix4fv( curShader->uni_worldMat, 1, false, &meshNode->_absTrans.x[0] );
		}
		if( curShader->uni_worldNormalMat >= 0 )
		{
			// TODO: Optimize this
			Matrix4f normalMat4 = meshNode->_absTrans.inverted().transposed();
			float normalMat[9] = { normalMat4.x[0], normalMat4.x[1], normalMat4.x[2],
			                       normalMat4.x[4], normalMat4.x[5], normalMat4.x[6],
			                       normalMat4.x[8], normalMat4.x[9], normalMat4.x[10] };
			glUniformMatrix3fv( curShader->uni_worldNormalMat, 1, false, normalMat );
		}
		if( curShader->uni_nodeId >= 0 )
		{
			glUniform1f( curShader->uni_nodeId, (float)meshNode->getHandle() );
		}

		if( queryObj )
			Modules::renderer().beginQuery( queryObj );
		
		// Render
		Modules::renderer().drawIndexed( PRIM_TRILIST, meshNode->getBatchStart(), meshNode->getBatchCount(),
		                                 meshNode->getVertRStart(), meshNode->getVertREnd() );
		Modules::stats().incStat( EngineStats::BatchCount, 1 );
		Modules::stats().incStat( EngineStats::TriCount, meshNode->getBatchCount() / 3.0f );

		if( queryObj )
			Modules::renderer().endQuery( queryObj );
	}

	// Draw occlusion proxies
	if( occSet >= 0 )
		Modules::renderer().drawOccProxies( 0 );

	Modules::renderer().setVertexLayout( 0 );
}


void Renderer::drawParticles( const string &shaderContext, const string &theClass, bool debugView,
                              const Frustum *frust1, const Frustum * /*frust2*/, RenderingOrder::List /*order*/,
                              int occSet )
{
	if( frust1 == 0x0 || Modules::renderer().getCurCamera() == 0x0 ) return;
	if( debugView ) return;  // Don't render particles in debug view

	MaterialResource *curMatRes = 0x0;
	
	// Calculate right and up vectors for camera alignment
	Matrix4f mat = Modules::renderer().getCurCamera()->getViewMat();
	Vec3f right = Vec3f( mat.x[0], mat.x[4], mat.x[8] );
	Vec3f up = Vec3f (mat.x[1], mat.x[5], mat.x[9] );
	float cornerCoords[12] = { -right.x - up.x, -right.y - up.y, -right.z - up.z,
	                            right.x - up.x,  right.y - up.y,  right.z - up.z,
                                right.x + up.x,  right.y + up.y,  right.z + up.z,
							   -right.x + up.x, -right.y + up.y, -right.z + up.z };

	GPUTimer *timer = Modules::stats().getGPUTimer( EngineStats::ParticleGPUTime );
	if( Modules::config().gatherTimeStats ) timer->beginQuery( Modules::renderer().getFrameID() );

	// Bind particle geometry
	Modules::renderer().setVertexBuffer( 0, Modules::renderer().getParticleVBO(), 0, sizeof( ParticleVert ) );
	Modules::renderer().setIndexBuffer( Modules::renderer().getQuadIdxBuf(), IDXFMT_16 );
	ASSERT( QuadIndexBufCount >= ParticlesPerBatch * 6 );

	// Loop through emitter queue
	for( uint32 i = 0; i < Modules::sceneMan().getRenderableQueue().size(); ++i )
	{
		if( Modules::sceneMan().getRenderableQueue()[i].type != SceneNodeTypes::Emitter ) continue; 
		
		EmitterNode *emitter = (EmitterNode *)Modules::sceneMan().getRenderableQueue()[i].node;
		
		if( emitter->_particleCount == 0 ) continue;
		if( !emitter->_materialRes->isOfClass( theClass ) ) continue;
		
		// Occlusion culling
		uint32 queryObj = 0;
		if( occSet >= 0 )
		{
			if( occSet > (int)emitter->_occQueries.size() - 1 )
			{
				emitter->_occQueries.resize( occSet + 1, 0 );
				emitter->_lastVisited.resize( occSet + 1, 0 );
			}
			if( emitter->_occQueries[occSet] == 0 )
			{
				queryObj = Modules::renderer().createOcclusionQuery();
				emitter->_occQueries[occSet] = queryObj;
				emitter->_lastVisited[occSet] = 0;
			}
			else
			{
				if( emitter->_lastVisited[occSet] != Modules::renderer().getFrameID() )
				{
					emitter->_lastVisited[occSet] = Modules::renderer().getFrameID();
				
					// Check query result (viewer must be outside of bounding box)
					if( nearestDistToAABB( frust1->getOrigin(), emitter->getBBox().min,
					                       emitter->getBBox().max ) > 0 &&
						Modules::renderer().getQueryResult( emitter->_occQueries[occSet] ) < 1 )
					{
						Modules::renderer().pushOccProxy( 0, emitter->getBBox().min, emitter->getBBox().max,
						                                  emitter->_occQueries[occSet] );
						continue;
					}
					else
						queryObj = emitter->_occQueries[occSet];
				}
			}
		}
		
		// Set material
		if( curMatRes != emitter->_materialRes )
		{
			if( !Modules::renderer().setMaterial( emitter->_materialRes, shaderContext ) ) continue;
			curMatRes = emitter->_materialRes;
		}

		// Set vertex layout
		Modules::renderer().setVertexLayout( Modules::renderer()._vlParticle );
		
		if( queryObj )
			Modules::renderer().beginQuery( queryObj );
		
		// Shader uniforms
		ShaderCombination *curShader = Modules::renderer().getCurShader();
		if( curShader->uni_parCorners >= 0 ) glUniform3fv( curShader->uni_parCorners, 4, (float *)cornerCoords );
		if( curShader->uni_nodeId >= 0 ) glUniform1f( curShader->uni_nodeId, (float)emitter->getHandle() );

		// Divide particles in batches and render them
		for( uint32 j = 0; j < emitter->_particleCount / ParticlesPerBatch; ++j )
		{
			// Check if batch needs to be rendered
			bool allDead = true;
			for( uint32 k = 0; k < ParticlesPerBatch; ++k )
			{
				if( emitter->_particles[j*ParticlesPerBatch + k].life > 0 )
				{
					allDead = false;
					break;
				}
			}
			if( allDead ) continue;

			// Render batch
			if( curShader->uni_parPosArray >= 0 )
				glUniform3fv( curShader->uni_parPosArray, ParticlesPerBatch, (float *)emitter->_parPositions + j*ParticlesPerBatch*3 );
			if( curShader->uni_parSizeAndRotArray >= 0 )
				glUniform2fv( curShader->uni_parSizeAndRotArray, ParticlesPerBatch, (float *)emitter->_parSizesANDRotations + j*ParticlesPerBatch*2 );
			if( curShader->uni_parColorArray >= 0 )
				glUniform4fv( curShader->uni_parColorArray, ParticlesPerBatch, (float *)emitter->_parColors + j*ParticlesPerBatch*4 );

			Modules::renderer().drawIndexed( PRIM_TRILIST, 0, ParticlesPerBatch * 6, 0, ParticlesPerBatch * 4 );
			Modules::stats().incStat( EngineStats::BatchCount, 1 );
			Modules::stats().incStat( EngineStats::TriCount, ParticlesPerBatch * 2.0f );
		}

		uint32 count = emitter->_particleCount % ParticlesPerBatch;
		if( count > 0 )
		{
			uint32 offset = (emitter->_particleCount / ParticlesPerBatch) * ParticlesPerBatch;
			
			// Check if batch needs to be rendered
			bool allDead = true;
			for( uint32 k = 0; k < count; ++k )
			{
				if( emitter->_particles[offset + k].life > 0 )
				{
					allDead = false;
					break;
				}
			}
			
			if( !allDead )
			{
				// Render batch
				if( curShader->uni_parPosArray >= 0 )
					glUniform3fv( curShader->uni_parPosArray, count, (float *)emitter->_parPositions + offset*3 );
				if( curShader->uni_parSizeAndRotArray >= 0 )
					glUniform2fv( curShader->uni_parSizeAndRotArray, count, (float *)emitter->_parSizesANDRotations + offset*2 );
				if( curShader->uni_parColorArray >= 0 )
					glUniform4fv( curShader->uni_parColorArray, count, (float *)emitter->_parColors + offset*4 );
				
				Modules::renderer().drawIndexed( PRIM_TRILIST, 0, count * 6, 0, count * 4 );
				Modules::stats().incStat( EngineStats::BatchCount, 1 );
				Modules::stats().incStat( EngineStats::TriCount, count * 2.0f );
			}
		}

		if( queryObj )
			Modules::renderer().endQuery( queryObj );
	}

	timer->endQuery();

	// Draw occlusion proxies
	if( occSet >= 0 )
		Modules::renderer().drawOccProxies( 0 );
	
	Modules::renderer().setVertexLayout( 0 );
}


// =================================================================================================
// Main Rendering Functions
// =================================================================================================

void Renderer::render( CameraNode *camNode )
{
	_curCamera = camNode;
	if( _curCamera == 0x0 ) return;
	
	if( Modules::config().debugViewMode || _curCamera->_pipelineRes == 0x0 )
	{
		renderDebugView();
		finishRendering();
		return;
	}
	
	// Initialize
	_outputBufferIndex = _curCamera->_outputBufferIndex;
	if( _curCamera->_outputTex != 0x0 )
		setRenderBuffer( _curCamera->_outputTex->getRBObject() );
	else 
		setRenderBuffer( 0 );

	// Process pipeline commands
	for( uint32 i = 0; i < _curCamera->_pipelineRes->_stages.size(); ++i )
	{
		PipelineStage &stage = _curCamera->_pipelineRes->_stages[i];
		if( !stage.enabled ) continue;
		_curStageMatLink = stage.matLink;
		
		for( uint32 j = 0; j < stage.commands.size(); ++j )
		{
			PipelineCommand &pc = stage.commands[j];
			RenderTarget *rt;

			switch( pc.command )
			{
			case PipelineCommands::SwitchTarget:
				// Unbind all textures
				bindPipeBuffer( 0x0, "", 0 );
				
				// Bind new render target
				rt = (RenderTarget *)pc.refParams[0];
				_curRenderTarget = rt;

				if( rt != 0x0 )
					setRenderBuffer( rt->rendBuf );
				else
					setRenderBuffer( _curCamera->_outputTex != 0x0 ?
					                 _curCamera->_outputTex->getRBObject() : 0 );
				break;

			case PipelineCommands::BindBuffer:
				rt = (RenderTarget *)pc.refParams[0];
			
				bindPipeBuffer( rt->rendBuf, ((PCStringParam *)pc.valParams[0])->get(),
				            (uint32)((PCIntParam *)pc.valParams[1])->get() );
				break;

			case PipelineCommands::UnbindBuffers:
				bindPipeBuffer( 0x0, "", 0 );
				break;

			case PipelineCommands::ClearTarget:
				clear( ((PCBoolParam *)pc.valParams[0])->get(), ((PCBoolParam *)pc.valParams[1])->get(),
				       ((PCBoolParam *)pc.valParams[2])->get(), ((PCBoolParam *)pc.valParams[3])->get(),
				       ((PCBoolParam *)pc.valParams[4])->get(), ((PCFloatParam *)pc.valParams[5])->get(),
				       ((PCFloatParam *)pc.valParams[6])->get(), ((PCFloatParam *)pc.valParams[7])->get(),
				       ((PCFloatParam *)pc.valParams[8])->get() );
				break;

			case PipelineCommands::DrawGeometry:
				drawGeometry( ((PCStringParam *)pc.valParams[0])->get(), ((PCStringParam *)pc.valParams[1])->get(),
					(RenderingOrder::List)((PCIntParam *)pc.valParams[2])->get(), _curCamera->_occSet );
				break;

			case PipelineCommands::DrawOverlays:
				drawOverlays( ((PCStringParam *)pc.valParams[0])->get() );
				break;

			case PipelineCommands::DrawQuad:
				drawFSQuad( pc.resParams[0], ((PCStringParam *)pc.valParams[0])->get() );
			break;

			case PipelineCommands::DoForwardLightLoop:
				drawLightGeometry( ((PCStringParam *)pc.valParams[0])->get(), ((PCStringParam *)pc.valParams[1])->get(),
					((PCBoolParam *)pc.valParams[2])->get(), (RenderingOrder::List)((PCIntParam *)pc.valParams[3])->get(),
					_curCamera->_occSet );
				break;

			case PipelineCommands::DoDeferredLightLoop:
				drawLightShapes( ((PCStringParam *)pc.valParams[0])->get(), ((PCBoolParam *)pc.valParams[1])->get(),
					_curCamera->_occSet );
				break;

			case PipelineCommands::SetUniform:
				if( pc.resParams[0] != 0x0 && pc.resParams[0]->getType() == ResourceTypes::Material )
				{
					((MaterialResource *)pc.resParams[0].getPtr())->setUniform(
						((PCStringParam *)pc.valParams[0])->get(), ((PCFloatParam *)pc.valParams[1])->get(),
						((PCFloatParam *)pc.valParams[2])->get(), ((PCFloatParam *)pc.valParams[3])->get(),
						((PCFloatParam *)pc.valParams[4])->get() );
				}
				break;
			}
		}
	}
	
	finishRendering();
}


void Renderer::finalizeFrame()
{
	++_frameID;
	
	// Reset frame timer
	Timer *timer = Modules::stats().getTimer( EngineStats::FrameTime );
	ASSERT( timer != 0x0 );
	Modules::stats().getStat( EngineStats::FrameTime, true );  // Reset
	Modules::stats().incStat( EngineStats::FrameTime, timer->getElapsedTimeMS() );
	timer->reset();
}


void Renderer::renderDebugView()
{
	setRenderBuffer( 0 );
	setMaterial( 0x0, "" );
	glPolygonMode( GL_FRONT_AND_BACK, GL_LINE );

	glClearColor( 0, 0, 0, 1 );
	glClear( GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT );

	Modules::sceneMan().updateQueues( _curCamera->getFrustum(), 0x0, RenderingOrder::None, true, true );

	// Draw renderable nodes as wireframe
	setupViewMatrices( _curCamera->getViewMat(), _curCamera->getProjMat() );
	drawRenderables( "", "", true, &_curCamera->getFrustum(), 0x0, RenderingOrder::None, -1 );

	// Draw bounding boxes
	glDisable( GL_CULL_FACE );
	setMaterial( 0x0, "" );
	setShaderComb( &_defColorShader );
	commitGeneralUniforms();
	glUniformMatrix4fv( _defColorShader.uni_worldMat, 1, false, &Matrix4f().x[0] );
	glUniform4f( Modules::renderer()._defColShader_color, 0.4f, 0.4f, 0.4f, 1 );
	for( uint32 i = 0, s = (uint32)Modules::sceneMan().getRenderableQueue().size(); i < s; ++i )
	{
		SceneNode *sn = Modules::sceneMan().getRenderableQueue()[i].node;
		
		drawAABB( sn->_bBox.min, sn->_bBox.max );
	}
	glEnable( GL_CULL_FACE );

	/*// Draw skeleton
	glUniformMatrix4fv( _defColorShader.uni_worldMat, 1, false, &Matrix4f().x[0] );
	glUniform4f( Modules::renderer()._defColShader_color, 1.0f, 0, 0, 1 );
	glLineWidth( 2.0f );
	glPointSize( 5.0f );
	for( uint32 i = 0, si = (uint32)Modules::sceneMan().getRenderableQueue().size(); i < si; ++i )
	{
		SceneNode *sn = Modules::sceneMan().getRenderableQueue()[i].node;
		
		if( sn->getType() == SceneNodeTypes::Model )
		{
			ModelNode *model = (ModelNode *)sn;

			for( uint32 j = 0, sj = (uint32)model->_jointList.size(); j < sj; ++j )
			{
				if( model->_jointList[j]->_parent->getType() != SceneNodeTypes::Model )
				{
					Vec3f pos1 = model->_jointList[j]->_absTrans * Vec3f( 0, 0, 0 );
					Vec3f pos2 = model->_jointList[j]->_parent->_absTrans * Vec3f( 0, 0, 0 );

					glBegin( GL_LINES );
					glVertex3fv( (float *)&pos1.x );
					glVertex3fv( (float *)&pos2.x );
					glEnd();

					glBegin( GL_POINTS );
					glVertex3fv( (float *)&pos1.x );
					glEnd();
				}
			}
		}
	}
	glLineWidth( 1.0f );
	glPointSize( 1.0f );*/

	// Draw light volumes
	glPolygonMode( GL_FRONT_AND_BACK, GL_FILL );
	glEnable( GL_BLEND );
	glBlendFunc( GL_SRC_ALPHA, GL_ONE );
	glCullFace( GL_FRONT );
	glUniform4f( Modules::renderer()._defColShader_color, 1, 1, 0, 0.25f );
	for( size_t i = 0, s = Modules::sceneMan().getLightQueue().size(); i < s; ++i )
	{
		LightNode *lightNode = (LightNode *)Modules::sceneMan().getLightQueue()[i];
		
		if( lightNode->_fov < 180 )
		{
			float r = lightNode->_radius * tanf( degToRad( lightNode->_fov / 2 ) );
			drawCone( lightNode->_radius, r, lightNode->_absTrans );
		}
		else
		{
			drawSphere( lightNode->_absPos, lightNode->_radius );
		}
	}
	glCullFace( GL_BACK );
	glDisable( GL_BLEND );
}


void Renderer::finishRendering()
{
	setRenderBuffer( 0 );
	setMaterial( 0x0, "" );
	resetStates();
	glBindBuffer( GL_ARRAY_BUFFER, 0 );
	
	//ASSERT( glGetError() == GL_NO_ERROR );
}

}  // namespace
