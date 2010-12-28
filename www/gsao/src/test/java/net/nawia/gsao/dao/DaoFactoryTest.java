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

import java.util.logging.Level;
import java.util.logging.Logger;

import org.testng.annotations.*;

@Test
public class DaoFactoryTest {
	DaoFactory f;
	
	@BeforeTest
	void prepareFactory() {
		try {
			f = new DaoFactory();
		} catch (Throwable t) {
			assert(false);
		}
	}
	
	@Test
	void testBuildJdbc() {
		
	}
	
	@Test
	void testBuildGeneric() {
		
	}
	
	@Test
	void testBuildJpa() {
		
	}

}
