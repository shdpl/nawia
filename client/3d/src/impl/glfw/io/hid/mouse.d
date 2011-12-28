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

module impl.glfw.io.hid.mouse;

public import
	std.typecons,
	io.hid.mouse.mouse,
	std.datetime;

private import
	msg._io.hid.mouse.click,
	msg._io.hid.mouse.move,
	msg._frame.ready,
	msg.provider,
	msg.listener,
	util.singleton;
	
private import
	glfw;

package class Mouse : IMouse, IMsgProvider, IMsgListener {
	mixin Singleton!Mouse;
	mixin InjectMsgListener!MsgMouseClick _lstnrClick;
	mixin InjectMsgListener!MsgMouseMove _lstnrMove;
	mixin InjectMsgProvider!MsgFrameReady _prvdrReady;
	private CordsScreen _pos;
	
	
	public:
	void onClick(int button, int action) {
		_lstnrClick.deliver(MsgMouseClick( _pos,
				cast(IMouse.Button)button, cast(IMouse.Action)action));
	}
	
	void onMove(int x, int y) {
		CordsScreen newPos = CordsScreen(x, y);
		_lstnrMove.deliver(MsgMouseMove(_pos, newPos));
		_pos = newPos;
	}
	
	@property {
		void cursorHidden(bool val) {
			if (val)
				glfwDisable(GLFW_MOUSE_CURSOR);
			else
				glfwEnable(GLFW_MOUSE_CURSOR);
		}
	}
	
	void handle(Variant msg) {
		assert(msg.type == typeid(MsgFrameReady));
		int x, y;
		glfwGetMousePos(&x, &y);
		if (x != _pos.x || y != _pos.y)
			onMove(x, y);
	}
	
	//TODO: glfwSetMouseWheelCallback
	
	private:
	this() {}
	
	void init() {
		int __tmp1, __tmp2;
		glfwGetMousePos(&__tmp1, &__tmp2);
		_pos = CordsScreen(__tmp1, __tmp2);
		// listen for init, and then register
		_lstnrClick.register(this);
		glfwSetMouseButtonCallback(&callbackClick);
		_lstnrMove.register(this);
		_prvdrReady.register(this);
	}
	
	void dispose()
	{
		_lstnrClick.unregister(this);
		_lstnrMove.unregister(this);
		_prvdrReady.unregister(this);
	}
}

void callbackClick(int button, int action) {
	Mouse().onClick(button, action);
}