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

module ge.renderer;

private import impl.h3d.h3d,
	ge.window.window;

interface IRenderer {
	@property bool filteringTrilinear();
	@property void filteringTrilinear(bool value);
	
	@property ubyte anisotropy();
	@property void anisotropy(ubyte value);
	
	@property bool texCompression();
	@property void texCompression(bool value);
	
	@property bool linearizationSRGB();
	@property void linearizationSRGB(bool value);
	
	@property bool texturesReference();
	@property void texturesReference(bool value);
	
	@property uint shadowMapSize();
	@property void shadowMapSize(uint value);
	
	@property bool wireFrame();
	@property void wireFrame(bool value);
	
	@property bool debugView();
	@property void debugView(bool value);
	
	@property bool dumpFailedShaders();
	@property void dumpFailedShaders(bool value);
	
	@property bool profile();
	@property void profile(bool value);
	
	//@property Logs logs();
	//@property void logs(Logs value);
}
