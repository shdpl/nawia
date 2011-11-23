module ex.ge.res.element.missing;

public import ex.ex;

class ExResElementMissing : Ex {
	this() {
		this("");
	}
	
	this(string msg) {
		super("Element is missing: " ~ msg);
	}
}