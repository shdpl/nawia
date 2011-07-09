module msg.mediator.std;

import std.signals;
import std.metastrings;

import msg.mediator.mediator;



class MediatorStD : Singleton!MediatorStD, MsgMediator {
	
	public:
	override bool register(MsgListener!Msg lstnr){return true;}
	override bool unregister(MsgListener!Msg lstnr){return true;}
	
	override bool register(MsgProvider!Msg lstnr){return true;}
	override bool unregister(MsgProvider!Msg lstnr){return true;}
	
	bool register(MsgFilter!Msg filter){return true;}
	bool unregister(MsgFilter!Msg filter){return true;}
	
	override void deliver(Msg msg){}
	void poll(){}
	
}