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


import ge.res.resource,
	type.cuda.types,
	type.buffer.pixel;
	
public import impl.h3d.h3d;

interface ITexture : IResource {
	alias H3DFormats.List TextureFormat;	//TODO: other renderer implementation
	
	//flags
	
	uint slicesNo() @property;
	
	BufferPixel data() @property;
	void data(BufferPixel) @property;
	
	@property {
		TextureFormat format();
		void format(TextureFormat);
	}
}
