// *************************************************************************************************
//
// Horde3D
//   Next-Generation Graphics Engine
// --------------------------------------
// Copyright (C) 2006-2009 Nicolas Schulz
//
// This software is distributed under the terms of the Eclipse Public License v1.0.
// A copy of the license may be obtained at: http://www.eclipse.org/legal/epl-v10.html
//
// *************************************************************************************************

#include "egRenderer.h"
#include "utOpenGL.h"
#include "egModules.h"
#include "egGeometry.h"
#include "egModel.h"
#include "egParticle.h"
#include "egMaterial.h"
#include "egTexture.h"
#include "egShader.h"
#include "egLight.h"

#include "utDebug.h"

using namespace std;

const char *vsDefColor =
	"uniform mat4 worldMat;\n"
	"void main() {\n"
	"	gl_Position = gl_ModelViewProjectionMatrix * worldMat * gl_Vertex;\n"
	"}\n";

const char *fsDefColor =
	"uniform vec4 color;\n"
	"void main() {\n"
	"	gl_FragColor = color;\n"
	"}\n";

const char *vsOccBox =
	"void main() {\n"
	"	gl_Position = ftransform();\n"
	"}\n";

const char *fsOccBox =
	"void main() {\n"
	"	gl_FragColor = vec4( 1, 0, 0, 0 );\n"
	"}\n";


Renderer::Renderer() : RendererBase()
{
	_scratchBuf = 0x0;
	_scratchBufSize = 0;
	_frameID = 0;
	_defShadowMap = 0;
	_particleVBO = 0;
	_curCamera = 0x0;
	_curLight = 0x0;
	_curMatRes = 0x0;
	_curShader = 0x0;
	_curRenderTarget = 0x0;
	_curUpdateStamp = 1;
}


Renderer::~Renderer()
{
	releaseShadowRB();
	releaseTexture( _defShadowMap );
	releaseBuffer( _particleVBO );
	releaseVertexLayout( _vlModel );
	releaseVertexLayout( _vlParticle );
	Modules::renderer().releaseShaderComb( _defColorShader );
	Modules::renderer().releaseShaderComb( _occShader );

	delete[] _scratchBuf;
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

	return _scratchBuf + (uintptr_t)_scratchBuf % 16;  // 16 byte aligned
}


bool Renderer::init()
{
	// Init backend
	if( !RendererBase::init() ) return false;

	// Check capabilities
	if( !_caps[RenderCaps::Tex_Float] )
		Modules::log().writeWarning( "Renderer: No floating point texture support available" );
	if( !_caps[RenderCaps::Tex_NPOT] )
		Modules::log().writeWarning( "Renderer: No non-Power-of-two texture support available" );
	if( !_caps[RenderCaps::RT_Multisampling] )
		Modules::log().writeWarning( "Renderer: No multisampling for render targets available" );
	
	// Create vertex layouts
	_vlModel = createVertexLayout( 8 );
	setVertexLayoutElem( _vlModel, 0, "gl_Vertex", 0, 3, 0 );
	setVertexLayoutElem( _vlModel, 1, "tangent", 1, 3, 0 );
	setVertexLayoutElem( _vlModel, 2, "bitangent", 2, 3, 0 );
	setVertexLayoutElem( _vlModel, 3, "normal", 3, 3, 0 );
	setVertexLayoutElem( _vlModel, 4, "joints", 4, 4, 8 );
	setVertexLayoutElem( _vlModel, 5, "weights", 4, 4, 24 );
	setVertexLayoutElem( _vlModel, 6, "texCoords0", 4, 2, 0 );
	setVertexLayoutElem( _vlModel, 7, "texCoords1", 4, 2, 40 );

	_vlParticle = createVertexLayout( 4 );
	setVertexLayoutElem( _vlParticle, 0, "gl_Vertex", 0, 3, 0 );
	setVertexLayoutElem( _vlParticle, 1, "parIdx", 0, 1, 24 );
	setVertexLayoutElem( _vlParticle, 2, "parCornerIdx", 0, 1, 20 );
	setVertexLayoutElem( _vlParticle, 3, "texCoords0", 0, 2, 12 );

	
	// Upload default shaders
	createShaderComb( vsDefColor, fsDefColor, _defColorShader );
	createShaderComb( vsOccBox, fsOccBox, _occShader );

	// Cache common uniforms
	_defColShader_color = glGetUniformLocation( _defColorShader.shaderObj, "color" );
	
	// Create shadow map render target
	if( !createShadowRB( Modules::config().shadowMapSize, Modules::config().shadowMapSize ) )
	{
		Modules::log().writeError( "Failed to create shadow map" );
		return false;
	}

	// Create default shadow map
	float shadowTex[] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	                      1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	                      1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	                      1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
	_defShadowMap = createTexture( TextureTypes::Tex2D, 8, 8, TextureFormats::DEPTH, false, false, false );
	uploadTextureData( _defShadowMap, 8, 8, TextureFormats::DEPTH, 0, 0, shadowTex );

	// Create particle geometry array
	ParticleVert v0( 0, 0, 0 );
	ParticleVert v1( 1, 0, 1 );
	ParticleVert v2( 1, 1, 2 );
	ParticleVert v3( 0, 1, 3 );
	
	ParticleVert parVerts[ParticlesPerBatch * 4];
	for( uint32 i = 0; i < ParticlesPerBatch; ++i )
	{
		parVerts[i * 4 + 0] = v0; parVerts[i * 4 + 0].index = (float)i;
		parVerts[i * 4 + 1] = v1; parVerts[i * 4 + 1].index = (float)i;
		parVerts[i * 4 + 2] = v2; parVerts[i * 4 + 2].index = (float)i;
		parVerts[i * 4 + 3] = v3; parVerts[i * 4 + 3].index = (float)i;

	}
	_particleVBO = Modules::renderer().createVertexBuffer(
		ParticlesPerBatch * 4 * sizeof( ParticleVert ), (float *)parVerts );

	_overlays.reserve( 100 );

	// Init scratch buffer with some default size
	useScratchBuf( 4 * 1024*1024 );

	// Start frame timer
	Timer *timer = Modules::stats().getTimer( EngineStats::FrameTime );
	ASSERT( timer != 0x0 );
	timer->setEnabled( true );
	
	return true;
}


void Renderer::resize( int x, int y, int width, int height )
{
	RendererBase::resize( x, y, width, height );
}


// =================================================================================================
// Misc Helper Functions
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


void Renderer::setupViewMatrices( CameraNode *cam )
{
	glMatrixMode( GL_PROJECTION );
	glLoadMatrixf( cam->getProjMat().x );
	glMatrixMode( GL_MODELVIEW );
	glLoadMatrixf( cam->getViewMat().x );
}


// =================================================================================================
// Material System
// =================================================================================================

