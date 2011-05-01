module api.h3d.material;

import horde3d;

class Material {
	public:
	Shader shader;
	
	Sampler[] _samplers;
	Uniform[] _uniforms;
	
}