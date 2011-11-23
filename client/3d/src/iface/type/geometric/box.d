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

private import std.traits;

public import type.cords.cords;

struct Box(T) /*if (T >= Cords)*/ {
	T _cords[2];
	
	this(T botleft, T topright) {
		_cords[0] = botleft;
		_cords[1] = topright;
	}
	/*
	this(E)(T botleft, E x, E y) if (E != T && hasMember(T, x) &&
		isImplicitlyConvertible(E,FieldTypeTuple(T)["x"])) {}*/
	
	this(T topright) {
		_cords[1] = topright;
	}
	
	@property {
		void topright(T value) {
			_cords[1] = value;
		}
		T topright() {
			return _cords[1];
		}
	}
	@property {
		void botleft(T value) {
			_cords[0] = value;
		}
		T botleft() {
			return _cords[0];
		}
	}
	/*
	@property {
		uint width() { //FIXME: dynamically determined
			return topright.x - botleft.x;
		}
		void width(uint value) {
			topright.x = botleft.x + value;
		}
	}
	
	@property {
		uint height() if(hasMember(T, y)) { //FIXME: dynamically determined
			return topright.y - botleft.y;
		}
		void height(uint value) {
			topright.y = botleft.y + value;
		}
	}*/
	
}
