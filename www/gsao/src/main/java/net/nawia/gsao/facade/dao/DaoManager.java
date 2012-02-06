package net.nawia.gsao.facade.dao;

import java.util.Collection;

public interface DaoManager {
	
	//static boolean matches(Object resource);
	
	/**
	 * Return the Transaction instance associated with a PersistenceManager.
	 * @return Transaction object
	 */
	DaoTx getCurrentTx();
	
	/**
	 * Finds object of class 'cls' by primary key 'key'
	 * @param cls
	 * @param key
	 * @return
	 */
	<T> T findById(Class<T> cls, Object key);
	
	/**
	 * Finds all objects of class 'cls' by primary keys contained in collection 'keys'.
	 * @param cls
	 * @param key
	 * @return
	 */
	<T> Collection<T> findAllById(Class<T> cls, Collection<Object> keys);
	
	/**
	 * Persist entity.
	 * 
	 * Needs to be called within active transaction.
	 * @param pc
	 * @return persisted entity
	 */
	<T> T persist(T pc);
	
	/**
	 * Persist collection of entities.
	 * 
	 * Needs to be called within active transaction.
	 * @param pcs
	 * @return persisted collection of entities
	 */
	<T> Collection<T> persistAll(Collection<T> pcs);
	
	/**
	 * Persist array of entities.
	 * 
	 * Needs to be called within active transaction.
	 * @param pcs
	 * @return
	 */
	<T> T[] persistAll(T[] pcs);
	
	/**
	 * Delete the persistent instance from the data store.
	 * @param pc
	 */
	<T> void delete(T pc);
	
	/**
	 * Delete array of persistent instances from the data store.
	 * @param pc
	 */
	<T> void deleteAll(T[] pcs);
	
	/**
	 * Delete a Collection of instances from the data store.
	 * @param pcs
	 */
	<T> void deleteAll(Collection<T> pcs);
	
	/**
	 * Returns native manager object shadowed by DaoManager.
	 * @return
	 */
	Object getNativeManager();
}
