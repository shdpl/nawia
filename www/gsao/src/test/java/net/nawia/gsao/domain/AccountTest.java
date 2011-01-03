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

import java.sql.Date;

import net.nawia.gsao.dao.*;
import net.nawia.gsao.dao.exceptions.ExceptionDao;

import org.testng.annotations.Test;

@Test(groups = {"Dao", "Account"}, dependsOnGroups = "DaoFactory")
public class AccountTest {
	private static final boolean _blocked = false;
	private static final String _name = "Jeremy";
	private static final String _password = "p4ssw0rd";
	private static final String _email = "mail@example.com";
	private static final Date _premend = Date.valueOf("1994-10-05");
	private static final short _warnings = 0;

	private Account buildAccount() {
		Account ret = new Account(0, _name, _password, _email, _premend,
				_blocked, _warnings);
		return ret;
	}

	private DaoAccount getDaoAccount() throws ExceptionDao {
		return (DaoAccount) DaoFactory.build(DaoAccount.class);
	}

	@Test
	public void createSingleTest() throws ExceptionDao {
		Account stored = buildAccount();
		assert (stored.getEmail().equals(stored.getEmail()));
		assert (stored.getId() == stored.getId());
		assert (stored.getName().equals(stored.getName()));
		assert (stored.getPassword().equals(stored.getPassword()));
		assert (stored.getPremend().equals(stored.getPremend()));
		assert (stored.getWarnings() == stored.getWarnings());
		assert (stored.equals(stored));

		DaoAccount daoAcc = getDaoAccount();
		daoAcc.persist(stored);
		Account retrieved = daoAcc.find(stored.getId());
		assert (retrieved.equals(stored));
		assert (stored.getId() == retrieved.getId());

		daoAcc.remove(stored);
		assert (null == daoAcc.find(stored.getId()));
	}

	@Test(dependsOnMethods = "createSingleTest")
	public void createMultipleTest() throws ExceptionDao {
		DaoAccount daoAcc = getDaoAccount();
		Account a1 = buildAccount();
		Account a2 = buildAccount();
		a2.setName("Joseph");
		assert (!a1.equals(a2));

		daoAcc.persist(a1);
		daoAcc.persist(a2);

		Account na1 = daoAcc.find(a1.getId());
		Account na2 = daoAcc.find(a2.getId());
		assert (na1.equals(a1));
		assert (na2.equals(a2));

		assert (na1.getEmail().equals(na2.getEmail()));
		assert (na1.getId() != na2.getId());
		assert (!na1.getName().equals(na2.getName()));
		assert (na1.getPassword().equals(na2.getPassword()));
		assert (na1.getPremend().equals(na2.getPremend()));
		assert (na1.getWarnings() == na2.getWarnings());
		assert (!na1.equals(na2));

		daoAcc.remove(a2);
		assert (null == daoAcc.find(a2.getId()));
		assert (null != daoAcc.find(a1.getId()));

		daoAcc.remove(a1);
		assert (null == daoAcc.find(a1.getId()));
	}

	@Test(dependsOnMethods = "createSingleTest")
	public void updateSingleTest() throws ExceptionDao {
		DaoAccount daoAcc = getDaoAccount();
		Account stored = buildAccount();
		daoAcc.persist(stored);

		final boolean newBlocked = !stored.isBlocked();
		final String newEmail = stored.getEmail().concat("a");
		final String newName = stored.getName().concat("a");
		final String newPass = stored.getPassword().concat("0");
		final Date newPremend = new Date(stored.getPremend().getTime() + 1);
		final short newWarns = (short) (stored.getWarnings() + 1);

		Account toCmp = stored;
		toCmp.setBlocked(newBlocked);
		toCmp.setEmail(newEmail);
		toCmp.setName(newName);
		toCmp.setPassword(newPass);
		toCmp.setPremend(newPremend);
		toCmp.setWarnings(newWarns);
		daoAcc.persist(toCmp);
		assert (toCmp.getId() == stored.getId());

		toCmp = daoAcc.find(stored.getId());
		daoAcc.remove(toCmp);

		assert (newBlocked == toCmp.isBlocked());
		assert (newEmail.equals(toCmp.getEmail()));
		assert (stored.getId() == toCmp.getId());
		assert (newName.equals(toCmp.getName()));
		assert (newPass.equals(toCmp.getPassword()));
		assert (newPremend.equals(toCmp.getPremend()));
		assert (newWarns == toCmp.getWarnings());
	}

	@Test(dependsOnMethods = "createMultipleTest")
	public void updateMultipleTest() throws ExceptionDao {
		DaoAccount daoAcc = getDaoAccount();
		Account s[] = { buildAccount(), buildAccount() };

		daoAcc.persist(s[0]);
		s[1].setName("Joseph");
		daoAcc.persist(s[1]);

		for (Account a : s) {
			final boolean newBlocked = !a.isBlocked();
			final String newEmail = a.getEmail().concat("a");
			final String newName = a.getName().concat("a");
			final String newPass = a.getPassword().concat("0");
			final Date newPremend = new Date(a.getPremend().getTime() + 1);
			final short newWarns = (short) (a.getWarnings() + 1);

			Account toCmp = a;
			toCmp.setBlocked(newBlocked);
			toCmp.setEmail(newEmail);
			toCmp.setName(newName);
			toCmp.setPassword(newPass);
			toCmp.setPremend(newPremend);
			toCmp.setWarnings(newWarns);
			daoAcc.persist(toCmp);
			toCmp = daoAcc.find(a.getId());

			assert (newBlocked == toCmp.isBlocked());
			assert (newEmail.equals(toCmp.getEmail()));
			assert (a.getId() == toCmp.getId());
			assert (newName.equals(toCmp.getName()));
			assert (newPass.equals(toCmp.getPassword()));
			assert (newPremend.equals(toCmp.getPremend()));
			assert (newWarns == toCmp.getWarnings());
		}
		daoAcc.remove(s[0]);
		daoAcc.remove(s[1]);
	}
}
