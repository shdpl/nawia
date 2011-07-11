module ge.res.material;


import ge.res.h3d,
	ge.res.shader.shader,
	type.cuda.types;

class H3DMaterial {
	public:
	Shader shader;
	
	void*/*Sampler[]*/ _samplers;
	float3[] _uniforms;
	int id;
	
}