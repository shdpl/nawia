/*
 * Copyright (C) 2010 Mariusz 'shd' Gliwiński.
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

module impl.h3d.ge.res.overlay.overlay;

private import std.conv;

import impl.h3d.h3d,
	type.cords.screen,
	type.color.rgba,
	impl.h3d.ge.res.material;
	

class Overlay {
	public:
	ColorRGBA!float color;
	H3DMaterial material;
	
	void mapCords (CordsScreen xy, CordsScreen uv) {}
	
	void render() {
		assert(verts.length % 4 == 0);
		h3dShowOverlays(cast(float*)verts, to!int(verts.length), color.r, color.g, color.b, color.a,
			material.id, 0);
	}
	
	///Clears *ALL* overlays
	void clear() {
		h3dClearOverlays();
	}
	
	private:
	float[] verts;
}
