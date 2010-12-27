module type.color.rgb;

class ColorRGB {
	ubyte[3] _color;
	
	this(ubyte r, ubyte g, ubyte b) {
		_color[0] = r;
		_color[1] = g;
		_color[2] = b;
	}
}