/*
 * Copyright (C) 2010 Mariusz 'shd' Gliwiński.
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

module impl.nawia.io.res.manager;

private import
	util.singleton,
	std.stream,
	std.path,
	std.algorithm;
	
private import
	ex.io.res.unsupported,
	io.res.manager;

class ResManager : IResManager {
	mixin Singleton!ResManager;
	public:
	this() {
		init();
	}
	
	void init() {
		_aliasMap["home"] = "file://~/";
		_aliasMap["tmp"] = "file:///tmp/";
		_aliasMap["data"] = "file://"~curdir~"/data/";
		_aliasMap["gui"] = "data:gui/";
		_aliasMap["models"] = "data:models/";
		_aliasMap["materials"] = "data:materials/";
		_aliasMap["textures"] = "data:textures/";
		_aliasMap["particles"] = "data:particles/";
		_aliasMap["animations"] = "data:animations/";
		_aliasMap["shaders"] = "data:shaders/";
		_aliasMap["world"] = "data:world/";
	}
	
	void dispose()
	{
		//TODO
	}
	
	/**
		default aliases are:
			home - TODO
			tmp - TODO
			data - TODO
			gui - data:gui
			models - data:models
			materials - data:materials
			textures - data:textures
			particles - data:particles
			animations - data:animations
			shaders - data:shaders
			world - data:world
	**/
	override void bind(string entry, string uri) {
		_aliasMap[entry]=uri;
	}
	
	override Stream open(string uri)
	{
		uri = resolveAliases(uri);
		auto schema = getSchema(uri);
		if (schema == "file")
		{
			return new BufferedFile(uri[schema.length+3 .. $]);
		}
		else
		{
			//TODO: Object.factory(schema);
			enforceEx!ExResUnsupported(false, "schema = "~schema);
			assert(0);
		}
	}
	
	override void close(Stream stream) {}
	
	private:
	string[string] _aliasMap;
	
	
	T resolveAliases(T)(T uri) if (is(T : string))
	{
		T al = getSchema(uri);
		while (al && al in _aliasMap)
		{
			uri = _aliasMap[al] ~ uri[al.length+1 .. $];
			al = getSchema(uri);
		}
		return uri;
	}
	
	T getSchema(T)(T uri) if (is(T : string))
	{
		return uri[0 .. countUntil(uri, ":")];
	}
}
