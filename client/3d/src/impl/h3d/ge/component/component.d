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

module impl.ge.res.component.component;

import impl.h3d.h3d,
	impl.h3d.ge.ray,
	type.cuda.types;

abstract class H3DSGNode  {
	
	public:
	enum NodeType {
		CAMERA
	}
	
	this() {}
	
	this(H3DSGNode node) {
		this.id = h3dCloneResource(node.id, null);
	}
	
	~this() {
		h3dRemoveResource(id);
	}
	
	abstract @property int id();
	abstract @property void id(int id);
	
	@property string name() {
		return h3dGetResName(id);
	}
	
	NodeType type();
	H3DSGNode[] find(string name);
	H3DSGNode[] all();
	//Iterator iterator();
	//mapStream();
	Ray castRay(float3 origin, float3 direction, uint maxIntersections);
	
	H3DSGNode parent();
	void parent(H3DSGNode newParent);
	
	H3DSGNode child(uint n);
	void child(H3DSGNode child, uint n);

	H3DSGNode addNode(H3DSGNode parent, H3DSGNode which);
	void delNode(H3DSGNode parent);

	void active(bool val);
	bool active();
	
	bool transformed();
	
	float3[3] aabb();
	
	float3 translationLocal();
	void translationLocal(float3 trans);
	float3 translationGlobal();
	void translationGlobal(float3 trans);
	
	float3 rotation();
	void rotation(float3 rot);
	float3 scale();
	void scale(float3 scale);
	
	protected:
	
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
}
