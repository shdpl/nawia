module api.h3d.pipeline;

import horde3d;

import type.cuda.types,
	type.buffer.pixel;

class H3DPipeline /*: Pipeline*/ {
	H3DNodeTypes _handle;
	
	
	
	public:
	/// Size of the render targets
	float2[2] size;
	BufferPixel pixelBuffer(string name, uint bufId);
	
	this() {
		
	}
	
	int id;
}