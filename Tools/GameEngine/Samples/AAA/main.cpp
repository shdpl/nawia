// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// This file is part of the GameEngine developed at the 
// Lab for Multimedia Concepts and Applications of the University of Augsburg
//
// This software is distributed under the terms of the Eclipse Public License v1.0.
// A copy of the license may be obtained at: http://www.eclipse.org/legal/epl-v10.html
//
// ****************************************************************************************
//

// ****************************************************************************************
//
// Advanced Agent Animation
//
// -------------------------
// Copyright (C) 2010 Ionut Damian
//
// ****************************************************************************************
//
// For information on how to use AAA, please read the readme.txt in the project folder 
// (ex: GameEngine\Samples\AAA\readme.txt) or check out the website at: 
// http://mm-werkstatt.informatik.uni-augsburg.de/projects/aaa/
//
// ****************************************************************************************
#include <windows.h>
#include <iostream>
#include <GLFW/glfw.h>
#include "app.h"

// Configuration
#ifdef VERSION_HAS_BAYESNET
const char *caption = "AAA +Culture v";
const int caption_len = 14;
#else
const char *caption = "AAA v";
const int caption_len = 5;
#endif
char title[caption_len + APP_VERSION_LEN];

const int appWidth = 1024;
const int appHeight = 768;
static bool fullScreen = false;
const char* sceneFile = 0; 
const char* splashScreenFile = "SplashScreen.tga";
const int antiAlias = 0;
const bool vsync = false;


bool setupWindow( int, int, bool );
static bool running;
static double t0;
static int mx0, my0;
static int mw0; // mouse wheel
static Application *app;

#ifdef MEMORYCHECK
#include <vld.h>
#endif

int GLFWCALL windowCloseListener()
{
	running = false;
	return 0;
}

void GLFWCALL windowResizeListener(int width, int height)
{
	if (app) app->resize(width, height);
}

void GLFWCALL keyPressListener( int key, int action )
{
	if( !running ) return;

	if( action == GLFW_PRESS )
	{
		int width = appWidth, height = appHeight;
		
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

			// a full screen resolution doesn't work at the moment
			// only 800x600 fullscreen is working
			if( fullScreen )
			{
				GLFWvidmode mode;
				glfwGetDesktopMode( &mode );	
				// Use desktop resolution
				width = mode.Width; height = mode.Height;
			}
			
			if( !setupWindow( width, height, fullScreen ) )
			{
				glfwTerminate();
				exit( -1 );
			}
			
			app->init(sceneFile);
			app->resize( width, height );
			t0 = glfwGetTime();
			break;
		}
	}

	if( key >= 0 ) app->keyPressEvent( key, action == GLFW_PRESS );
}

void GLFWCALL charListener( int key, int action )
{
	//app->charPressed(key, action);
}


void GLFWCALL mouseMoveListener( int x, int y )
{
	if( !running )
	{
		mx0 = x; my0 = y;
		return;
	}	

	app->mouseMoveEvent( (float)(x - mx0), (float)(my0 - y) );
	mx0 = x; my0 = y;
}

void GLFWCALL mouseButtonListener( int button, int action )
{
	if( !running ) return;

	app->mouseClickEvent(button, action, mx0 / (float)appWidth, (appHeight - my0) / (float)appHeight);
}

void GLFWCALL mouseWheelListener(int position)
{
	/*if( !running )
	{
		mw0 = position;
		return;
	}	

	app->mouseWheelChanged( mw0 - position );
	mw0 = position;*/
}


bool setupWindow( int width, int height, bool fullscreen )
{
	//Set AA
	if(antiAlias > 0)
		glfwOpenWindowHint(GLFW_FSAA_SAMPLES, antiAlias);

	// Create OpenGL window
	if( !glfwOpenWindow( width, height, 8, 8, 8, 8, 24, 8, fullscreen ? GLFW_FULLSCREEN : GLFW_WINDOW ) )
	{
		glfwTerminate();
		return false;
	}

	//title = (char *)malloc(32 * sizeof(char));
	memcpy( title, caption, caption_len);
	memcpy( title + caption_len, APP_VERSION, APP_VERSION_LEN );
	memcpy( title + caption_len + APP_VERSION_LEN, "\0", 1 );

	if( !fullscreen ) glfwSetWindowTitle( title );
	
	// Disable vertical synchronization
	glfwSwapInterval( 0 );

	// Set listeners
	glfwSetWindowCloseCallback( windowCloseListener );
	glfwSetWindowSizeCallback( windowResizeListener );
	glfwSetKeyCallback( keyPressListener );
	glfwSetCharCallback( charListener );
	glfwSetMousePosCallback( mouseMoveListener );
	glfwSetMouseButtonCallback( mouseButtonListener );
	glfwSetMouseWheelCallback( mouseWheelListener );

	return true;
}

int main(int argc, char** argv)
{
	return WinMain(0,0,LPSTR(argv[1]),0);
}

int WINAPI WinMain(	HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow )
{
	// Initialize GLFW
	glfwInit();
	if( !setupWindow( appWidth, appHeight, fullScreen ) ) return -1;


	// ------- loading screen ----------

	glEnable(GL_TEXTURE_2D);

	GLuint texture;
	glGenTextures(1, &texture);
	glBindTexture(GL_TEXTURE_2D, texture);

	glfwLoadTexture2D(splashScreenFile, GLFW_BUILD_MIPMAPS_BIT);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	
    glBegin(GL_QUADS);
		glTexCoord2f(0.f, 0.f); glVertex3f(-1.f, -1.f, 0.f);   
        glTexCoord2f(1.f, 0.f); glVertex3f( 1.f, -1.f, 0.f);   
        glTexCoord2f(1.f, 1.f); glVertex3f( 1.f,  1.f, 0.f);  
        glTexCoord2f(0.f, 1.f); glVertex3f(-1.f,  1.f, 0.f);   
    glEnd();	

	glfwSwapBuffers();	//paint the screen

	//-----------------------------


	GLFWvidmode desktopMode;
	glfwGetDesktopMode( &desktopMode );
	
	sceneFile = lpCmdLine;
	// Initalize application and engine
	app = new Application();//(desktopMode.Width, desktopMode.Height);
	if ( !app->init(sceneFile) )
	{
		// Fake message box
		glfwCloseWindow();
		glfwOpenWindow( 800, 16, 8, 8, 8, 8, 24, 8, GLFW_WINDOW );
		glfwSetWindowTitle( "Unable to initalize engine - Make sure you have an OpenGL 2.0 compatible "
			"graphics card and have specified a valid GameEngine scene" );
		glfwSleep( 5 );
		
		std::cout << "Unable to initalize engine" << std::endl;
		std::cout << "Make sure you have an OpenGL 2.0 compatible graphics card";
		glfwTerminate();
		return -1;
	}
	app->resize( appWidth, appHeight );

	//glfwDisable( GLFW_MOUSE_CURSOR );

	glDeleteTextures(1, &texture);

	int frames = 0;
	float fps = 30.0f;
	t0 = glfwGetTime();
	running = true;

	//Set vsync
	if(vsync)
		glfwSwapInterval(2); // 2 = ON

	// Game loop
	while( running )
	{
		// Calc FPS
		++frames;
		if( frames >= 3 )
		{
			double t = glfwGetTime();
			fps = frames / (float)(t - t0);
			frames = 0;
			t0 = t;
		}

		// Render
		app->update(fps);
		glfwSwapBuffers();
	}

	//glfwEnable( GLFW_MOUSE_CURSOR );

	// Quit	
	app->release();
	delete app;
	glfwCloseWindow();
	glfwTerminate();

	return 0;
}

