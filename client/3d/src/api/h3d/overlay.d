module api.h3d.overlay;

class Overlay {
	public:
	void mapCords (Point2D xy, Point2D uv);
	RGBAFloat color;
	Material material;
	///Clears *ALL* overlays
	void clear();
}