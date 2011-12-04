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

module impl.bullet.pe.shape.shape;

import type.cuda.types;
	
private import
	impl.bullet.bullet,
	impl.bullet.pe.pbody.rigid;

abstract class Shape {
	protected:
	btCollisionShape _handle;
	
	public:
	real3 localInertia(real mass) {
		btVector3 ret = new btVector3;
		
		if (mass <> 0) {
			_handle.calculateLocalInertia(mass, ret);
		} else {
			ret.setValue(0,0,0);
		}
		
		return real3(ret.x(), ret.y(), ret.z());
	}
	
	btCollisionShape btHandle() {
		assert(!is(_handle));
		return _handle;
	}
}
