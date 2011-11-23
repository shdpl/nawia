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
package net.nawia.gsao.facade.dao;

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
	 * Saves the entity; either inserting or overriding the existing document
	 * 
	 * @param entity Entity to persist.
	 */
	Key<K> save(E entity);

	/**
	 * Load persisted entity by ID
	 * @param id
	 * @return Loaded entity or null if cannot be found.
	 */
    E get(K id);

	/**
	 * Find all registered entities.
	 * 
	 * @return List of all entities or null in case of fail
	 */
	List<E> findAll();

    /**
	 * Delete persisted entity.
	 * 
	 * @param entity
	 */
    WriteResult delete(E entity);
    
    /**
     * Delete the entity by id value
     */
    WriteResult deleteById(K id);

	/**
	 * Releases acquired resources
	 */
	void close();
	
    /**
     * The type of entities for this DAO
     */
    Class<E> getEntityClass();
}