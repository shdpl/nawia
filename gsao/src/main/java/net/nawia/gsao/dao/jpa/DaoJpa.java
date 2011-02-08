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
package net.nawia.gsao.dao.jpa;

import java.lang.reflect.*;
import java.util.List;

import javax.ejb.Stateless;
import javax.persistence.EntityManager;
import javax.persistence.PersistenceContext;

import net.nawia.gsao.dao.Dao;

@Stateless
public abstract class DaoJpa<K, E> implements Dao<K, E> {

	protected Class<E> entityClass;

	@PersistenceContext
	protected EntityManager entityManager;

	public DaoJpa() {
		ParameterizedType genericSuperclass = (ParameterizedType) getClass()
				.getGenericSuperclass();	//TODO dziedziczenie po interfejsach
		Type type = genericSuperclass.getActualTypeArguments()[1];
		if (type instanceof ParameterizedType) {
			this.entityClass = (Class) ((ParameterizedType) type).getRawType();
		} else {
			this.entityClass = (Class) type;
		}
	}

	public void persist(E entity) {
		entityManager.persist(entity);
	}

	public void remove(E entity) {
		entityManager.remove(entity);
	}

	public E find(K id) {
		return entityManager.find(entityClass, id);
	}

	public List<E> findAll() {
		// TODO Auto-generated method stub
		return null;
	}

}
