module window.glfw;

import std.conv;

import glfw;

import window.window;
import screen.cords;


class WindowGLFW : Window
{
	private string _title;
	private CordsScreen _position;
	private WindowProperties _props;
	
	public:
	
	this(WindowProperties hints)
	{
		int __tmp_i1, __tmp_i2;
		
		if (GL_FALSE == glfwInit()) {
			
		}
		glfwDisable(GLFW_AUTO_POLL_EVENTS);
		
		applyHints(hints);
		with(hints)
			glfwOpenWindow(size.x, size.y,
				rgb[0], rgb[1], rgb[2],
				alpha, depth, stencil, GLFW_WINDOW);
		
		_props = new WindowProperties();
		glfwGetWindowSize(&__tmp_i1, &__tmp_i2);
		_props.size = new CordsScreen(__tmp_i1, __tmp_i2);
	}
	
	~this()
	{
		glfwCloseWindow();
		glfwTerminate();
	}
	
	override void title(in string title) {
		_title = title;
		glfwSetWindowTitle(title.dup.ptr);	// TODO: wrong bindings?
	}
	
	override string title() {
		return _title;
	}
	
	override bool focused() {
		return GL_TRUE == glfwGetWindowParam(GLFW_ACTIVE);
	}
	
	override bool stereo() {
		return GL_TRUE == glfwGetWindowParam(GLFW_STEREO);
	}
	
	override bool focused() {
		return GL_TRUE == glfwGetWindowParam(GLFW_ACTIVE);
	}
	
	override bool stereo() {
		return GL_TRUE == glfwGetWindowParam(GLFW_STEREO);
	}
	
	override bool resizable() {
		return GL_TRUE != glfwGetWindowParam(GLFW_WINDOW_NO_RESIZE);
	}
	
	override bool iconified() {
		return GL_TRUE == glfwGetWindowParam(GLFW_ICONIFIED);
	}
	
	override void iconified(bool state) {
		if (iconified() != state)
			state ? glfwIconifyWindow() : glfwRestoreWindow();
	}
	
	override uint refreshRate() {
		return glfwGetWindowParam(GLFW_REFRESH_RATE);
	}
	
	override ubyte[3] bitsRGB() {
		ubyte[3] ret;
		ret[0] = to!ubyte(glfwGetWindowParam(GLFW_RED_BITS));
		ret[1] = to!ubyte(glfwGetWindowParam(GLFW_GREEN_BITS));
		ret[2] = to!ubyte(glfwGetWindowParam(GLFW_BLUE_BITS));
		return ret;
	}
	
	override ubyte bitsAlpha() {
		return to!ubyte(glfwGetWindowParam(GLFW_ALPHA_BITS));
	}
	
	override ubyte[3] bitsAccumRGB() {
		ubyte[3] ret;
		ret[0] = to!ubyte(glfwGetWindowParam(GLFW_ACCUM_RED_BITS));
		ret[1] = to!ubyte(glfwGetWindowParam(GLFW_ACCUM_GREEN_BITS));
		ret[2] = to!ubyte(glfwGetWindowParam(GLFW_ACCUM_BLUE_BITS));
		return ret;
	}
	
	override ubyte bitsAccumAlpha() {
		return to!ubyte(glfwGetWindowParam(GLFW_ACCUM_ALPHA_BITS));
	}
	
	override ubyte bitsStencil() {
		return to!ubyte(glfwGetWindowParam(GLFW_STENCIL_BITS));
	}
	
	override ubyte bitsDepth() {
		return to!ubyte(glfwGetWindowParam(GLFW_DEPTH_BITS));	
	}
	
	override ubyte auxBufNo() {
		return to!ubyte(glfwGetWindowParam(GLFW_AUX_BUFFERS));
	}
	
	override ubyte FSAASamplesNo() {
		return to!ubyte(glfwGetWindowParam(GLFW_FSAA_SAMPLES));
	}
	
	override CordsScreen size() {
		int tmp1, tmp2;
		glfwGetWindowSize(&tmp1, &tmp2);
		return new CordsScreen(tmp1, tmp2);
	}
	override void size(CordsScreen size) {
		glfwSetWindowSize(size.x, size.y);
	}
	
	void addListenerClose()
	void delListenerClose();
	
	void addListenerResize();
	void delListenerResize();
	
	void addListenerRefresh();
	void delListenerRefresh();
	
	override void swapBuffers() {
		glfwSwapBuffers();
	}
	
	private void applyHints(in WindowProperties p) {
		with (p) {
			glfwOpenWindowHint(GLFW_REFRESH_RATE, refresh_rate);
			glfwOpenWindowHint(GLFW_ACCUM_RED_BITS, accum_rgb[0]);
			glfwOpenWindowHint(GLFW_ACCUM_GREEN_BITS, accum_rgb[1]);
			glfwOpenWindowHint(GLFW_ACCUM_BLUE_BITS, accum_rgb[2]);
			glfwOpenWindowHint(GLFW_ACCUM_ALPHA_BITS, accum_alpha);
			//glfwOpenWindowHint(GLFW_AUX_BUFFERS, );
			glfwOpenWindowHint(GLFW_STEREO, stereo);
			glfwOpenWindowHint(GLFW_WINDOW_NO_RESIZE, !resizable);
			glfwOpenWindowHint(GLFW_FSAA_SAMPLES, FSAA_samples);
			glfwOpenWindowHint(GLFW_OPENGL_VERSION_MAJOR, ogl_ver[0]);
			glfwOpenWindowHint(GLFW_OPENGL_VERSION_MINOR, ogl_ver[1]);
			glfwOpenWindowHint(GLFW_OPENGL_FORWARD_COMPAT, ogl_ver[0]>=3);
			debug(glfw)
				glfwOpenWindowHint(GLFW_OPENGL_DEBUG_CONTEXT, GL_TRUE);
			version(profile)
				glfwOpenWindowHint(GLFW_OPENGL_PROFILE, GL_TRUE);
		}
	}
	
}