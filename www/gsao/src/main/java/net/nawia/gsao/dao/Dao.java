package net.nawia.gsao.dao;

import java.util.List;

/** 
 * Abstract DAO Interface.
 * @author shd
 *
 * @param <K> Primary Key type
 * @param <E> Entity to persist
 */
public interface Dao<K, E> {
	/**
	 * Method called to persist an entity.
	 * 
	 * @param entity Entity to persist.
	 */
	void persist(E entity);
	
	/**
	 * Method deleting persisted entity.
	 * 
	 * @param entity
	 */
	void remove(E entity);
	
	/**
	 * Find persisted entity by ID
	 * @param id
	 * @return
	 */
	E find(K id);
	
	/**
	 * 
	 * @return
	 */
	List<E> findAll();
}
