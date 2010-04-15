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

#include <iostream>
#include <stdlib.h>
#include "glfw.h"
#include "app.h"

// Configuration
const char caption[] = "Sound - Horde3D Sample";
const int appWidth = 1024;
const int appHeight = 576;
bool fullScreen = false;



bool setupWindow( int, int, bool );

bool running;
int mousePosX, mousePosY;
Application *app;

std::string generatePath( const char *p, const std::string &file )
{
#ifdef __APPLE__
	std::string s( p );

	for( int i = 0; i < 4; i++ )
		s = s.substr( 0, s.rfind( "/" ) );

	return s + "/" + file;
#else
	std::string s( p );

	if( s.find("/") != std::string::npos )
		return s.substr( 0, s.rfind( "/" ) ) + "/" + file;
	else if( s.find("\\") != std::string::npos )
		return s.substr( 0, s.rfind( "\\" ) ) + "\\" + file;

	return file;
#endif
}

int windowCloseListener()
{
	running = false;
	return 0;
}

void keyPressListener( int key, int action )
{
	if( !running )
		return;

	if( action == GLFW_PRESS )
	{
		int width = appWidth;
		int height = appHeight;

		switch (key)
		{
		case GLFW_KEY_ESC:
			running = false;
			break;
		case GLFW_KEY_F1:
			app->release();
			glfwCloseWindow();

			// Toggle fullscreen mode
			fullScreen = !fullScreen;

			if( fullScreen )
			{
				GLFWvidmode mode;
				glfwGetDesktopMode( &mode );

				float aspect = mode.Width / (float)mode.Height;
				if( (int)(aspect * 100) == 133 || (int)(aspect * 100) == 125 )  // Standard
				{
					width = 1280; height = 1024;
				}
				else if( (int)(aspect * 100) == 177 )                           // Widescreen 16:9
				{
					width = 1280; height = 720;
				}
				else if( (int)(aspect * 100) == 160 )                           // Widescreen 16:10
				{
					width = 1280; height = 800;
				}
				else                                                            // Unknown
				{
					// Use desktop resolution
					width = mode.Width; height = mode.Height;
				}
			}

			if( !setupWindow( width, height, fullScreen ) )
			{
				delete app;
				glfwTerminate();
				exit( -1 );
			}

			app->init();
			app->resize( width, height );
			break;
		default:
			app->keyPressEvent( key );
			break;
		}
	}

	if( key >= 0 )
		app->keyStateChange( key, action == GLFW_PRESS );
}

void mouseMoveListener( int x, int y )
{
	if( running )
		app->mouseMoveEvent( x - mousePosX, y - mousePosY );

	mousePosX = x;
	mousePosY = y;
}

bool setupWindow( int width, int height, bool fullscreen )
{
	// Create OpenGL window
	if( !glfwOpenWindow( width, height, 8, 8, 8, 8, 24, 8, fullscreen ? GLFW_FULLSCREEN : GLFW_WINDOW ) )
	{
		glfwTerminate();
		return false;
	}

	glfwSetWindowTitle( caption );

	// Disable vertical synchronization
	glfwSwapInterval( 0 );

	// Set listeners
	glfwSetWindowCloseCallback( windowCloseListener );
	glfwSetKeyCallback( keyPressListener );
	glfwSetMousePosCallback( mouseMoveListener );

	return true;
}

int main( int argc, char *argv[] )
{
	// Initialize GLFW
	glfwInit();

	if( !setupWindow( appWidth, appHeight, fullScreen ) )
		return -1;

	// Initalize application and engine
	app = new Application( 
		generatePath( argv[0], "../Content" ) + "|" + 
		generatePath( argv[0], "../../../Extensions/Sound/Sample/Content" ) );

	if( !app->init() )
	{
		// Fake message box
		glfwCloseWindow();
		glfwOpenWindow( 800, 16, 8, 8, 8, 8, 24, 8, GLFW_WINDOW );
		glfwSetWindowTitle( "Unable to initalize engine - Make sure you have an OpenGL 2.0 compatible graphics card" );
		double startTime = glfwGetTime();
		while( glfwGetTime() - startTime < 5.0 ) {}  // Sleep

		std::cout << "Unable to initalize engine" << std::endl;
		std::cout << "Make sure you have an OpenGL 2.0 compatible graphics card";

		app->release();
		delete app;
		glfwTerminate();

		return -1;
	}

	app->resize( appWidth, appHeight );
	glfwDisable( GLFW_MOUSE_CURSOR );

	running = true;

	double lastFrame = glfwGetTime();
	double time;

	// Game loop
	while( running )
	{
		time = glfwGetTime();

		// Render
		app->mainLoop( (float)(time - lastFrame) );
		glfwSwapBuffers();

		lastFrame = time;
	}

	glfwEnable( GLFW_MOUSE_CURSOR );

	// Quit
	app->release();
	delete app;
	glfwTerminate();

	return 0;
}
