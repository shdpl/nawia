package net.nawia.gsao.dao.exceptions;

import javax.ejb.ApplicationException;

@ApplicationException
public class ExceptionDaoInit extends ExceptionDao {

	public ExceptionDaoInit() {
		super("Init");
	}
	
	public ExceptionDaoInit(String s) {
		super("Init: " +s);
	}
	
	public ExceptionDaoInit(String s, Throwable cause) {
		super(s, cause);
	}
	
}
