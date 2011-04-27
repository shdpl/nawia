module api.h3d.joint;

class H3DJoint : Joint {
	string _name;
	uint _id;
	
	uint id() {
		return _id;
	}
}