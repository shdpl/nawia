#include <iostream>
#include <GLFW/glfw.h>
#include "DosenApp.h"

// Configuration
const char *caption = "Dosenwerfen";
const int appWidth = 800;
const int appHeight = 600;
static bool fullScreen = false;
const char* sceneFile = 0; 


bool setupWindow( int, int, bool );
static bool running;
static double t0;
static int mx0, my0;
static DemoApp *app;

#ifdef MEMORYCHECK
#include <vld.h>
#endif

int windowCloseListener()
{
	running = false;
	delete app;
	return 0;
}


void keyPressListener( int key, int action )
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
		case GLFW_KEY_SPACE:
			app->keyPress( key, true );
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
		default:
			app->keyPress( key, true );
		}
	}

	if( key >= 0 ) app->keyPress( key, action == GLFW_PRESS );
}


void mouseMoveListener( int x, int y )
{
	if( !running )
	{
		mx0 = x; my0 = y;
		return;
	}

	app->mouseMoved( (float)(x - mx0), (float)(my0 - y) );
	mx0 = x; my0 = y;
}


bool setupWindow( int width, int height, bool fullscreen )
{
	// Create OpenGL window
	if( !glfwOpenWindow( width, height, 8, 8, 8, 8, 24, 8, fullscreen ? GLFW_FULLSCREEN : GLFW_WINDOW ) )
	{
		glfwTerminate();
		return false;
	}

	if( !fullscreen ) glfwSetWindowTitle( caption );
	
	// Disable vertical synchronization
	glfwSwapInterval( 0 );

	// Set listeners
	glfwSetWindowCloseCallback( windowCloseListener );
	glfwSetKeyCallback( keyPressListener );
	glfwSetMousePosCallback( mouseMoveListener );
	
	return true;
}


int main(int argc, char** argv)
{
	if ( argc < 2 )
	{
		std::cout << " No GameEngine File specified " << std::endl;
		return -1;
	}

	// Initialize GLFW
	glfwInit();
	if( !setupWindow( appWidth, appHeight, fullScreen ) ) return -1;
	
	GLFWvidmode desktopMode;
	glfwGetDesktopMode( &desktopMode );
	
	sceneFile = argv[1];
	// Initalize application and engine
	app = new DemoApp(desktopMode.Width, desktopMode.Height);
	if ( !app->init(sceneFile) )
	{
		// Fake message box
		glfwCloseWindow();
		glfwOpenWindow( 800, 16, 8, 8, 8, 8, 24, 8, GLFW_WINDOW );
		glfwSetWindowTitle( "Unable to initalize engine - Make sure you have an OpenGL 2.0 compatible "
			"graphics card and have specified a valid GameEngine scene" );
		double startTime = glfwGetTime();
		while( glfwGetTime() - startTime < 5.0 ) {}  // Sleep
		
		std::cout << "Unable to initalize engine" << std::endl;
		std::cout << "Make sure you have an OpenGL 2.0 compatible graphics card";
		glfwTerminate();
		return -1;
	}
	app->resize( appWidth, appHeight );

	glfwDisable( GLFW_MOUSE_CURSOR );

	int frames = 0;
	float fps = 30.0f;
	t0 = glfwGetTime();
	running = true;

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
		app->render();
		glfwSwapBuffers();
	}

	glfwEnable( GLFW_MOUSE_CURSOR );

	// Quit
	app->release();
	delete app;
	glfwTerminate();

	return 0;
}

