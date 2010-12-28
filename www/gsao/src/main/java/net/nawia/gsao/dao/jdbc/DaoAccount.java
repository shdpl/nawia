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

import java.util.List;

import net.nawia.gsao.dao.Dao;
import net.nawia.gsao.dao.exceptions.ExceptionDaoInit;
import net.nawia.gsao.domain.Account;

public class DaoAccount extends DaoJdbc<Integer, Account> implements Dao<Integer, Account> {

	public DaoAccount() throws ExceptionDaoInit {
		super();
		// TODO Auto-generated constructor stub
	}

	public void persist(Account entity) {
		final String q = "INSERT INTO accounts VALUES ('')";
	}

	public void remove(Account entity) {
		// TODO Auto-generated method stub
		
	}

	public Account find(Integer id) {
		// TODO Auto-generated method stub
		return null;
	}

	public List<Account> findAll() {
		// TODO Auto-generated method stub
		return null;
	}


}
