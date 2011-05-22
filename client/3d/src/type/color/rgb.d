module type.color.rgb;

struct ColorRGB(T) {
	T[3] _color;

	this(T r, T g, T b) {
		_color[0] = r;
		_color[1] = g;
		_color[2] = b;
	}
}