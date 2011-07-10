module type.geometric.rect;

import type.cords;

struct Box(T) if (is(T : Cords)) {
	T[2] _cords;
	
	alias _cords this;
}