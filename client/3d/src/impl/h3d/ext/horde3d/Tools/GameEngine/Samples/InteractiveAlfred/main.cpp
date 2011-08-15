#include "OpenGlWindow.h"
#include "AlfredApp.h"

#ifdef MEMORYCHECK
#include <vld.h>
#endif

int width = 800;
int height = 600;

int WINAPI WinMain(	HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow )
{
	if (!lpCmdLine || strlen(lpCmdLine)<=0)
	{
#ifdef UNICODE
		MessageBox(NULL, L"You have to specify a GameEngine file as argument", L"Info", MB_OK | MB_ICONINFORMATION);
#else
		MessageBox(NULL, "You have to specify a GameEngine file as argument", "Info", MB_OK | MB_ICONINFORMATION);
#endif
		return -1;
	}

	// Creates an OpenGL Context and initializes the game engine
	OpenGLWindow* glWindow = new OpenGLWindow("Alfred", width, height);
	if ( !glWindow->createWindow())
	{		
#ifdef UNICODE
		MessageBox(NULL, L"Error creating OpenGLWindow", L"Error", MB_OK | MB_ICONWARNING);
#else
		MessageBox(NULL, "Error creating OpenGLWindow", "Error", MB_OK | MB_ICONWARNING);
#endif
		delete glWindow;
		return -1;
	}
	AlfredApp* app = new AlfredApp();
	if (!app->init(lpCmdLine))
	{
#ifdef UNICODE
		MessageBox(NULL, L"Error initializing GameEngine", L"Info", MB_OK | MB_ICONINFORMATION);
#else
		MessageBox(NULL, "Error initializing GameEngine", "Info", MB_OK | MB_ICONINFORMATION);
#endif
		delete app;
		delete glWindow;
		return -1;
	}

	// Register Keyboard callback
	glWindow->setRenderCB(AlfredApp::renderCb, app);
	glWindow->setKeyboardCB(AlfredApp::keyboardCb);
	glWindow->setMouseCB(AlfredApp::mouseCb);
	glWindow->setResizeCB(AlfredApp::resizeCb);
	AlfredApp::resizeCb(width, height, app);
	// Run Event Loop	
	while( app->isRunning() && glWindow->isRunning() )
	{		
		// Update OpenGL Window
		glWindow->paintGL();
		MSG msg;
		while( PeekMessage( &msg, 0x0, 0, 0, PM_NOREMOVE ) == TRUE)
		{
			if (GetMessage(&msg, NULL, 0,0))				
			{
				TranslateMessage( &msg );
				DispatchMessage( &msg );
			}
			else
			{
				break;
			}
		}
	}	
	// Release ACOSAS <-- ????
	delete app;
	// Delete OpenGL Window
	delete glWindow;
	return 0;
}

int main(int argc, char** argv)
{
	if (argc>1)
		return WinMain(0,0,argv[1],0);
	else
		return WinMain(0,0,0,0);
}