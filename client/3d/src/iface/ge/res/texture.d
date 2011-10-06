module ge.res.texture;

private import
	ge.res.resource,
	impl.h3d.h3d;


interface ITexture : IResource {
	alias H3DFormats.List TextureFormat;	//TODO: other renderer implementation
	
	//flags
	
	uint slicesNo() @property;
	
	BufferPixel data() @property;
	void data(BufferPixel) @property;
	
	@property {
		TextureFormat format();
		void format(TextureFormat);
	}
}