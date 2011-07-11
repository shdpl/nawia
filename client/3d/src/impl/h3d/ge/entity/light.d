module ge.res.light;

import ge.res.h3d,
	ge.res.material,
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