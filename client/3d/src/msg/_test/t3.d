module msg._test.t3;

private import
	msg.msg,
	msg.provider.gen,
	msg.handler.gen;

class MsgTest3 : Msg {
	
}

mixin(MsgProviderGen!"Test3");
mixin(MsgHandlerGen!"Test3");