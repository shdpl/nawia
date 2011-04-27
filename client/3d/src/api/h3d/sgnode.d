module api.h3d.sgnode;

class SGNode  {
	H3DNode _handle;
	
	public:
	enum NodeType {
		
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
	Iterator iterator();
	//mapStream();
	Ray castRay(Point3D origin, Vector3D direction, uint maxIntersections);
	
	SGNode parent();
	void parent(SGNode newParent);
	
	SGNode child(uint n);
	void child(SGNode child, uint n);

	SGNode addNode(SGNode parent, SGFragment which);
	void delNode(SGNode parent);

	void active(bool val);
	bool active();
	
	bool transformed();
	
	Cuboid aabb();
	
	Translation translationLocal();
	void translationLocal(Translation!SGNode trans);
	Translation translationGlobal();
	void translationGlobal(Translation trans);
	
	Rotation rotation();
	void rotation(Rotation rot);
	Scale scale();
	void scale(Scale scale);
}