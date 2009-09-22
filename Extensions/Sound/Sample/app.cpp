// *************************************************************************************************
//
// Horde3D Sound Extension
//
// Sample Application
// --------------------------------------
// Copyright (C) 2008-2009 Ulf Nilsson Tännström
//
//
// This sample source file is not covered by the LGPL as the rest of the SDK
// and may be used without any restrictions
//
// *************************************************************************************************

#include <cmath>
#include <ctime>
#include <sstream>
#include <iomanip>
#include <stdlib.h>
#include "glfw.h"
#include "Horde3D.h"
#include "Horde3DUtils.h"
#include "Horde3DSound.h"
#include "app.h"

// Convert from degrees to radians
inline float degToRad( float f ) 
{
	return f * (3.1415926f / 180.0f);
}

Application::Application( const std::string &contentDir )
{
	for( int i = 0; i < 320; i++ )
		_keys[i] = false;

	_x = 0;
	_y = 2;
	_z = 4;
	_rx = -20;
	_ry = 0;

	_velocity = 2.5f;
	_lightTimer = 0.0f;

	_soundVolume = 1.0f;
	_soundPitch = 1.0f;
	_soundLoop = false;
	_distanceModel = H3DDistanceModels::InverseDistanceClamped;

	_statMode = 0;
	_debugViewMode = false;
	_wireframeMode = false;

	_cam = 0;
	_sound1 = 0;
	_sound2 = 0;
	_light = 0;

	_contentDir = contentDir;

	// Feed the random number generator with a seed
	srand( (unsigned)time( 0x0 ) );
}

bool Application::init()
{	
	// Initialize engine and open default sound device
	if( !h3dInit() || !h3dOpenDevice( 0x0 ) )
	{	
		h3dutDumpMessages();
		return false;
	}

	// Set options
	h3dSetOption( H3DOptions::LoadTextures, 1 );
	h3dSetOption( H3DOptions::TexCompression, 0 );
	h3dSetOption( H3DOptions::FastAnimation, 0 );
	h3dSetOption( H3DOptions::MaxAnisotropy, 4 );
	h3dSetOption( H3DOptions::ShadowMapSize, 2048 );

	// Add resources
	// Pipelines
	_hdrPipeRes = h3dAddResource( H3DResTypes::Pipeline, "pipelines/hdr.pipeline.xml", 0 );
	_forwardPipeRes = h3dAddResource( H3DResTypes::Pipeline, "pipelines/forward.pipeline.xml", 0 );
	// Overlays
	_fontMatRes = h3dAddResource( H3DResTypes::Material, "overlays/font.material.xml", 0 );
	_panelMatRes = h3dAddResource( H3DResTypes::Material, "overlays/panel.material.xml", 0 );
	_logoMatRes = h3dAddResource( H3DResTypes::Material, "overlays/logo.material.xml", 0 );
	// Environment
	H3DRes floorRes = h3dAddResource( H3DResTypes::SceneGraph, "models/tiles/tiles.scene.xml", 0 );
	// Knight
	H3DRes speakerRes = h3dAddResource( H3DResTypes::SceneGraph, "models/speaker/speaker.scene.xml", 0 );
	// Music
	_soundRes = h3dAddResource( RST_SoundResource, "sounds/stringed_disco.ogg", 0 );

	// Load resources
	h3dutLoadResourcesFromDisk( _contentDir.c_str() );

	// Add scene nodes
	// Add camera
	_cam = h3dAddCameraNode( H3DRootNode, "Camera", _hdrPipeRes );
	//h3dSetNodeParamI( _cam, CameraNodeParams::OcclusionCulling, 1 );
	// Add listener to the camera
	H3DNode listener = h3dAddListenerNode( _cam, "Listener" );
	h3dSetActiveListener( listener );
	// Add floor
	H3DNode floor = h3dAddNodes( H3DRootNode, floorRes );
	h3dSetNodeTransform( floor, 0, -0.125, 0, 0, 0, 0, 1, 1, 1 );
	// Add the speakers
	H3DNode speaker1 = h3dAddNodes( H3DRootNode, speakerRes );
	h3dSetNodeTransform( speaker1, -2, 0, -2, 0, 215.0f, 0, 1, 1, 1 );
	H3DNode speaker2 = h3dAddNodes( H3DRootNode, speakerRes );
	h3dSetNodeTransform( speaker2, 2, 0, -2, 0, 145.0f, 0, 1, 1, 1 );
	// Add music to the speakers
	_sound1 = h3dAddSoundNode( speaker1, "Sound1", _soundRes );
	_sound2 = h3dAddSoundNode( speaker2, "Sound2", _soundRes );
	// Add light source
	_light = h3dAddLightNode( H3DRootNode, "Light1", 0, "LIGHTING", "SHADOWMAP" );
	h3dSetNodeTransform( _light, 0, 7, 0, -90, 0, 0, 1, 1, 1 );
	h3dSetNodeParamF( _light, H3DLight::RadiusF, 0, 30 );
	h3dSetNodeParamF( _light, H3DLight::FovF, 0, 90 );
	h3dSetNodeParamI( _light, H3DLight::ShadowMapCountI, 1 );
	h3dSetNodeParamF( _light, H3DLight::ShadowMapBiasF, 0, 0.01f );

	// Set the distance model
	h3dSetDistanceModel( _distanceModel );
	// Set the timer so the light immediately gets a random color
	_lightTimer = 1.0f;

	// Customize post processing effects
	H3DRes matRes = h3dFindResource( H3DResTypes::Material, "pipelines/postHDR.material.xml" );
	// hdrParams: exposure, brightpass threshold, brightpass offset (see shader for description)
	h3dSetMaterialUniform( matRes, "hdrParams", 2.0f, 0.6f, 0.08f, 0 );

	// Play the music
	h3dPlaySound( _sound1 );
	h3dPlaySound( _sound2 );

	return true;
}

