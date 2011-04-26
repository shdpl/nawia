module api.h3d.camera;

class H3DCamera : SGNode {
	Pipeline _pipeline;
	
	this() {
		h3dAddCammeraNode();
	}
	
	void setFrustum() {
		
	}
	
	bool visible(SGNode what);
	uint queryLOD(SGNode what);
}