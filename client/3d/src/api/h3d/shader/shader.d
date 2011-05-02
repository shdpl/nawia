module api.h3d.shader.shader;

import type.cuda.types;

class Shader {
	void*/*ShaderContext[]*/ _contexts = void;
	void*/*Sampler[]*/ _samplers = void;
	float3[] _uniforms;
	
	public:
	void preamble(string code);
}