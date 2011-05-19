module api.h3d.node;

import horde3d;

import api.h3d.ray,
	type.cuda.types;

class H3DNode  {
	
	public:
	enum NodeType {
		CAMERA
	}
	
	this() {}
	
	this(H3DNode node) {
		this.id = h3dCloneResource(node.id, null);
	}
	
	~this() {
		h3dRemoveResource(id);
	}
	
	abstract @property int id();
	abstract @property void id(int id);
	
	@property string name();
	@property void name(string);
	NodeType type();
	H3DNode[] find(string name);
	H3DNode[] all();
	//Iterator iterator();
	//mapStream();
	Ray castRay(float3 origin, float3 direction, uint maxIntersections);
	
	H3DNode parent();
	void parent(H3DNode newParent);
	
	H3DNode child(uint n);
	void child(H3DNode child, uint n);

	H3DNode addNode(H3DNode parent, H3DNode which);
	void delNode(H3DNode parent);

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