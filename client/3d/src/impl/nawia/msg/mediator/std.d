module msg.mediator.std;

import std.signals;
import std.metastrings;

import msg.mediator.mediator;


//FIXME: name clash
class MediatorStD : Singleton!MediatorStD, IMsgMediator {
	
	public:
	override bool register(IMsgListener!Msg lstnr){return true;}
	override bool unregister(IMsgListener!Msg lstnr){return true;}
	
	override bool register(IMsgProvider!Msg lstnr){return true;}
	override bool unregister(IMsgProvider!Msg lstnr){return true;}
	
	bool register(IMsgFilter!Msg filter){return true;}
	bool unregister(IMsgFilter!Msg filter){return true;}
	
	override void deliver(Msg msg){}
	void poll(){}
	
}