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

module impl.h3d.ge.component.component;

private import core.vararg;

private import impl.h3d.h3d,
	ge.component.component,
	impl.h3d.ge.ray,
	impl.h3d.ge.component.camera,
	impl.h3d.ge.component.light,
	impl.h3d.ge.component.joint,
	impl.h3d.ge.component.group,
	impl.h3d.ge.component.emitter,
	impl.h3d.ge.component.mesh,
	impl.h3d.ge.component.model,
	impl.h3d.ge.res.scene,
	impl.h3d.ge.res.resource;
	
public import type.cords.local,
	type.cuda.types;

class Component : IComponent {
	public:
	H3DNode id;
	
	public:
	T[] find(T)(string name) if(is(T : Component)) {
		T[] ret;
		int node;
		for (auto i = h3dFindNodes(this.id, name, T.type)-1; i >= 0; i--) {
			node = h3dGetNodeFindResult(i);
			assert(node && h3dGetNodeType(node) == T.type);
			ret ~= new T(node);
			}
		return ret;
	}
	
	Component add(T)(string path) {
		static if(is(T == Scene)) {
			return new Component(h3dAddNodes(this.id, (new Scene(path)).id));
		}
	}
	
	E add(E, T...)(T args) { //FIXME: put specialized functions at constructors
		H3DNode ret;
		static if(is(E == Camera) ) //if (convertsTo) etc.
			ret = h3dAddCameraNode(this.id, ""/*args[1]*/, args[0].id); //FIXME: name
		static if(is(E == Emitter) )
			ret = h3dAddEmitterNode(this.id, "", args[1].id,
				args[2].resource.id, args[3].maxCount, args[4].respawnCount);
		static if(is(E == Light) ) //if (convertsTo) etc.
			ret = h3dAddLightNode(this.id, "", args[0].id, //FIXME: name
				args[1], args[2]);
		static if( is(E == Group) ) //if (convertsTo) etc.
			ret = h3dAddGroupNode(this.id, args[0]);
		static if( is(E == Model) ) //if (convertsTo) etc.
			ret = h3dAddModelNode(this.id, args[0], args[1].id);
		static if( is(E == Mesh) ) //if (convertsTo) etc.
			ret = h3dAddMeshNode(this.id, args[0], args[1].id,
				args[2], args[3], args[4], args[5]);
		//static if( is(E == Joint) ) //if (convertsTo) etc.
		//	ret = h3dAddMeshNode(this.id, args[0], args[1].id); //TODO: joint index
		enforceEx!ExResAdd(ret, text(typeid(E), args));
		return new E(ret);
	}
	
	
	
	@property {
		bool renderDisabled() {
			return hasFlags(Flags.NoDraw);
		}
		void renderDisabled(bool value) {
			setFlags(Flags.NoDraw, value);
		}
	}
	
	@property {
		bool shadowsDisabled() {
			return hasFlags(Flags.NoCastShadow);
		}
		void shadowsDisabled(bool value) {
			setFlags(Flags.NoCastShadow, value);
		}
	}
	
	@property {
		bool rayDisabled() {
			return hasFlags(Flags.NoRayQuery);
		}
		void rayDisabled(bool value) {
			setFlags(Flags.NoRayQuery, value);
		}
	}
	
	@property {
		bool disabled() {
			return hasFlags(Flags.Inactive);
		}
		void disabled(bool value) {
			setFlags(Flags.Inactive, value);
		}
	}
	
	
	
	@property {
		string name() {
				return h3dGetResName(this.id);
			}
		void name(string value) {
			setParam(value, Params.NameStr);
		}
	}
	
	@property {
		string attachment() {
				return h3dGetResName(this.id);
			}
		void attachment(string value) {
			setParam(value, Params.AttachmentStr);
		}
	}
	
	Type type() @property {
		return cast(Type)h3dGetNodeType(this.id);
	}
	
	@property {
		bool dirty() { // clarity - not performance
			return h3dCheckNodeTransFlag(this.id, false);
		}
		void dirty(bool value) {
			h3dCheckNodeTransFlag(this.id, true);
		}
	}
	
	@property {
		CordsLocal translation() { // again, clarity - not performance
			float x, y, z;
			h3dGetNodeTransform(this.id,
				&x, &y, &z,
				null, null, null,
				null, null, null);
			return CordsLocal(x, y, z, this.parent);
		}
		void translation(CordsLocal value) {
			//FIXME: transform if not relative to parent
			float rx, ry, rz, sx, sy, sz;
			rx = rotation.x;
			ry = rotation.y;
			rz = rotation.z;
			sx = scale.x;
			sy = scale.y;
			sz = scale.z;
			h3dSetNodeTransform(this.id,
				value.x, value.y, value.z,
				rx, ry, rz,
				sx, sy, sz);
		}
	}
	
