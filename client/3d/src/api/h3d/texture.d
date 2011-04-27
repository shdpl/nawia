module api.h3d.texture;


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