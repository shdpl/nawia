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

private import
	std.conv,
	std.stdio,
	std.iterator,
	std.datetime,
	std.math;

import impl.glfw.glfw;

private import
	msg.provider,
	msg._window.close,
	msg._window.redraw,
	msg._window.resize,
	msg._frame.ready,
	msg._ee.world.init;
	
public import ge.window.window;

private import impl.glfw.ge.window.mode,
	ex.window.open;



package class Window: IWindow, IMsgProvider, IMsgListener
{
	mixin InjectMsgListener!MsgWindowClose _lstnrClose;
	mixin InjectMsgListener!MsgWindowRedraw _lstnrRedraw;
	mixin InjectMsgListener!MsgWindowResize _lstnrResize;
	mixin InjectMsgProvider!MsgFrameReady _prvdrReady;
	mixin InjectMsgProvider!MsgWorldInit _prvdrInit;
	mixin Singleton!Window;
	
	string _title;
	CordsScreen _position;
	WindowProperties _props;
	IWindowMode[] _windowModes;
	bool _frameReady;
	StopWatch _dFrame;
	TickDuration _dPredictableFrame;
	
	
	public:
	
	real fps;
	real fpsMax;
	real fpsMin;
	real fpsAvg;
	
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
	
	public void handle(Variant msg) {
		if (msg.type == typeid(MsgFrameReady)) {	//FIXME: peek before frameReady
			_dPredictableFrame += _dFrame.peek;
			_dPredictableFrame /= 2;
			
			if (_dFrame.peek() < _dPredictableFrame)
				MsgMediator().poll({return _dFrame.peek < _dPredictableFrame;});
			swapBuffers();
			
			updateFPS(_dFrame.peek);
			
			_dFrame.reset();
		} else if (msg.type == typeid(MsgWorldInit)) {
			_dFrame.start();
		}
	}
	
	private:
	this() {
		this(WindowProperties());
	}

	this(WindowProperties hints)
	{
		int __tmp_i1, __tmp_i2;
		
		//glfwInit();
		glfwDisable(GLFW_AUTO_POLL_EVENTS);
		
		with(hints)
			enforceEx!ExWindowOpen(0 != glfwOpenWindow(size.x, size.y,
				rgb[0], rgb[1], rgb[2],
				alpha, depth, stencil, status), text(hints));//FIXME: exception safety

		applyHints(hints);
		
		glfwGetWindowSize(&__tmp_i1, &__tmp_i2);
		_props.size = CordsScreen(__tmp_i1, __tmp_i2);
	}
	
	void init() {
		_lstnrClose.register(this);
		glfwSetWindowCloseCallback(&callbackClose);
		_lstnrRedraw.register(this);
		glfwSetWindowRefreshCallback(&callbackRefresh);
		_lstnrResize.register(this);
		glfwSetWindowSizeCallback(&callbackResize);
		_prvdrReady.register(this);
		_prvdrInit.register(this);
		_dPredictableFrame.length = _dPredictableFrame.ticksPerSec /50;
		fps = 50;
		fpsAvg = 50;
		fpsMax = real.min;
		fpsMin = real.max;
	}
	
	~this()
	{
		_lstnrClose.unregister(this);
		_lstnrRedraw.unregister(this);
		_lstnrResize.unregister(this);
		_prvdrReady.unregister(this);
		_prvdrInit.unregister(this);
		glfwCloseWindow();
		//glfwTerminate();
	}
	
	int onClose() {
		_lstnrClose.deliver(MsgWindowClose());
		return 1; //FIXME
	}
	void onResize(int y, int x) {
		_lstnrResize.deliver(MsgWindowResize(CordsScreen(x,y)));
	}
	void onRefresh() {
		_lstnrRedraw.deliver(MsgWindowRedraw());
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
	 
	void updateFPS(TickDuration td) {
			fps = 1_000 /td.msecs;
			fpsMax = fmax(fps, fpsMax);
			fpsMin = fmin(fps, fpsMin);
			fpsAvg += fps;
			fpsAvg /= 2;
	}
	
}

int callbackClose() {
	return Window().onClose();
}

void callbackResize(int x, int y) {
	Window().onResize(x, y);
}

void callbackRefresh() {
	Window().onRefresh();
}


