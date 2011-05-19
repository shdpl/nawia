module io.res.filter.filter;

import type.file.media;

interface ResFilter {
	immutable @property MediaType type();	//FIXME: abstract variable plx
	
	static this() {
		
	}
	
	/*
	TODO: ideally at compile-time
	TODO2: template as Extendable
	*/
	void registerHandler(T)(MediaType media) {
		
	}
}