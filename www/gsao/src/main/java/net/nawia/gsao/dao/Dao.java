/*******************************************************************************
 * Copyright (C) 2010 Mariusz 'shd' Gliwiński.
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 * 
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 ******************************************************************************/
package net.nawia.gsao.dao;

import java.util.List;

import net.nawia.gsao.domain.Account;

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
	 * @return Loaded entity or null if cannot be found.
	 */
	E find(K id);
	
	/**
	 * 
	 * @param account
	 * @return
	 */
	K find(E account);
	
	/**
	 * Find all registered accounts.
	 * 
	 * @return List of accounts or null in case of fail
	 */
	List<E> findAll();
}
