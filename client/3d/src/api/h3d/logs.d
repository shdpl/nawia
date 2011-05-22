module api.h3d.logs;

import std.range,
	std.conv;

import api.h3d.h3d,
	msg._time.idle,
	msg.listener;

struct H3DMessage {
	int level;
	float time;
	string content;
	}
	
class H3DLogs : InputRange!(H3DMessage), MsgListener!MsgTimeIdle {
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