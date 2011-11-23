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
package net.nawia.gsao.server.dao;

import javax.ejb.Stateless;
import javax.persistence.EntityManager;
import javax.persistence.PersistenceContext;

import net.nawia.gsao.server.model.EnvKiller;
import net.nawia.gsao.server.model.EnvKillerId;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;



@Stateless
public class DaoEnvKiller {

	private static final Logger log = LoggerFactory.getLogger(DaoEnvKiller.class);

	@PersistenceContext
	private EntityManager entityManager;

	public void persist(EnvKiller transientInstance) {
		log.debug("persisting EnvKiller instance");
		try {
			entityManager.persist(transientInstance);
			log.debug("persist successful");
		} catch (RuntimeException re) {
			log.error("persist failed", re);
			throw re;
		}
	}

	public void remove(EnvKiller persistentInstance) {
		log.debug("removing EnvKiller instance");
		try {
			entityManager.remove(persistentInstance);
			log.debug("remove successful");
		} catch (RuntimeException re) {
			log.error("remove failed", re);
			throw re;
		}
	}

	public EnvKiller merge(EnvKiller detachedInstance) {
		log.debug("merging EnvKiller instance");
		try {
			EnvKiller result = entityManager.merge(detachedInstance);
			log.debug("merge successful");
			return result;
		} catch (RuntimeException re) {
			log.error("merge failed", re);
			throw re;
		}
	}

	public EnvKiller findById(EnvKillerId id) {
		log.debug("getting EnvKiller instance with id: " + id);
		try {
			EnvKiller instance = entityManager.find(EnvKiller.class, id);
			log.debug("get successful");
			return instance;
		} catch (RuntimeException re) {
			log.error("get failed", re);
			throw re;
		}
	}
}
