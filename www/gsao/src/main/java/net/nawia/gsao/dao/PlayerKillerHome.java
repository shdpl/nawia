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

import net.nawia.gsao.model.PlayerKiller;
import net.nawia.gsao.model.PlayerKillerId;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

/**
 * Home object for domain model class PlayerKiller.
 * @see .PlayerKiller
 * @author Hibernate Tools
 */
@Stateless
public class PlayerKillerHome {

	private static final Logger log = LoggerFactory.getLogger(PlayerKillerHome.class);

	@PersistenceContext
	private EntityManager entityManager;

	public void persist(PlayerKiller transientInstance) {
		log.debug("persisting PlayerKiller instance");
		try {
			entityManager.persist(transientInstance);
			log.debug("persist successful");
		} catch (RuntimeException re) {
			log.error("persist failed", re);
			throw re;
		}
	}

	public void remove(PlayerKiller persistentInstance) {
		log.debug("removing PlayerKiller instance");
		try {
			entityManager.remove(persistentInstance);
			log.debug("remove successful");
		} catch (RuntimeException re) {
			log.error("remove failed", re);
			throw re;
		}
	}

	public PlayerKiller merge(PlayerKiller detachedInstance) {
		log.debug("merging PlayerKiller instance");
		try {
			PlayerKiller result = entityManager.merge(detachedInstance);
			log.debug("merge successful");
			return result;
		} catch (RuntimeException re) {
			log.error("merge failed", re);
			throw re;
		}
	}

	public PlayerKiller findById(PlayerKillerId id) {
		log.debug("getting PlayerKiller instance with id: " + id);
		try {
			PlayerKiller instance = entityManager.find(PlayerKiller.class, id);
			log.debug("get successful");
			return instance;
		} catch (RuntimeException re) {
			log.error("get failed", re);
			throw re;
		}
	}
}
