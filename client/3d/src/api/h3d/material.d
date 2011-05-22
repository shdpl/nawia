module api.h3d.material;


import api.h3d.h3d,
	api.h3d.shader.shader,
	type.cuda.types;

class H3DMaterial {
	public:
	Shader shader;
	
	void*/*Sampler[]*/ _samplers;
	float3[] _uniforms;
	int id;
	
}