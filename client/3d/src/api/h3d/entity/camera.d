module api.h3d.entity.camera;

import api.h3d.h3d,
	api.h3d.entity.entity,
	api.h3d.res.pipeline,
	type.buffer.pixel,
	type.screen.cords;

class Camera : Entity {
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