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

interface IResource {
	
	string name() @property;
	
	bool load(ubyte[] data, size_t size);
	bool loaded() @property;
	void unload();
	
	//IResource dup();//TODO: make typesafe, and choose better name(non-shallow)
	//IResource next(); //FIXME: WhiteHole!T does not work as supposed to
	
	//TODO: h3dFindResElem
	//TODO: h3dMapResStream
	//TODO: h3dUnmapResStream
	//TODO: h3dQueryUnloadedResource
	//TODO: h3dReleaseUnusedResources
}