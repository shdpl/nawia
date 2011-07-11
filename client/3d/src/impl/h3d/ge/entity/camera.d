module h3d.ge.entity.camera;

import h3d.h3d,
	ge.entity.camera,
	h3d.ge.res.pipeline,
	type.buffer.pixel,
	type.cords.screen;

class Camera : ICamera {
	private:
	H3DPipeline _pipeline;
	BufferPixel renderTarget;
	
	CordsScreen viewport;
	
	float clipNear;
	float clipFar;
	float viewAngleX;
	float viewAngleY;
	
	bool orthogonal;
	
	
	public:
	void init(Entity parent, string name, H3DPipeline pipeline) {
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