module io.res.manager;

private import util.singleton,
	std.stream,
	std.path;

static class ResManager : Singleton!ResManager {
	public:
	this() {
		init();
	}
	
	void init() {
		_aliasMap["data"] = curdir~"/data";
		_aliasMap["gui"] = "data/gui";
		_aliasMap["models"] = "data/models";
		_aliasMap["materials"] = "data/materials";
		_aliasMap["textures"] = "data/textures";
		_aliasMap["particles"] = "data/particles";
		_aliasMap["animations"] = "data/animations";
		_aliasMap["shaders"] = "data/shaders";
	}
	
	/**
		default aliases are:
		_aliasMap["data"] = curdir~"/data";
		_aliasMap["gui"] = "data/gui";
		_aliasMap["models"] = "data/models";
		_aliasMap["materials"] = "data/materials";
		_aliasMap["textures"] = "data/textures";
		_aliasMap["particles"] = "data/particles";
		_aliasMap["animations"] = "data/animations";
		_aliasMap["shaders"] = "data/shaders";
	**/
	void bind(string entry, string uri) {_aliasMap[entry]=uri;}
	
	Stream open(string uri) {return new BufferedFile(uri);}
	
	void close(Stream stream) {}
	
	
	private:
	string[string] _aliasMap;
}