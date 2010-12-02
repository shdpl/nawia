module util.cords;

class Cords(uint dimension) if (dimension > 0) {
	int[dimension] cords;
	
	@property uint x() {
		return cords[0];
	}
	
	@property void x(uint x) {
		cords[0] = x;
	}
	
	static if (dimension > 1) {
		@property uint y() {
			return cords[1];
		}
		
		@property void y(uint y) {
				cords[1] = y;
		}
	}
		
	static if (dimension > 2) {
		@property uint z() {
			return cords[2];
		}
		
		@property void x(uint x) {
				cords[0] = x;
		}
	}

}