bool Renderer::createShaderComb( const char *vertexShader, const char *fragmentShader, ShaderCombination &sc )
{
	// Create shader program
	uint32 shdObj = RendererBase::createShader( vertexShader, fragmentShader );
	if( shdObj == 0 ) return false;
	
	sc.shaderObj = shdObj;
	bindShader( shdObj );
	
	// Set standard uniforms
	int loc = glGetUniformLocation( shdObj, "shadowMap" );
	if( loc >= 0 ) glUniform1i( loc, 12 );

	// Get uniform locations
	sc.uni_frameBufSize = glGetUniformLocation( shdObj, "frameBufSize" );
	sc.uni_worldMat = glGetUniformLocation( shdObj, "worldMat" );
	sc.uni_worldNormalMat = glGetUniformLocation( shdObj, "worldNormalMat" );
	sc.uni_viewer = glGetUniformLocation( shdObj, "viewer" );
	sc.uni_lightPos = glGetUniformLocation( shdObj, "lightPos" );
	sc.uni_lightDir = glGetUniformLocation( shdObj, "lightDir" );
	sc.uni_lightColor = glGetUniformLocation( shdObj, "lightColor" );
	sc.uni_lightCosCutoff = glGetUniformLocation( shdObj, "lightCosCutoff" );
	sc.uni_shadowSplitDists = glGetUniformLocation( shdObj, "shadowSplitDists" );
	sc.uni_shadowMats = glGetUniformLocation( shdObj, "shadowMats" );
	sc.uni_shadowMapSize = glGetUniformLocation( shdObj, "shadowMapSize" );
	sc.uni_shadowBias = glGetUniformLocation( shdObj, "shadowBias" );
	sc.uni_skinMatRows = glGetUniformLocation( shdObj, "skinMatRows[0]" );
	sc.uni_parCorners = glGetUniformLocation( shdObj, "parCorners" );
	sc.uni_parPosArray = glGetUniformLocation( shdObj, "parPosArray" );
	sc.uni_parSizeAndRotArray = glGetUniformLocation( shdObj, "parSizeAndRotArray" );
	sc.uni_parColorArray = glGetUniformLocation( shdObj, "parColorArray" );
	sc.uni_olayColor = glGetUniformLocation( shdObj, "olayColor" );

	return true;
}


void Renderer::releaseShaderComb( ShaderCombination &sc )
{
	RendererBase::releaseShader( sc.shaderObj );
}


void Renderer::setShaderComb( ShaderCombination *sc )
{
	if( sc == 0x0 ) bindShader( 0 );
	else bindShader( sc->shaderObj );

	_curShader = sc;
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

		// Configure depth mask
		if( context->writeDepth ) glDepthMask( GL_TRUE );
		else glDepthMask( GL_FALSE );

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
		switch( context->depthTest )
		{
		case TestModes::LessEqual:
			glEnable( GL_DEPTH_TEST );
			glDepthFunc( GL_LEQUAL );
			break;
		case TestModes::Equal:
			glEnable( GL_DEPTH_TEST );
			glDepthFunc( GL_EQUAL );
			break;
		case TestModes::Always:
			glDisable( GL_DEPTH_TEST );
			break;
		case TestModes::Less:
			glEnable( GL_DEPTH_TEST );
			glDepthFunc( GL_LESS );
			break;
		case TestModes::Greater:
			glEnable( GL_DEPTH_TEST );
			glDepthFunc( GL_GREATER );
			break;
		case TestModes::GreaterEqual:
			glEnable( GL_DEPTH_TEST );
			glDepthFunc( GL_GEQUAL );
			break;
		}

		// Configure alpha-to-coverage
		if( context->alphaToCoverage && Modules::config().sampleCount > 0 )
			glEnable( GL_SAMPLE_ALPHA_TO_COVERAGE );
		else
			glDisable( GL_SAMPLE_ALPHA_TO_COVERAGE );
	}
	
	// Setup standard shader uniforms
	// Note: Make sure that all functions which modify one of the following params increase stamp
	if( _curShader->lastUpdateStamp != _curUpdateStamp )
	{
		if( _curShader->uni_frameBufSize >= 0 )
				glUniform2f( _curShader->uni_frameBufSize, (float)_fbWidth, (float)_fbHeight );
		
		if( _curCamera != 0x0 )	 // Viewer params
		{
			if( _curShader->uni_viewer >= 0 )
				glUniform3fv( _curShader->uni_viewer, 1, &_curCamera->_absTrans.x[12] );
		}
		if( _curLight != 0x0 )	// Light params
		{
			if( _curShader->uni_lightPos >= 0 )
				glUniform4f( _curShader->uni_lightPos, _curLight->_absPos.x, _curLight->_absPos.y,
							 _curLight->_absPos.z, _curLight->_radius );
			
			if( _curShader->uni_lightDir >= 0 )
				glUniform3fv( _curShader->uni_lightDir, 1, &_curLight->_spotDir.x );
			
			if( _curShader->uni_lightColor >= 0 )
				glUniform3fv( _curShader->uni_lightColor, 1, &_curLight->_diffuseCol.x );
			
			if( _curShader->uni_lightCosCutoff >= 0 )
				glUniform1f( _curShader->uni_lightCosCutoff, cosf( degToRad( _curLight->_fov/ 2 ) ) );
			
			if( _curShader->uni_shadowSplitDists >= 0 )
				glUniform4fv( _curShader->uni_shadowSplitDists, 1, &_splitPlanes[1] );

			if( _curShader->uni_shadowMats >= 0 )
				glUniformMatrix4fv( _curShader->uni_shadowMats, 4, false, &_lightMats[0].x[0] );
			
			if( _curShader->uni_shadowMapSize >= 0 )
				glUniform1f( _curShader->uni_shadowMapSize,
							 (float)Modules::config().shadowMapSize );
			if( _curShader->uni_shadowBias >= 0 )
				glUniform1f( _curShader->uni_shadowBias, _curLight->_shadowMapBias );
		}

		_curShader->lastUpdateStamp = _curUpdateStamp;
	}

	// Setup texture samplers
	for( size_t i = 0, s = shaderRes->_samplers.size(); i < s; ++i )
	{
		if( _curShader->customSamplers[i] < 0 ) continue;
		
		glActiveTexture( GL_TEXTURE0 + shaderRes->_samplers[i].texUnit );
		
		ShaderSampler &sampler = shaderRes->_samplers[i];
		int target = 0;
		bool mips = false;

		// Find sampler in material
		for( size_t j = 0, s = materialRes->_samplers.size(); j < s; ++j )
		{
			MatSampler &matSampler = materialRes->_samplers[j];
			
			if( matSampler.name == sampler.id )
			{
				if( matSampler.texRes->getTexType() == TextureTypes::Tex2D )
				{
					target = GL_TEXTURE_2D;
					mips = matSampler.texRes->hasMipMaps();
					
					if( matSampler.texRes->getRBObject() == 0 )
					{
						bindTexture( shaderRes->_samplers[i].texUnit, matSampler.texRes->getTexObject() );
					}
					else if( matSampler.texRes->getRBObject() != _curRendBuf )
					{
						glActiveTexture( GL_TEXTURE0 + shaderRes->_samplers[i].texUnit );
						glBindTexture( GL_TEXTURE_2D, getRenderBufferTex( matSampler.texRes->getRBObject(), 0 ) );
					}
					else  // Trying to bind active render buffer as texture
					{
						bindTexture( shaderRes->_samplers[i].texUnit, TextureResource::defTex2DObject );
					}
				}
				else if( matSampler.texRes->getTexType() == TextureTypes::TexCube )
				{
					target = GL_TEXTURE_CUBE_MAP;
					mips = matSampler.texRes->hasMipMaps();
					bindTexture( shaderRes->_samplers[i].texUnit, matSampler.texRes->getTexObject() );
				}

				break;
			}
		}

		// Find sampler in pipeline
		for( size_t j = 0, s = _pipeSamplerBindings.size(); j < s; ++j )
		{
			if( strcmp( _pipeSamplerBindings[j].sampler, sampler.id.c_str() ) == 0 )
			{
				target = GL_TEXTURE_2D;
				mips = false;
				glBindTexture( GL_TEXTURE_CUBE_MAP, 0 );

				glBindTexture( GL_TEXTURE_2D, getRenderBufferTex(
					_pipeSamplerBindings[j].rbObj, _pipeSamplerBindings[j].bufIndex ) );
				glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_COMPARE_MODE, GL_NONE );

				break;
			}
		}

		if( target == 0 ) continue;  // Texture for sampler not found (maybe in linked material)

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
	glActiveTexture( GL_TEXTURE0 );

	// Set custom uniforms
	for( size_t i = 0, s = shaderRes->_uniforms.size(); i < s; ++i )
	{
		if( _curShader->customUniforms[i] < 0 ) continue;
		
		bool found = false;

		// Find uniform in material
		for( size_t j = 0, s = materialRes->_uniforms.size(); j < s; ++j )
		{
			MatUniform &matUniform = materialRes->_uniforms[j];
			
			if( matUniform.name == shaderRes->_uniforms[i].id )
			{
				glUniform4f( _curShader->customUniforms[i], matUniform.values[0], matUniform.values[1],
				             matUniform.values[2], matUniform.values[3] );
				found = true;
				break;
			}
		}

		// Use default values if not found
		if( !found && firstRec )
		{
			ShaderUniform &uniform = shaderRes->_uniforms[i];
			glUniform4f( _curShader->customUniforms[i], uniform.defValues[0], uniform.defValues[1],
				         uniform.defValues[2], uniform.defValues[3] );
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
		_curMatRes = 0x0;
		setShaderComb( 0x0 );
		glDisable( GL_BLEND );
		glDisable( GL_SAMPLE_ALPHA_TO_COVERAGE );
		glEnable( GL_DEPTH_TEST );
		glDepthFunc( GL_LEQUAL );
		glDepthMask( 1 );
		return false;
	}
	else if( _curShader != 0x0 && materialRes == _curMatRes ) return true;
		
	_curMatRes = materialRes;
	
	bool result = setMaterialRec( materialRes, shaderContext, 0x0 );

	if( !result )
	{
		_curMatRes = 0x0;
		_curShader = 0x0;
	}

	return result;
}


