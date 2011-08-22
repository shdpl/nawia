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

private import impl.h3d.h3d,
	impl.h3d.ge.ray,
	type.cuda.types,
	impl.h3d.ge.component.camera,
	impl.h3d.ge.component.light,
	impl.h3d.ge.component.joint,
	impl.h3d.ge.component.group,
	impl.h3d.ge.component.emitter,
	impl.h3d.ge.component.mesh,
	impl.h3d.ge.component.model;

abstract class H3DSGNode  {
	public:
	H3DNode id;
	
	public:
	this() {}
	
	this(H3DSGNode node) {
		this.id = h3dCloneResource(node.id, null);
	}
	
	~this() {
		h3dRemoveResource(id);
	}
	

	bool add(Camera camera) {
		return 0 != h3dAddCameraNode(this.id, camera.name, camera.pipeline.id);
	}
	bool add(Emitter emitter) {
		return 0 != h3dAddEmitterNode(this.id, emitter.name, emitter.material.id,
			emitter.resource.id, emitter.maxCount, emitter.respawnCount);
	}
	bool add(Group group) {
		return 0 != h3dAddGroupNode(this.id, group.name);
	}
	bool add(Joint joint) {
		return 0 != h3dAddJointNode(this.id, joint.name, joint.index);
	}
	bool add(Light light) {
		return 0 != h3dAddLightNode(this.id, light.name, light.material.id,
			light.contextLighting, light.contextShadowing);
	}
	bool add(Mesh mesh) {
		return 0 != h3dAddMeshNode(this.id, mesh.name, mesh.material.id,
			mesh.batchStart, mesh.batchLength, mesh.vertexFirst, mesh.vertexLast);
	}
	bool add(Model model) {
		return 0 != h3dAddModelNode(this.id, model.name, model.geometry.id);
	}
	
	@property string name() {
		return h3dGetResName(id);
	}
	
	//H3DSGNode[] find(string name);
	//H3DSGNode[] all();
	//Iterator iterator();
	//mapStream();
	//Ray castRay(float3 origin, float3 direction, uint maxIntersections);
	
	//H3DSGNode parent();
	//void parent(H3DSGNode newParent);
	
	//H3DSGNode child(uint n);
	//void child(H3DSGNode child, uint n);

//	H3DSGNode addNode(H3DSGNode parent, H3DSGNode which);
//	void delNode(H3DSGNode parent);
//
//	void active(bool val);
//	bool active();
//	
//	bool transformed();
//	
//	float3[3] aabb();
	
//	float3 translationLocal();
//	void translationLocal(float3 trans);
//	float3 translationGlobal();
//	void translationGlobal(float3 trans);
//	
//	float3 rotation();
//	void rotation(float3 rot);
//	float3 scale();
//	void scale(float3 scale);
	
	protected:
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
	
	class NodeIterator(T) : InputRange!(T) {
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
	protected:
	alias H3DNodeParams.List ParamsComponent;
	alias H3DNodeTypes.List Types;
}
