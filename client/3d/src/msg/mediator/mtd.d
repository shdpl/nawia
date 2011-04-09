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

import std.string,
	std.concurrency;

public import msg.msg,
	msg.mediator.mediator;

class MsgMediatorMtD : MsgMediator {
	
	MsgHandler!Msg[MsgHandler!Msg][TypeInfo] _handlers;
	MsgListener!Msg[MsgListener!Msg][TypeInfo] _listeners;
	MsgProvider!Msg[MsgProvider!Msg][TypeInfo] _providers;
	
	this() {
		_handlers = null;
		_listeners = null;
		_providers = null;
		
		setMaxMailboxSize(thisTid, 1024, OnCrowding.throwException);
	}
	
	override bool addHandler(MsgHandler!Msg hndlr) {
		auto msgtype = typeid(hndlr.getMsg());
		if ( !type in _handlers )
			_handlers[type] = null;
		if ( !hndlr in _handlers[type] ) {
			_handlers[type][hndlr] = hndlr;
			return true;
		} 
		return false;
	}
	
	override bool delHandler(MsgHandler!Msg hndlr)
	in {
		assert(typeid(hndlr) in _handlers);
	}body{
		auto type = typeid(hndlr);
		if ( hndlr in _handlers[type]) {
			_handlers[type].remove(hndlr);		//FIXME: _handlers[type].remove(hndlr);
			return true;
		}
		return false;
	}
	
	override bool addListener(MsgListener!Msg lstnr) {
		auto type = typeid(lstnr);
		if ( !type in _listeners )
			_listeners[type] = null;
		if ( !lstnr in _listeners[type]) {
			_listeners[type][lstnr] = lstnr;
			return true;
		}
		return false;
	}
	
	override bool delListener(MsgListener!Msg lstnr)
	in {
		assert(typeid(lstnr) in _listeners);
	}body{
		auto type = typeid(lstnr);
		if ( lstnr in _listeners[type]) {
			_listeners[type].remove(lstnr);		//FIXME: _handlers[type].remove(hndlr);
			return true;
		}
		return false;
	}
	
	override bool addProvider(MsgProvider!Msg prvdr) {
		auto type = typeid(prvdr);
		if ( !type in _providers )
			_providers[type] = null;
		if ( !prvdr in _providers[type] ) {
			_providers[type][prvdr] = prvdr;
			return true;
		}
		return false;
		
	}
	
	override bool delProvider(MsgProvider!Msg prvdr)
	in {
		assert(typeid(prvdr) in _providers);
	}body{
		auto type = typeid(prvdr);
		if ( prvdr in _providers[type] ) {
			_providers[type].remove(prvdr);		//FIXME: _handlers[type].remove(hndlr);
			return true;
		}
		return false;
	}
	
	override void poll() {
		bool more;
		do {
			more = receiveTimeout(0, &recvMsg );
		} while(more)
	}
	
	private:
	void recvMsg(Msg msg) {
		foreach(ref l; _listeners[typeid(msg)]) {
			
		}
	}
	
}

unittest {
	try {
		MsgHandler[] handlers;
		handlers ~= new msg._test.t1.MsgHandlerTest1();
		handlers ~= new msg._test.t2.MsgHandlerTest2();
		MsgMediatorMtD m = new MsgMediatorMtD;
		
		assert(m.addHandler(handlers[0]));
		assert(m.addHandler(handlers[1]));
		assert(!m.addHandler(handlers[0]));
			
		assert(m.delHandler(handlers[0]));
		assert(!m.delHandler(handlers[0]));
		assert(m.delHandler(handlers[1]));
	} catch (Exception e) {
		std.stdio.writeln("mtd.d unittest failed");
		throw e;
	}
}
