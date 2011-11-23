module ex.renderer.option;

public import ex.ex;

class ExRendererOption : Ex {
	this() {
		this("");
	}
	
	this(string msg) {
		super("Could not set renderer option: " ~ msg);
	}
}