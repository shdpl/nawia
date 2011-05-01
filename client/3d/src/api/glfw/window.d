/*
 * Copyright (C) 2010 Mariusz 'shd' Gliwiński.
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

module api.glfw.window;

import std.conv,
	std.stdio,
	std.signals;

import glfw;

import window.window,
	msg._window.close,
	msg._window.refresh,
	msg._window.resize;

 

package class WindowGLFW : Window
{
	private:
	static Window hInstance = null;
	string _title;
	CordsScreen _position;
	WindowProperties _props;
	mixin Signal!(MsgWindowClose) slotClose;
	mixin Signal!(MsgWindowRefresh) slotRefresh;
	mixin Signal!(MsgWindowResize) slotResize;
	
	
	public:
	
	override static Window getInstance(WindowProperties hints) {
		
		if (hInstance is null) {
			hInstance = new WindowGLFW(hints);
		}
		return hInstance;
	}
	
	override static void delInstance() {
		hInstance = null;
	}
	
	override void title(in string title) {
		_title = title;
		glfwSetWindowTitle(title);	// TODO: wrong bindings?
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
	
	override ColorRGB fmtMain() {
		return (new ColorRGB(
			to!ubyte(glfwGetWindowParam(GLFW_RED_BITS)),
			to!ubyte(glfwGetWindowParam(GLFW_GREEN_BITS)),
			to!ubyte(glfwGetWindowParam(GLFW_BLUE_BITS))
			));
	}
	
	override ubyte fmtAlpha() {
		return to!ubyte(glfwGetWindowParam(GLFW_ALPHA_BITS));
	}
	
	override ColorRGB fmtAccumMain() {
		return (new ColorRGB(
			to!ubyte(glfwGetWindowParam(GLFW_ACCUM_RED_BITS)),
			to!ubyte(glfwGetWindowParam(GLFW_ACCUM_GREEN_BITS)),
			to!ubyte(glfwGetWindowParam(GLFW_ACCUM_BLUE_BITS))
			));
	}
	
	override ubyte fmtAccumAlpha() {
		return to!ubyte(glfwGetWindowParam(GLFW_ACCUM_ALPHA_BITS));
	}
	
	override ubyte fmtStencil() {
		return to!ubyte(glfwGetWindowParam(GLFW_STENCIL_BITS));
	}
	
	override ubyte fmtDepth() {
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
	
	override void swapBuffers() {
		glfwSwapBuffers();
	}
	
	override WindowMode[] supportedModes() {
		WindowMode[] modes = new WindowMode[16];
		uint len = glfwGetVideoModes(cast(GLFWvidmode*)modes, modes.length);
		modes.length = len;
		return modes;
	}
	
	override WindowMode desktopMode() {
		WindowMode ret = new WindowMode;
		glfwGetDesktopMode(cast(GLFWvidmode*)&ret);
		return ret;
	}
	
	override bool setMsgListener( MsgListener!MsgWindowClose lstnr ) {
		_lstnrClose = lstnr;
		glfwSetWindowCloseCallback(!is(lstnr) ?
			cast(GLFWwindowclosefun)&onClose : null); /* TODO: better method? */
		return true;
	}
	
	override bool setMsgListener( MsgListener!MsgWindowResize lstnr ) {
		_lstnrResize = lstnr;
		glfwSetWindowSizeCallback(!is(lstnr) ?
			cast(GLFWwindowsizefun)&onResize : null); /* TODO: better method? */
		return true;
	}
	
	override bool setMsgListener( MsgListener!MsgWindowRefresh lstnr ) {
		_lstnrRefresh = lstnr;
		glfwSetWindowRefreshCallback(!is(lstnr) ?
			cast(GLFWwindowrefreshfun)&onRefresh : null); /* TODO: better method? */
		return true;
	}
	
	private:

	this(WindowProperties hints)
	{
		int __tmp_i1, __tmp_i2;
		
		glfwDisable(GLFW_AUTO_POLL_EVENTS);
			
		applyHints(hints);
		with(hints)
			glfwOpenWindow(size.x, size.y,
				rgb[0], rgb[1], rgb[2],
				alpha, depth, stencil, GLFW_WINDOW);
		
		_props = new WindowProperties();
		glfwGetWindowSize(&__tmp_i1, &__tmp_i2);
		_props.size = new CordsScreen(__tmp_i1, __tmp_i2);
		
		connect();
	}
	
	~this()
	{
		glfwCloseWindow();
	}

	extern(C) {	/* Warning! Methods prohibited, and fields might be unitialized */
		int onClose() {
			emit(); 
		}
	
		void onResize(int x, int y) {
			_lstnrResize();
		}
	
		void onRefresh() {
			//TODO:
		}
	}
	
	void applyHints(in WindowProperties p) {
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
			version(D_Coverage)
				glfwOpenWindowHint(GLFW_OPENGL_PROFILE, GL_TRUE);
		}
	}
	
}