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

module nawiaclient3d;

import std.concurrency, std.stdio;

import msg.mediator.mtd, msg.window.close,
	window.glfw, window.window, screen.cords, glfw;


void main(string args[])
{
	auto mtd = new MsgMediatorMtd();
	WindowProperties props = new WindowProperties();
	props.size = new CordsScreen();
	Window glc = new WindowGLFW(props);
	glc.setMsgProviderClose = new MsgProviderWindowClose();
	glc.setMsgProviderResize = new MsgProviderWindowResize();
	glc.setMsgProviderRefresh = new MsgProviderWindowRefresh();
	while(true) {
		glfwPollEvents();
	}
}
