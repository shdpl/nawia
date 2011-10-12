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

module msg._io.hid.mouse.move;

public import
	io.hid.mouse.mouse,
	type.cords.screen,
	type.cuda.types;

private import
	msg.msg;

struct MsgMouseMove {
	//Msg _msg;
	//alias _msg this;
	
	CordsScreen newPos;
	int2 vector;	//FIXME: Vector!CordsScreen
	
	this(CordsScreen from, CordsScreen to) {
		newPos = to;
		vector.x = std.conv.to!int(to.x) - std.conv.to!int(from.x);
		vector.y = std.conv.to!int(to.y) - std.conv.to!int(from.y);
	}
	
	this(MsgMouseMove other) {
		//_msg = Msg(other._msg);
		newPos = other.newPos;
		vector = other.vector;
	}
}