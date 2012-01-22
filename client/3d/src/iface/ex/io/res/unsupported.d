module ex.io.res.unsupported;

public import
	ex.ex;

class ExResUnsupported : Ex {
	this(string msg, string file = __FILE__, size_t line = __LINE__)
	{
		super("Resource type isn't supported: " ~ msg);
	}
}