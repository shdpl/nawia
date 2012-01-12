module ee.map.obsolete;

public import
	ex.ex;

class ExMapObsolete : Ex {
	this() {
		this("");
	}
	
	this(string msg) {
		super("This map needs to be upgraded by using the latest map editor version to be able to load correctly. "~msg);
	}
}