// *************************************************************************************************
//
// Horde3D
//   Next-Generation Graphics Engine
//
// Sample Application
// --------------------------------------
// Copyright (C) 2006-2009 Nicolas Schulz
//
//
// This sample source file is not covered by the EPL as the rest of the SDK
// and may be used without any restrictions. However, the EPL's disclaimer of
// warranty and liability shall be in effect for this file.
//
// *************************************************************************************************

#ifndef _app_H_
#define _app_H_

#include "crowd.h"
#include <string>


class Application
{
private:

	bool         _keys[320];
	float        _x, _y, _z, _rx, _ry;  // Viewer position and orientation
	float        _velocity;  // Velocity for movement
	float        _curFPS;

	int          _statMode;
	bool         _freeze, _debugViewMode, _wireframeMode;
	
	CrowdSim     *_crowdSim;
	
	// Engine objects
	H3DRes       _fontMatRes, _panelMatRes;
	H3DRes       _logoMatRes, _forwardPipeRes, _deferredPipeRes;
	H3DNode      _cam;

	std::string  _contentDir;

	void keyHandler();

public:
	
	Application(const std::string &contentDir );
	
	bool init();
	void mainLoop( float fps );
	void release();
	void resize( int width, int height );

	void keyPressEvent( int key );
	void keyStateChange( int key, bool state ) { if( key >= 0 && key < 320 ) _keys[key] = state; }
	void mouseMoveEvent( float dX, float dY );
};

#endif // _app_H_



