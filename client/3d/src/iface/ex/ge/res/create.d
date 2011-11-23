module ex.ge.res.create;

public import ex.ex;

class ExResCreate : Ex {
	this() {
		this("");
	}
	
	this(string msg) {
		super("Could not create resource: " ~ msg);
	}
}