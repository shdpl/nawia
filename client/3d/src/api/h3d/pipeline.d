module api.h3d.pipeline;

class H3DPipeline : Pipeline {
	H3DNode _handle;
	
	public:
	/// Size of the render targets
	Rect2D size;
	PixelBuffer pixelBuffer(string name, uint bufId);
	
}