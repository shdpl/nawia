module ge.res.pipeline;

private import
	ge.res.resource;

interface IPipeline : IResource {
	/// Size of the render targets
	//float2[2] size() @property;
	//void size(float2[2]) @property;
	
	BufferPixel dumpBuffer(string name, uint bufId);
}