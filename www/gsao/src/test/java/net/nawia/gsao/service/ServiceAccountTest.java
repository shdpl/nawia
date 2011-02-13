package net.nawia.gsao.service;

import java.sql.Date;
import java.util.List;

import javax.inject.Inject;

import org.jboss.arquillian.api.Deployment;
import org.jboss.arquillian.testng.Arquillian;
import org.jboss.shrinkwrap.api.ShrinkWrap;
import org.jboss.shrinkwrap.api.spec.JavaArchive;
import org.testng.annotations.BeforeClass;
import org.testng.annotations.Test;

import net.nawia.gsao.dao.DaoAccount;
import net.nawia.gsao.dao.DaoFactory;
import net.nawia.gsao.dao.exceptions.ExceptionDao;
import net.nawia.gsao.domain.Account;
import net.nawia.gsao.service.impl.ImplServiceAccount;

@Test(dependsOnGroups = "Account")
public class ServiceAccountTest extends Arquillian implements ServiceAccount {
	private static final boolean _blocked = false;
	private static final String _name = "Jeremy";
	private static final String _password = "p4ssw0rd";
	private static final String _email = "mail@example.com";
	private static final Date _premend = Date.valueOf("1994-10-05");
	private static final short _warnings = 0;
	private static final Account _prototype= new Account(0, _name, _password, _email, _premend, _blocked, _warnings);
	
	private DaoAccount _daoAcc;
	@Inject
	private ServiceAccount _sAcc;
	
	@Deployment
	public static JavaArchive createDeployment() {
		return ShrinkWrap.create(JavaArchive.class, "test.jar").addClass(ImplServiceAccount.class);
	}
	
	@BeforeClass
	void prepare() throws ExceptionDao {
		_daoAcc = (DaoAccount) DaoFactory.build(DaoAccount.class);
		assert(_daoAcc.findAll().isEmpty());
	}

	@Override
	public boolean register(String name, String password, String email) {
		return _sAcc.register(name, password, email);
	}

	@Override
	public boolean del(Account acc) {
		return _sAcc.del(acc);
	}

	@Override
	public boolean hasName(String name) {
		return _sAcc.hasName(name);
	}

	@Override
	public boolean verifyCredentials(String login, String pass) {
		return _sAcc.verifyCredentials(login, pass);
	}

	public void registerTest() throws ExceptionDao, CloneNotSupportedException {
		Account orig = (Account) _prototype.clone();
		assert(register(orig.getName(), orig.getPassword(), orig.getEmail()));
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
	
	public void verifyCredentialsTest() throws CloneNotSupportedException {
		Account orig = (Account) _prototype.clone();
		assert(verifyCredentials(orig.getName(), orig.getPassword()));
		assert(verifyCredentials(orig.getName(), orig.getPassword() +"a"));
	}

	@Override
	public List<Account> getAll() {
		//TODO
		return null;
	}

}
