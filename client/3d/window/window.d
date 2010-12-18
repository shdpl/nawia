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

module window.window;

public import screen.cords;
public import window.properties;
public import msg.listener.window.close;
public import msg.listener.window.refresh;
public import msg.listener.window.resize;

protected import msg.mediator.mediator;

interface Window
{
	public:
	
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
	
	void addListenerClose(MsgListenerWindowClose lstnr);
	void delListenerClose(MsgListenerWindowClose lstnr);
	
	void addListenerResize(MsgListenerWindowResize lstnr);
	void delListenerResize(MsgListenerWindowResize lstnr);
	
	void addListenerRefresh(MsgListenerWindowRefresh lstnr);
	void delListenerRefresh(MsgListenerWindowRefresh lstnr);
	
	void swapBuffers();

}

