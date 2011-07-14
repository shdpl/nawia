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

module ge.res.texture;


import ge.res.h3d,
	type.cuda.types,
	type.buffer.pixel;

class Texture {
	public:
	
	alias H3DFormats.List Format;
	
	this(string name, int2 size, Format fmt) {
		id = h3dCreateTexture(name, size.x, size.y, fmt, 0);
	}
	
	
	int id;
	//flags
	
	Texture[] subtextures;
	ubyte slices;
	BufferPixel data;
}
