module screen.cords;

import util.cords;

class CordsScreen : Cords!(uint, 2){
	//Screen.Id id_screen = Screen.Id.DEFAULT; TODO: screen
	
	this(uint x, uint y) {
		assert(x > 0 && y > 0);
		//assert(x < id_screen.Width && y < id_screen.Heigth); TODO: screen
		super(x,y);
	}
	
}