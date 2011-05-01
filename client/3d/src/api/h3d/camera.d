module api.h3d.camera;

import horde3d;

import api.h3d.sgnode,
	api.h3d.pipeline;

class H3DCamera : SGNode {
	Pipeline _pipeline;
	PixelBuffer renderTarget;
	
	Rect viewport;
	
	float clipNear;
	float clipFar;
	float viewAngleX;
	float viewAngleY;
	
	bool orthogonal;
	
	this() {
		h3dAddCammeraNode();
	}
	
	void setFrustum() {
		
	}
	
	bool visible(SGNode what);
	uint queryLOD(SGNode what);
	
	void render() {
		h3dRender(_handle);
	}
}