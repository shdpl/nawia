module api.h3d.joint;

import api.h3d.h3d;

class H3DJoint /*: Joint*/ {
	string _name;
	uint _id;
	
	uint id() {
		return _id;
	}
}