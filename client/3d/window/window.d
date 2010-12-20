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

module window.window;

protected import
	msg.window.close,
	msg.window.resize,
	msg.window.refresh,
	screen.cords,
	window.properties;

interface Window
{
	
	string title();
	void title(in string title);
	
	CordsScreen size();
	void size(CordsScreen size);
	
	bool focused();
	
	bool stereo();
	
	bool resizable();
	
	bool iconified();
	void iconified(bool state);
	
	uint refreshRate();
	
	ubyte[3] bitsRGB();
	ubyte bitsAlpha();
	
	ubyte[3] bitsAccumRGB();
	ubyte bitsAccumAlpha();
	
	ubyte bitsStencil();
	ubyte bitsDepth();
	
	ubyte auxBufNo();
	
	ubyte FSAASamplesNo();
	
	CordsScreen size();
	void size(CordsScreen);
	
	void swapBuffers();

	bool setMsgProviderClose( MsgProviderWindowClose prvdr );
	bool setMsgProviderResize( MsgProviderWindowResize prvdr );
	bool setMsgProviderRefresh( MsgProviderWindowRefresh prvdr );
	
}

