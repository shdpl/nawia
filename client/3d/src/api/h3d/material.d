module api.h3d.material;

import horde3d;

import api.h3d.shader.shader,
	type.cuda.types;

class Material {
	public:
	Shader shader;
	
	void*/*Sampler[]*/ _samplers;
	float3[] _uniforms;
	
}