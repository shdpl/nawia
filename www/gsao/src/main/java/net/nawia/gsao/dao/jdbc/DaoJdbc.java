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

//import java.io.*;
import java.sql.*;
//import java.util.ResourceBundle;
import java.util.logging.Logger;

import javax.naming.*;
//import javax.transaction.*;
import javax.sql.DataSource;

import net.nawia.gsao.dao.Dao;
import net.nawia.gsao.dao.exceptions.ExceptionDaoInit;

public abstract class DaoJdbc<K, E> implements Dao<K, E> {
	protected Connection _conn;

	private static DataSource _ds;
	private static Object _dsLock = new Object();
	// private static final String _propFile =
	// "/properties/database.properties";
	private static final String _dbpath = "jdbc/gsDB";
	private static final String _envpath = "java:comp/env";
	private static final Logger _log = Logger
			.getLogger(DaoJdbc.class.getName());

	public DaoJdbc() throws ExceptionDaoInit {
		synchronized (_dsLock) {
			if (null == _ds) {
				// Properties properties = new Properties();
				// try {
				// InputStream s = this.getClass().getResourceAsStream(
				// _propFile);
				// if (null == s)
				// throw new ExceptionDaoInit("Could not load "
				// + _propFile);
				// properties.load(s);
				// _conn = DriverManager.getConnection(
				// properties.getProperty("url"), properties);
				//
				// } catch (SQLException e) {
				// throw new ExceptionDaoInit("Could not connect to "
				// + properties.getProperty("url"), e);
				//
				// } catch (IOException e) {
				// throw new ExceptionDaoInit("Could not load " + _propFile, e);
				// }

				try {
					InitialContext ctx = new InitialContext();
					_log.finest("looking up " + _envpath);
					Context envCtx = (Context) ctx.lookup(_envpath);
					_log.finest(_envpath + " looked up properly");

					_ds = (DataSource) envCtx.lookup(_dbpath);
					ctx.close();

				} catch (NamingException e) {
					_log.finest("looking up " + _envpath + " failed");
					throw new ExceptionDaoInit("Could not find " + _dbpath, e);
				}
			}
		}
		try {
			_conn = _ds.getConnection();
		} catch (SQLException e) {
			throw new ExceptionDaoInit("Cannot connect to" + _dbpath, e);
		}
	}

	@Override
	protected void finalize() throws Throwable { // TODO: overcome lack of destructors
		super.finalize();
		try {
			_conn.close();
		} catch (SQLException e) {
			_log.severe(this + " couldn't be finalized!");
		}
	}

}
