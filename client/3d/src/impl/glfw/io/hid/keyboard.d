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

module impl.glfw.api.impl.glfw.keyboard;

import io.hid.keyboard.keyboard;

private import
	std.traits;

private import
	msg.provider,
	msg._io.hid.keyboard.press,
	type.cords.screen,
	impl.glfw.glfw;

package class Keyboard: IKeyboard, IMsgProvider {
	mixin Singleton!Keyboard;
	mixin InjectMsgListener!MsgKeyPress _lstnrPress;
	CordsScreen _pos;
	
	
	public:
	@property {
		void disableSystemKeys(bool val) {
			if (val)
				glfwDisable(GLFW_SYSTEM_KEYS);
			else
				glfwEnable(GLFW_SYSTEM_KEYS);
		}
	}
	
	void onChar(int character, int action) {
		_lstnrPress.deliver(MsgKeyPress(
				IKeyboard.Key(cast(dchar)character),
				cast(IKeyboard.KeyAction)action));
	}
	
	void onKey(int key, int action) { //FIXME: think about this events
//		foreach(member; EnumMembers!(IKeyboard.KeySpecial)) {
//			if (key == member) {
				_lstnrPress.deliver(MsgKeyPress(
					IKeyboard.Key(cast(IKeyboard.KeySpecial)key),
					cast(IKeyboard.KeyAction)action));
//				break;
//			}
//		}
		
	}
	
	private:
	this() {}
	
	void init() {
		glfwEnable(GLFW_KEY_REPEAT);
		
		_lstnrPress.register(this);
		glfwSetCharCallback(&callbackChar);
		glfwSetKeyCallback(&callbackKey);
	}
	
	void dispose()
	{
		glfwSetCharCallback(null);
		glfwSetKeyCallback(null);
		_lstnrPress.unregister(this);
	}
}

void callbackChar(int action, int character) {
	Keyboard().onChar(character, action);
}

void callbackKey(int action, int key) {
	Keyboard().onKey(key, action);
}