#ifndef _OPENGL_WINDOW_
#define _OPENGL_WINDOW_

// this code is MS windows related
#include <windows.h>

class PerformanceTimer;

/* This class relizes an OpenGL window */
class OpenGLWindow 
{

public:

	/// declaration of keyboard callbacks
	typedef void (*KeyboardCB)(unsigned int param, bool pressed, void* userData);
	typedef void (*MouseCB)(float x, float y, void* userData);
	typedef void (*RenderCB) (void* userData);
	typedef void (*ResizeCB)(int width, int height);

#ifdef UNICODE
	/// creates window with size width and height, windowName is displayed in title bar
    OpenGLWindow(const wchar_t* windowName = L"OpenGL Window", int width = 800, int height = 600, bool fullscreen = false);
#else
	/// creates window with size width and height, windowName is displayed in title bar
    OpenGLWindow(const char* windowName = "OpenGL Window", int width = 800, int height = 600, bool fullscreen = false);
#endif

	~OpenGLWindow();

    /* Open GL specific methods */

	/// resize window
	virtual void resize(const int width, const int height);

	/// draws Open GL objects
    virtual void paintGL();

    /// creates the OpenGL context and the window
    bool createWindow();

	/// a keyboard callback function can be evoked if a pointer is passed to this method 
    void setKeyboardCB(KeyboardCB cb) { m_keyboardCB = cb; }

	/// a keyboard callback function can be evoked if a pointer is passed to this method 
    void setMouseCB(MouseCB cb) { m_mouseCB = cb; }

	/// a render callback function 
	void setRenderCB(RenderCB cb, void* userData = 0) {m_renderCB = cb; m_userData = userData;}

	/// a resize callback
	void setResizeCB(ResizeCB cb) {m_resizeCB = cb;}

	/// Show the window in fullscreen mode
	void showFullScreen(bool fullScreen);

	/// returns if the window is active
	bool active() {return m_active;}

protected:

    /* MS Windows specific methods */

	/// window related user events can be handeled in this routine 
    /// with access to all class members
	virtual LONG WINAPI WndProc(HWND, UINT, WPARAM, LPARAM); 

    // Variable definitions for MS Windows

	/// handle to the wondow
    HWND				m_hWnd; 

	HDC					m_hDC;

    /// OpenGL rendering context
    HGLRC				m_hRC; 

	/// Window Instance
	HINSTANCE			m_hInstance;

	/// Fullscreen flag
	bool				m_fullScreen;

    /// window name
#ifdef UNICODE
	wchar_t*			m_appName;
#else
	char*				m_appName;
#endif

	/// size of the window is stored here 
	int					m_windowWidth;
	int					m_windowHeight;

 	/// Keyboard Callback
	KeyboardCB			m_keyboardCB;
	/// Mouse Callback
	MouseCB				m_mouseCB;
	// RenderCB	
	RenderCB			m_renderCB;
	void*				m_userData;
	// ResizeCB	
	ResizeCB			m_resizeCB;

	///	if not active don't process callbacks
	bool				m_active;

private:

	/// static callback routine for window specific window events 
    static LONG WINAPI WindowProc(HWND, UINT, WPARAM, LPARAM); 
};

#endif