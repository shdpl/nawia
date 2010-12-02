module msg.mediator.mediator;

public import msg.msg;
public import msg.listener.listener;
public import msg.provider;

interface MsgMediator {
	bool addHandler(Msg);
	bool delHandler(Msg);
	
	bool addListener(MsgListener);
	bool delListener(MsgListener);
	
	bool addProvider(MsgProvider);
	bool delProvider(MsgProvider);
}