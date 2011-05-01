module api.h3d.texture;

import horde3d;

class Texture {
	public:
	string name;
	Rect size;
	TextureFormat format;
	//flags
	
	Texture[] subtextures;
	ubyte slices;
	PixelBuffer data;
	
	enum Format {
		
	}
}