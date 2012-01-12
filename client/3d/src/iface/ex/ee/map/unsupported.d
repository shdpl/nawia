module ee.map.unsupported;

public import
	ex.ex;

class ExMapUnsupported : Ex {
	this(uint ver)
	{
		super("Map version "~to!string(ver)~" is unsupported.");
	}
	
	this(string msg, string file = __FILE__, size_t line = __LINE__)
	{
		super(msg, file, line);
	}
}