// =================================================================================================
// Shadowing
// =================================================================================================

bool Renderer::createShadowRB( uint32 width, uint32 height )
{
	_shadowRB = createRenderBuffer( width, height, RenderBufferFormats::RGBA8, true, 0, 0 );
	
	return _shadowRB != 0;
}


void Renderer::releaseShadowRB()
{
	releaseRenderBuffer( _shadowRB );
}


void Renderer::setupShadowMap( bool noShadows )
{
	// Bind shadow map
	glActiveTexture( GL_TEXTURE12 );

	if( !noShadows && _curLight->_shadowMapCount > 0 )
		glBindTexture( GL_TEXTURE_2D, getRenderBufferTex( _shadowRB, 32 ) );
	else
		bindTexture( 12, _defShadowMap );

	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MAX_ANISOTROPY_EXT, 1 );
	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR );
	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR );
	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_BORDER );
	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_BORDER );
	float borderColor[] = {1.0f, 1.0f, 1.0f, 1.0f};
	glTexParameterfv(GL_TEXTURE_2D, GL_TEXTURE_BORDER_COLOR, borderColor);
	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_COMPARE_MODE, GL_COMPARE_R_TO_TEXTURE );
	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_COMPARE_FUNC, GL_LEQUAL );
	
	glActiveTexture( GL_TEXTURE0 );
}


Matrix4f Renderer::calcLightMat( const Frustum &frustum )
{
	// Find bounding box of visible geometry
	Modules::sceneMan().updateQueues( frustum, 0x0, RenderingOrder::None, false, true );
	BoundingBox bBox;
	for( size_t j = 0, s = Modules::sceneMan().getRenderableQueue().size(); j < s; ++j )
	{
		bBox.makeUnion( Modules::sceneMan().getRenderableQueue()[j].node->getBBox() ); 
	}
	
	// Calculate light matrix
	float ymax = _curCamera->_frustNear * tan( degToRad( _curLight->_fov / 2 ) );
	float xmax = ymax * 1.0f;  // ymax * aspect
	Matrix4f projMat = Matrix4f::PerspectiveMat( -xmax, xmax, -ymax, ymax,
	                                             _curCamera->_frustNear, _curLight->_radius );
	Matrix4f lightMat = projMat * _curLight->getViewMat();

	// Get frustum and bounding box extents in post-projective space
	float frustMinX =  Math::MaxFloat, bbMinX =  Math::MaxFloat;
    float frustMinY =  Math::MaxFloat, bbMinY =  Math::MaxFloat;
	float frustMinZ =  Math::MaxFloat, bbMinZ =  Math::MaxFloat;
	float frustMaxX = -Math::MaxFloat, bbMaxX = -Math::MaxFloat;
    float frustMaxY = -Math::MaxFloat, bbMaxY = -Math::MaxFloat;
	float frustMaxZ = -Math::MaxFloat, bbMaxZ = -Math::MaxFloat;
	
	for( uint32 i = 0; i < 8; ++i )
	{
		// Frustum
		Vec4f v1 = lightMat * Vec4f( frustum.getCorner( i ) );
		v1.w = fabs( v1.w );	// Use absolute value to reduce problems with back projection when v1.w < 0
		v1.x /= v1.w; v1.y /= v1.w; v1.z /= v1.w;

		if( v1.x < frustMinX ) frustMinX = v1.x;
		if( v1.y < frustMinY ) frustMinY = v1.y;
		if( v1.z < frustMinZ ) frustMinZ = v1.z;
		if( v1.x > frustMaxX ) frustMaxX = v1.x;
		if( v1.y > frustMaxY ) frustMaxY = v1.y;
		if( v1.z > frustMaxZ ) frustMaxZ = v1.z;

		// Bounding box
		v1 = lightMat * Vec4f( bBox.getCorner( i ) );
		v1.w = fabs( v1.w );
		v1.x /= v1.w; v1.y /= v1.w; v1.z /= v1.w;

		if( v1.x < bbMinX ) bbMinX = v1.x;
		if( v1.y < bbMinY ) bbMinY = v1.y;
		if( v1.z < bbMinZ ) bbMinZ = v1.z;
		if( v1.x > bbMaxX ) bbMaxX = v1.x;
		if( v1.y > bbMaxY ) bbMaxY = v1.y;
		if( v1.z > bbMaxZ ) bbMaxZ = v1.z;
	}

	// Combine frustum and bounding box
	float minX = maxf( frustMinX, bbMinX );
	float minY = maxf( frustMinY, bbMinY );
	float minZ = minf( frustMinZ, bbMinZ );
	float maxX = minf( frustMaxX, bbMaxX );
	float maxY = minf( frustMaxY, bbMaxY );
	float maxZ = minf( frustMaxZ, bbMaxZ );
	
	// Clamp the min and max values to post projection range [-1, 1]
	minX = clamp( minX, -1, 1 );
	minY = clamp( minY, -1, 1 );
	minZ = clamp( minZ, -1, 1 );
	maxX = clamp( maxX, -1, 1 );
	maxY = clamp( maxY, -1, 1 );
	maxZ = clamp( maxZ, -1, 1 );

	// Zoom in current split and create appropriate matrix
	Matrix4f cropView;
	float scaleX = 2.0f / (maxX - minX);
	float scaleY = 2.0f / (maxY - minY);
	float offsetX = -0.5f * (maxX + minX) * scaleX;
	float offsetY = -0.5f * (maxY + minY) * scaleY;
	float scaleZ = 1.0f / (maxZ - minZ);
	float offsetZ = -minZ * scaleZ;

	cropView.x[0] = scaleX;
	cropView.x[5] = scaleY;
	cropView.x[10] = scaleZ;
	cropView.x[12] = offsetX;
	cropView.x[13] = offsetY;
	cropView.x[14] = offsetZ;

	return cropView * projMat;
}


