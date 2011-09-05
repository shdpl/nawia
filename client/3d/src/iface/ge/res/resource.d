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

module ge.res.resource;

public import
	ex.ge.res.add;

private import impl.h3d.h3d;	//TODO: drop dependency when other renderer comes

interface IResource {
	
	string name() @property;
	
	bool load(ubyte[] data, size_t size);
	bool loaded() @property;
	void unload();
	
	//IResource clone();//TODO: make typesafe
	//IResource next(); //FIXME: WhiteHole!T does not work as supposed to
	
	//TODO: h3dFindResElem
	//TODO: h3dQueryUnloadedResource
	//TODO: h3dReleaseUnusedResources

	enum ResourceFlags {
		None = 0,
		NoQuery = H3DResFlags.Flags.NoQuery,
    	NoTexCompression = H3DResFlags.Flags.NoTexCompression,
    	NoTexMipmaps = H3DResFlags.Flags.NoTexMipmaps,
    	TexCubemap = H3DResFlags.Flags.TexCubemap,
    	TexDynamic = H3DResFlags.Flags.TexDynamic,
    	TexRenderable = H3DResFlags.Flags.TexRenderable,
    	TexSRGB = H3DResFlags.Flags.TexSRGB
	}
	
	enum AccessRights {
		None = 0x0,
		Read = 0x1,
		Write = 0x2
	}
}