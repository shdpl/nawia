module type.color.rgb;

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