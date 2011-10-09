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

private import
	std.concurrency,
	std.array;

public import msg.msg,
	msg.mediator.mediator;

class MsgMediator : IMsgMediator {
	private:
	mixin Singleton!MsgMediator;
	IMsgFilter[IMsgFilter][TypeInfo] _filters;
	IMsgListener[IMsgListener][TypeInfo] _listeners;
	IMsgProvider[IMsgProvider][TypeInfo] _providers;
	
	/**
		Do not instantiate this class directly - use MsgMediator()
	*/
	this() {
		setMaxMailboxSize(thisTid, 1024, OnCrowding.throwException);
	}
	
	public:
	override bool register(TypeInfo type, IMsgFilter filter) {
		if (type in _filters)
			if (filter in _filters[type])
				return false;
		_filters[type][filter] = filter;
		return true;
	}
	
	override bool unregister(TypeInfo type, IMsgFilter filter) {
		if (type !in _filters)
			if (filter !in _filters[type])
				return false;
		_filters[type].remove(filter);
		return true;
	}
	
	override bool register(TypeInfo type, IMsgListener lstnr) {
		if (type in _listeners)
			if (lstnr in _listeners[type])
				return false;
		_listeners[type][lstnr] = lstnr;
		return true;
	}
	
	override bool unregister(TypeInfo type, IMsgListener lstnr) {
		if (type !in _listeners)
			if (lstnr !in _listeners[type])
				return false;
		_listeners[type].remove(lstnr);
		return true;
	}
	
	override bool register(TypeInfo type, IMsgProvider prvdr) {
		if (type in _providers)
			if (prvdr in _providers[type])
				return false;
		_providers[type][prvdr] = prvdr;
		return true;
	}
	
	override bool unregister(TypeInfo type, IMsgProvider prvdr) {
		if (type !in _providers)
			if (prvdr !in _providers[type])
				return false;
		_providers[type].remove(prvdr);
		return true;
	}
	
	override void deliver(Variant msg)
	in {
		assert (msg.hasValue);
	} body {
		send(thisTid, msg);	//TODO: actual multithreading
	}
	
	override void poll() {
		bool more;
		do {
			more = receiveTimeout(0, &recvMsg );
		} while(more)
	}
	
	private:
	void recvMsg(Variant msg) {
		if (msg.type in _listeners)
			foreach(ref l; _listeners[msg.type]) {
				l.handle(msg);
			}
	}
	
}

unittest {
	import ge.window.msg.refresh;
	
	uint g_handle;
	
	class Provider : IMsgProvider {
		mixin InjectMsgListener!MsgWindowRefresh _lstnrRefresh;
		
		this() {
			assert(true == _lstnrRefresh.register(this));
			assert(false == _lstnrRefresh.register(this));
		}
		
		public void send() {
			_lstnrRefresh.deliver(MsgWindowRefresh());
		}
	}
	
	class Listener1 : IMsgListener {
		mixin InjectMsgProvider!MsgWindowRefresh _prvdrRefresh;
		
		this() {
			assert(true == _prvdrRefresh.register(this));
		}
		
		void handle(Variant msg) {
			g_handle++;
		}
	}
	
	class Listener2 : IMsgListener {
		mixin InjectMsgProvider!MsgWindowRefresh _prvdrRefresh;
		
		this() {
			assert(true == _prvdrRefresh.register(this));
		}
		
		void handle(Variant msg) {
			g_handle++;
		}
	}
	

	auto mtd = MsgMediator();
	auto lstnr1 = new Listener1();
	auto prvdr = new Provider();
	prvdr.send();
	auto lstnr2 = new Listener2();
	prvdr.send();
	mtd.poll();
	assert(g_handle == 3);
}
