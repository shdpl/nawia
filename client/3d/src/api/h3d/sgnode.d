module api.h3d.sgnode;

import horde3d;

import api.h3d.ray,
	type.cuda.types;

class SGNode  {
	H3DNodeTypes _handle;
	
	public:
	enum NodeType {
		CAMERA
	}
	
	this(SGNode) {
		h3dCloneResource(_handle, null);
	}
	
	~this() {
		h3dRemoveResource(_handle);
	}
	
	string name();
	NodeType type();
	SGNode[] find(string name);
	SGNode[] all();
	//Iterator iterator();
	//mapStream();
	Ray castRay(float3 origin, float3 direction, uint maxIntersections);
	
	SGNode parent();
	void parent(SGNode newParent);
	
	SGNode child(uint n);
	void child(SGNode child, uint n);

	SGNode addNode(SGNode parent, SGNode which);
	void delNode(SGNode parent);

	void active(bool val);
	bool active();
	
	bool transformed();
	
	float3[3] aabb();
	
	float3 translationLocal();
	void translationLocal(float3 trans);
	float3 translationGlobal();
	void translationGlobal(float3 trans);
	
	float3 rotation();
	void rotation(float3 rot);
	float3 scale();
	void scale(float3 scale);
}