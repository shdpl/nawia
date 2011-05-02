module api.h3d.camera;

import horde3d;

import api.h3d.sgnode,
	api.h3d.pipeline,
	type.buffer.pixel,
	type.screen.cords;

class H3DCamera : SGNode {
	H3DPipeline _pipeline;
	BufferPixel renderTarget;
	
	CordsScreen viewport;
	
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