module type.color.rgba;

//FIXME: remove class
struct ColorRGB(T) {
	T[3] _color;

	this(T r, T g, T b) {
		_color[0] = r;
		_color[1] = g;
		_color[2] = b;
	}
}

struct ColorRGBA(T)  {
	ColorRGB!T _rgb;
	T _a;
	
	this(T r, T g, T b, T a) {
		_rgb = ColorRGB(r, g, b);
		_a = a;
	}
}