module msg.handler.handler;

interface MsgHandler {
	
	/**
	 * Handle message.
	 * 
	 * Params:
	 * 		msg		= message to handle
	 *
	 * Returns:
	 *		true	= continue delivering
	 *		false	= ignore message
	 */
	bool msgHandle();
	
}