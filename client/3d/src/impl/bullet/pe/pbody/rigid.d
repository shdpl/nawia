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

private import
	impl.bullet.bullet,
	impl.bullet.pe.shape.shape,
	impl.bullet.pe.pbody.pbody,
	type.cuda.types,
	type.cords.local;

class PBodyRigid : PBody {
	private:
	btVector3 _localInertia;
	btTransform _transform;
	btVector3 _origin;
	btMotionState _mstate;
	btRigidBody _handle;
	Shape _shape;
	
	public:
	this() {
		_transform = new btTransform;
		_origin = new btVector3;
		_mstate = new btDefaultMotionState;
		_localInertia = new btVector3;
	}
	~this() {}
	
	void init(CordsLocal pos, Shape shape, real mass = real.nan) {
		_origin.setValue(pos.x, pos.y, pos.z);
		
		_transform.setIdentity();
		_transform.setOrigin(_origin);
		
		_shape = shape;
		auto inertia = _shape.localInertia(mass);
		_localInertia.setValue(inertia.x, inertia.y, inertia.z);
		
		_mstate.setWorldTransform(_transform);
		_handle = new btRigidBody(mass <>= 0 ? mass : 0, _mstate, _shape.btHandle(), _localInertia);

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
	
	btRigidBody btHandle() {
		assert(!is(_handle));
		return _handle;
	}
}
