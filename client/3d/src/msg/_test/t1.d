module msg._test.t1;

private import
	msg.msg,
	msg.provider.gen,
	msg.handler.gen;

class MsgTest1 : Msg {
	
}

mixin(MsgProviderGen!"Test1");
mixin(MsgHandlerGen!"Test1");