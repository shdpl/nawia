module msg._test.t2;

private import
	msg.msg,
	msg.provider.gen,
	msg.handler.gen;

class MsgTest2 : Msg {
	
}

mixin(MsgProviderGen!"Test2");
mixin(MsgHandlerGen!"Test2");