void Renderer::updateShadowMap()
{
	if( _curLight == 0x0 || _curCamera == 0x0 ) return;
	
	uint32 _prevRendBuf = _curRendBuf;
	setRenderBuffer( _shadowRB );

	glDepthMask( GL_TRUE );
	glClearDepth( 1.0f );
    glClear( GL_DEPTH_BUFFER_BIT );

	// ********************************************************************************************
	// Cascaded Shadow Maps
	// ********************************************************************************************

	Frustum frustum;
	
	// Find bounding box of lit geometry
	Modules::sceneMan().updateQueues( _curLight->getFrustum(), 0x0, RenderingOrder::None, false, true );
	BoundingBox bBox;
	for( size_t j = 0, s = Modules::sceneMan().getRenderableQueue().size(); j < s; ++j )
	{
		bBox.makeUnion( Modules::sceneMan().getRenderableQueue()[j].node->getBBox() ); 
	}
	// Adjust camera planes
	float minDist = Math::MaxFloat, maxDist = 0.0f;
	for( uint32 i = 0; i < 8; ++i )
	{
		float dist = -(_curCamera->getViewMat() * bBox.getCorner( i )).z;
		if( dist < minDist ) minDist = dist;
		if( dist > maxDist ) maxDist = dist;
	}

	// Don't adjust near plane; this means less precision if scene is far away from viewer
	// but that shouldn't be too noticeable and brings better performance since the nearer
	// split volumes are empty
	minDist = _curCamera->_frustNear;
	
	// Calculate split distances using PSSM scheme
	const float nearDist = maxf( minDist, _curCamera->_frustNear );
	const float farDist = maxf( maxDist, minDist + 1 );
	const uint32 numMaps = _curLight->_shadowMapCount;
	const float t = _curLight->_shadowSplitLambda;
	
	_splitPlanes[0] = nearDist;
	_splitPlanes[numMaps] = farDist;

	for( uint32 i = 1; i < numMaps; i++ )
	{
		float f = i / (float)numMaps;
		float log = nearDist * pow( farDist / nearDist, f );
		float uni = nearDist + (farDist - nearDist) * f;
		
		_splitPlanes[i] = t * log + (1 - t) * uni;
	}
	
	// Prepare shadow map rendering
	glEnable( GL_DEPTH_TEST );
	//glCullFace( GL_FRONT );	// Front face culling reduces artefacts but produces more "peter-panning"
	glMatrixMode( GL_MODELVIEW );
	glLoadMatrixf( _curLight->getViewMat().x );
	
	// Build split frustums and render shadow maps
	for( uint32 i = 0; i < numMaps; ++i )
	{
		// Build split frustum
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
		
		// Build light projection matrix
		_lightMats[i] = calcLightMat( frustum );
		glMatrixMode( GL_PROJECTION );
		glLoadMatrixf( &_lightMats[i].x[0] );
		
		// Frustum Culling
		frustum.buildViewFrustum( _curLight->getViewMat(), _lightMats[i] );
		Modules::sceneMan().updateQueues( frustum, 0x0, RenderingOrder::None, false, true );
		
		_lightMats[i] = _lightMats[i] * _curLight->getViewMat();

		if( numMaps > 1 )
		{
			// Select quadrant of shadow map atlas
			const int sh = Modules::config().shadowMapSize / 2;
			if( i == 0 ) glViewport( 0, 0, sh, sh );
			else if( i == 1 ) glViewport( sh, 0, sh, sh );
			else if( i == 2 ) glViewport( sh, sh, sh, sh );
			else if( i == 3 ) glViewport( 0, sh, sh, sh );
		}
		else
		{
			const int sh = Modules::config().shadowMapSize;
			glViewport( 0, 0, sh, sh );
		}
	
		// Render
		drawRenderables( _curLight->_shadowContext, "", false, &_curLight->getFrustum(), 0x0,
		                 RenderingOrder::None, -1 );
	}

	// Setup light matrices for rendering:
	if( numMaps > 1 )
	{
		// Map from [-1,1] to [0,1] and select appropriate quadrant of shadow map
		_lightMats[0].scale( 0.25f, 0.25f, 0 );
		_lightMats[0].translate( 0.25f, 0.25f, 0 );
		_lightMats[1].scale( 0.25f, 0.25f, 0 );
		_lightMats[1].translate( 0.75f, 0.25f, 0 );
		_lightMats[2].scale( 0.25f, 0.25f, 0 );
		_lightMats[2].translate( 0.75f, 0.75f, 0 );
		_lightMats[3].scale( 0.25f, 0.25f, 0 );
		_lightMats[3].translate( 0.25f, 0.75f, 0 );
	}
	else
	{
		_lightMats[0].scale( 0.5f, 0.5f, 0 );
		_lightMats[0].translate( 0.5f, 0.5f, 0 );
	}

	// ********************************************************************************************

	glMatrixMode( GL_MODELVIEW );
	glCullFace( GL_BACK );
		
	setRenderBuffer( _prevRendBuf );
}


// =================================================================================================
// Rendering Helper Functions
// =================================================================================================

void Renderer::drawAABB( const Vec3f &bbMin, const Vec3f &bbMax )
{
	static const unsigned int indices[24] = {
		0, 1, 2, 3,
		1, 5, 6, 2,
		5, 4, 7, 6,
		4, 0, 3, 7,
		3, 2, 6, 7,
		4, 5, 1, 0
	};
	
	Vec3f corners[8] = {
		Vec3f( bbMin.x, bbMin.y, bbMax.z ),
		Vec3f( bbMax.x, bbMin.y, bbMax.z ),
		Vec3f( bbMax.x, bbMax.y, bbMax.z ),
		Vec3f( bbMin.x, bbMax.y, bbMax.z ),
		Vec3f( bbMin.x, bbMin.y, bbMin.z ),
		Vec3f( bbMax.x, bbMin.y, bbMin.z ),
		Vec3f( bbMax.x, bbMax.y, bbMin.z ),
		Vec3f( bbMin.x, bbMax.y, bbMin.z )
	};

	glBegin( GL_QUADS );
	for( unsigned int i = 0; i < 24; ++i )
	{
		glVertex3fv( &corners[indices[i]].x );
	}
	glEnd();
}


