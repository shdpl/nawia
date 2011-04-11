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

import org.testng.annotations.*;
//import org.jboss.arquillian.api.Deployment;
//import org.jboss.arquillian.testng.Arquillian;
//import org.jboss.ejb3.annotation.PersistenceManager;
//import org.jboss.shrinkwrap.api.*;
//import org.jboss.shrinkwrap.api.asset.EmptyAsset;
//import org.jboss.shrinkwrap.api.spec.*;

import net.nawia.gsao.dao.exception.ExceptionDao;
import net.nawia.gsao.dao.jpa.DaoJpa;
import net.nawia.gsao.domain.TestEntityJdbc;
import net.nawia.gsao.domain.TestEntityJpa;

//@Test(groups = "DaoFactory")
//public class DaoFactoryTest extends Arquillian {
//
//	@Deployment
//	public static JavaArchive createDeployment() {
//		return ShrinkWrap
//				.create(JavaArchive.class, "test.jar")
//				.addClass(net.nawia.gsao.domain.TestEntityJdbc.class)
//				.addPackage(
//						net.nawia.gsao.dao.jdbc.DaoTestEntityJdbc.class
//								.getPackage())
//				.addPackage(DaoFactoryTest.class.getPackage())
//				.addPackage(
//						net.nawia.gsao.dao.exception.ExceptionDao.class
//								.getPackage())
//				.addClass(org.h2.jdbc.JdbcSQLException.class)
//				.addClass(DaoJpa.class)
//				.addPackage(
//						net.nawia.gsao.dao.jpa.DaoTestEntityJpa.class
//								.getPackage())
//				.addManifestResource("persistence-test.xml", "persistence.xml")
//				.addManifestResource(EmptyAsset.INSTANCE, "beans.xml");
//	}
///*
//	@Test
//	void testBuildJdbc() throws ExceptionDao {
//		DaoTestEntityJdbc dao = (DaoTestEntityJdbc) DaoFactory
//				.build(DaoTestEntityJdbc.class);
//
//		TestEntityJdbc orig = new TestEntityJdbc();
//		orig.setExampleVar(13);
//		dao.persist(orig);
//
//		TestEntityJdbc retrieved = dao.find(orig.getId());
//		assert (retrieved.equals(orig));
//	}
//
//	@Test
//	void testBuildJpa() throws ExceptionDao {
//		DaoTestEntityJpa dao = (DaoTestEntityJpa) DaoFactory
//				.build(DaoTestEntityJpa.class);
//
//		TestEntityJpa orig = new TestEntityJpa();
//		orig.setExampleVar(13);
//		dao.persist(orig);
//
//		TestEntityJpa retrieved = dao.find(orig.getId());
//		assert (retrieved.equals(orig));
//	}
//*/
//}
