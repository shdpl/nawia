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
	type.cuda.types,
	type.cords.local;

class ShapeBox : Shape {
	private:
	btVector3 _size;
	
	public:
	this(float3 size) {
		
		_size = new btVector3();
		_size.setX(size.x);
		_size.setY(size.y);
		_size.setZ(size.z);
		
		_handle = new btBoxShape(_size);	// no size setters
	}
	
	~this() {
		writeln("Box destructor");
	}
}
