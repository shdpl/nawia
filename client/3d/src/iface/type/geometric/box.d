module type.geometric.rect;

import type.cords;

static if (is(T : Cords))
	alias Tuple!(T, T) Box(T);

//struct Box(T) if (is(T : Cords)) {
//	T[2] _cords;
//	
//	alias _cords this;
//}