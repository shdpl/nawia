package net.nawia.gsao.dao;

public class ExceptionDao extends Exception {
	
	ExceptionDao() {
		super("ExceptionDao");
	}
	
	ExceptionDao(String s) {
		super("ExceptionDao: " +s);
	}

}
