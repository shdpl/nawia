module api.h3d.overlay;

import horde3d;

class Overlay {
	public:
	void mapCords (Point2D xy, Point2D uv);
	RGBAFloat color;
	Material material;
	///Clears *ALL* overlays
	void clear();
}