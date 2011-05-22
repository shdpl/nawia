module api.h3d.overlay.overlay;

import api.h3d.h3d,
	type.screen.cords,
	type.color.rgba,
	api.h3d.material;

class Overlay {
	public:
	ColorRGBA!float color;
	H3DMaterial material;
	void mapCords (CordsScreen xy, CordsScreen uv) {}
	///Clears *ALL* overlays
	void clear() {}
}