module type.color.rgb;

private import std.typecons;

//alias Tuple!(T, "r", T, "g", T, "b") ColorRGB(T);

struct ColorRGB(T) {
	T r;
	T g;
	T b;
	
	this(T r, T g, T b) {
		this.r = r;
		this.g = g;
		this.b = b;
	}
}