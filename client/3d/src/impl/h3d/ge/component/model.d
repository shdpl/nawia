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

module impl.h3d.ge.component.model;

private import impl.h3d.h3d,
	impl.h3d.ge.component.component;
	
public import impl.h3d.ge.res.animation.animation,
	impl.h3d.ge.component.joint,
	impl.h3d.ge.res.geometry;	
	

class Model : H3DSGNode {
	Lod lod;
	
	public:
	this(H3DNode id) {
		super(id);
	}
	@property {
		H3DGeometry geometry() {
			return new H3DGeometry(getParam!int(Params.GeoResI));
		}
		void geometry(H3DGeometry value) {
			setParam!int(value.id, Params.GeoResI);
		}
	}
	
	@property {
		int skinningSoftware() {
			return getParam!int(Params.SWSkinningI);
		}
		void skinningSoftware(int value) {
			setParam!int(value, Params.SWSkinningI);
		}
	}
	
	//FIXME: make an object?
	void setupAnimation(ubyte slot, Animation anim,
		uint priority, Joint root, bool additive) {
		h3dSetupModelAnimStage(this.id, slot, anim.id, priority,
			root.name, additive);
	}
	
	void setBoneWeight(string bone, float weight) {
		h3dSetModelMorpher(this.id, bone, weight);
	}
	
	private:
	/// Distance to camera from which on LOD[n] is used
	class Lod {
		float opIndex(uint i) {
			switch(i) {
				case 0:
					return getParam!float(Params.LodDist1F);
				case 1:
					return getParam!float(Params.LodDist2F);
				case 2:
					return getParam!float(Params.LodDist3F);
				case 3:
					return getParam!float(Params.LodDist4F);
				default:
					assert(0);
			}
		}

		void opIndexAssign(float value, uint i) {
			switch(i) {
				case 0:
					setParam!float(value, Params.LodDist1F);
					return;
				case 1:
					setParam!float(value, Params.LodDist2F);
					return;
				case 2:
					setParam!float(value, Params.LodDist3F);
					return;
				case 3:
					setParam!float(value, Params.LodDist4F);
					return;
				default:
					assert(0);
			}
		}
	}
	
	private alias H3DModel.List Params;
}
