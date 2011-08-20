module ex.ex;

public import std.exception;

class Ex : Exception {
	this() {
		this("");
	}
	
	this(string msg) {
		super("Exception occured: " ~ msg);
	}
}