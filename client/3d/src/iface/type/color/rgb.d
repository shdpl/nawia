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

module type.color.rgb;

private import std.typecons;

//alias Tuple!(T, "r", T, "g", T, "b") ColorRGB(T);

struct ColorRGB(T) if(is(T : float)) {
	T r;
	T g;
	T b;
	
	this(T r, T g, T b) {
		this.r = r;
		this.g = g;
		this.b = b;
	}
	
	@property {
		float[] floats() {
			return [r,g,b];
		}
	}
	
	T opIndexAssign(T value, size_t i) {
		switch(i) {
			case 0:
				return r = value;
			case 1:
				return g = value;
			case 2:
				return b = value;
			default:
				assert(0);
		}
	}
}
