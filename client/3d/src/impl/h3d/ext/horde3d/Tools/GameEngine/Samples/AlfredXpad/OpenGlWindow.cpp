#include "OpenGLWindow.h"
#include <GameEngine/GameEngine.h>
#include <Horde3D/Horde3D.h>


#ifdef UNICODE
/// creates window with size width and height, windowName is displayed in title bar
OpenGLWindow::OpenGLWindow(const wchar_t* windowName /*= "OpenGL Window"*/, int width /*= 800*/, int height /*= 600*/, bool fullscreen /*=false*/) : 
m_hInstance(0), m_hWnd(0), m_hRC(0), m_windowWidth(width), m_windowHeight(height), m_fullScreen(fullscreen), m_keyboardCB(0), m_mouseCB(0), m_active(false),
m_resizeCB(0)
{ 
	m_appName = new wchar_t[wcslen(windowName)+1];
	wcscpy(m_appName, windowName);  
}
#else
/// creates window with size width and height, windowName is displayed in title bar
OpenGLWindow::OpenGLWindow(const char* windowName /*= "OpenGL Window"*/, int width /*= 800*/, int height /*= 600*/, bool fullscreen /*=false*/) :
m_hInstance(0), m_hWnd(0), m_hRC(0), m_hDC(0), m_windowWidth(width), m_windowHeight(height), m_fullScreen(fullscreen), m_keyboardCB(0), m_mouseCB(0), m_active(false), m_userData(0), m_renderCB(0),
m_resizeCB(0), m_running(true)
{ 
	m_appName = new char[strlen(windowName)+1];
	strcpy(m_appName, windowName);  
}
#endif

OpenGLWindow::~OpenGLWindow() 
{
	if( m_hDC && m_hRC )
	{
		if( wglMakeCurrent( 0x0, 0x0 ) ) 
			wglDeleteContext( m_hRC );	
	}
	// Restore Display Settings if we had fullscreen mode enabled
	if( m_fullScreen )
	{
		ChangeDisplaySettings( 0x0, 0 );
		//ShowCursor( true );
	}
	// Destroy the window
	if( m_hWnd )
	{
		DestroyWindow( m_hWnd );
		m_hWnd = 0x0;
	}
	// Clean Up remaining tasks
	UnregisterClass( m_appName, m_hInstance );
	delete [] m_appName;
}

/* Open GL specific methods */
void OpenGLWindow::paintGL()
{
	// Render scene
	if (m_renderCB)
		m_renderCB(m_userData);
	// Swap OpenGL Framebuffers
	SwapBuffers( m_hDC );
	// Handle Mouse Callback only if the window has focus
	if (m_active)
	{
		if (m_mouseCB)
		{
			POINT cPos;
			GetCursorPos( &cPos );
			//SetCursorPos( 160, 120 );	
			//m_mouseCB( (float)(cPos.x) - 160.0f, 120.0f - (float)cPos.y, m_userData);			
			//ShowCursor( false );
		}
	}
}


/* MS Windows specific methods */

