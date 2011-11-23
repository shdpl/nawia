module ex.ge.res.map;

public import ex.ex;

class ExResMap : Ex {
	this() {
		this("");
	}
	
	this(string msg) {
		super("Could not map resource: " ~ msg);
	}
}