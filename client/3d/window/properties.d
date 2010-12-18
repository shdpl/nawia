module window.properties;

public import screen.cords;


enum WindowMode { NORMAL, FULLSCREEN, MINIMIZED };

class WindowProperties	//TODO: types in class vs struct
{
	CordsScreen size;
	WindowMode mode = WindowMode.NORMAL;
	
	ubyte[3] rgb = 0;
	ubyte alpha = 0;
	ubyte depth = 0;
	ubyte stencil = 0;
	
	ubyte[3] accum_rgb = 0;
	ubyte accum_alpha = 0;

	ubyte FSAA_samples = 0;
	
	bool stereo = false;
	bool resizable = true;
	
	ubyte refresh_rate = 0;
	
	ubyte[2] ogl_ver = [2,1];
}