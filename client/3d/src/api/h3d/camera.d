module api.h3d.camera;

import horde3d;

import api.h3d.node,
	api.h3d.pipeline,
	type.buffer.pixel,
	type.screen.cords;

class H3DCamera : H3DNode {
	H3DPipeline _pipeline;
	BufferPixel renderTarget;
	
	CordsScreen viewport;
	
	float clipNear;
	float clipFar;
	float viewAngleX;
	float viewAngleY;
	
	bool orthogonal;
	
	void init(H3DNode parent, string name, H3DPipeline pipeline) {
		h3dAddCameraNode(parent.id, name, pipeline.id);
	}
	
	void setFrustum() {
		
	}
	
	bool visible(H3DNode what);
	uint queryLOD(H3DNode what);
	
	void render() {
		h3dRender(id);
	}
}