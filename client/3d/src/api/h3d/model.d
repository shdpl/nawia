module api.h3d.model;

class H3DModel : Model {
	string _name;
	Geometry _geometry;
	Animation[H3D_ANIMATION_COUNT] _anim;
	//TODO: Pose _pose;
	
	bool setMorphTarget() {
		
	}
}