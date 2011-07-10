module io.res.manager;

interface IResManager {
	void init();
	void bind(string entry, string uri);
	Stream open(string uri);
	void close(Stream stream);
}