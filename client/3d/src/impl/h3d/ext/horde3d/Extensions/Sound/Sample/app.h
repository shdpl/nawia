// *************************************************************************************************
//
// Horde3D Sound Extension
//
// Sample Application
// --------------------------------------
// Copyright (C) 2008-2010 Ulf Nilsson TŠnnstršm
//
//
// This sample source file is not covered by the MIT license as the rest of the SDK
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
	H3DDistanceModels::List	_distanceModel;

	int						_statMode;
	bool					_debugViewMode, _wireframeMode;

	// Engine objects
	H3DRes				_fontMatRes, _panelMatRes, _logoMatRes;
	H3DRes				_pipeRes, _hdrPipeRes, _forwardPipeRes;
	H3DRes				_soundRes;
	H3DNode				_cam, _sound1, _sound2, _light;

	std::string				_contentDir;

	void keyHandler( float timeSinceLastFrame );
	void displaySoundInfo();

public:

	Application( const std::string &contentDir );

	bool init();
	void release();

	void mainLoop( float timeSinceLastFrame );
	void resize( int width, int height );

	void mouseMoveEvent( int deltaX, int deltaY );
	void keyPressEvent( int key );
	void keyStateChange( int key, bool state )
	{
		if( key >= 0 && key < 320 )
			_keys[key] = state;
	}
};

#endif // _app_H_
