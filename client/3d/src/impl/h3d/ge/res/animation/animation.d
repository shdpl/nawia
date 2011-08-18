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

module impl.h3d.ge.res.animation.animation;

import impl.h3d.h3d;

private import impl.h3d.ge.res.resource,
	ge.res.animation.animation;

abstract class H3DAnimation : H3DResource, IAnimation {
	public:
	immutable uint maxCount = 0;
	string _targetNode;
	///Time in frames
	uint frames() {
		return h3dGetResParamI(id,
			H3DAnimRes.List.EntityElem, 0, H3DAnimRes.List.EntFrameCountI);
	}
	
	//jointAndMesh|Entity entities[]
	// entities.count
	//   override uint elemCount(T element) {return h3dGetResElemCount(id, element.h3dType);}
	//    element.h3dType = H3DAnimRes.List.EntityElem
	// entities[i].frames = h3dGetResParamI(id,	H3DAnimRes.List.EntityElem, 0, H3DAnimRes.List.EntFrameCountI);
	
	uint weight;
	
}
