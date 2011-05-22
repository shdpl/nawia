module api.h3d.light;

import api.h3d.h3d,
	api.h3d.material,
	type.color.rgb;

class H3DLight {
	string _name;
	void*/*LightContext*/ _lctx;
	void*/*ShadowContext*/ _sctx;
	
	public:
	H3DMaterial material;
	float radius;
	float fov;
	ColorRGB!ubyte diffuse;
	float intensity;
	
}