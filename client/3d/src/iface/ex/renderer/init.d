module ex.renderer.init;

public import ex.ex;

class ExRendererInit : Ex {
	this() {
		this("");
	}
	
	this(string msg) {
		super("Could not initialize renderer: " ~ msg);
	}
}