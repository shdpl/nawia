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
