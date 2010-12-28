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
import net.nawia.gsao.dao.exceptions.ExceptionDaoInit;

import java.io.FileInputStream;
import java.io.IOException;
import java.sql.*;
import java.util.Properties;
import java.util.logging.Logger;

import javax.naming.InitialContext;
import javax.naming.NamingException;
import javax.sql.DataSource;

public abstract class DaoJdbc<K, E> implements Dao<K, E> {
	protected Connection con;
	
	private static DataSource _ds;
	private static final String _propFile = "database.properties";

	public DaoJdbc() throws ExceptionDaoInit {
		synchronized (_ds) {
			if (null == _ds) {
				Properties properties = new Properties();
				try {
				    properties.load(new FileInputStream(_propFile));
				} catch (IOException e) {
					throw new ExceptionDaoInit("Could not load " +_propFile, e);
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
