module ge.res.scenegraph;

import ge.res.node,
	ge.res.h3d;

class SceneGraph {
	public:
	void clear() {
		h3dClear();
	}
	H3DNode root;
}