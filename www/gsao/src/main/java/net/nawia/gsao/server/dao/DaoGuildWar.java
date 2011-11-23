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

import net.nawia.gsao.server.model.GuildWar;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;



@Stateless
public class DaoGuildWar {

	private static final Logger log = LoggerFactory.getLogger(DaoGuildWar.class);

	@PersistenceContext
	private EntityManager entityManager;

	public void persist(GuildWar transientInstance) {
		log.debug("persisting GuildWar instance");
		try {
			entityManager.persist(transientInstance);
			log.debug("persist successful");
		} catch (RuntimeException re) {
			log.error("persist failed", re);
			throw re;
		}
	}

	public void remove(GuildWar persistentInstance) {
		log.debug("removing GuildWar instance");
		try {
			entityManager.remove(persistentInstance);
			log.debug("remove successful");
		} catch (RuntimeException re) {
			log.error("remove failed", re);
			throw re;
		}
	}

	public GuildWar merge(GuildWar detachedInstance) {
		log.debug("merging GuildWar instance");
		try {
			GuildWar result = entityManager.merge(detachedInstance);
			log.debug("merge successful");
			return result;
		} catch (RuntimeException re) {
			log.error("merge failed", re);
			throw re;
		}
	}

	public GuildWar findById(int id) {
		log.debug("getting GuildWar instance with id: " + id);
		try {
			GuildWar instance = entityManager.find(GuildWar.class, id);
			log.debug("get successful");
			return instance;
		} catch (RuntimeException re) {
			log.error("get failed", re);
			throw re;
		}
	}
}
