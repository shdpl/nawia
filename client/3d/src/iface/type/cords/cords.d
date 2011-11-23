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

module type.cords.cords;

import type.cuda.types;

struct Cords(T, size_t N) if (N > 0 && N < 4) {
	private SmallVec!(T, N) c;
	
	this(T x) {
		c.x = x;
	}


	@property {
		T x()
		{
			return c.x;
		}
		void x(T value) {
			c.x = value;
		}
	}
	
	static if(N > 1) {
		this(T x, T y) {
			this(x);
			c.y = y;
		}
		
		@property {
			T y()
			{
				return c.y;
			}
			void y(T value) {
				c.y = value;
			}
		}
	}

	static if(N > 2) {
		this(T x, T y, T z) {
			this(x, y);
			c.z = z;
		}
		
		@property {
			T z()
			{
				return c.z;
			}
			void z(T value) {
				c.z = value;
			}
		}
	}
	

}
