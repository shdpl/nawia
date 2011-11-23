package net.nawia.gsao.server.service.exception;

//@ApplicationException
public class ExceptionServiceHouse extends Exception {
	
	/**
	 * 
	 */
	private static final long serialVersionUID = -639435598920318226L;

	
		ExceptionServiceHouse() {
			super("Exception in House Service: ");
		}
		
		ExceptionServiceHouse(String s) {
			super("Exception in House Service: " +s);
		}
		
		ExceptionServiceHouse(String s, Throwable cause) {
			super(s, cause);
		}

}
