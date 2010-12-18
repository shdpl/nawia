package net.nawia.gsao.dao;

public class ExceptionDaoMalformed extends ExceptionDao {

	ExceptionDaoMalformed() {
		super("Malformed");
	}
	
	ExceptionDaoMalformed(String s) {
		super("Malformed: " +s);
	}	
	
}
