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
	//string _targetNode;
	Entities entities;
	//uint weight;
	
	public:
	this(string name) {super(name);}
	
	//TODO: h3dMapResStream
	//TODO: h3dUnmapResStream

	class Entities {
		immutable uint lengthMax = 16;
		
		class Entity {
			private uint id;
			
			this(uint id) {
				this.id = id;
			}
			///Time in frames
			uint frames() @property {
				return getElemParam!int(Elements.EntityElem, id, Elements.EntFrameCountI);
			}
		}
		
		uint length() @property {
			return elementCount(Elements.EntityElem);
		}
		
		Entity opIndex(uint i) {
			return new Entity(i);
		}
	}
	
	private:
	override ResourceType type() @property {
		return ResourceType.Animation;
	}
	
	private:
	alias H3DAnimRes.List Elements;
}
