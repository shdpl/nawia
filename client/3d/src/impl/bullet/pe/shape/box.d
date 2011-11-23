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

module impl.bullet.pe.shape.box;

import impl.bullet.pe.shape.shape;
	
private import
	impl.bullet.bullet,
	type.cuda.types;

class ShapeBox : Shape {
	private:
	btBoxShape _shape;
	btVector3 _size;
	btVector3 _localInertia;
	btTransform _transform;
	btVector3 _origin;
	btMotionState _mstate;
	btRigidBodyConstructionInfo _rbInfo;
	btRigidBody _handle;
	
	public:
	this() {
		_size = new btVector3;
		_localInertia = new btVector3;
		_transform = new btTransform;
		_origin = new btVector3;
		_mstate = new btDefaultMotionState;
	}
	~this() {
		//_size.dispose();
		//_localInertia.dispose();
		//_transform.dispose();
		//_origin.dispose();
		//_mstate.dispose();
	}
	
	void init(float3 pos, float3 size, real mass = real.nan) {
		_origin.setX(pos.x);
		_origin.setY(pos.y);
		_origin.setZ(pos.z);
		
		_size.setX(size.x);
		_size.setY(size.y);
		_size.setZ(size.z);
		
		_localInertia.setX(0);
		_localInertia.setY(0);
		_localInertia.setZ(0);
		
		_shape = new btBoxShape(_size);	// no size setters
		
		_transform.setIdentity();
		_transform.setOrigin(_origin);
		
		if(mass <>= 0) {
			_shape.calculateLocalInertia(mass, _localInertia);
		}else{
			mass = 0;
		}
		
		_mstate.setWorldTransform(_transform);
		
		//_rbInfo = new btRigidBodyConstructionInfo(mass, _mstate, _shape, _localInertia);
		_handle = new btRigidBody(mass, _mstate, _shape, _localInertia);

		assert(!is(_handle));
		
	}
	void clear() {
		//_shape.dispose();
		//_handle.dispose();
	}
	float3 matrix() {return float3(0,0,0);}
	void matrix(float3 matrix) {}
	
	float3 translation() {return float3(0,0,0);}
	void translation(float3 translation) {}
	
	float4 rotation() {return float4(0,0,0,0);}
	void rotation(float4 rotation) {}
	
	override btRigidBody btHandle() {
		assert(!is(_handle));
		return _handle;
	}
	
}
