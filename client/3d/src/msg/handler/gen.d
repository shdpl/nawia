module msg.handler.gen;

import std.traits;

public import msg.msg,
	msg.handler.handler;

template MsgHandlerGen(string MSG, Args...) {
	const char[] MsgHandlerGen = "class MsgHandler"~MSG~" : MsgHandler {"
			~"static this() {}"
			~"override bool msgHandle() {"
				~"return true;"
			~"}"
		
		~"}";
	
}