// =================================================================================================
// Overlays
// =================================================================================================

void Renderer::showOverlay( const Overlay &overlay )
{
	_overlays.push_back( overlay );
}


void Renderer::clearOverlays()
{
	_overlays.resize( 0 );
}


void Renderer::drawOverlays( const string &shaderContext )
{
	setMaterial( 0x0, "" );
	++_curUpdateStamp;
	
	glMatrixMode( GL_PROJECTION );
	glLoadMatrixf( Matrix4f::OrthoMat( 0, 1, 1, 0, -1, 1 ).x );
	glMatrixMode( GL_MODELVIEW );
	glLoadMatrixf( Matrix4f().x );
	
	for( int i = 0; i < 8; ++i )
	{
		for( uint32 j = 0; j < _overlays.size(); ++j )
		{
			if( _overlays[j].layer != i ) continue;

			Overlay &overlay = _overlays[j];

			if( !setMaterial( overlay.materialRes, shaderContext ) ) continue;
			if( _curShader->uni_olayColor >= 0 )
				glUniform4fv( _curShader->uni_olayColor, 1, &overlay.colR );
			
			glBegin( GL_QUADS );
			glTexCoord2fv( &overlay.u_tl ); glVertex3f( overlay.x_tl, overlay.y_tl, 1 );
			glTexCoord2fv( &overlay.u_bl ); glVertex3f( overlay.x_bl, overlay.y_bl, 1 );
			glTexCoord2fv( &overlay.u_br ); glVertex3f( overlay.x_br, overlay.y_br, 1 );
			glTexCoord2fv( &overlay.u_tr ); glVertex3f( overlay.x_tr, overlay.y_tr, 1 );
			glEnd();
		}
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

		// Make sure all render buffers are unbound
		for( uint32 i = 0; i < 12; ++i )
		{
			glActiveTexture( GL_TEXTURE0 + i );
			glBindTexture( GL_TEXTURE_2D, 0 );
		}
		glActiveTexture( GL_TEXTURE0 );
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
	uint32 prevBuffers[4];

	// Store state of glDrawBuffers
	for( uint32 i = 0; i < 4; ++i ) glGetIntegerv( GL_DRAW_BUFFER0 + i, (int *)&prevBuffers[i] );
	
	glDisable( GL_BLEND );	// Clearing floating point buffers causes problems when blending is enabled on Radeon 9600
	glDepthMask( GL_TRUE );
	glClearColor( r, g, b, a );

	if( _curRendBuf != 0x0 )
	{
		RBRenderBuffer &rb = _rendBufs.getRef( _curRendBuf );
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
	uint32 cnt = 4;
	glDrawBuffers( cnt, prevBuffers );
}


void Renderer::drawFSQuad( Resource *matRes, const string &shaderContext )
{
	if( matRes == 0x0 || matRes->getType() != ResourceTypes::Material ) return;
	
	// Reset current material
	setMaterial( 0x0, "" );
	++_curUpdateStamp;

	if( !setMaterial( (MaterialResource *)matRes, shaderContext ) ) return;
	
	glMatrixMode( GL_PROJECTION );
	glLoadMatrixf( Matrix4f::OrthoMat( 0, 1, 0, 1, -1, 1 ).x );
	glMatrixMode( GL_MODELVIEW );
	if( _curCamera != 0x0 )
		glLoadMatrixf( _curCamera->getViewMat().x );
	else
		glLoadMatrixf( Matrix4f().x );
	
	glBegin(GL_QUADS);
	glTexCoord2f( 0, 0 ); glVertex3f( 0, 0, 1 );
	glTexCoord2f( 1, 0 ); glVertex3f( 1, 0, 1 );
	glTexCoord2f( 1, 1 ); glVertex3f( 1, 1, 1 );
	glTexCoord2f( 0, 1 ); glVertex3f( 0, 1, 1 );
	glEnd();
}


void Renderer::drawGeometry( const string &shaderContext, const string &theClass,
                             RenderingOrder::List order, int occSet )
{
	if( _curCamera == 0x0 ) return;
	
	++_curUpdateStamp;
	
	Modules::sceneMan().updateQueues( _curCamera->getFrustum(), 0x0, order, false, true );
	
	setupViewMatrices( _curCamera );
	
	drawRenderables( shaderContext, theClass, false, &_curCamera->getFrustum(), 0x0, order, occSet );
}


void Renderer::drawLightGeometry( const string shaderContext, const string &theClass,
                                  bool noShadows, RenderingOrder::List order, int occSet )
{
	if( _curCamera == 0x0 ) return;
	
	string context = shaderContext;
	
	Modules::sceneMan().updateQueues( _curCamera->getFrustum(), 0x0, RenderingOrder::None, true, false );
	
	for( size_t i = 0, s = Modules::sceneMan().getLightQueue().size(); i < s; ++i )
	{
		++_curUpdateStamp;
		_curLight = (LightNode *)Modules::sceneMan().getLightQueue()[i];

		// Check if light is not visible
		if( _curCamera->getFrustum().cullFrustum( _curLight->getFrustum() ) ) continue;

		setupViewMatrices( _curCamera );

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
				
					Vec3f mins, maxs;
					_curLight->getFrustum().calcAABB( mins, maxs );
					
					// Check that viewer is outside light bounds
					if( nearestDistToAABB( _curCamera->getFrustum().getOrigin(), mins, maxs ) )
					{
						// Draw occlusion box
						Modules::renderer().setMaterial( 0x0, "" );
						glColorMask( 0, 0, 0, 0 );
						glDepthMask( 0 );
						Modules::renderer().beginQuery( _curLight->_occQueries[occSet] );
						Modules::renderer().setShaderComb( &Modules::renderer()._occShader );
						Modules::renderer().drawAABB( mins, maxs );
						Modules::renderer().endQuery( _curLight->_occQueries[occSet] );
						glDepthMask( 1 );
						glColorMask( 1, 1, 1, 1 );
						Modules::renderer().setMaterial( 0x0, "" );

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
		                                  RenderingOrder::None, false, true );
		setupViewMatrices( _curCamera );
		drawRenderables( context, theClass, false, &_curCamera->getFrustum(),
		                 &_curLight->getFrustum(), order, occSet );
		Modules().stats().incStat( EngineStats::LightPassCount, 1 );

		// Reset
		glDisable( GL_SCISSOR_TEST );
		glActiveTexture( GL_TEXTURE12 );
		glBindTexture( GL_TEXTURE_2D, 0 );
		glActiveTexture( GL_TEXTURE0 );
	}

	_curLight = 0x0;
}


void Renderer::drawLightShapes( const string shaderContext, bool noShadows, int occSet )
{
	if( _curCamera == 0x0 ) return;
	
	string context = shaderContext;
	
	Modules::sceneMan().updateQueues( _curCamera->getFrustum(), 0x0, RenderingOrder::None, true, false );
	
	for( size_t i = 0, s = Modules::sceneMan().getLightQueue().size(); i < s; ++i )
	{
		++_curUpdateStamp;
		_curLight = (LightNode *)Modules::sceneMan().getLightQueue()[i];
		
		// Check if light is not visible
		if( _curCamera->getFrustum().cullFrustum( _curLight->getFrustum() ) ) continue;

		setupViewMatrices( _curCamera );
		
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
				
					Vec3f mins, maxs;
					_curLight->getFrustum().calcAABB( mins, maxs );
					
					// Check that viewer is outside light bounds
					if( nearestDistToAABB( _curCamera->getFrustum().getOrigin(), mins, maxs ) )
					{
						// Draw occlusion box
						Modules::renderer().setMaterial( 0x0, "" );
						glColorMask( 0, 0, 0, 0 );
						glDepthMask( 0 );
						Modules::renderer().beginQuery( _curLight->_occQueries[occSet] );
						Modules::renderer().setShaderComb( &Modules::renderer()._occShader );
						Modules::renderer().drawAABB( mins, maxs );
						Modules::renderer().endQuery( _curLight->_occQueries[occSet] );
						glDepthMask( 1 );
						glColorMask( 1, 1, 1, 1 );
						Modules::renderer().setMaterial( 0x0, "" );

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

		// Prepare postprocessing step (set the camera transformation in MV matrix)
		glMatrixMode( GL_PROJECTION );
		glLoadMatrixf( Matrix4f::OrthoMat( 0, 1, 0, 1, -1, 1 ).x );
		glMatrixMode( GL_MODELVIEW );
		glLoadMatrixf( _curCamera->getViewMat().x );
		
		setupShadowMap( noShadows );

		if( shaderContext == "" ) context = _curLight->_lightingContext;

		setMaterial( 0x0, "" );		// Reset material
		if( !setMaterial( _curLight->_materialRes, context ) ) continue;
		
		// Draw quad
		glBegin( GL_QUADS );
		glTexCoord2f( bbx, bby ); glVertex3f( bbx, bby, 1 );
		glTexCoord2f( bbx + bbw, bby ); glVertex3f( bbx + bbw, bby, 1 );
		glTexCoord2f( bbx + bbw, bby + bbh ); glVertex3f( bbx + bbw, bby + bbh, 1 );
		glTexCoord2f( bbx, bby + bbh ); glVertex3f( bbx, bby + bbh, 1 );
		glEnd();
		Modules().stats().incStat( EngineStats::LightPassCount, 1 );

		// Reset
		glActiveTexture( GL_TEXTURE12 );
		glBindTexture( GL_TEXTURE_2D, 0 );
		glActiveTexture( GL_TEXTURE0 );
	}

	_curLight = 0x0;
}


// =================================================================================================
// Scene Node Rendering Functions
// =================================================================================================

void Renderer::drawRenderables( const string &shaderContext, const string &theClass, bool debugView,
                                const Frustum *frust1, const Frustum *frust2, RenderingOrder::List order,
                                int occSet )
{
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


void Renderer::drawModels( const string &shaderContext, const string &theClass, bool debugView,
                           const Frustum *frust1, const Frustum *frust2, RenderingOrder::List order,
                           int occSet )
{
	if( frust1 == 0x0 ) return;

	Vec3f camPos( frust1->getOrigin() );
	if( Modules::renderer().getCurCamera() != 0x0 )
		camPos = Modules::renderer().getCurCamera()->getAbsPos();
	
	GeometryResource *curGeoRes = 0x0;

	Modules::renderer().setMaterial( 0x0, "" );

	// Loop over model queue
	for( size_t i = 0, s = Modules::sceneMan().getRenderableQueue().size(); i < s; ++i )
	{
		if( Modules::sceneMan().getRenderableQueue()[i].type != SceneNodeTypes::Model ) continue;
		
		ModelNode *modelNode = (ModelNode *)Modules::sceneMan().getRenderableQueue()[i].node;
		if( modelNode->getGeometryResource() == 0x0 ) continue;

		bool occQuery = false;
		bool modelChanged = true;

		// Occlusion culling
		if( occSet >= 0 )
		{
			if( occSet > (int)modelNode->_occQueries.size() - 1 )
			{
				modelNode->_occQueries.resize( occSet + 1, 0 );
				modelNode->_lastVisited.resize( occSet + 1, 0 );
			}
			if( modelNode->_occQueries[occSet] == 0 )
			{
				modelNode->_occQueries[occSet] = Modules::renderer().createOcclusionQuery();
				modelNode->_lastVisited[occSet] = 0;
				occQuery = true;
			}
			else
			{
				if( modelNode->_lastVisited[occSet] != Modules::renderer().getFrameID() )
				{
					modelNode->_lastVisited[occSet] = Modules::renderer().getFrameID();
				
					// Check query result (viewer must be outside of bounding box)
					if( nearestDistToAABB( frust1->getOrigin(), modelNode->getBBox().min,
					                       modelNode->getBBox().max ) != 0 &&
						Modules::renderer().getQueryResult( modelNode->_occQueries[occSet] ) < 1 )
					{
						// Draw occlusion box
						Modules::renderer().setMaterial( 0x0, "" );
						glColorMask( 0, 0, 0, 0 );
						glDepthMask( 0 );
						Modules::renderer().beginQuery( modelNode->_occQueries[occSet] );
						Modules::renderer().setShaderComb( &Modules::renderer()._occShader );
						Modules::renderer().drawAABB( modelNode->getBBox().min, modelNode->getBBox().max );
						Modules::renderer().endQuery( modelNode->_occQueries[occSet] );
						glDepthMask( 1 );
						glColorMask( 1, 1, 1, 1 );
						Modules::renderer().setMaterial( 0x0, "" );

						continue;
					}
					else
						occQuery = true;
				}
			}
		}
		
		// Bind geometry
		if( curGeoRes != modelNode->getGeometryResource() )
		{
			curGeoRes = modelNode->getGeometryResource();
			Modules::renderer().setMaterial( 0x0, "" );
		
			// Indices
			Modules::renderer().bindIndexBuffer( curGeoRes->getIndexBuf() );

			// Vertices
			uint32 posVBuf = curGeoRes->getPosVBuf();
			uint32 tanVBuf = curGeoRes->getTanVBuf();
			uint32 staticVBuf = curGeoRes->getStaticVBuf();
			uint32 size = curGeoRes->_vertCount * sizeof( Vec3f );
			
			Modules::renderer().bindVertexBuffer( 0, posVBuf, 0, sizeof( Vec3f ) );
			Modules::renderer().bindVertexBuffer( 1, tanVBuf, sizeof( Vec3f ) * 0, sizeof( Vec3f ) * 3 );
			Modules::renderer().bindVertexBuffer( 2, tanVBuf, sizeof( Vec3f ) * 1, sizeof( Vec3f ) * 3 );
			Modules::renderer().bindVertexBuffer( 3, tanVBuf, sizeof( Vec3f ) * 2, sizeof( Vec3f ) * 3 );
			Modules::renderer().bindVertexBuffer( 4, staticVBuf, 0, sizeof( VertexDataStatic ) );
		}
		
		// Sort meshes
		if( order == RenderingOrder::FrontToBack || order == RenderingOrder::BackToFront && frust1 != 0x0 )
		{
			for( size_t j = 0, s = modelNode->_meshList.size(); j < s; ++j )
			{
				MeshNode *meshNode = (MeshNode *)modelNode->_meshList[j];

				meshNode->tmpSortValue = nearestDistToAABB( frust1->getOrigin(),
					meshNode->_bBox.min, meshNode->_bBox.max );
			}
		}

		if( order == RenderingOrder::FrontToBack )
			std::sort( modelNode->_meshList.begin(), modelNode->_meshList.end(), nodeFrontToBackOrder );
		else if( order == RenderingOrder::BackToFront )
			std::sort( modelNode->_meshList.begin(), modelNode->_meshList.end(), nodeBackToFrontOrder );
		else if( order == RenderingOrder::StateChanges )
			// Sort meshes by material to minimize state changes
			std::sort( modelNode->_meshList.begin(), modelNode->_meshList.end(), meshMaterialOrder );
		
		// LOD
		uint32 curLod = modelNode->calcLodLevel( camPos );
		
		if( occQuery )
			Modules::renderer().beginQuery( modelNode->_occQueries[occSet] );
		
		for( size_t j = 0, s = modelNode->_meshList.size(); j < s; ++j )
		{
			MeshNode *meshNode = (MeshNode *)modelNode->_meshList[j];

			if( !meshNode->_active || meshNode->getLodLevel() != curLod ) continue;

			// Frustum culling for meshes
			if( (frust1 != 0x0 && frust1->cullBox( meshNode->_bBox )) ||
			    (frust2 != 0x0 && frust2->cullBox( meshNode->_bBox )) )
			{
				continue;
			}
			
			// Check that mesh is valid
			if( meshNode->getBatchStart() + meshNode->getBatchCount() > curGeoRes->_indexCount )
				continue;
			
			ShaderCombination *prevShader = Modules::renderer().getCurShader();
			
			if( !debugView )
			{
				if( !meshNode->getMaterialRes()->isOfClass( theClass ) ) continue;
				
				// Set material
				if( !Modules::renderer().setMaterial( meshNode->getMaterialRes(), shaderContext ) ) continue;
			}
			else
			{
				Modules::renderer().setShaderComb( &Modules::renderer()._defColorShader );
				
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

			// Apply vertex layout
			if( curShader != prevShader )
				Modules::renderer().applyVertexLayout( Modules::renderer()._vlModel );

			// Render
			glDrawRangeElements( GL_TRIANGLES, meshNode->getVertRStart(), meshNode->getVertREnd(),
			                     meshNode->getBatchCount(), 
			                     curGeoRes->_16BitIndices ? GL_UNSIGNED_SHORT : GL_UNSIGNED_INT,
			                     (char *)0 + meshNode->getBatchStart() *
			                     (curGeoRes->_16BitIndices ? sizeof( short ) : sizeof( int )) );
			Modules::stats().incStat( EngineStats::BatchCount, 1 );
			Modules::stats().incStat( EngineStats::TriCount, meshNode->getBatchCount() / 3.0f );
		}

		if( occQuery )
			Modules::renderer().endQuery( modelNode->_occQueries[occSet] );
	}

	Modules::renderer().applyVertexLayout( 0 );
}


void Renderer::drawParticles( const string &shaderContext, const string &theClass, bool debugView,
                              const Frustum *frust1, const Frustum * /*frust2*/, RenderingOrder::List /*order*/,
                              int occSet )
{
	if( frust1 == 0x0 || Modules::renderer().getCurCamera() == 0x0 ) return;
	if( debugView ) return;  // Don't render particles in debug view
	
	Modules::renderer().setMaterial( 0x0, "" );

	// Calculate right and up vectors for camera alignment
	Matrix4f mat = Modules::renderer().getCurCamera()->getViewMat();
	Vec3f right = Vec3f( mat.x[0], mat.x[4], mat.x[8] );
	Vec3f up = Vec3f (mat.x[1], mat.x[5], mat.x[9] );
	float cornerCoords[12] = { -right.x - up.x, -right.y - up.y, -right.z - up.z,
	                            right.x - up.x,  right.y - up.y,  right.z - up.z,
                                right.x + up.x,  right.y + up.y,  right.z + up.z,
							   -right.x + up.x, -right.y + up.y, -right.z + up.z };

	// Bind particle geometry
	Modules::renderer().bindVertexBuffer( 0, Modules::renderer().getParticleVBO(), 0, sizeof( ParticleVert ) );

	// Loop through emitter queue
	for( uint32 i = 0; i < Modules::sceneMan().getRenderableQueue().size(); ++i )
	{
		if( Modules::sceneMan().getRenderableQueue()[i].type != SceneNodeTypes::Emitter ) continue; 
		
		EmitterNode *emitter = (EmitterNode *)Modules::sceneMan().getRenderableQueue()[i].node;
		
		if( emitter->_particleCount == 0 ) continue;
		if( !emitter->_materialRes->isOfClass( theClass ) ) continue;
		
		// Occlusion culling
		bool occQuery = false;
		if( occSet >= 0 )
		{
			if( occSet > (int)emitter->_occQueries.size() - 1 )
			{
				emitter->_occQueries.resize( occSet + 1, 0 );
				emitter->_lastVisited.resize( occSet + 1, 0 );
			}
			if( emitter->_occQueries[occSet] == 0 )
			{
				emitter->_occQueries[occSet] = Modules::renderer().createOcclusionQuery();
				emitter->_lastVisited[occSet] = 0;
				occQuery = true;
			}
			else
			{
				if( emitter->_lastVisited[occSet] != Modules::renderer().getFrameID() )
				{
					emitter->_lastVisited[occSet] = Modules::renderer().getFrameID();
				
					// Check query result (viewer must be outside of bounding box)
					if( nearestDistToAABB( frust1->getOrigin(), emitter->getBBox().min,
					                       emitter->getBBox().max ) != 0 &&
						Modules::renderer().getQueryResult( emitter->_occQueries[occSet] ) < 1 )
					{
						// Draw occlusion box
						Modules::renderer().setMaterial( 0x0, "" );
						glColorMask( 0, 0, 0, 0 );
						glDepthMask( 0 );
						Modules::renderer().beginQuery( emitter->_occQueries[occSet] );
						Modules::renderer().setShaderComb( &Modules::renderer()._occShader );
						Modules::renderer().drawAABB( emitter->getBBox().min, emitter->getBBox().max );
						Modules::renderer().endQuery( emitter->_occQueries[occSet] );
						glDepthMask( 1 );
						glColorMask( 1, 1, 1, 1 );
						Modules::renderer().setMaterial( 0x0, "" );

						continue;
					}
					else
						occQuery = true;
				}
			}
		}
		
		// Set material
		if( !Modules::renderer().setMaterial( emitter->_materialRes, shaderContext ) ) continue;

		// Set vertex layout
		Modules::renderer().applyVertexLayout( Modules::renderer()._vlParticle );
		
		if( occQuery )
			Modules::renderer().beginQuery( emitter->_occQueries[occSet] );
		
		// Shader uniforms
		ShaderCombination *curShader = Modules::renderer().getCurShader();
		if( curShader->uni_parCorners >= 0 ) glUniform3fv( curShader->uni_parCorners, 4, (float *)cornerCoords );

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

			glDrawArrays( GL_QUADS, 0, ParticlesPerBatch * 4 );
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
			if( allDead ) continue;
			
			// Render batch
			if( curShader->uni_parPosArray >= 0 )
				glUniform3fv( curShader->uni_parPosArray, count, (float *)emitter->_parPositions + offset*3 );
			if( curShader->uni_parSizeAndRotArray >= 0 )
				glUniform2fv( curShader->uni_parSizeAndRotArray, count, (float *)emitter->_parSizesANDRotations + offset*2 );
			if( curShader->uni_parColorArray >= 0 )
				glUniform4fv( curShader->uni_parColorArray, count, (float *)emitter->_parColors + offset*4 );
			
			glDrawArrays( GL_QUADS, 0, count * 4 );
			Modules::stats().incStat( EngineStats::BatchCount, 1 );
			Modules::stats().incStat( EngineStats::TriCount, count * 2.0f );
		}

		if( occQuery )
			Modules::renderer().endQuery( emitter->_occQueries[occSet] );
	}
	
	Modules::renderer().applyVertexLayout( 0 );
}


// =================================================================================================
// Main Rendering Functions
// =================================================================================================

void Renderer::render( CameraNode *camNode )
{
	_curCamera = camNode;
	if( _curCamera == 0x0 ) return;

	++_frameID;
	
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
	// Reset frame timer
	Timer *timer = Modules::stats().getTimer( EngineStats::FrameTime );
	ASSERT( timer != 0x0 );
	Modules::stats().getStat( EngineStats::FrameTime, true );  // Reset
	Modules::stats().incStat( EngineStats::FrameTime, timer->getElapsedTimeMS() );
	timer->reset();
}


void Renderer::renderDebugView()
{
	if( _curCamera == 0x0 ) return;
	
	setRenderBuffer( 0 );
	setMaterial( 0x0, "" );
	glPolygonMode( GL_FRONT_AND_BACK, GL_LINE );

	glClearColor( 0, 0, 0, 1 );
	glClear( GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT );

	Modules::sceneMan().updateQueues( _curCamera->getFrustum(), 0x0, RenderingOrder::None, true, true );
	setupViewMatrices( _curCamera );

	// Draw nodes
	drawRenderables( "", "", true, &_curCamera->getFrustum(), 0x0, RenderingOrder::None, -1 );

	// Draw bounding boxes
	//glDisable( GL_CULL_FACE );
	setMaterial( 0x0, "" );
	setShaderComb( &_defColorShader );
	glUniformMatrix4fv( _defColorShader.uni_worldMat, 1, false, &Matrix4f().x[0] );
	glUniform4f( Modules::renderer()._defColShader_color, 0.4f, 0.4f, 0.4f, 1 );
	for( uint32 i = 0, s = (uint32)Modules::sceneMan().getRenderableQueue().size(); i < s; ++i )
	{
		SceneNode *sn = Modules::sceneMan().getRenderableQueue()[i].node;
		
		drawAABB( sn->_bBox.min, sn->_bBox.max );

		/*// Draw mesh AABBs
		if( sn->getType() == SceneNodeTypes::Model )
		{
			ModelNode *model = (ModelNode *)sn;

			for( uint32 j = 0, s = (uint32)model->_meshList.size(); j < s; ++j )
			{
				drawAABB( model->_meshList[j]->_bBox.min, model->_meshList[j]->_bBox.max );
			}
		}*/
	}

	// Draw skeleton
	glUniform4f( Modules::renderer()._defColShader_color, 1.0f, 0, 0, 1 );
	glLineWidth( 2.0f );
	glPointSize( 5.0f );
	for( uint32 i = 0, s = (uint32)Modules::sceneMan().getRenderableQueue().size(); i < s; ++i )
	{
		SceneNode *sn = Modules::sceneMan().getRenderableQueue()[i].node;
		
		if( sn->getType() == SceneNodeTypes::Model )
		{
			ModelNode *model = (ModelNode *)sn;

			for( uint32 j = 0, s = (uint32)model->_jointList.size(); j < s; ++j )
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
	glPointSize( 1.0f );

	// Draw light volumes
	glUniform4f( Modules::renderer()._defColShader_color, 1, 1, 0, 0.25f );
	for( size_t i = 0, s = Modules::sceneMan().getLightQueue().size(); i < s; ++i )
	{
		LightNode *lightNode = (LightNode *)Modules::sceneMan().getLightQueue()[i];
		
		if( lightNode->_fov < 180 )
		{
			glLoadMatrixf( (_curCamera->getViewMat() * lightNode->_absTrans).x );
			
			// Render cone
			float r = lightNode->_radius * tanf( degToRad( lightNode->_fov / 2 ) );
			glBegin( GL_TRIANGLE_FAN );
			glVertex3f( 0, 0, 0 );
			for( int j = 32; j >= 0; --j )
			{
				glVertex3f( r * sinf( j / 32.0f * Math::TwoPi ),
				            r * cosf( j / 32.0f * Math::TwoPi ),
				            -lightNode->_radius );
			}
			glEnd();

			glLoadMatrixf( _curCamera->getViewMat().x );
		}
		else
		{
			drawAABB( Vec3f( lightNode->_absPos.x - lightNode->_radius,
			                 lightNode->_absPos.y - lightNode->_radius,
			                 lightNode->_absPos.z - lightNode->_radius ),
			          Vec3f( lightNode->_absPos.x + lightNode->_radius,
			                 lightNode->_absPos.y + lightNode->_radius,
			                 lightNode->_absPos.z + lightNode->_radius ) );
		}
	}

	// Draw screen space projection of light sources
	glPolygonMode( GL_FRONT_AND_BACK, GL_FILL );
	glEnable( GL_BLEND );
	glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );
	glUniform4f( Modules::renderer()._defColShader_color, 1, 1, 1, 0.25f );
	
	for( size_t i = 0, s = Modules::sceneMan().getLightQueue().size(); i < s; ++i )
	{
		LightNode *lightNode = (LightNode *)Modules::sceneMan().getLightQueue()[i];
		
		if( _curCamera->getFrustum().cullFrustum( lightNode->getFrustum() ) ) continue;

		// Calculate light screen space position
		float bbx, bby, bbw, bbh;
		lightNode->calcScreenSpaceAABB( _curCamera->getProjMat() * _curCamera->getViewMat(),
		                                bbx, bby, bbw, bbh );

		glMatrixMode( GL_PROJECTION );
		glLoadMatrixf( Matrix4f::OrthoMat( 0, 1, 0, 1, -1, 1 ).x );
		glMatrixMode( GL_MODELVIEW );
		glLoadMatrixf( Matrix4f().x );
		
		glBegin( GL_QUADS );
		glVertex3f( bbx, bby, 1 );
		glVertex3f( bbx + bbw, bby, 1 );
		glVertex3f( bbx + bbw, bby + bbh, 1 );
		glVertex3f( bbx, bby + bbh, 1 );
		glEnd();
	}

	glEnable( GL_CULL_FACE );
	glDisable( GL_BLEND );
}


void Renderer::finishRendering()
{
	setRenderBuffer( 0 );
	setMaterial( 0x0, "" );
	applyVertexLayout( 0 );
	bindIndexBuffer( 0 );
	
	//ASSERT( glGetError() == GL_NO_ERROR );
}