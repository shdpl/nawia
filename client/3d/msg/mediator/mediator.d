module msg.mediator.mediator;

public import msg.msg;
public import msg.listener.listener;
public import msg.provider;
public import msg.handler.handler;

interface MsgMediator {
	/**
	 * Add handler, that wants to be invoked each time on every message.
	 *
	 * It might allow, or block message from being transmitted to listeners.
	 *
	 * Params:
	 * 		hndlr =		MsgHandler to add
	 */
	bool addHandler(MsgHandler hndlr);
	bool delHandler(MsgHandler hndlr);
	
	bool addListener(MsgListener lst);
	bool delListener(MsgListener lst);
	
	bool addProvider(MsgProvider prvdr);
	bool delProvider(MsgProvider prvdr);
}