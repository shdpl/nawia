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

module window.properties;

public import screen.cords;


enum WindowMode { NORMAL, FULLSCREEN, MINIMIZED };

class WindowProperties	//FIXME: types in class vs struct
{
	CordsScreen size;
	WindowMode mode = WindowMode.NORMAL;
	
	ubyte[3] rgb = 0;
	ubyte alpha = 0;
	ubyte depth = 0;
	ubyte stencil = 0;
	
	ubyte[3] accum_rgb = 0;
	ubyte accum_alpha = 0;

	ubyte FSAA_samples = 0;
	
	bool stereo = false;
	bool resizable = true;
	
	ubyte refresh_rate = 0;
	
	ubyte[2] ogl_ver = [2,1];
}
