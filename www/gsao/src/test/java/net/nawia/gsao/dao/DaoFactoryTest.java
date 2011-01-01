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

import javax.naming.*;

import org.testng.annotations.*;
import org.apache.commons.dbcp.*;
import org.apache.commons.pool.impl.GenericObjectPool;
import org.mockejb.jndi.*;

import net.nawia.gsao.dao.exceptions.ExceptionDao;
import net.nawia.gsao.domain.TestEntityJdbc;

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
		new PoolableConnectionFactory(connectionFactory, connectionPool, null, null, false, true);
		PoolingDataSource ds = new PoolingDataSource(connectionPool);

		MockContextFactory.setAsInitial();
		context = new InitialContext();
		context.rebind("java:comp/env/jdbc/gsDB", ds);
	}
	
	@BeforeClass
	public void setUpTestDb() {
		// TODO:CREATE TABLE "test"...
	}

	@Test
	void testBuildJdbc() throws ExceptionDao {
		DaoTestEntityJdbc dao = (DaoTestEntityJdbc) DaoFactory.build(DaoTestEntityJdbc.class);
		
		TestEntityJdbc orig = new TestEntityJdbc();
		orig.setExampleVar(13);
		dao.persist(orig);
		
		TestEntityJdbc retrieved = dao.find(orig.getId());
		assert(retrieved.equals(orig));
	}

	@Test
	void testBuildJpa() throws ExceptionDao {
		DaoTestEntityJpa dao = (DaoTestEntityJpa) DaoFactory.build(DaoTestEntityJpa.class);
		//TODO: JPA
	}

	// @Test(dependsOnMethods = { "testBuildJdbc", "testBuildJpa" })
	// void testBuildGeneric() {
	// }

	@AfterClass
	public void setDownJdbc() {
		MockContextFactory.revertSetAsInitial();
	}

}
