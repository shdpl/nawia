module type.color.rgba;

import type.color.rgb;

struct ColorRGBA(T)  {
	ColorRGB!T _rgb;
	T _a;
	
	this(T r, T g, T b, T a) {
		_rgb = ColorRGB!T(r, g, b);
		_a = a;
	}
}