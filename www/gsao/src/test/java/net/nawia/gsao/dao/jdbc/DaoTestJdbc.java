package net.nawia.gsao.dao.jdbc;

import java.util.List;
import java.util.logging.Logger;

import net.nawia.gsao.dao.Dao;
import net.nawia.gsao.dao.exceptions.ExceptionDaoInit;
import net.nawia.gsao.domain.Account;

public class DaoTestJdbc extends DaoJdbc<Integer, Integer> implements Dao<Integer, Integer> {

	public DaoTestJdbc() throws ExceptionDaoInit {
		super();
	}

	public void persist(Integer entity) {
		
	}

	public void remove(Integer entity) {
		
	}

	public Integer find(Integer id) {
		return null;
	}

	public List<Integer> findAll() {
		return null;
	}


}
