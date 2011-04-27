module api.h3d.material;

class Material {
	public:
	Shader shader;
	
	Sampler[] _samplers;
	Uniform[] _uniforms;
	
}