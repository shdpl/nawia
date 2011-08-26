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

module type.cords.local;

private import type.cords.cords,
	impl.h3d.ge.component.component; //FIXME: drop dependency on h3d
public import type.unit.local;

struct CordsLocal {
	Cords!(UnitLocal, 3) _cords;
	H3DSGNode parent;
	
	
	this(UnitLocal x, UnitLocal y, UnitLocal z, H3DSGNode parent) {
		_cords = _cords(x, y, z);
		this.parent = parent;
	}
	
	alias _cords this;
	
}
