package net.nawia.gsao.dao.exceptions;

public class ExceptionDaoInit extends ExceptionDao {

	ExceptionDaoInit() {
		super("Init");
	}
	
	public ExceptionDaoInit(String s) {
		super("Init: " +s);
	}
	
	public ExceptionDaoInit(String s, Throwable cause) {
		super(s, cause);
	}
	
}
