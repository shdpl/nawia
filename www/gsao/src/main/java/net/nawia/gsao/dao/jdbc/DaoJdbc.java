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
