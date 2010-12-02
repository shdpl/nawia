module window.glfw;

import window.window;

class WindowGLFW : Window {
	private string title;
	private CordScreen position;
	private MsgGen!"WindowOpen" evOpen;
}