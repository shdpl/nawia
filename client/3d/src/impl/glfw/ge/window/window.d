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


module impl.glfw.ge.window.window;

import std.conv,
	std.stdio,
	std.iterator;

import impl.glfw.glfw;

import msg.provider,
	ge.window.msg.close,
	ge.window.msg.refresh,
	ge.window.msg.resize;
	
public import ge.window.window;

private import impl.glfw.ge.window.mode,
	ex.window.open;



package class Window: Singleton!Window, IWindow, IMsgProvider!MsgWindowRefresh, IMsgProvider!MsgWindowResize,
	IMsgProvider!MsgWindowClose
{
	private:
	string _title;
	CordsScreen _position;
	WindowProperties _props;
	IWindowMode[] _windowModes;
	mixin InjectMsgListener!MsgWindowClose _lstnrClose;
	mixin InjectMsgListener!MsgWindowRefresh _lstnrRefresh;
	mixin InjectMsgListener!MsgWindowResize _lstnrResize;
	
	
	public:
	
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
		return CordsScreen(tmp1, tmp2);
	}
	
	override void size(CordsScreen size) {
		glfwSetWindowSize(size.x, size.y);
	}
	
	override void swapBuffers() {
		glfwSwapBuffers();
	}
	
	override IWindowMode[] supportedModes() {
		if ( !is(_windowModes) ) {
			initModes();
			}
		return _windowModes;
	}
	
	override IWindowMode desktopMode() {
		GLFWvidmode mode = new GLFWvidmode;
		glfwGetDesktopMode(mode);
		IWindowMode ret = new GLFWWindowMode(mode);
		return ret;
	}
	
	this() {}

	this(WindowProperties hints)
	{
		int __tmp_i1, __tmp_i2;
		
		glfwDisable(GLFW_AUTO_POLL_EVENTS);
		
		with(hints)
			enforceEx!ExWindowOpen(glfwOpenWindow(size.x, size.y,
				rgb[0], rgb[1], rgb[2],
				alpha, depth, stencil, status), text(hints));//FIXME: exception safety
		
		applyHints(hints);
		
		glfwGetWindowSize(&__tmp_i1, &__tmp_i2);
		_props.size = CordsScreen(__tmp_i1, __tmp_i2);
		
		register(cast(IMsgProvider!MsgWindowClose)this);
		register(cast(IMsgProvider!MsgWindowResize)this);
		register(cast(IMsgProvider!MsgWindowRefresh)this);
	}
	
	~this()
	{
		unregister(cast(IMsgProvider!MsgWindowClose)this);
		unregister(cast(IMsgProvider!MsgWindowResize)this);
		unregister(cast(IMsgProvider!MsgWindowRefresh)this);
		glfwCloseWindow();
	}
	
	private:
	int onClose() {
		_lstnrClose.deliver(MsgWindowClose());
		return 1; //FIXME
	}
	void onResize(int x, int y) {
		_lstnrResize.deliver(MsgWindowResize(CordsScreen(x,y)));
	}
	void onRefresh() {
		_lstnrRefresh.deliver(MsgWindowRefresh());
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

extern(C) {
	int onClose() {
		return Window().onClose();
	}

	void onResize(int x, int y) {
		return Window().onResize(x, y);
	}
	
	void onRefresh() {
		return Window().onRefresh();
	}
}

