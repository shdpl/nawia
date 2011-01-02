package net.nawia.gsao.dao.exceptions;


public class RuntimeExceptionDao extends RuntimeException {

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
