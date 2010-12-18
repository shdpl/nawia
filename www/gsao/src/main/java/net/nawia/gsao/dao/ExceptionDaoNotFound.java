package net.nawia.gsao.dao;

public class ExceptionDaoNotFound extends ExceptionDao {

	ExceptionDaoNotFound() {
		super("Not found");
	}
	
	ExceptionDaoNotFound(String s) {
		super("Not found: " +s);
	}
}
