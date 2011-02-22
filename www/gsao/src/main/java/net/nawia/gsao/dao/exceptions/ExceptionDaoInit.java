package net.nawia.gsao.dao.exceptions;

import javax.ejb.ApplicationException;

@ApplicationException
public class ExceptionDaoInit extends ExceptionDao {

	/**
	 * 
	 */
	private static final long serialVersionUID = -4675705091354618357L;

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
