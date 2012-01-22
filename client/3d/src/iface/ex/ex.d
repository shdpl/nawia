module ex.ex;

public import std.exception;
public import std.conv : text, to;

class Ex : Exception {
	this() {
		this("");
	}
	
	this(string msg, string file = __FILE__, size_t line = __LINE__)
	{
//		debug asm {int 3;}
		super(to!string(file)~"("~to!string(line)~") "~"Exception occured: "~to!string(msg));
	}
}