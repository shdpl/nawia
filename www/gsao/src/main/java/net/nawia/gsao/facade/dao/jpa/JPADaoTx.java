package net.nawia.gsao.facade.dao.jpa;

import javax.persistence.EntityTransaction;

import net.nawia.gsao.facade.dao.DaoTx;

public class JPADaoTx implements DaoTx {
	EntityTransaction tx;

	public JPADaoTx(EntityTransaction transaction) {
		tx = transaction;
	}

	@Override
	public void begin() {
		tx.begin();
	}

	@Override
	public void commit() {
		tx.commit();
	}

	@Override
	public boolean isActive() {
		return tx.isActive();
	}

	@Override
	public void rollback() {
		tx.rollback();
	}

}