/// creates the OpenGL context and the window
bool OpenGLWindow::createWindow() {

	WNDCLASS	wc;
	DWORD		dwExStyle;
	DWORD		dwStyle;
	RECT		windowRect;

	windowRect.left = (long)0;
	windowRect.right = (long)m_windowWidth;
	windowRect.top = (long)0;
	windowRect.bottom = (long)m_windowHeight;

	m_hInstance			= GetModuleHandle( 0x0 );
	wc.style			= CS_HREDRAW | CS_VREDRAW | CS_OWNDC;
	wc.lpfnWndProc		= (WNDPROC) WindowProc;
	wc.cbClsExtra		= 0;
	wc.cbWndExtra		= 0;
	wc.hInstance		= m_hInstance;
	wc.hIcon			= LoadIcon( 0x0 , IDI_WINLOGO );
	wc.hCursor			= LoadCursor( 0x0, IDC_ARROW );
	wc.hbrBackground	= 0x0;
	wc.lpszMenuName		= 0x0;
	wc.lpszClassName	= m_appName;

	if( !RegisterClass( &wc ) ) return false;

	if( m_fullScreen )
	{
		DEVMODE dmScreenSettings;
		memset( &dmScreenSettings, 0, sizeof( dmScreenSettings ) );
		dmScreenSettings.dmSize			= sizeof( dmScreenSettings );
		dmScreenSettings.dmPelsWidth	= m_windowWidth;
		dmScreenSettings.dmPelsHeight	= m_windowHeight;
		dmScreenSettings.dmBitsPerPel	= 32;
		dmScreenSettings.dmFields		= DM_BITSPERPEL | DM_PELSWIDTH | DM_PELSHEIGHT;

		// Try to change display settings
		if( ChangeDisplaySettings( &dmScreenSettings, CDS_FULLSCREEN ) != DISP_CHANGE_SUCCESSFUL )
			return false;

		dwExStyle = WS_EX_APPWINDOW;
		dwStyle = WS_POPUP;
	}
	else
	{
		dwExStyle = WS_EX_APPWINDOW | WS_EX_WINDOWEDGE;
		dwStyle = WS_OVERLAPPEDWINDOW;
	}
	AdjustWindowRectEx( &windowRect, dwStyle, false, dwExStyle );
	// Create window	
	if( !(m_hWnd = CreateWindowEx(
		dwExStyle,
		m_appName,
		m_appName,
		dwStyle |
		WS_CLIPSIBLINGS |
		WS_CLIPCHILDREN,
		0, 0,				// Window position
		windowRect.right - windowRect.left,
		windowRect.bottom - windowRect.top,
		0x0,
		0x0,
		m_hInstance,							
		0x0 )) )
	{
		return false;
	}	
	if( !(m_hDC = GetDC( m_hWnd )) )
		return false;
	// Init OpenGL rendering context
	int pixelFormat;

	static PIXELFORMATDESCRIPTOR pfd = 
	{
		sizeof( PIXELFORMATDESCRIPTOR ),			// Size of this pixel format descriptor
		1,											// Version number
		PFD_DRAW_TO_WINDOW |						// Format must support window
		PFD_SUPPORT_OPENGL |						// Format must support OpenGL
		PFD_DOUBLEBUFFER,							// Must support double buffering
		PFD_TYPE_RGBA,								// Request a RGBA format
		32,											// Select our color depth
		0, 0, 0, 0, 0, 0,							// Color bits ignored
		8,											// 8Bit alpha buffer
		0,											// Shift bit ignored
		0,											// No accumulation buffer
		0, 0, 0, 0,									// Accumulation bits ignored
		32,											// 32Bit z-buffer (depth buffer)  
		8,											// 8Bit stencil buffer
		0,											// No auxiliary buffer
		PFD_MAIN_PLANE,								// Main drawing layer
		0,											// Reserved
		0, 0, 0										// Layer masks ignored
	};

	if( !(pixelFormat = ChoosePixelFormat( m_hDC, &pfd )) ) 
	{
		return false;
	}

	if( !SetPixelFormat( m_hDC, pixelFormat, &pfd ) ) 
	{
		return false;
	}

	if( !(m_hRC = wglCreateContext( m_hDC )) ) 
	{
		return false;
	}

	if( !wglMakeCurrent( m_hDC, m_hRC) ) 
	{
		wglDeleteContext( m_hRC );
		return false;
	}

	// Initialize engine
	//Horde3D::init();
	SetWindowLongPtr(m_hWnd, GWL_USERDATA, (LONG_PTR) this);
	ShowWindow( m_hWnd, SW_SHOW );
	UpdateWindow(m_hWnd);
	SetForegroundWindow( m_hWnd );
	SetFocus( m_hWnd );
	// initialize context	
	return true;
}

void OpenGLWindow::resize(const int width, const int height) 
{
	if (m_resizeCB)
		m_resizeCB(width, height, m_userData);
	// Set virtual camera parameters
	//Horde3D::setCameraParam( PrimeTimeCam, CameraNodeParams::Aspect, (float)width / height );
}

