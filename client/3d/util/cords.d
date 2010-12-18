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
 * GNU Affero General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

module util.cords;

import cuda.types;

//TODO dirty bitch
class Cords(T, size_t N) if (N > 0 && N < 4) {
	private SmallVec!(T, N) c;
	
	this(T x) {
		c.x = x;
	}


	T x()
	{
		return c.x;
	}
	
	static if(N > 1) {
		this(T x, T y) {
			this(x);
			c.y = y;
		}
		
		T y()
		{
			return c.y;
		}
	}

	static if(N > 2) {
		this(T x, T y, T z) {
			this(x, y);
			c.z = z;
		}
		
		T z()
		{
			return c.z;
		}
	}
	
	auto opDispatch(string m, args...)() {
		return mixin("c."~m~"(args)");
	}
	

}
