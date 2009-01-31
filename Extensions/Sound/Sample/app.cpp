// *************************************************************************************************
//
// Horde3D Sound Extension
//
// Sample Application
// --------------------------------------
// Copyright (C) 2008 Ulf Nilsson Tännström
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

Application::Application( const std::string contentDir )
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
	_distanceModel = DistanceModels::InverseDistanceClamped;

	_showStats = false;
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
	if( !Horde3D::init() || !Horde3DSound::openDevice( 0x0 ) )
	{	
		Horde3DUtils::dumpMessages();
		return false;
	}

	// Set paths for resources
	Horde3DUtils::setResourcePath( ResourceTypes::SceneGraph, "models" );
	Horde3DUtils::setResourcePath( ResourceTypes::Geometry, "models" );
	Horde3DUtils::setResourcePath( ResourceTypes::Animation, "models" );
	Horde3DUtils::setResourcePath( ResourceTypes::Material, "materials" );
	Horde3DUtils::setResourcePath( ResourceTypes::Code, "shaders" );
	Horde3DUtils::setResourcePath( ResourceTypes::Shader, "shaders" );
	Horde3DUtils::setResourcePath( ResourceTypes::Texture2D, "textures" );
	Horde3DUtils::setResourcePath( ResourceTypes::TextureCube, "textures" );
	Horde3DUtils::setResourcePath( ResourceTypes::Effect, "effects" );
	Horde3DUtils::setResourcePath( ResourceTypes::Pipeline, "pipelines" );
	Horde3DUtils::setResourcePath( RST_SoundResource, "sounds" );

	// Set options
	Horde3D::setOption( EngineOptions::LoadTextures, 1 );
	Horde3D::setOption( EngineOptions::TexCompression, 0 );
	Horde3D::setOption( EngineOptions::FastAnimation, 0 );
	Horde3D::setOption( EngineOptions::AnisotropyFactor, 8 );
	Horde3D::setOption( EngineOptions::ShadowMapSize, 2048 );

	// Add resources
	// Pipelines
	_hdrPipeRes = Horde3D::addResource( ResourceTypes::Pipeline, "hdr.pipeline.xml", 0 );
	_forwardPipeRes = Horde3D::addResource( ResourceTypes::Pipeline, "forward.pipeline.xml", 0 );
	// Font
	_fontMatRes = Horde3D::addResource( ResourceTypes::Material, "font.material.xml", 0 );
	// Logo
	_logoMatRes = Horde3D::addResource( ResourceTypes::Material, "logo.material.xml", 0 );
	// Environment
	ResHandle floorRes = Horde3D::addResource( ResourceTypes::SceneGraph, "tiles.scene.xml", 0 );
	// Knight
	ResHandle speakerRes = Horde3D::addResource( ResourceTypes::SceneGraph, "speaker.scene.xml", 0 );
	// Music
	_soundRes = Horde3D::addResource( RST_SoundResource, "stringed_disco.ogg", 0 );

	// Load resources
	Horde3DUtils::loadResourcesFromDisk( _contentDir.c_str() );

	// Add scene nodes
	// Add camera
	_cam = Horde3D::addCameraNode( RootNode, "Camera", _hdrPipeRes );
	//Horde3D::setNodeParami( _cam, CameraNodeParams::OcclusionCulling, 1 );
	// Add listener to the camera
	NodeHandle listener = Horde3DSound::addListenerNode( _cam, "Listener" );
	Horde3DSound::setActiveListener( listener );
	// Add floor
	NodeHandle floor = Horde3D::addNodes( RootNode, floorRes );
	Horde3D::setNodeTransform( floor, 0, -0.125, 0, 0, 0, 0, 1, 1, 1 );
	// Add the speakers
	NodeHandle speaker1 = Horde3D::addNodes( RootNode, speakerRes );
	Horde3D::setNodeTransform( speaker1, -2, 0, -2, 0, 215.0f, 0, 1, 1, 1 );
	NodeHandle speaker2 = Horde3D::addNodes( RootNode, speakerRes );
	Horde3D::setNodeTransform( speaker2, 2, 0, -2, 0, 145.0f, 0, 1, 1, 1 );
	// Add music to the speakers
	_sound1 = Horde3DSound::addSoundNode( speaker1, "Sound1", _soundRes );
	_sound2 = Horde3DSound::addSoundNode( speaker2, "Sound2", _soundRes );
	// Add light source
	_light = Horde3D::addLightNode( RootNode, "Light1", 0, "LIGHTING", "SHADOWMAP" );
	Horde3D::setNodeTransform( _light, 0, 7, 0, -90, 0, 0, 1, 1, 1 );
	Horde3D::setNodeParamf( _light, LightNodeParams::Radius, 30 );
	Horde3D::setNodeParamf( _light, LightNodeParams::FOV, 90 );
	Horde3D::setNodeParami( _light, LightNodeParams::ShadowMapCount, 1 );
	Horde3D::setNodeParamf( _light, LightNodeParams::ShadowMapBias, 0.01f );

	// Set the distance model
	Horde3DSound::setDistanceModel( _distanceModel );
	// Set the timer so the light immediately gets a random color
	_lightTimer = 1.0f;

	// Customize post processing effects
	NodeHandle matRes = Horde3D::findResource( ResourceTypes::Material, "postHDR.material.xml" );
	// hdrParams: exposure, brightpass threshold, brightpass offset (see shader for description)
	Horde3D::setMaterialUniform( matRes, "hdrParams", 2.0f, 0.6f, 0.08f, 0 );

	// Play the music
	Horde3DSound::playSound( _sound1 );
	Horde3DSound::playSound( _sound2 );

	return true;
}

