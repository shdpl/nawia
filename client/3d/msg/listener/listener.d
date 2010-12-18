module msg.listener.listener;

public import msg.msg;

interface MsgListener {
	void msgReceive(Msg msg);
}