void Application::release()
{
	// Close the sound device and release the engine
	h3dCloseDevice();
	h3dRelease();
}

void Application::mainLoop( float timeSinceLastFrame )
{
	keyHandler( timeSinceLastFrame );

	// Set camera parameters
	h3dSetNodeTransform( _cam, _x, _y, _z, _rx ,_ry, 0, 1, 1, 1 );

	_lightTimer += timeSinceLastFrame;

	// Has it gone a second since the light changed color?
	if( _lightTimer >= 1.0f )
	{
		// Set a random light color
		switch( rand() % 6 )
		{
		case 0:
			// Red
			h3dSetNodeParamF( _light, H3DLight::ColorF3, 0, 1.0f );
			h3dSetNodeParamF( _light, H3DLight::ColorF3, 1, 0.0f );
			h3dSetNodeParamF( _light, H3DLight::ColorF3, 2, 0.0f );
			break;
		case 1:
			// Green
			h3dSetNodeParamF( _light, H3DLight::ColorF3, 0, 0.0f );
			h3dSetNodeParamF( _light, H3DLight::ColorF3, 1, 1.0f );
			h3dSetNodeParamF( _light, H3DLight::ColorF3, 2, 0.0f );
			break;
		case 2:
			// Blue
			h3dSetNodeParamF( _light, H3DLight::ColorF3, 0, 0.0f );
			h3dSetNodeParamF( _light, H3DLight::ColorF3, 1, 0.0f );
			h3dSetNodeParamF( _light, H3DLight::ColorF3, 2, 1.0f );
			break;
		case 3:
			// Yellow
			h3dSetNodeParamF( _light, H3DLight::ColorF3, 0, 1.0f );
			h3dSetNodeParamF( _light, H3DLight::ColorF3, 1, 1.0f );
			h3dSetNodeParamF( _light, H3DLight::ColorF3, 2, 0.0f );
			break;
		case 4:
			// Purple
			h3dSetNodeParamF( _light, H3DLight::ColorF3, 0, 1.0f );
			h3dSetNodeParamF( _light, H3DLight::ColorF3, 1, 0.0f );
			h3dSetNodeParamF( _light, H3DLight::ColorF3, 2, 1.0f );
			break;
		case 5:
			// Cyan
			h3dSetNodeParamF( _light, H3DLight::ColorF3, 0, 0.0f );
			h3dSetNodeParamF( _light, H3DLight::ColorF3, 1, 1.0f );
			h3dSetNodeParamF( _light, H3DLight::ColorF3, 2, 1.0f );
			break;
		}

		// Reset the timer
		_lightTimer = 0.0f;
	}

	// Show stats
	h3dutShowFrameStats( _fontMatRes, _panelMatRes, _statMode );
	if( _statMode > 0 )
	{	
		displaySoundInfo();
	}

	// Show logo
	h3dShowOverlay( 0.75f, 0.8f, 0, 1, 0.75f, 1, 0, 0, 1, 1, 1, 0, 1, 0.8f, 1, 1,
	                1, 1, 1, 1, _logoMatRes, 7 );

	// Render scene
	h3dRender( _cam );

	// Finish rendering of frame
	h3dFinalizeFrame();

	// Remove all overlays
	h3dClearOverlays();

	// Write all mesages to log file
	h3dutDumpMessages();
}

