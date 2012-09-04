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

module impl.bullet.pe.pbody.rigid;

public import
	type.geometric.box;

private import
	std.typecons;

private import
	impl.bullet.bullet,
	impl.bullet.pe.pbody.pbody,
	gl3n.linalg,
	type.cords.local;

class PBodyRigid /*: PBody*/ {
//	private:
//	btVector3 _localInertia;
//	btTransform _transform;
//	btVector3 _origin;
//	btMotionState _mstate;
//	btRigidBody _handle;
//	btCollisionShape _shape;
//	
//	
//	public:
//	this() {
//		_transform = new btTransform;
//		_origin = new btVector3;
//		_mstate = new btDefaultMotionState;
//		_localInertia = new btVector3;
//	}
//	~this()
//	{
//	}
//	
//	
//	alias btCollisionObject.CollisionFlags CollisionFlag;
//	
//	void init(T)(CordsLocal pos, T shape, real mass = real.nan)
//	{
//		static if (isBox!T)
//		{
//			_shape = new btBoxShape(new btVector3(shape.width, shape.height, shape.depth));
//		} else {
//			static assert(false);
//		}
//		_init(pos, mass);
//	}
//	
//	void _init(CordsLocal pos, real mass = real.nan) {
//		_origin.setValue(pos.x, pos.y, pos.z);
//		
//		_transform.setIdentity();
//		_transform.setOrigin(_origin);
//		
//		if (mass <>= real.nan)
//			_shape.calculateLocalInertia(mass, _localInertia);
//		else
//			_localInertia.setValue(0,0,0);
//		
//		_mstate.setWorldTransform(_transform);
//		_handle = new btRigidBody(mass <>= 0 ? mass : 0, _mstate, _shape, _localInertia);
//
//		assert(!is(_handle));
//	}
//	
//	
//	void clear() {
//		//_shape.dispose();
//		//_handle.dispose();
//	}
//	
//	
//	vec3 matrix() {return vec3(0,0,0);}
//	void matrix(vec3 matrix) {}
//	
//	
//	vec3 translation() {return vec3(0,0,0);}
//	void translation(vec3 translation) {}
//	
//	
//	vec4 rotation() {return vec4(0,0,0,0);}
//	void rotation(vec4 rotation) {}
//	
//	@property {
//		vec4[4] transformation() {
//			
//		float[15] _floats;
//		_mstate.getWorldTransform(_transform);
//		_transform.getOpenGLMatrix(_floats.ptr);
//		
//		return [
//			vec4(_floats[0], _floats[1], _floats[2], _floats[3]),
//			vec4(_floats[4], _floats[5], _floats[6], _floats[7]),
//			vec4(_floats[8], _floats[9], _floats[10], _floats[11]),
//			vec4(_floats[12], _floats[13], _floats[14], 0f)];
//		}
//	}
//	
//	
//	void setFlag(CollisionFlag flag) {
//		_handle.setCollisionFlags(flag | _handle.getCollisionFlags());
//	}
//	bool getFlag(CollisionFlag flag) {
//		return ((_handle.getCollisionFlags()) & flag) != 0;
//	}
//	
//	
//	btRigidBody btHandle() {
//		assert(!is(_handle));
//		return _handle;
//	}
}
