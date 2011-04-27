module api.h3d.model;

class H3DModel : Model {
	string _name;
	Geometry _geometry;
	Animation[H3D_ANIMATION_COUNT] _anim;
	//TODO: Pose _pose;
	/// Distance to camera from which on LOD[n] is used
	float lodDist[4];
	bool skinning;
	
	bool setMorphTarget() {
		
	}
}