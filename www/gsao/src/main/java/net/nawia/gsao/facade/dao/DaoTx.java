package net.nawia.gsao.facade.dao;

public interface DaoTx {
	
	/**
	 * Start a resource transaction.
	 */
	void begin();
	
	/**
	 * Commit the current transaction.
	 */
	void commit();
	
	/**
	 * Returns whether current transaction is active or not.
	 * @return true if active, false otherwise
	 */
	boolean isActive();
	
	/**
	 * Roll back the current resource transaction.
	 */
	void rollback();
	
}
