module type.geometric.rect;

import type.cords;

struct Rect(T) {
	Cords!(T, 2)[2] _cords;
	
	@property
	T top() {
		return _cords[0].y;
	}

	@property
	T left() {
		return _cords[0].x;
	}
	
	@property
	T bottom() {
		return _cords[1].y;
	}

	@property
	T right() {
		return _cords[1].x;
	}
	
}