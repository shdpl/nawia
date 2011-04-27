module api.h3d.shader.shader;

class Shader {
	ShaderContext[] _contexts;
	Sampler[] _samplers;
	Uniform[] _uniforms;
	
	public:
	void preamble(string code);
}