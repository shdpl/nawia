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

module ge.window.window;

public import
	msg._window.close,
	msg._window.refresh,
	msg._window.resize,
	msg.listener,
	msg.provider,
	type.screen.cords,
	type.color.rgb,
	window.properties,
	window.mode;

interface Window : MsgProvider!MsgWindowRefresh, MsgProvider!MsgWindowResize,
	MsgProvider!MsgWindowClose
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
	
	ColorRGB fmtMain();
	ubyte fmtAlpha();
	
	ColorRGB fmtAccumMain();
	ubyte fmtAccumAlpha();
	
	ubyte fmtStencil();
	ubyte fmtDepth();
	
	ubyte auxBufNo();
	
	ubyte FSAASamplesNo();
	
	CordsScreen size();
	void size(CordsScreen);
	
	void swapBuffers();
	
	WindowMode[] supportedModes();
	WindowMode desktopMode();

	bool setMsgListener( MsgListener!MsgWindowClose prvdr );
	bool setMsgListener( MsgListener!MsgWindowResize prvdr );
	bool setMsgListener( MsgListener!MsgWindowRefresh prvdr );
	
}

