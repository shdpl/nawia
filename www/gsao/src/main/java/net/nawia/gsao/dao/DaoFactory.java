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

import java.util.HashMap;
import java.util.logging.*;

import javax.ejb.Singleton;

import net.nawia.gsao.dao.exception.ExceptionDao;
import net.nawia.gsao.dao.exception.ExceptionDaoMalformed;
import net.nawia.gsao.dao.exception.ExceptionDaoNotFound;
import net.nawia.gsao.dao.jdbc.DaoJdbc;
import net.nawia.gsao.dao.jpa.DaoJpa;

@Singleton
public class DaoFactory {
	static final private Logger _log = Logger.getLogger(DaoFactory.class
			.getName());
	private static HashMap<String, Class<Dao<?, ?>>> _instances;

	/**
	 * 
	 * @param <K>
	 * @param <E>
	 * @param toBuild
	 * @return
	 * @throws ExceptionDao
	 */
	//@Produces FIXME
	@SuppressWarnings("unchecked")
	static synchronized public <K, E> Dao<K, E> build(
			Class<? extends Dao<K, E>> toBuild) throws ExceptionDao {
		final String name = toBuild.getSimpleName();

		_log.entering(DaoFactory.class.getName(), "build", (Object) toBuild);

		if (null == _instances)
			_instances = new HashMap<String, Class<Dao<?, ?>>>();

		if (!_instances.containsKey(name)) {
			Class<Dao<?, ?>> cl;
			try {
				final String nameJdbc = "net.nawia.gsao.dao.jdbc." + name;
				if (DaoJdbc.class == Class.forName(nameJdbc).getSuperclass()) {
					cl = (Class<Dao<?, ?>>) Class.forName(nameJdbc);
					_log.info("building " + nameJdbc);
				} else {
					throw new ExceptionDaoMalformed(name);
				}
			} catch (ClassNotFoundException e) {
				try {
					final String nameJpa = "net.nawia.gsao.dao.jpa." + name;
					if (DaoJpa.class == Class.forName(nameJpa).getSuperclass()) {
						cl = (Class<Dao<?, ?>>) Class.forName(nameJpa);
						_log.info("building " + nameJpa);
					} else {
						throw new ExceptionDaoMalformed(name);
					}
				} catch (ClassNotFoundException e2) {
					throw new ExceptionDaoNotFound(name);
				}
			}
			_instances.put(name, cl);
		}
		try {
			return (Dao<K, E>) _instances.get(name).newInstance();
		} catch (InstantiationException e) {
			throw new ExceptionDaoMalformed(name);
		} catch (IllegalAccessException e) {
			throw new ExceptionDaoMalformed(name);
		}
	}

}