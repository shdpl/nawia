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

module impl.h3d.ge.component.mesh;


private import impl.h3d.h3d,
	ge.component.mesh,
	impl.h3d.ge.res.material,
	impl.h3d.ge.component.component;

class Mesh : H3DSGNode, IMesh {
	public:
	static immutable type = Type.Mesh;
	
	public:
	this(H3DNode id) {
		super(id);
	}
	
	@property {
		H3DMaterial material() {
			return new H3DMaterial(getParam!int(Params.MatResI));
		}
		void material(H3DMaterial mat) {
			setParam!int(mat.id, Params.MatResI);
		}
	}
	
	int batchStart() @property {
		return getParam!int(Params.BatchStartI);
	}
		
	int batchLength() @property {
		return getParam!int(Params.BatchCountI);
	}
	
	int vertexFirst() @property {
		return getParam!int(Params.VertRStartI);
	}
		
	int vertexLast() @property {
		return getParam!int(Params.VertREndI);
	}
	
	@property {
		int lodLevel() {
			return getParam!int(Params.LodLevelI);
		}
		void lodLevel(int value) {
			setParam!int(value, Params.LodLevelI);
		}
	}
	
	private H3DMesh.List Params;
}
