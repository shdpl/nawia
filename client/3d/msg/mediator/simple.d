module msg.mediator.simple;

import msg.msg;

class MsgMediatorSimple() : MsgMediator {
	
	MsgHandler[Msg][] _handlers;
	MsgListener[Msg][] _listeners;
	
	override bool addHandler(MsgHandler) {
		
	}
	
	override bool delHandler(MsgHandler) {
		
	}
	
	override bool addListener(MsgListener) {
		
	}
	
	override bool delListener(MsgListener) {
		
	}
	
	override bool addProvider(MsgProvider) {
		
	}
	
	override bool delProvider(MsgProvider) {
		
	}
	
}