void Application::release()
{
	Horde3DSound::closeDevice();
	Horde3D::release();
}

void Application::mainLoop( float timeSinceLastFrame )
{
	keyHandler( timeSinceLastFrame );

	// Set camera parameters
	Horde3D::setNodeTransform( _cam, _x, _y, _z, _rx ,_ry, 0, 1, 1, 1 );

	_lightTimer += timeSinceLastFrame;

	// Has it gone one second since the light changed color?
	if( _lightTimer >= 1.0f )
	{
		// Set a random light color
		switch( rand() % 6 )
		{
		case 0:
			// Red
			Horde3D::setNodeParamf( _light, LightNodeParams::Col_R, 1.0f );
			Horde3D::setNodeParamf( _light, LightNodeParams::Col_G, 0.0f );
			Horde3D::setNodeParamf( _light, LightNodeParams::Col_B, 0.0f );
			break;
		case 1:
			// Green
			Horde3D::setNodeParamf( _light, LightNodeParams::Col_R, 0.0f );
			Horde3D::setNodeParamf( _light, LightNodeParams::Col_G, 1.0f );
			Horde3D::setNodeParamf( _light, LightNodeParams::Col_B, 0.0f );
			break;
		case 2:
			// Blue
			Horde3D::setNodeParamf( _light, LightNodeParams::Col_R, 0.0f );
			Horde3D::setNodeParamf( _light, LightNodeParams::Col_G, 0.0f );
			Horde3D::setNodeParamf( _light, LightNodeParams::Col_B, 1.0f );
			break;
		case 3:
			// Yellow
			Horde3D::setNodeParamf( _light, LightNodeParams::Col_R, 1.0f );
			Horde3D::setNodeParamf( _light, LightNodeParams::Col_G, 1.0f );
			Horde3D::setNodeParamf( _light, LightNodeParams::Col_B, 0.0f );
			break;
		case 4:
			// Purple
			Horde3D::setNodeParamf( _light, LightNodeParams::Col_R, 1.0f );
			Horde3D::setNodeParamf( _light, LightNodeParams::Col_G, 0.0f );
			Horde3D::setNodeParamf( _light, LightNodeParams::Col_B, 1.0f );
			break;
		case 5:
			// Cyan
			Horde3D::setNodeParamf( _light, LightNodeParams::Col_R, 0.0f );
			Horde3D::setNodeParamf( _light, LightNodeParams::Col_G, 1.0f );
			Horde3D::setNodeParamf( _light, LightNodeParams::Col_B, 1.0f );
			break;
		}

		// Reset the timer
		_lightTimer = 0.0f;
	}

	if( _showStats )
	{
		Horde3DUtils::showFrameStats( _fontMatRes, 1 / timeSinceLastFrame );
		displaySoundInfo();
	}

	// Show logo
	Horde3D::showOverlay( 0.75f, 0, 0, 0, 1, 0, 1, 0,
						  1, 0.2f, 1, 1, 0.75f, 0.2f, 0, 1,
						  7, _logoMatRes );

	// Render scene
	Horde3D::render( _cam );

	// Remove all overlays
	Horde3D::clearOverlays();

	// Write all mesages to log file
	Horde3DUtils::dumpMessages();
}

void Application::resize( int width, int height )
{
	// Resize viewport
	Horde3D::setupViewport( 0, 0, width, height, true );

	// Set virtual camera parameters
	Horde3D::setupCameraView( _cam, 45.0f, (float)width / height, 0.1f, 1000.0f );
}