void Application::resize( int width, int height )
{
	// Resize viewport
	h3dSetupViewport( 0, 0, width, height, true );

	// Set virtual camera parameters
	h3dSetupCameraView( _cam, 45.0f, (float)width / height, 0.1f, 1000.0f );
}

void Application::mouseMoveEvent( int deltaX, int deltaY )
{
	// Look left/right
	_ry -= deltaX * 0.3f;

	// Loop up/down but only in a limited range
	_rx -= deltaY * 0.3f;

	if( _rx > 90 )
		_rx = 90; 
	if( _rx < -90 )
		_rx = -90;
}

void Application::keyPressEvent( int key )
{
	switch( key )
	{
	case '1':
		if( h3dIsSoundPlaying( _sound1 ) )
		{
			h3dPauseSound( _sound1 );
			h3dPauseSound( _sound2 );
		}
		else
		{
			h3dPlaySound( _sound1 );
			h3dPlaySound( _sound2 );
		}

		break;
	case '2':
		h3dRewindSound( _sound1 );
		h3dRewindSound( _sound2 );

		break;
	case '7':
		_soundLoop = !_soundLoop;

		h3dSetNodeParamI( _sound1, H3DSoundNodeParams::Loop, _soundLoop ? 1 : 0 );
		h3dSetNodeParamI( _sound2, H3DSoundNodeParams::Loop, _soundLoop ? 1 : 0 );
		break;
	case '8':
		// Rotate between the distance models
		switch( _distanceModel )
		{
		case H3DDistanceModels::None:
			_distanceModel = H3DDistanceModels::InverseDistance;
			break;
		case H3DDistanceModels::InverseDistance:
			_distanceModel = H3DDistanceModels::InverseDistanceClamped;
			break;
		case H3DDistanceModels::InverseDistanceClamped:
			_distanceModel = H3DDistanceModels::LinearDistance;
			break;
		case H3DDistanceModels::LinearDistance:
			_distanceModel = H3DDistanceModels::LinearDistanceClamped;
			break;
		case H3DDistanceModels::LinearDistanceClamped:
			_distanceModel = H3DDistanceModels::ExponentDistance;
			break;
		case H3DDistanceModels::ExponentDistance:
			_distanceModel = H3DDistanceModels::ExponentDistanceClamped;
			break;
		case H3DDistanceModels::ExponentDistanceClamped:
			_distanceModel = H3DDistanceModels::None;
			break;
		}

		h3dSetDistanceModel( _distanceModel );
		break;
	case GLFW_KEY_F3:
		if( h3dGetNodeParamI( _cam, H3DCamera::PipeResI ) == _hdrPipeRes )
			h3dSetNodeParamI( _cam, H3DCamera::PipeResI, _forwardPipeRes );
		else
			h3dSetNodeParamI( _cam, H3DCamera::PipeResI, _hdrPipeRes );

		break;
	case GLFW_KEY_F7:
		_debugViewMode = !_debugViewMode;
		h3dSetOption( H3DOptions::DebugViewMode, _debugViewMode ? 1.0f : 0.0f );
		break;
	case GLFW_KEY_F8:
		_wireframeMode = !_wireframeMode;
		h3dSetOption( H3DOptions::WireframeMode, _wireframeMode ? 1.0f : 0.0f );
		break;
	case GLFW_KEY_F9:
		_statMode += 1;

		if( _statMode > H3DUTMaxStatMode )
			_statMode = 0;

		break;
	}
}

