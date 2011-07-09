module api.h3d.texture;


import api.h3d.h3d,
	type.cuda.types,
	type.buffer.pixel;

class Texture {
	public:
	
	alias H3DFormats.List Format;
	
	this(string name, int2 size, Format fmt) {
		id = h3dCreateTexture(name, size.x, size.y, fmt, 0);
	}
	
	
	int id;
	//flags
	
	Texture[] subtextures;
	ubyte slices;
	BufferPixel data;
}