void Application::keyPressEvent( int key )
{
	switch( key )
	{
	case '1':
		if( Horde3DSound::isSoundPlaying( _sound1 ) )
		{
			Horde3DSound::pauseSound( _sound1 );
			Horde3DSound::pauseSound( _sound2 );
		}
		else
		{
			Horde3DSound::playSound( _sound1 );
			Horde3DSound::playSound( _sound2 );
		}

		break;
	case '2':
		Horde3DSound::rewindSound( _sound1 );
		Horde3DSound::rewindSound( _sound2 );

		break;
	case '7':
		_soundLoop = !_soundLoop;

		Horde3D::setNodeParami( _sound1, SoundNodeParams::Loop, _soundLoop? 1 : 0 );
		Horde3D::setNodeParami( _sound2, SoundNodeParams::Loop, _soundLoop? 1 : 0 );
		break;
	case '8':
		// Rotate between the distance models
		switch( _distanceModel )
		{
		case DistanceModels::None:
			_distanceModel = DistanceModels::InverseDistance;
			break;
		case DistanceModels::InverseDistance:
			_distanceModel = DistanceModels::InverseDistanceClamped;
			break;
		case DistanceModels::InverseDistanceClamped:
			_distanceModel = DistanceModels::LinearDistance;
			break;
		case DistanceModels::LinearDistance:
			_distanceModel = DistanceModels::LinearDistanceClamped;
			break;
		case DistanceModels::LinearDistanceClamped:
			_distanceModel = DistanceModels::ExponentDistance;
			break;
		case DistanceModels::ExponentDistance:
			_distanceModel = DistanceModels::ExponentDistanceClamped;
			break;
		case DistanceModels::ExponentDistanceClamped:
			_distanceModel = DistanceModels::None;
			break;
		}

		Horde3DSound::setDistanceModel( _distanceModel );
		break;
	case GLFW_KEY_F3:
		if( Horde3D::getNodeParami( _cam, CameraNodeParams::PipelineRes ) == _hdrPipeRes )
			Horde3D::setNodeParami( _cam, CameraNodeParams::PipelineRes, _forwardPipeRes );
		else
			Horde3D::setNodeParami( _cam, CameraNodeParams::PipelineRes, _hdrPipeRes );

		break;
	case GLFW_KEY_F7:
		_debugViewMode = !_debugViewMode;
		Horde3D::setOption( EngineOptions::DebugViewMode, _debugViewMode ? 1.0f : 0.0f );
		break;
	case GLFW_KEY_F8:
		_wireframeMode = !_wireframeMode;
		Horde3D::setOption( EngineOptions::WireframeMode, _wireframeMode ? 1.0f : 0.0f );
		break;
	case GLFW_KEY_F9:
		_showStats = !_showStats;
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

		Horde3D::setNodeParamf( _sound1, SoundNodeParams::Gain, _soundVolume );
		Horde3D::setNodeParamf( _sound2, SoundNodeParams::Gain, _soundVolume );
	}

	if( _keys['4'] )
	{
		// Decrease volume
		_soundVolume -= 0.5f * timeSinceLastFrame;

		if( _soundVolume < 0 )
			_soundVolume = 0;

		Horde3D::setNodeParamf( _sound1, SoundNodeParams::Gain, _soundVolume );
		Horde3D::setNodeParamf( _sound2, SoundNodeParams::Gain, _soundVolume );
	}

	if( _keys['5'] )
	{
		// Increase pitch
		_soundPitch += 0.5f * timeSinceLastFrame;

		if( _soundPitch > 2.0f )
			_soundPitch = 2.0f;

		Horde3D::setNodeParamf( _sound1, SoundNodeParams::Pitch, _soundPitch );
		Horde3D::setNodeParamf( _sound2, SoundNodeParams::Pitch, _soundPitch );
	}

	if( _keys['6'] )
	{
		// Decrease pitch
		_soundPitch -= 0.5f * timeSinceLastFrame;

		if( _soundPitch < 0.5f )
			_soundPitch = 0.5f;

		Horde3D::setNodeParamf( _sound1, SoundNodeParams::Pitch, _soundPitch );
		Horde3D::setNodeParamf( _sound2, SoundNodeParams::Pitch, _soundPitch );
	}
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

void Application::displaySoundInfo()
{
	std::stringstream text;

	text.str( "" );
	text << std::fixed << std::setprecision( 2 ) << Horde3D::getNodeParamf( _sound1, SoundNodeParams::Offset ) << " / " << Horde3D::getResourceParamf( _soundRes, SoundResParams::Runtime );
	Horde3DUtils::showText( text.str().c_str(), 0, 0.78f, 0.03f, 0, _fontMatRes );

	text.str( "" );
	text << "Volume: " << (int)( _soundVolume * 100 ) << "%";
	Horde3DUtils::showText( text.str().c_str(), 0, 0.75f, 0.03f, 0, _fontMatRes );

	text.str( "" );
	text << std::fixed << std::setprecision( 2 ) << "Pitch: " << _soundPitch;
	Horde3DUtils::showText( text.str().c_str(), 0, 0.72f, 0.03f, 0, _fontMatRes );

	text.str( "" );
	text << "Loop: ";

	if( _soundLoop )
		text << "yes";
	else
		text << "no";

	Horde3DUtils::showText( text.str().c_str(), 0, 0.69f, 0.03f, 0, _fontMatRes );

	text.str( "" );
	text << "Distance model: ";

	switch( _distanceModel )
	{
	case DistanceModels::None:
		text << "None";
		break;
	case DistanceModels::InverseDistance:
		text << "InverseDistance";
		break;
	case DistanceModels::InverseDistanceClamped:
		text << "InverseDistanceClamped";
		break;
	case DistanceModels::LinearDistance:
		text << "LinearDistance";
		break;
	case DistanceModels::LinearDistanceClamped:
		text << "LinearDistanceClamped";
		break;
	case DistanceModels::ExponentDistance:
		text << "ExponentDistance";
		break;
	case DistanceModels::ExponentDistanceClamped:
		text << "ExponentDistanceClamped";
		break;
	}

	Horde3DUtils::showText( text.str().c_str(), 0, 0.66f, 0.03f, 0, _fontMatRes );
}