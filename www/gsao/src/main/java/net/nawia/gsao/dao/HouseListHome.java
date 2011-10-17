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

import javax.ejb.Stateless;
import javax.persistence.EntityManager;
import javax.persistence.PersistenceContext;

import net.nawia.gsao.model.HouseList;
import net.nawia.gsao.model.HouseListId;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

/**
 * Home object for domain model class HouseList.
 * @see .HouseList
 * @author Hibernate Tools
 */
@Stateless
public class HouseListHome {

	private static final Logger log = LoggerFactory.getLogger(HouseListHome.class);

	@PersistenceContext
	private EntityManager entityManager;

	public void persist(HouseList transientInstance) {
		log.debug("persisting HouseList instance");
		try {
			entityManager.persist(transientInstance);
			log.debug("persist successful");
		} catch (RuntimeException re) {
			log.error("persist failed", re);
			throw re;
		}
	}

	public void remove(HouseList persistentInstance) {
		log.debug("removing HouseList instance");
		try {
			entityManager.remove(persistentInstance);
			log.debug("remove successful");
		} catch (RuntimeException re) {
			log.error("remove failed", re);
			throw re;
		}
	}

	public HouseList merge(HouseList detachedInstance) {
		log.debug("merging HouseList instance");
		try {
			HouseList result = entityManager.merge(detachedInstance);
			log.debug("merge successful");
			return result;
		} catch (RuntimeException re) {
			log.error("merge failed", re);
			throw re;
		}
	}

	public HouseList findById(HouseListId id) {
		log.debug("getting HouseList instance with id: " + id);
		try {
			HouseList instance = entityManager.find(HouseList.class, id);
			log.debug("get successful");
			return instance;
		} catch (RuntimeException re) {
			log.error("get failed", re);
			throw re;
		}
	}
}
