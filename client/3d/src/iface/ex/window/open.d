module ex.window.open;

public import std.exception;

class ExWindowOpen : Exception {
	this() {
		this("");
	}
	
	this(string msg) {
		super("Could not open window: " ~ msg);
	}
}