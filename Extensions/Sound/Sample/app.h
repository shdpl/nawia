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

#ifndef _app_H_
#define _app_H_

#include <string>
#include "Horde3D.h"
#include "Horde3DSound.h"

class Application
{
private:

	bool					_keys[320];
	float					_x, _y, _z; // Viewer position
	float					_rx, _ry;	// Viewer orientation
	float					_velocity;	// Velocity for movement
	float					_lightTimer;
	float					_soundVolume, _soundPitch;
	bool					_soundLoop;
	DistanceModels::List	_distanceModel;

	bool					_showStats, _debugViewMode, _wireframeMode;

	// Engine objects
	ResHandle				_pipeRes, _fontMatRes, _logoMatRes, _hdrPipeRes, _forwardPipeRes, _soundRes;
	NodeHandle				_cam, _sound1, _sound2, _light;

	std::string				_contentDir;

	void keyHandler( float timeSinceLastFrame );

public:

	Application( const std::string contentDir );

	bool init();
	void release();

	void mainLoop( float timeSinceLastFrame );
	void resize( int width, int height );

	void keyPressEvent( int key );
	void keyStateChange( int key, bool state )
	{
		if( key >= 0 && key < 320 )
			_keys[key] = state;
	}
	void mouseMoveEvent( int deltaX, int deltaY );

	void displaySoundInfo();
};

#endif // _app_H_