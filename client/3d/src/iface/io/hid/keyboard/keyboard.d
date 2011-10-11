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

module io.hid.keyboard.keyboard;

public import
	std.variant;

public import
	io.hid.controller;

interface IKeyboard : IController {
	enum KeySpecial {
		UNKNOWN	= -1,
		SPACE	= 32,
		ESC		= 257,
		F1,
		F2,
		F3,
		F4,
		F5,
		F6,
		F7,
		F8,
		F9,
		F10,
		F11,
		F12,
		UP		= F12 + 14,
		DOWN,
		LEFT,
		RIGHT,
		SHIFT_L,
		SHIFT_R,
		CTRL_L,
		CTRL_R,
		ALT_L,
		ALT_R,
		TAB,
		ENTER,
		BACKSPACE,
		INSERT,
		DEL,
		PAGE_UP,
		PAGE_DOWN,
		HOME,
		END,
		KP_0,
		KP_1,
		KP_2,
		KP_3,
		KP_4,
		KP_5,
		KP_6,
		KP_7,
		KP_8,
		KP_9,
		KP_DIVIDE,
		KP_MULTIPLY,
		KP_SUBSTRACT,
		KP_ADD,
		KP_DECIMAL,
		KP_EQUAL,
		KP_ENTER,
		KP_NUM_LOCK,
		CAPS_LOCK,
		SCROLL_LOCK,
		PAUSE,
		SUPER_L,
		SUPER_R,
		MENU
	}
	
	enum KeyAction {
		RELEASE,
		PRESS
	}
	
	alias Algebraic!(dchar,KeySpecial) Key;
}
