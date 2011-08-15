// *************************************************************************************************
//
// Horde3D
//   Next-Generation Graphics Engine
//
// Sample Application
// --------------------------------------
// Copyright (C) 2006-2008 Nicolas Schulz
//
//
// This sample source file is not covered by the LGPL as the rest of the SDK
// and may be used without any restrictions
//
// *************************************************************************************************

#include "app.h"
#include "Horde3D.h"
#include "Horde3DUtils.h"
#include <math.h>
#include <iomanip>

using namespace std;
Application* Application::_app = 0x0;

void TW_CALL lightButtonCallBack(void * a)
{
	h3dSetNodeParamF( Application::App()->_light, H3DLight::ColorF3, 0, Application::App()->_lightColor[0] );
	h3dSetNodeParamF( Application::App()->_light, H3DLight::ColorF3, 1, Application::App()->_lightColor[1] );
	h3dSetNodeParamF( Application::App()->_light, H3DLight::ColorF3, 2, Application::App()->_lightColor[2] );
}

// Convert from degrees to radians
inline float degToRad( float f ) 
{
	return f * (3.1415926f / 180.0f);
}


Application::Application( const std::string &contentDir )
{
	for( unsigned int i = 0; i < 320; ++i ) _keys[i] = false;

	_x = 5; _y = 3; _z = 19; _rx = 7; _ry = 15; _velocity = 10.0f;
	_curFPS = 30;

	_freeze = false; _showStats = false; _debugViewMode = false; _wireframeMode = false;
	_animTime = 0; _weight = 1.0f;
	_cam = 0;

	_contentDir = contentDir;
}


