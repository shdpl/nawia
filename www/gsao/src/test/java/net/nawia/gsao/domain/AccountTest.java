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
package net.nawia.gsao.domain;

import org.testng.Assert;
import org.testng.annotations.Test;
import org.slf4j.*;

@Test
public class AccountTest {

	@Test
	void buildTest() {
		Logger tmp = LoggerFactory.getLogger(AccountTest.class);
		tmp.info("Hello World");
		try {
			Account a = new Account();
			Assert.assertNotNull(a);
		} catch (Exception t) {
			Assert.assertNotNull(null);
		}
	}
}
