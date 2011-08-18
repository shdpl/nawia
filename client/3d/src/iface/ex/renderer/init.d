module ex.renderer.init;

public import std.exception;

class ExRendererInit : Exception {
	this() {
		this("");
	}
	
	this(string msg) {
		super("Could not initialize renderer: " ~ msg);
	}
}