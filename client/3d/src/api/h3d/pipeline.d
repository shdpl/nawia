module api.h3d.pipeline;

import horde3d;


class H3DPipeline /*: Pipeline*/ {
	H3DNodeTypes _handle;
	
	public:
	/// Size of the render targets
	Rect2D size;
	PixelBuffer pixelBuffer(string name, uint bufId);
	
}