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

module msg.mediator.mtd;

public import msg.msg;
public import msg.mediator.mediator;
public import msg.handler.tmp;
public import msg.window.close;

class MsgMediatorMtd : MsgMediator {
	
	MsgHandler[Msg][] _handlers;
	MsgListener[Msg][] _listeners;
	
	this() {
	}
	
	override bool addHandler(MsgHandler hndlr) {
		return false;
	}
	
	override bool delHandler(MsgHandler hndlr) {
		return false;
	}
	
	override bool addListener(MsgListener lstnr) {
		return false;
	}
	
	override bool delListener(MsgListener) {
		return false;
		
	}
	
	override bool addProvider(MsgProvider) {
		return false;
		
	}
	
	override bool delProvider(MsgProvider) {
		return false;
		
	}
	
}
