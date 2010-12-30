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

import java.util.Properties;
import java.util.logging.LogManager;

import javax.naming.*;

import org.testng.annotations.*;
import org.apache.commons.dbcp.*;
import org.apache.commons.pool.impl.GenericObjectPool;
import org.mockejb.*;
import org.mockejb.jndi.*;
import org.mockejb.interceptor.*;

import net.nawia.gsao.dao.exceptions.ExceptionDao;

@Test(groups = "DaoFactory")
public class DaoFactoryTest {
	private Context context;
	private static final String _propFile = "/properties/database.properties";

	@BeforeClass
	public void setUpJdbc() throws Exception {

		Properties dbInfo = new Properties();
		dbInfo.load(DaoFactoryTest.class.getResourceAsStream(_propFile));

		GenericObjectPool connectionPool = new GenericObjectPool(null);
		ConnectionFactory connectionFactory = new DriverManagerConnectionFactory(
				dbInfo.getProperty("url"), dbInfo);
		PoolableConnectionFactory poolableConnectionFactory = new PoolableConnectionFactory(
				connectionFactory, connectionPool, null, null, false, true);
		PoolingDataSource ds = new PoolingDataSource(connectionPool);

		MockContextFactory.setAsInitial();
		context = new InitialContext();
		context.rebind("java:comp/env/jdbc/gsDB", ds);
	}

	@Test
	void testBuildJdbc() throws ExceptionDao {
		DaoFactory.build(DaoTestJdbc.class);
	}

	@Test
	void testBuildJpa() throws ExceptionDao {
		DaoFactory.build(DaoTestJpa.class);
	}

	// @Test(dependsOnMethods = { "testBuildJdbc", "testBuildJpa" })
	// void testBuildGeneric() {
	// }

	@AfterClass
	public void setDownJdbc() {
		MockContextFactory.revertSetAsInitial();
	}

}
