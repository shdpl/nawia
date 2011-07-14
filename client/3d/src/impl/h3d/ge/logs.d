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

module ge.logs;

import std.range,
	std.conv;

import h3d,
	msg._time.idle,
	msg.listener;

struct H3DMessage {
	int level;
	float time;
	string content;
	}
	
class H3DLogs : InputRange!(H3DMessage), IMsgListener!MsgTimeIdle {
	private:
	H3DMessage _current;
	mixin InjectMsgProvider!MsgTimeIdle _idleProvider;
	
	public:
	@property uint logLevel() {
		return to!uint(h3dGetOption(H3DOptions.List.MaxLogLevel));
	}
	
	@property void logLevel(uint level) {
		h3dSetOption(H3DOptions.List.MaxLogLevel, level);
	}
	
	override H3DMessage front() {
		return _current;
	}
	
	override void popFront() {
		getMsg();
	}
	
	override bool empty() {
		return _current.content.empty;
	}
	
	override H3DMessage moveFront() {
		assert(false, "not implemented");
		return _current;
	}
	
	override int opApply(int delegate(ref H3DMessage) dg) {
		int res;
		for(; !empty; popFront()) {
			auto front = front;
			res = dg(front);
			if(res) return res;
			}
		return res;
	}
	
	override int opApply(int delegate(ref size_t, ref H3DMessage) dg) {
		int res;
		
		size_t i = 0;
		for(; !empty; popFront()) {
			auto front = front;
			res = dg(i, front);
			if(res) break;
			i++;
			}
		return res;
	}
	
	size_t capacity() {
		return to!size_t(h3dGetOption(H3DOptions.List.MaxNumMessages));
	}
	
	void reserve(size_t elements) {
		h3dSetOption(H3DOptions.List.MaxNumMessages, elements);
	}
	
	private:
	void getMsg() {
		with(_current) {
			content = h3dGetMessage(&level, &time);
			}
	}
}
