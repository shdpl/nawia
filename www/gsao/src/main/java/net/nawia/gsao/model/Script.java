package net.nawia.gsao.model;

import java.util.Map;

public class Script {
	
	enum Language {
		LUA
	}
	
	String name;
	String path;

	Map<String, String> parameters;
	
}
