module api.h3d.scenegraph;

import api.h3d.node,
	api.h3d.h3d;

class SceneGraph {
	public:
	void clear() {
		h3dClear();
	}
	H3DNode root;
}