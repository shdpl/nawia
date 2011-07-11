module ge.res.pipeline;


import h3d.h3d,
	type.cuda.types,
	type.buffer.pixel;

class H3DPipeline /*: Pipeline*/ {
	H3DNodeTypes _handle;
	
	
	
	public:
	/// Size of the render targets
	float2[2] size;
	BufferPixel pixelBuffer(string name, uint bufId) {return BufferPixel();}
	
	this() {
		
	}
	
	int id;
}