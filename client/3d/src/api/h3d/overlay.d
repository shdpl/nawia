module api.h3d.overlay;

import horde3d;

import type.screen.cords,
	type.color.rgba,
	api.h3d.material;

class Overlay {
	public:
	void mapCords (CordsScreen xy, CordsScreen uv);
	ColorRGBA!float color;
	H3DMaterial material;
	///Clears *ALL* overlays
	void clear();
}