void Application::keyHandler( float timeSinceLastFrame )
{
	float curVel = _velocity * timeSinceLastFrame;

	if( _keys[GLFW_KEY_LSHIFT] )
		curVel *= 5;

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

	if( _keys['3'] )
	{
		// Increase volume
		_soundVolume += 0.5f * timeSinceLastFrame;

		if( _soundVolume > 2.0f )
			_soundVolume = 2.0f;

		h3dSetNodeParamF( _sound1, H3DSoundNodeParams::Gain, 0, _soundVolume );
		h3dSetNodeParamF( _sound2, H3DSoundNodeParams::Gain, 0, _soundVolume );
	}

	if( _keys['4'] )
	{
		// Decrease volume
		_soundVolume -= 0.5f * timeSinceLastFrame;

		if( _soundVolume < 0 )
			_soundVolume = 0;

		h3dSetNodeParamF( _sound1, H3DSoundNodeParams::Gain, 0, _soundVolume );
		h3dSetNodeParamF( _sound2, H3DSoundNodeParams::Gain, 0, _soundVolume );
	}

	if( _keys['5'] )
	{
		// Increase pitch
		_soundPitch += 0.5f * timeSinceLastFrame;

		if( _soundPitch > 2.0f )
			_soundPitch = 2.0f;

		h3dSetNodeParamF( _sound1, H3DSoundNodeParams::Pitch, 0, _soundPitch );
		h3dSetNodeParamF( _sound2, H3DSoundNodeParams::Pitch, 0, _soundPitch );
	}

	if( _keys['6'] )
	{
		// Decrease pitch
		_soundPitch -= 0.5f * timeSinceLastFrame;

		if( _soundPitch < 0.5f )
			_soundPitch = 0.5f;

		h3dSetNodeParamF( _sound1, H3DSoundNodeParams::Pitch, 0, _soundPitch );
		h3dSetNodeParamF( _sound2, H3DSoundNodeParams::Pitch, 0, _soundPitch );
	}
}

void Application::displaySoundInfo()
{
	std::stringstream text;

	text.str( "" );
	text << std::fixed << std::setprecision( 2 ) << h3dGetNodeParamF( _sound1, H3DSoundNodeParams::Offset, 0 ) << " / " << h3dGetResParamF( _soundRes, H3DSoundResParams::Runtime, 0, 0, 0 );
	h3dutShowText( text.str().c_str(), 0.03f, 0.43f, 0.026f, 1, 1, 1, _fontMatRes, 5 );

	text.str( "" );
	text << "Volume: " << (int)( _soundVolume * 100 ) << "%";
	h3dutShowText( text.str().c_str(), 0.03f, 0.46f, 0.026f, 1, 1, 1, _fontMatRes, 5 );

	text.str( "" );
	text << std::fixed << std::setprecision( 2 ) << "Pitch: " << _soundPitch;
	h3dutShowText( text.str().c_str(), 0.03f, 0.49f, 0.026f, 1, 1, 1, _fontMatRes, 5 );

	text.str( "" );
	text << "Loop: ";

	if( _soundLoop )
		text << "yes";
	else
		text << "no";

	h3dutShowText( text.str().c_str(), 0.03f, 0.52f, 0.026f, 1, 1, 1, _fontMatRes, 5 );

	text.str( "" );
	text << "Distance model: ";

	switch( _distanceModel )
	{
	case H3DDistanceModels::None:
		text << "None";
		break;
	case H3DDistanceModels::InverseDistance:
		text << "InverseDistance";
		break;
	case H3DDistanceModels::InverseDistanceClamped:
		text << "InverseDistanceClamped";
		break;
	case H3DDistanceModels::LinearDistance:
		text << "LinearDistance";
		break;
	case H3DDistanceModels::LinearDistanceClamped:
		text << "LinearDistanceClamped";
		break;
	case H3DDistanceModels::ExponentDistance:
		text << "ExponentDistance";
		break;
	case H3DDistanceModels::ExponentDistanceClamped:
		text << "ExponentDistanceClamped";
		break;
	}

	h3dutShowText( text.str().c_str(), 0.03f, 0.55f, 0.026f, 1, 1, 1, _fontMatRes, 5 );
}
