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

import type.cords.cords;

struct Box(T) /*if (is(T : Cords))*/ {
	T[2] _cords;
	
	this(T botleft, T topright) {
		_cords[0] = botleft;
		_cords[1] = topright;
	}
	
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
	
	//	alias _cords[0] topleft;
	//	alias _cords[1] botright;
}
