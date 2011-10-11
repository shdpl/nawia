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
	std.array,
	msg._time.idle,
	msg._app.quit;

public import
	msg.msg,
	msg.mediator.mediator;

class MsgMediator : IMsgMediator, IMsgProvider, IMsgListener {
	private:
	mixin Singleton!MsgMediator;
	mixin InjectMsgListener!MsgTimeIdle _lstnrIdle;
	mixin InjectMsgProvider!MsgAppQuit _prvdrQuit;
	IMsgFilter[IMsgFilter][TypeInfo] _filters;
	IMsgListener[IMsgListener][TypeInfo] _listeners;
	IMsgProvider[IMsgProvider][TypeInfo] _providers;
	Variant _msg;
	bool _running; 
	
	/**
		Do not instantiate this class directly - use MsgMediator()
	*/
	this() {
	}
	
	~this() {
		_lstnrIdle.unregister(this);
		_prvdrQuit.unregister(this);
	}
	
	void init() {
		_running = true;
		setMaxMailboxSize(thisTid, 1024, OnCrowding.throwException);
		_lstnrIdle.register(this);
		_prvdrQuit.register(this);
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
			do {
				more = receiveTimeout(0, &recvMsg );
			} while(more)
			_lstnrIdle.deliver(MsgTimeIdle());
		} while (_running);
	}
	
	override void poll(bool delegate(Variant msg) condition) {
		do {
			receiveTimeout(0, &recvMsg );
		} while(condition(_msg))
	}
	
	override void poll(bool delegate() condition) {
		do {
			receiveTimeout(0, &recvMsg );
		} while(condition())
	}
	
	public void handle(Variant msg) {
		_running = false;
	}
	
	private:
	void recvMsg(Variant msg) {
		if (msg.type in _listeners)
			foreach(ref l; _listeners[msg.type]) {
				l.handle(msg);
			}
		_msg = msg;
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
