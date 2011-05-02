module api.h3d.light;

import horde3d;

import api.h3d.material,
	type.color.rgb;

class H3DLight {
	string _name;
	void*/*LightContext*/ _lctx;
	void*/*ShadowContext*/ _sctx;
	
	public:
	Material material;
	float radius;
	float fov;
	ColorRGB diffuse;
	float intensity;
	
}