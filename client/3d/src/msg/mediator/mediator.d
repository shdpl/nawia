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

module msg.mediator.mediator;

public import msg.msg;
public import msg.listener.listener;
public import msg.provider.provider;
public import msg.handler.handler;

abstract class MsgMediator {
	/**
	 * Add handler, that wants to be invoked each time on every message
	 * of given type.
	 *
	 * It might allow, or block message from being transmitted to listeners,
	 * or next handlers in chain.
	 *
	 * Params:
	 * 		hndlr =		MsgHandler to add
	 */
	bool addHandler(MsgHandler!Msg hndlr);
	bool delHandler(MsgHandler!Msg hndlr);
	
	bool addListener(MsgListener!Msg lst);
	bool delListener(MsgListener!Msg lst);
	
	bool addProvider(MsgProvider!Msg prvdr);
	bool delProvider(MsgProvider!Msg prvdr);
	
	void poll();
}
