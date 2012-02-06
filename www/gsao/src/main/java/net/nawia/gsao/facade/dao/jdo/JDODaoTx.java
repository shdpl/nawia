package net.nawia.gsao.facade.dao.jdo;

import javax.jdo.Transaction;

import net.nawia.gsao.facade.dao.DaoTx;

public class JDODaoTx implements DaoTx {
	Transaction tx;

	public JDODaoTx(Transaction currentTransaction) {
		tx = currentTransaction;
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
