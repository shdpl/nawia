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
package net.nawia.gsao.dao.jdbc;

import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.*;
import java.util.logging.Logger;

import net.nawia.gsao.dao.exceptions.ExceptionDaoInit;
import net.nawia.gsao.dao.exceptions.RuntimeExceptionDao;
import net.nawia.gsao.domain.Account;

// "id" SERIAL,
// "name" VARCHAR(32) NOT NULL,
// "password" VARCHAR(255) NOT NULL,
// "email" VARCHAR(255) NOT NULL DEFAULT '',
// "premend" BIGINT NOT NULL DEFAULT 0,
// "blocked" SMALLINT NOT NULL DEFAULT 0,
// "warnings" SMALLINT NOT NULL DEFAULT 0,
// PRIMARY KEY ("id"),
// UNIQUE ("name")
public class DaoAccount extends DaoJdbc<Integer, Account> implements
		net.nawia.gsao.dao.DaoAccount {
	private static final Logger _log = Logger.getLogger(DaoAccount.class
			.getName());
	private static final String _tableName = "accounts"; // TODO: read from
															// annotation

	private Statement _findAll = null;
	private PreparedStatement _findAllName = null;
	private PreparedStatement _find = null;
	private PreparedStatement _remove = null;
	private PreparedStatement _persistNew = null;
	private PreparedStatement _persistOld = null;

	public DaoAccount() throws ExceptionDaoInit {
		super();
		_log.entering(DaoAccount.class.getName(), "DaoAccount()");
	}

	// TODO: no continuity with database native sequencer
	private static final String _qPersistNew = "INSERT INTO " + _tableName
			+ " (name, password, email, premend, blocked, warnings) "
			+ "VALUES (?, ?, ?, ?, ?, ?)";
	private static final String _qPersistOld = "UPDATE " + _tableName
			+ " SET name = ?, password = ?, email = ?,"
			+ " premend = ?, blocked = ?, warnings = ?" + " WHERE id = ?";

	public void persist(Account entity) {
		final int eid = entity.getId();
		try {
			if (0 == eid) {
				if (null == _persistNew)
					_persistNew = _conn.prepareStatement(_qPersistNew,
							Statement.RETURN_GENERATED_KEYS);
				_persistNew.setString(1, entity.getName());
				_persistNew.setString(2, entity.getPassword());
				_persistNew.setString(3, entity.getEmail());
				_persistNew.setLong(4, entity.getPremend().getTime());
				_persistNew.setShort(5, (short) (entity.isBlocked() ? 1 : 0));
				_persistNew.setShort(6, entity.getWarnings());
				if (1 != _persistNew.executeUpdate())
					throw new RuntimeExceptionDao("Could not add " + entity);
				ResultSet rs = _persistNew.getGeneratedKeys();
				if (rs.next())
					entity.setId(rs.getInt("id"));
			} else {
				if (null == _persistOld)
					_persistOld = _conn.prepareStatement(_qPersistOld);
				_persistOld.setString(1, entity.getName());
				_persistOld.setString(2, entity.getPassword());
				_persistOld.setString(3, entity.getEmail());
				_persistOld.setLong(4, entity.getPremend().getTime());
				_persistOld.setShort(5, (short) (entity.isBlocked() ? 1 : 0));
				_persistOld.setShort(6, entity.getWarnings());
				_persistOld.setInt(7, entity.getId());
				if (1 != _persistOld.executeUpdate())
					throw new IllegalArgumentException("Entity with id = "
							+ entity.getId() + " does not exists");
			}
		} catch (SQLException e) {
			throw new RuntimeExceptionDao("Error while persisting " + entity, e);
		}
	}

	private static final String _qRemove = "DELETE FROM " + _tableName
			+ " WHERE id = ?";

	public void remove(Account entity) {
		try {
			if (null == _remove)
				_remove = _conn.prepareStatement(_qRemove);
			_remove.setInt(1, entity.getId());
			if (1 != _remove.executeUpdate())
				throw new IllegalArgumentException(
						"Non-existing entity passed to remove(): " + entity);

		} catch (SQLException e) {
			throw new RuntimeExceptionDao();
		}
	}

	private static final String _qFindById = "SELECT * FROM " + _tableName
			+ " WHERE id = ?";

	public Account find(Integer id) {
		assert (id != null);
		try {
			if (null == _find)
				_find = _conn.prepareStatement(_qFindById);
			_find.setInt(1, id);
			ResultSet rs = _find.executeQuery();
			if (rs.next())
				return new Account(rs.getInt("id"), rs.getString("name"),
						rs.getString("password"), rs.getString("email"),
						new Date(rs.getLong("premend")),
						1 == rs.getShort("blocked"), rs.getShort("warnings"));
			return null;
		} catch (SQLException e) {
			throw new RuntimeExceptionDao("", e);
		}
	}

	private static final String _qFindAll = "SELECT * FROM " + _tableName;

	public List<Account> findAll() {
		List<Account> ret = new Vector<Account>();

		try {
			if (null == _findAll)
				_findAll = _conn.createStatement();
			ResultSet rs = _findAll.executeQuery(_qFindAll);
			while (rs.next()) {
				ret.add(new Account(rs.getInt("id"), rs.getString("name"), rs
						.getString("password"), rs.getString("email"),
						new Date(rs.getLong("premend")), 1 == rs
								.getShort("blocked"), rs.getShort("warnings")));
			}
			return ret;
		} catch (SQLException e) {
			throw new RuntimeExceptionDao();
		}
	}

	private static final String _qFindAllByName = "SELECT * FROM " + _tableName
			+ " WHERE name = ?";
	/**
	 * Currently you can choose just one of the following attributes:
	 * - name
	 */
	@Override
	public List<Account> findAll(Account prototype) {
		List<Account> ret = new Vector<Account>();
		if (0 != prototype.getId()) {
			ret.add(find(prototype.getId()));
		} else if (null != prototype.getName()
				|| !prototype.getName().isEmpty()) {
			try {
				if (null == _findAllName)
					_findAllName = _conn.prepareStatement(_qFindAllByName);
				_findAllName.setString(1, prototype.getName());
				ResultSet rs = _findAllName.executeQuery();
				while(rs.next())
					ret.add(new Account(rs.getInt("id"), rs.getString("name"), rs
							.getString("password"), rs.getString("email"),
							new Date(rs.getLong("premend")), 1 == rs
									.getShort("blocked"), rs.getShort("warnings")));
			} catch (SQLException e) {
				throw new RuntimeExceptionDao("", e);
			}
			throw new UnsupportedOperationException();
		} else {
			throw new UnsupportedOperationException();
		}
		return ret;
	}

	@Override
	protected void finalize() throws Throwable { // TODO: lack of destructors
		super.finalize();

		try {
			_findAll.close();
		} catch (SQLException e) {
			_log.severe(this + " couldn't be finalized!");
		}
	}

}