bool Application::init()
{	
	// Initialize engine
	Application::_app = this;
	if( !h3dInit() )
	{	
		h3dutDumpMessages();
		return false;
	}
	TwInit(TW_OPENGL, 0x0);
	_mouseFree = false;

	// Set options
	h3dSetOption( H3DOptions::LoadTextures, 1 );
	h3dSetOption( H3DOptions::TexCompression, 0 );
	h3dSetOption( H3DOptions::FastAnimation, 0 );
	h3dSetOption( H3DOptions::MaxAnisotropy, 8 );
	h3dSetOption( H3DOptions::ShadowMapSize, 2048 );

	// Add resources
	// Pipelines
	_hdrPipeRes = h3dAddResource( H3DResTypes::Pipeline, "pipelines/hdr.pipeline.xml", 0 );
	_forwardPipeRes = h3dAddResource( H3DResTypes::Pipeline, "pipelines/forward.pipeline.xml", 0 );
	// Font
	_fontMatRes = h3dAddResource( H3DResTypes::Material, "overlays/font.material.xml", 0 );
	// Logo
	_logoMatRes = h3dAddResource( H3DResTypes::Material, "overlays/logo.material.xml", 0 );
	// Panel
	_panelMatRes = h3dAddResource( H3DResTypes::Material, "overlays/panel.material.xml", 0 );
	// Environment
	H3DRes envRes = h3dAddResource( H3DResTypes::SceneGraph, "models/sphere/sphere.scene.xml", 0 );
	// Knight
	H3DRes knightRes = h3dAddResource( H3DResTypes::SceneGraph, "models/knight/knight.scene.xml", 0 );
	H3DRes knightAnim1Res = h3dAddResource( H3DResTypes::Animation, "models/animations/knight_order.anim", 0 );
	H3DRes knightAnim2Res = h3dAddResource( H3DResTypes::Animation, "models/animations/knight_attack.anim", 0 );
	// Particle system
	H3DRes particleSysRes = h3dAddResource( H3DResTypes::SceneGraph, "particles/particleSys1/particleSys1.scene.xml", 0 );
	
	// Load resources
	h3dutLoadResourcesFromDisk( _contentDir.c_str() );

	// Add scene nodes
	// Add camera
	_cam = h3dAddCameraNode( H3DRootNode, "Camera", _hdrPipeRes );
	//h3dSetNodeParamI( _cam, H3DCamera::OcclusionCulling, 1 );
	// Add environment
	H3DNode env = h3dAddNodes( H3DRootNode, envRes );
	h3dSetNodeTransform( env, 0, -20, 0, 0, 0, 0, 20, 20, 20 );
	// Add knight
	_knight = h3dAddNodes( H3DRootNode, knightRes );
	h3dSetNodeTransform( _knight, 0, 0, 0, 0, 180, 0, 0.1f, 0.1f, 0.1f );
	h3dSetupModelAnimStage( _knight, 0, knightAnim1Res, 0, "", false );
	h3dSetupModelAnimStage( _knight, 1, knightAnim2Res, 0, "", false );
	// Attach particle system to hand joint
	h3dFindNodes( _knight, "Bip01_R_Hand", H3DNodeTypes::Joint );
	H3DNode hand = h3dGetNodeFindResult( 0 );
	_particleSys = h3dAddNodes( hand, particleSysRes );
	h3dSetNodeTransform( _particleSys, 0, 40, 0, 90, 0, 0, 1, 1, 1 );

	// Add light source
	_light = h3dAddLightNode( H3DRootNode, "Light1", 0, "LIGHTING", "SHADOWMAP" );
	h3dSetNodeTransform( _light, 0, 15, 10, -60, 0, 0, 1, 1, 1 );
	h3dSetNodeParamF( _light, H3DLight::RadiusF, 0, 30 );
	h3dSetNodeParamF( _light, H3DLight::FovF, 0, 90 );
	h3dSetNodeParamI( _light, H3DLight::ShadowMapCountI, 1 );
	h3dSetNodeParamF( _light, H3DLight::ShadowMapBiasF, 0, 0.01f );
	h3dSetNodeParamF( _light, H3DLight::ColorF3, 0, 1.0f );
	h3dSetNodeParamF( _light, H3DLight::ColorF3, 1, 0.8f );
	h3dSetNodeParamF( _light, H3DLight::ColorF3, 2, 0.7f );
	_lightColor[0] = 1.0f;
	_lightColor[1] = 0.8f;
	_lightColor[2] = 0.7f;
	// Customize post processing effects
	H3DNode matRes = h3dFindResource( H3DResTypes::Material, "postHDR.material.xml" );
	// hdrParams: exposure, brightpass threshold, brightpass offset (see shader for description)
	h3dSetMaterialUniform( matRes, "hdrParams", 2.5f, 0.5f, 0.08f, 0 );
	
	bar = TwNewBar("Knight Tweak");
	TwAddVarRW(bar, "lColor", TW_TYPE_COLOR3F, &_lightColor, " label='Light Color' ");
	TwAddButton(bar,"apply", lightButtonCallBack, 0x0, " label='Apply Light Color' ");
	
	return true;
}


void Application::mainLoop( float fps )
{
	_curFPS = fps;

	keyHandler();
	
	h3dSetOption( H3DOptions::DebugViewMode, _debugViewMode ? 1.0f : 0.0f );
	h3dSetOption( H3DOptions::WireframeMode, _wireframeMode ? 1.0f : 0.0f );
	
	if( !_freeze )
	{
		_animTime += 1.0f / _curFPS;

		// Do animation blending
		h3dSetModelAnimParams( _knight, 0, _animTime * 24.0f, _weight );
		h3dSetModelAnimParams( _knight, 1, _animTime * 24.0f, 1.0f - _weight );

		// Animate particle systems (several emitters in a group node)
		unsigned int cnt = cnt = h3dFindNodes( _particleSys, "", H3DNodeTypes::Emitter );
		for( unsigned int i = 0; i < cnt; ++i )
			h3dAdvanceEmitterTime( h3dGetNodeFindResult( i ), 1.0f / _curFPS );
	}
	
	// Set camera parameters
	h3dSetNodeTransform( _cam, _x, _y, _z, _rx ,_ry, 0, 1, 1, 1 );
	
	if( _showStats )
	{
		h3dutShowFrameStats( _fontMatRes, _panelMatRes, _showStats );// FIX ME: Missing a panel material resource

		// Display weight
		_text.str( "" );
		_text << fixed << setprecision( 2 ) << "Weight: " << _weight;
		h3dutShowText( _text.str().c_str(), 0, 0.78f, 0.03f, 0, 0, 0, _fontMatRes );
	}

	// Show logo
	const float ovLogo[] = { 0.75f, 0, 0, 0,  1, 0, 1, 0,  1, 0.2f, 1, 1,  0.75f, 0.2f, 0, 1 };
	h3dShowOverlays( ovLogo, 4, 1.f, 1.f, 1.f, 1.f, _logoMatRes, 7 );
	
	// Render scene
	h3dRender( _cam );

	// Remove all overlays
	h3dClearOverlays();

	// Write all mesages to log file
	h3dutDumpMessages();
}


