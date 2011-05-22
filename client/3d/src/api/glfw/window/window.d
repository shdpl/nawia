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

module api.glfw.window.window;

import std.conv,
	std.stdio,
	std.iterator;

import glfw;

import ge.window.window,
	msg.provider,
	msg._window.close,
	msg._window.refresh,
	msg._window.resize;

 

package class WindowGLFW : Window, MsgProvider!MsgWindowRefresh, MsgProvider!MsgWindowResize,
	MsgProvider!MsgWindowClose
{
	private:
	static Window hInstance = null;
	string _title;
	CordsScreen _position;
	WindowProperties _props;
	WindowMode[] _windowModes;
	mixin InjectMsgListener!MsgWindowClose _lstnrClose;
	mixin InjectMsgListener!MsgWindowRefresh _lstnrRefresh;
	mixin InjectMsgListener!MsgWindowResize _lstnrResize;
	
	
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
		return true == glfwGetWindowParam(GLFW_ACTIVE);
	}
	
	override bool stereo() {
		return true == glfwGetWindowParam(GLFW_STEREO);
	}
	
	override bool resizable() {
		return true != glfwGetWindowParam(GLFW_WINDOW_NO_RESIZE);
	}
	
	override bool iconified() {
		return true == glfwGetWindowParam(GLFW_ICONIFIED);
	}
	
	override void iconified(bool state) {
		if (iconified() != state)
			state ? glfwIconifyWindow() : glfwRestoreWindow();
	}
	
	override uint refreshRate() {
		return glfwGetWindowParam(GLFW_REFRESH_RATE);
	}
	
	override ColorRGB!ubyte fmtMain() {
		return (ColorRGB!ubyte(
			to!ubyte(glfwGetWindowParam(GLFW_RED_BITS)),
			to!ubyte(glfwGetWindowParam(GLFW_GREEN_BITS)),
			to!ubyte(glfwGetWindowParam(GLFW_BLUE_BITS))
			));
	}
	
	override ubyte fmtAlpha() {
		return to!ubyte(glfwGetWindowParam(GLFW_ALPHA_BITS));
	}
	
	override ColorRGB!ubyte fmtAccumMain() {
		return (ColorRGB!ubyte(
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
		if ( !is(_windowModes) ) {
			initModes();
			}
		return _windowModes;
	}
	
	override WindowMode desktopMode() {
		GLFWvidmode mode = new GLFWvidmode;
		glfwGetDesktopMode(mode);
		WindowMode ret; //TODO
		return ret;
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
		
		register(cast(MsgProvider!MsgWindowClose)this);
		register(cast(MsgProvider!MsgWindowResize)this);
		register(cast(MsgProvider!MsgWindowRefresh)this);
	}
	
	~this()
	{
		glfwCloseWindow();
	}

	extern(C) {	/* Warning! Methods prohibited, and fields might be unitialized */
		int onClose() {
			return 1;
		}
	
		void onResize(int x, int y) {
		}
	
		void onRefresh() {
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
				glfwOpenWindowHint(GLFW_OPENGL_DEBUG_CONTEXT, true);
			version(D_Coverage)
				glfwOpenWindowHint(GLFW_OPENGL_PROFILE, true);
		}
	}
	void initModes()
	 in { assert(!is(_windowModes)); }
	 body{
	 	GLFWvidmode vidModes;
		int cNewModes;
		int cModes = 16;
		do {
			cNewModes = glfwGetVideoModes(vidModes, cModes);
			} while (cNewModes < cModes);
		assert(cNewModes == cModes);
	}
	
}