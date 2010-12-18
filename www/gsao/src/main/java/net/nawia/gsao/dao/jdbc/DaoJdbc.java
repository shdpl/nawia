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

import net.nawia.gsao.dao.Dao;

import java.sql.*;
import java.util.logging.Logger;

import javax.naming.InitialContext;
import javax.naming.NamingException;
import javax.sql.DataSource;

public abstract class DaoJdbc<K, E> implements Dao<K, E> {
	private static DataSource ds;
	protected Connection con;

	DaoJdbc() {
		synchronized (ds) {
			if (ds == null) {
				try {
					InitialContext ctx = new InitialContext();
					ds = (DataSource) ctx.lookup("nawia/gsao/db");
					con = ds.getConnection();
					ctx.close();
				} catch (NamingException e) {
					// throw new ExceptionDaoDb();
				} catch (SQLException e) {
					// throw new ExceptionDaoDb();
				}
			}
		}
	}
	
	@Override
	protected void finalize() {
		try {
			con.close();
		} catch (SQLException e) {
			Logger.getLogger(this.getClass().getName()).severe(this +" couldn't be finalized!");
		}
	}
	
	
}
