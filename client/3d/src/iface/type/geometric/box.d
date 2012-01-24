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

module type.geometric.rect;

private import
	std.traits,
	type.cords.cords;


struct Box(T) if (isCoords!T) {
	T _cords[2];
	
	this(T botleftnear, T toprightfar) {
		_cords[0] = botleftnear;
		_cords[1] = toprightfar;
	}
	/*
	this(E)(T botleftnear, E x, E y) if (E != T && hasMember(T, x) &&
		isImplicitlyConvertible(E,FieldTypeTuple(T)["x"])) {}*/
	
	this(T toprightfar) {
		static if(__traits(compiles, _cords[0].x = 0))
			_cords[0].x = 0;
		static if(__traits(compiles, _cords[0].y = 0))
			_cords[0].y = 0;
		static if(__traits(compiles, _cords[0].z = 0))
			_cords[0].z = 0;
		_cords[1] = toprightfar;
	}
	
	@property {
		void toprightfar(T value) {
			_cords[1] = value;
		}
		T toprightfar() {
			return _cords[1];
		}
	}
	@property {
		void botleftnear(T value) {
			_cords[0] = value;
		}
		T botleftnear() {
			return _cords[0];
		}
	}
	
	static if(__traits(hasMember, T, "x"))
	{
		alias typeof(toprightfar.x) Type;
		@property {
			Type width() {
				return toprightfar.x - botleftnear.x;
			}
			void width(Type value) {
				toprightfar.x = botleftnear.x + value;
			}
		}
	}
	
	static if(__traits(hasMember, T, "y"))
	{
		alias typeof(toprightfar.x) Type;
		@property {
			Type height() {
				return toprightfar.y - botleftnear.y;
			}
			void height(Type value) {
				toprightfar.y = botleftnear.y + value;
			}
		}
	}
	
	static if(__traits(hasMember, T, "z"))
	{
		alias typeof(toprightfar.x) Type;
		@property {
			Type depth() {
				return toprightfar.z - botleftnear.z;
			}
			void depth(Type value) {
				toprightfar.z = botleftnear.z + value;
			}
		}
	}
	
	CordsWorld opCast(E)() const nothrow
		if (is(E == CordsWorld))
    {
		return _cords[1] - _cords[0];
    }
	
}


template isBox(T)
{
	enum bool isBox =
		__traits(hasMember, T, "toprightfar")
		&& __traits(hasMember, T, "botleftnear");
}