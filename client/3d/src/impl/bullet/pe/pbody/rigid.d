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
	type.cuda.types;

abstract class PBodyRigid : PBody {
	private:
	//plRigidBodyHandle _handle;
	
	public:
	void init(void* userData, float mass, Shape shape) {}
	void clear() {
		//plDeleteRigidBody(_handle);
	}
	float3 matrix() {return float3(0,0,0);}
	void matrix(float3 matrix) {}
	
	float3 translation() {return float3(0,0,0);}
	void translation(float3 translation) {}
	
	float4 rotation() {return float4(0,0,0,0);}
	void rotation(float4 rotation) {}
	
	abstract btRigidBody btHandle();
}
