module api.h3d.node;

import api.h3d.h3d,
	api.h3d.ray,
	type.cuda.types;

class H3DSGNode  {
	
	public:
	enum NodeType {
		CAMERA
	}
	
	this() {}
	
	this(H3DSGNode node) {
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
	H3DSGNode[] find(string name);
	H3DSGNode[] all();
	//Iterator iterator();
	//mapStream();
	Ray castRay(float3 origin, float3 direction, uint maxIntersections);
	
	H3DSGNode parent();
	void parent(H3DSGNode newParent);
	
	H3DSGNode child(uint n);
	void child(H3DSGNode child, uint n);

	H3DSGNode addNode(H3DSGNode parent, H3DSGNode which);
	void delNode(H3DSGNode parent);

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