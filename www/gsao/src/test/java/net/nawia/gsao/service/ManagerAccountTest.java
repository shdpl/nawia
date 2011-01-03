package net.nawia.gsao.service;

import java.sql.Date;

import org.testng.annotations.BeforeClass;
import org.testng.annotations.Test;

import net.nawia.gsao.dao.DaoAccount;
import net.nawia.gsao.dao.DaoFactory;
import net.nawia.gsao.dao.exceptions.ExceptionDao;
import net.nawia.gsao.domain.Account;
import net.nawia.gsao.service.impl.ImplServiceAccount;

@Test(dependsOnGroups = "Account")
public class ManagerAccountTest implements ServiceAccount {
	private static final boolean _blocked = false;
	private static final String _name = "Jeremy";
	private static final String _password = "p4ssw0rd";
	private static final String _email = "mail@example.com";
	private static final Date _premend = Date.valueOf("1994-10-05");
	private static final short _warnings = 0;
	private static final Account _prototype= new Account(0, _name, _password, _email, _premend, _blocked, _warnings);
	
	private DaoAccount _daoAcc;
	
	@BeforeClass
	void prepare() throws ExceptionDao {
		_daoAcc = (DaoAccount) DaoFactory.build(DaoAccount.class);
		assert(_daoAcc.findAll().isEmpty());
	}

	@Override
	public boolean add(Account acc) {
		ImplServiceAccount ma = new ImplServiceAccount();
		return ma.add(acc);//TODO: MockEJB
	}

	@Override
	public boolean del(Account acc) {
		ImplServiceAccount ma = new ImplServiceAccount();
		return ma.del(acc);//TODO: MockEJB
	}

	@Override
	public boolean hasName(String name) {
		ImplServiceAccount ma = new ImplServiceAccount();
		return ma.hasName(name);//TODO: MockEJB
	}

	public void addTest() throws ExceptionDao, CloneNotSupportedException {
		Account orig = (Account) _prototype.clone();
		assert(add(orig));
		assert (orig == _daoAcc.find(orig.getId()));
		_daoAcc.remove(orig);
	}
	
	public void delTest() throws CloneNotSupportedException {
		Account orig = (Account) _prototype.clone();
		_daoAcc.persist(orig);
		assert(del(orig));
		assert (null == _daoAcc.find(orig.getId()));
	}
	
	public void hasNameTest() throws CloneNotSupportedException {
		Account orig = (Account) _prototype.clone();
		assert(!hasName(orig.getName()));
		_daoAcc.persist(orig);
		assert(hasName(orig.getName()));
		_daoAcc.remove(orig);
	}

}
