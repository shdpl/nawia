module ge.res.overlay.overlay;

import ge.res.h3d,
	type.cords.screen,
	type.color.rgba,
	ge.res.material;

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