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


module impl.nawia.msg.mediator.mtd;

import std.string,
	std.concurrency;

public import msg.msg,
	msg.mediator.mediator;

class MsgMediator : Singleton!MsgMediator, IMsgMediator {
	
	IMsgFilter!Msg[IMsgFilter!Msg][TypeInfo] _filters;
	IMsgListener!Msg[IMsgListener!Msg][TypeInfo] _listeners;
	IMsgProvider!Msg[IMsgProvider!Msg][TypeInfo] _providers;
	
	this() {
		setMaxMailboxSize(thisTid, 1024, OnCrowding.throwException);
	}
	
	void handle(Msg msg) {
		//TODO
	}
	
	override bool register(IMsgFilter!Msg filter) {
		auto type = typeid(filter);
		if ( type !in _filters ) {
			_filters[type] = null;
			
			}
		if ( filter !in _filters[type] ) {
			_filters[type][filter] = filter;
			return true;
		} 
		return false;
	}
	
	bool unregister(IMsgFilter!Msg filter)
	in {
		assert(typeid(filter) in _filters);
	}body{
		auto type = typeid(filter);
		if ( filter in _filters[type]) {
			_filters[type].remove(filter);		//FIXME: _handlers[type].remove(hndlr);
			return true;
		}
		return false;
	}
	
	override bool register(IMsgListener!Msg lstnr) {
		auto type = typeid(lstnr);
		if ( type !in _listeners )
			_listeners[type] = null;
		if ( lstnr !in _listeners[type]) {
			_listeners[type][lstnr] = lstnr;
			return true;
		}
		return false;
	}
	
	override bool unregister(IMsgListener!Msg lstnr)
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
	
	override bool register(IMsgProvider!Msg prvdr) {
		auto type = typeid(prvdr);
		if ( type !in _providers )
			_providers[type] = null;
		if ( prvdr !in _providers[type] ) {
			_providers[type][prvdr] = prvdr;
			return true;
		}
		return false;
		
	}
	
	override bool unregister(IMsgProvider!Msg prvdr)
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
	
	override void deliver(Msg msg) {
		
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
	
}
