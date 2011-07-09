module api.h3d.model;

import api.h3d.h3d,
	api.h3d.animation.animation,
	api.h3d.node;

class /*H3DModel :*/ H3DModel : H3DSGNode {
	string _name;
	//Geometry _geometry;
	H3DAnimation[H3DAnimation.maxCount] _anim;
	//TODO: Pose _pose;
	/// Distance to camera from which on LOD[n] is used
	float lodDist[4];
	bool skinning;
	
	/// indexed by target name
	float[string] morphWeight;
}