module io.res.manager;

public import io.res.stream.stream;

interface IResManager {
	void init();
	void bind(string entry, string uri);
	IResStream open(string uri);
	void close(IResStream stream);
}