void Application::release()
{
	// Release engine
	h3dRelease();
}


void Application::resize( int width, int height )
{
	// Resize viewport
	h3dSetNodeParamI( _cam, H3DCamera::ViewportXI, 0 );
	h3dSetNodeParamI( _cam, H3DCamera::ViewportYI, 0 );
	h3dSetNodeParamI( _cam, H3DCamera::ViewportWidthI, width );
	h3dSetNodeParamI( _cam, H3DCamera::ViewportHeightI, height );

	// Set virtual camera parameters
	h3dSetupCameraView( _cam, 45.0f, (float)width / height, 0.1f, 1000.0f );
	h3dResizePipelineBuffers( _hdrPipeRes, width, height );
	h3dResizePipelineBuffers( _forwardPipeRes, width, height );
}


void Application::keyPressEvent( int key )
{
	if( key == 32 )		// Space
		_freeze = !_freeze;

	if( key == 260 )	// F3
	{
		if( h3dGetNodeParamI( _cam, H3DCamera::PipeResI ) == _hdrPipeRes )
			h3dSetNodeParamI( _cam, H3DCamera::PipeResI, _forwardPipeRes );
		else
			h3dSetNodeParamI( _cam, H3DCamera::PipeResI, _hdrPipeRes );
	}
	
	if( key == 264 )	// F7
		_debugViewMode = !_debugViewMode;

	if( key == 265 )	// F8
		_wireframeMode = !_wireframeMode;
	
	if( key == 266 )	// F9
		_showStats = !_showStats;
}


void Application::keyHandler()
{
	float curVel = _velocity / _curFPS;
	
	if( _keys[287] ) curVel *= 5;	// LShift
	
	if( _keys['W'] )
	{
		// Move forward
		_x -= sinf( degToRad( _ry ) ) * cosf( -degToRad( _rx ) ) * curVel;
		_y -= sinf( -degToRad( _rx ) ) * curVel;
		_z -= cosf( degToRad( _ry ) ) * cosf( -degToRad( _rx ) ) * curVel;
	}

	if( _keys['S'] )
	{
		// Move backward
		_x += sinf( degToRad( _ry ) ) * cosf( -degToRad( _rx ) ) * curVel;
		_y += sinf( -degToRad( _rx ) ) * curVel;
		_z += cosf( degToRad( _ry ) ) * cosf( -degToRad( _rx ) ) * curVel;
	}

	if( _keys['A'] )
	{
		// Strafe left
		_x += sinf( degToRad( _ry - 90) ) * curVel;
		_z += cosf( degToRad( _ry - 90 ) ) * curVel;
	}

	if( _keys['D'] )
	{
		// Strafe right
		_x += sinf( degToRad( _ry + 90 ) ) * curVel;
		_z += cosf( degToRad( _ry + 90 ) ) * curVel;
	}

	if( _keys['1'] )
	{
		// Change blend weight
		_weight += 2 / _curFPS;
		if( _weight > 1 ) _weight = 1;
	}
	
	if( _keys['2'] )
	{
		// Change blend weight
		_weight -= 2 / _curFPS;
		if( _weight < 0 ) _weight = 0;
	}
}


void Application::mouseMoveEvent( float dX, float dY )
{
	// Look left/right
	_ry -= dX / 100 * 30;
	
	// Loop up/down but only in a limited range
	_rx += dY / 100 * 30;
	if( _rx > 90 ) _rx = 90; 
	if( _rx < -90 ) _rx = -90;
}
