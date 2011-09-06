module ex.ex;

public import std.exception;
public import std.conv : text;

class Ex : Exception {
	this() {
		this("");
	}
	
	this(string msg) {
		super("Exception occured: " ~ msg);
		debug asm {int 3;}
	}
}