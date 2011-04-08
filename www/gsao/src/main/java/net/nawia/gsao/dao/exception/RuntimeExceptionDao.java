package net.nawia.gsao.dao.exception;

public class RuntimeExceptionDao extends RuntimeException {

	/**
	 * 
	 */
	private static final long serialVersionUID = -7699018965632583629L;

	public RuntimeExceptionDao() {
		super("Runtime exception in Dao:");
	}
	
	public RuntimeExceptionDao(String s) {
		super("Runtime exception in Dao: " +s);
	}
	
	public RuntimeExceptionDao(String s, Throwable cause) {
		super(s, cause);
	}
}
