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
	
	void render() {
		assert(verts.length % 4 == 0);
		h3dShowOverlays(cast(float*)verts, verts.length, color.r, color.g, color.b, color.a,
			material.id, 0);
	}
	
	///Clears *ALL* overlays
	void clear() {
		h3dClearOverlays();
	}
	
	private:
	float[] verts;
}