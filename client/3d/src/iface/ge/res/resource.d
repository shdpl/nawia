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

module ge.resource;

public import
	std.datetime;

public import
	ex.ge.res.add,
	ex.ge.res.element.missing,
	ex.ge.res.map,
	ex.ge.res.pipeline.buffer,
	gl3n.linalg,
	type.buffer.pixel,
	type.color.rgba;

private import impl.h3d.h3d;	//TODO: drop dependency when other renderer comes

interface IResource {
	
	string name() @property;
	
	bool load(ubyte[] data, size_t size);
	bool loaded() @property;
	void unload();
	
	//IResource clone();//TODO: make typesafe
	//IResource next(); //FIXME: WhiteHole!T does not work as supposed to
	
	//TODO: H3DFindResElem
	//TODO: H3DQueryUnloadedResource
	//TODO: H3DReleaseUnusedResources

	enum ResourceFlags {
		None = 0,
		NoQuery =  H3DResFlags.NoQuery,
    	NoTexCompression =  H3DResFlags.NoTexCompression,
    	NoTexMipmaps =  H3DResFlags.NoTexMipmaps,
    	TexCubemap =  H3DResFlags.TexCubemap,
    	TexDynamic =  H3DResFlags.TexDynamic,
    	TexRenderable =  H3DResFlags.TexRenderable,
    	TexSRGB =  H3DResFlags.TexSRGB
	}
	
	enum AccessRights {
		None = 0x0,
		Read = 0x1,
		Write = 0x2
	}
}