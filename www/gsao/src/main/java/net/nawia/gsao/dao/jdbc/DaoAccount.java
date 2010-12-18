package net.nawia.gsao.dao.jdbc;

import java.util.List;

import net.nawia.gsao.dao.Dao;
import net.nawia.gsao.domain.Account;

public class DaoAccount extends DaoJdbc<Integer, Account> implements Dao<Integer, Account> {

	public void persist(Account entity) {
		final String q = "INSERT INTO accounts VALUES ('')";
	}

	public void remove(Account entity) {
		// TODO Auto-generated method stub
		
	}

	public Account find(Integer id) {
		// TODO Auto-generated method stub
		return null;
	}

	public List<Account> findAll() {
		// TODO Auto-generated method stub
		return null;
	}


}
