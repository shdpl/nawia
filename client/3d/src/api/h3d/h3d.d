module api.h3d.h3d;

static this() {
	if (h3dInit())
		{}//TODO:
	}
		
static ~this() {	
	h3dRelease();
}