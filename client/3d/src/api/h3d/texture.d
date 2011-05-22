module api.h3d.texture;


import api.h3d.h3d,
	type.geometric.rect,
	type.buffer.pixel;

class Texture {
	public:
	
	enum Format {
		R16G16B24A8
	}
	
	string name;
	Rect!uint size;
	Format format;
	//flags
	
	Texture[] subtextures;
	ubyte slices;
	BufferPixel data;
}