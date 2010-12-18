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