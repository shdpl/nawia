module io.log.provider;

public import
	io.log.entry,
	msg.provider,
	msg._log.log,
	msg.mediator.mediator; //FIXME
	
	
interface ILogProvider : IMsgProvider {	//TODO: compile-time specialization by module

	mixin template InjectLogProvider(T) {
		mixin InjectMsgListener!MsgLog;
		
		private bool register() {
			return register(this);
		}
		
		private void unregister() {
			unregister(this);
		}
		
		private void deliver(LogEntry log) {
			
		}
		
	}
	
}