module io.res.manager;

import util.singleton,
	std.stream;

static class ResManager : Singleton!ResManager {
	public:
	string[string] _aliasMap;
	
	Stream open(string uri) {return new BufferedFile(uri);}
	
	void close(Stream stream) {}
}