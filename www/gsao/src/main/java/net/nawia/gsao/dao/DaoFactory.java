package net.nawia.gsao.dao;

import java.util.HashMap;
import java.util.logging.*;

import net.nawia.gsao.dao.jdbc.DaoJdbc;

public class DaoFactory {
	private static HashMap<String, Class<Dao<?, ?>>> _instances; // FIXME: Hash
																	// collisions?

	@SuppressWarnings("unchecked")
	static synchronized public <K, E> Dao<K, E> build(
			Class<? extends Dao<K, E>> toBuild) throws ExceptionDao {
		final String name = toBuild.getSimpleName();

		Logger.getLogger(DaoFactory.class.getName()).entering(
				DaoFactory.class.getName(), "build", (Object) toBuild);

		if (null == _instances)
			_instances = new HashMap<String, Class<Dao<?, ?>>>();

		if (!_instances.containsKey(name)) {
			Class<Dao<?, ?>> cl;
			try {
				final String nameJdbc = "net.nawia.gsao.dao.jdbc." + name;
				if (DaoJdbc.class == Class.forName(nameJdbc)
						.getGenericSuperclass()) {
					cl = (Class<Dao<?, ?>>) Class.forName(nameJdbc);
					Logger.getLogger(DaoFactory.class.getName()).info(
							"building " + nameJdbc);
				} else {
					throw new ExceptionDaoMalformed(name);
				}
			} catch (ClassNotFoundException e) {
				try {
					final String nameJpa = "net.nawia.gsao.dao.jpa." + name;
					if (DaoJdbc.class == Class.forName(nameJpa)
							.getGenericSuperclass()) {
						cl = (Class<Dao<?, ?>>) Class.forName(nameJpa);
						Logger.getLogger(DaoFactory.class.getName()).info(
								"building " + nameJpa);
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
