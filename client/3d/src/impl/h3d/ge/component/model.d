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
	
public import
	impl.h3d.ge.component.joint,
	impl.h3d.ge.res.geometry,
	impl.h3d.ge.res.animation;	
	

class Model : Component {
	public:
	_Lod lod;
	
	public:
	this(H3DNode id) {
		super(id);
		init();
	}
	
	@property {
		Geometry geometry() {
			return new Geometry(getParam!int(Params.GeoResI));
		}
		void geometry(Geometry value) {
			setParam!int(value.id, Params.GeoResI);
		}
	}
	
	@property {
		bool skinningSoftware() {
			return 0 != getParam!int(Params.SWSkinningI);
		}
		void skinningSoftware(bool value) {
			setParam!int(value, Params.SWSkinningI);
		}
	}
	
	//FIXME: make an object?
	void setupAnimation(ubyte slot, Animation anim,
		uint priority, Joint root) {
		h3dSetupModelAnimStage(this.id, slot, anim.id, priority,
			root.name, anim.aType == anim.Type.Additive);
	}
	//TODO: h3dSetModelAnimParams
	
	void setBoneWeight(string bone, float weight) {
		h3dSetModelMorpher(this.id, bone, weight);
	}
	
	private:
	/// Distance to camera from which on LOD[n] is used
	class _Lod {
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
	private:
	void init() {
		lod = new _Lod();
	}
	
	private alias H3DModel.List Params;
}
