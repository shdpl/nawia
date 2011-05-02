module api.h3d.model;

import horde3d;

import api.h3d.animation.animation;

class /*H3DModel :*/ Model {
	string _name;
	//Geometry _geometry;
	H3DAnimation[H3DAnimation.maxCount] _anim;
	//TODO: Pose _pose;
	/// Distance to camera from which on LOD[n] is used
	float lodDist[4];
	bool skinning;
	
	bool setMorphTarget() {
		
	}
}