	@property {
		CordsLocal rotation() { // again, clarity - not performance
			float x, y, z;
			h3dGetNodeTransform(this.id,
				null, null, null,
				&x, &y, &z,
				null, null, null);
			return CordsLocal(x, y, z, this.parent);
		}
		void rotation(CordsLocal value) {
			//FIXME: transform if not relative to parent
			float tx, ty, tz, sx, sy, sz;
			tx = translation.x;
			ty = translation.y;
			tz = translation.z;
			sx = scale.x;
			sy = scale.y;
			sz = scale.z;
			h3dSetNodeTransform(this.id,
				tx, ty, tz,
				value.x, value.y, value.z,
				sx, sy, sz);
		}
	}
	//TODO: width, height, depth
	/// Size of object in meters
	@property {				//TODO: move to spatial component
		float3 size() {
			float[6] floats;
			
			h3dGetNodeAABB(this.id,
				&floats[0], &floats[1], &floats[2],
				&floats[3], &floats[4], &floats[5]);
			
			return float3(
				floats[3] - floats[0],
				floats[4] - floats[1],
				floats[5] - floats[2]
			);
		}
		void size(float3 value) {
			this.scale = float3(
				value.x / size.x,
				value.y / size.y,
				value.z / size.z
			);
		}
	}
	
	@property {
		float3 scale() {
			float x, y, z;
			h3dGetNodeTransform(this.id,
				null, null, null,
				null, null, null,
				&x, &y, &z);
			return float3(x, y, z);
		}
		void scale(float3 value) {
			//FIXME: transform if not relative to parent
			float tx, ty, tz, rx, ry, rz, sx, sy, sz;
			tx = translation.x();
			ty = translation.y();
			tz = translation.z();
			rx = rotation.x();
			ry = rotation.y();
			rz = rotation.z();
			h3dSetNodeTransform(this.id,
				tx, ty, tz,
				rx, ry, rz,
				value.x, value.y, value.z);
		}
	}
	
	@property { //FIXME: make a new type for these matrices
		float4[4] transformationAbsolute() {
			float4[4] ret;
			h3dGetNodeTransMats(this.id, null, cast(float**)&ret);
			return ret;
		}
	}
	
	@property { //FIXME: make a new type for these matrices
		float4[4] transformationRelative() {
			float4[4] ret;
			h3dGetNodeTransMats(this.id, cast(float**)&ret, null);
			return ret;
		}
		void transformationRelative(float4[4] value) {
			h3dSetNodeTransMat(this.id, cast(float*)value);
		}
	}

	@property {
		Component parent() { //TODO: instancing and reflection
			//FIXME: not working state!
			return this;//enforceEx() && h3dGetNodeParent(this.id);
		}
		 void parent(Component value) { //TODO: instancing and reflection
			//FIXME: not working state!
			//enforceEx(h3dSetNodeParent(this.id, value.id), value);
		}
	}
	
//	Component child(uint i) @property { //TODO: instancing and reflection
//		return new Component(h3dGetNodeChild(this.id, i)); && enforceEx
//	}
	
	override bool visible(ICamera value) in {
		assert(cast(Camera) value);
	} body {
		auto cam = cast(Camera) value;
		return h3dCheckNodeVisibility(this.id, cam.id, false, false) < 0;
	}
	
	override int getLOD(ICamera value) in {
		assert(cast(Camera) value);
	} body {
		auto cam = cast(Camera) value;
		return h3dCheckNodeVisibility(this.id, cam.id, false, true);
	}
	
	
	protected:
	this() {}
	
	this(int id) {
		this.id = id;
	}
	
	this(Component node) {
		this.id = cast(H3DNode) h3dCloneResource(node.id, null);
	}
	
	~this() {
		h3dRemoveResource(id);
	}
	
	T getParam(T)(int param, int compIdx = 0)
		if (is (T : float) | is(T : string) | is(T : int)) {
		static if(is(T == float))
			return h3dGetNodeParamF(id, param, compIdx);
		static if(is(T == string))
			return h3dGetNodeParamStr(id, param);
		static if(is(T == int))
			return h3dGetNodeParamI(id, param);
	}
	void setParam(T)(T value, int param, int compIdx = 0)
		if (is (T : float) | is(T : string) | is(T : int)) {
		static if(is(T == float))
			h3dSetNodeParamF(id, param, compIdx, value);
		static if(is(T == string))
			h3dSetNodeParamStr(id, param, value);
		static if(is(T == int))
			h3dSetNodeParamI(id, param, value);
	}
	
	private:
	Flags getFlags() {
		return cast(Flags)h3dGetNodeFlags(this.id);
	}
	bool hasFlags(Flags flags) {
		return (getFlags()&flags) == flags;
	}
	void setFlags(Flags flags, bool value, bool recursive = true) {
		if (value)
			h3dSetNodeFlags(this.id, getFlags()|flags, recursive);
		else
			h3dSetNodeFlags(this.id, getFlags()&(!flags), recursive);
	}
	
	public:
	/* TODO
	struct ComponentRange {
		private:
		int _id;
		
		public:
		
		override H3DMessage front() {
			return _id;
		}
		
		override void popFront() {
			h3dGetNextResource(_id.type, _id);
		}
		
		override bool empty() {
			return _current.content.empty;
		}
		
		override H3DMessage moveFront() {
			assert(false, "not implemented");
			return _current;
		}
		
		override int opApply(int delegate(ref H3DMessage) dg) {
			int res;
			for(; !empty; popFront()) {
				auto front = front;
				res = dg(front);
				if(res) return res;
				}
			return res;
		}
		
		override int opApply(int delegate(ref size_t, ref H3DMessage) dg) {
			int res;
			
			size_t i = 0;
			for(; !empty; popFront()) {
				auto front = front;
				res = dg(i, front);
				if(res) break;
				i++;
				}
			return res;
		}
	}
	*/
	
	
	private:
	alias H3DNodeParams.List Params;
	alias H3DNodeFlags.List Flags;
}
