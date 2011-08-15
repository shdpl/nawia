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

module ge.res.animation.animation;

import h3d.h3d;

abstract class Animation {
	public:
	immutable uint maxCount = 0;
	H3DRes _resource;
	string _targetNode;
	///Time in frames
	uint frames() {
		return h3dGetResParamI(_resource,
			H3DAnimRes.List.ComponentElem, 0, H3DAnimRes.List.EntFrameCountI);
	}
	uint weight;
	
}
