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

import java.sql.*;
import java.util.logging.Logger;

import javax.naming.*;
import javax.sql.DataSource;
import net.nawia.gsao.dao.Dao;
import net.nawia.gsao.dao.exceptions.ExceptionDaoInit;

public abstract class DaoJdbc<K, E> implements Dao<K, E> {
	private static final Logger _log = Logger
			.getLogger(DaoJdbc.class.getName());
	private static final String _path = "java:jdbc/gsDB"; // FIXME
	private static final String _testpath = "java:internal/test/test/DaoJdbc/env/jdbc/gsDB";
	protected Connection _conn;

	private DataSource _ds;

	public DaoJdbc() throws ExceptionDaoInit {
		InitialContext ctx;
		
		try {
			ctx = new InitialContext();
		} catch (NamingException e) {
			throw new ExceptionDaoInit("Cannot create initial context", e);
		}
		
		try {
			_ds = (DataSource) ctx.lookup(_testpath);
		} catch (NamingException e) {
			try {
				_ds = (DataSource) ctx.lookup(_path);
			} catch (NamingException e2) {
				throw new ExceptionDaoInit("Cannot lookup " + _path, e2);
			}
		}

		try {
			_conn = _ds.getConnection();
		} catch (SQLException e) {
			throw new ExceptionDaoInit(
					"Cannot connect to Game Server Database", e);
		}
	}

	@Override
	protected void finalize() throws Throwable { // TODO: overcome lack of
													// destructors
		super.finalize();
		try {
			_conn.close();
		} catch (SQLException e) {
			_log.severe(this + " couldn't be finalized!");
		}
	}

}
