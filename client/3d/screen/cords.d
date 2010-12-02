module screen.cords;

import util.cords;

class CordsScreen : Cords!(2) {
	//Screen.Id id_screen = Screen.Id.DEFAULT; TODO: screen
	
	this() {
		assert(x > 0 && y > 0);
		//assert(x < Screen[DEFAULT].Width && y < Screen[DEFAULT].Heigth); TODO: screen
	}
	
}