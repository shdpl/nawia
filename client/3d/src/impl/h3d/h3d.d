module h3d.h3d;

public import horde3d;

alias int H3DNode;

static this() {
	h3dInit();
	}

static ~this() {
	h3dRelease();
}