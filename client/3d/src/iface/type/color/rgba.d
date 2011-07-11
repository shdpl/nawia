module type.color.rgba;

import type.color.rgb;

struct ColorRGBA(T)  {
	ColorRGB!T _rgb;
	alias _rgb this;
	T a;
	
	this(T r, T g, T b, T a) {
		_rgb = ColorRGB!T(r, g, b);
		a = a;
	}
}