/// window related user events can be handeled in this routine 
/// with access to all class members
LONG WINAPI OpenGLWindow::WndProc( HWND    hWnd, 
								  UINT    uMsg, 
								  WPARAM  wParam, 
								  LPARAM  lParam)
{    
	RECT rect;
	switch (uMsg) 
	{  
	case WM_ACTIVATE:		
		if( !HIWORD( wParam ) ) m_active = true;
		else m_active = false;
		return 0;
	case WM_KILLFOCUS:		
		m_active = false;
		return 0;		
	case WM_SETFOCUS:		
		m_active = true;
		return 0;		
	case WM_CLOSE:
		m_running = false;
		PostQuitMessage( 0 );
		return 0;     
	case WM_DESTROY:
		DestroyWindow(hWnd);
		PostQuitMessage( 0 );
		return 0;    
	case WM_SIZE:
		if (!m_fullScreen)
		{
			GetClientRect(hWnd, &rect);
			m_windowWidth = rect.right;
			m_windowHeight = rect.bottom;
		}
		resize(m_windowWidth, m_windowHeight);
		return 0;
	case WM_CHAR:
	case WM_KEYDOWN: 
		if(m_keyboardCB) m_keyboardCB((unsigned int) wParam, true, m_userData);
		return 0;     
	case WM_KEYUP:
		if (wParam == VK_F1)
			showFullScreen(!m_fullScreen);
		else if(m_keyboardCB) m_keyboardCB((unsigned int) wParam, false, m_userData);
		return 0;
	case WM_LBUTTONUP:
		if (m_mouseCB)
		{
			POINT cPos;
			GetCursorPos( &cPos );
			ScreenToClient(hWnd, (LPPOINT)&cPos);
			m_mouseCB( (float)cPos.x, (float)cPos.y, m_userData);			
		}
		return 0;
	default: 
		return DefWindowProc (hWnd, uMsg, wParam, lParam);         
	}    
}


void OpenGLWindow::showFullScreen(bool fullScreen)
{
	if( !m_fullScreen )
	{
		m_fullScreen = true;
		DEVMODE dmScreenSettings;
		EnumDisplaySettings( 0x0, ENUM_CURRENT_SETTINGS, &dmScreenSettings );		
		m_windowWidth	= dmScreenSettings.dmPelsWidth;
		m_windowHeight = dmScreenSettings.dmPelsHeight	;
		// Try to change display settings
		if( ChangeDisplaySettings( &dmScreenSettings, CDS_FULLSCREEN ) != DISP_CHANGE_SUCCESSFUL )
			return;
		//ShowCursor( false );
		SetWindowLong( m_hWnd, GWL_STYLE, WS_POPUP );
		SetWindowPos( m_hWnd, HWND_TOPMOST, 0, 0, m_windowWidth, m_windowHeight, SWP_FRAMECHANGED | SWP_SHOWWINDOW );
	}
	else
	{
		m_fullScreen = false;
		ChangeDisplaySettings( 0x0, 0 );
		//ShowCursor( true );
		SetWindowLong( m_hWnd, GWL_STYLE, GetWindowLong( m_hWnd, GWL_STYLE ) | WS_OVERLAPPEDWINDOW );
		SetWindowPos( m_hWnd, HWND_NOTOPMOST, 0, 0, m_windowWidth, m_windowHeight, SWP_FRAMECHANGED | SWP_SHOWWINDOW );
		SetWindowLong( m_hWnd, GWL_STYLE, GetWindowLong( m_hWnd, GWL_STYLE ) | WS_OVERLAPPEDWINDOW );
	}
}

/// callback routine for window specific window events 
LONG WINAPI OpenGLWindow::WindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) { 

	LONG    lRet = 1;
	OpenGLWindow* glWnd = (OpenGLWindow*) GetWindowLongPtr(hWnd, GWL_USERDATA);
	if(glWnd)
		lRet = glWnd->WndProc(hWnd, uMsg, wParam, lParam);
	else {
		if(uMsg == WM_CREATE) {
			CREATESTRUCT* cs = (LPCREATESTRUCT) lParam;;
			glWnd = (OpenGLWindow*) cs->lpCreateParams;
			if(glWnd)
				lRet = glWnd->WndProc(hWnd, uMsg, wParam, lParam);
		}
		else
			lRet = DefWindowProc (hWnd, uMsg, wParam, lParam); 
	}
	return lRet;
}