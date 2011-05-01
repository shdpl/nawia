module api.h3d.light;

import horde3d;

class H3DLight {
	string _name;
	LightContext _lctx;
	ShadowContext _sctx;
	
	public:
	Material material;
	float radius;
	float fov;
	ColorRGB diffuse;
	float intensity;
	
}