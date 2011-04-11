package net.nawia.gsao.service;

import java.sql.Date;
import java.util.List;

import static org.testng.Assert.*;

//import javax.ejb.EJB;
//
//import org.jboss.arquillian.api.Deployment;
//import org.jboss.arquillian.testng.Arquillian;
//import org.jboss.shrinkwrap.api.ShrinkWrap;
//import org.jboss.shrinkwrap.api.spec.JavaArchive;
import org.testng.annotations.AfterTest;
import org.testng.annotations.BeforeClass;
import org.testng.annotations.BeforeTest;
import org.testng.annotations.Test;

import net.nawia.gsao.dao.DaoAccount;
import net.nawia.gsao.dao.DaoFactory;
import net.nawia.gsao.dao.exception.ExceptionDao;
import net.nawia.gsao.domain.Account;
import net.nawia.gsao.service.impl.ImplServiceAccount;
import net.nawia.gsao.service.remote.ServiceAccountRemote;

//@Test(dependsOnGroups = "Account")
//public class ServiceAccountTest extends Arquillian /*implements ServiceAccount*/ {
//	private static final boolean _blocked = false;
//	private static final String _name = "Jeremy";
//	private static final String _password = "p4ssw0rd";
//	private static final String _email = "mail@example.com";
//	private static final Date _premend = Date.valueOf("1994-10-05");
//	private static final short _warnings = 0;
//	private static final Account _prototype= new Account(0, _name, _password, _email, _premend, _blocked, _warnings);
//
//	Account orig;
//	private DaoAccount _daoAcc;
//	@EJB
//	private ServiceAccountRemote _sAcc;
//	
//	@Deployment
//	public static JavaArchive createDeployment() {
//		return ShrinkWrap.create(JavaArchive.class, "test.jar").addClass(ImplServiceAccount.class);
//	}
//	
//	@BeforeClass
//	void beforeClass() throws ExceptionDao {
//		_daoAcc = (DaoAccount) DaoFactory.build(DaoAccount.class);
//		assert(_daoAcc.findAll().isEmpty());
//	}
//	
//	@BeforeTest
//	void beforeTest() throws CloneNotSupportedException {
//		orig = (Account) _prototype.clone();
//	}
//	
//	@AfterTest
//	void afterTest() {
//		orig = null;
//	}
//
//	//@Override
//	public boolean register(String name, String password, String email) {
//		return _sAcc.register(name, password, email);
//	}
//
//	//@Override
//	public boolean del(Account acc) {
//		return _sAcc.del(acc);
//	}
//
//	//@Override
//	public boolean hasName(String name) {
//		return _sAcc.hasName(name);
//	}
//
//	//@Override
//	public int verifyCredentials(String login, String pass) {
//		return _sAcc.verifyCredentials(login, pass);
//	}
//
//	//@Override
//	public List<Account> getAll() {
//		return _sAcc.getAll();
//	}
//
//	//@Override
//	public boolean changeEmail(int id, String mail) {
//		return _sAcc.changeEmail(id, mail);
//	}
//
//	//@Override
//	public boolean changePassword(int id, String password) { // FIXME: test ng sux
//		_sAcc.changePassword(id, password);
//		return false;
//	}
//
//	@Test
//	public void registerTest() throws ExceptionDao {
////		assertTrue(register(orig.getName(), orig.getPassword(), orig.getEmail()));
////		assertEquals(orig, _daoAcc.find(orig.getId()));
////		assertFalse(register(orig.getName(), orig.getPassword(), orig.getEmail()));
////		_daoAcc.remove(orig);
//	}
////
////	@Test
////	public void delTest() {
////		_daoAcc.persist(orig);
////		assertTrue(del(orig));
////		assertNull(_daoAcc.find(orig.getId()));
////	}
////
////	@Test
////	public void hasNameTest() {
////		assertFalse(hasName(orig.getName()));
////		_daoAcc.persist(orig);
////		assertTrue(hasName(orig.getName()));
////		_daoAcc.remove(orig);
////	}
////
////	@Test
////	public void verifyCredentialsTest() {
////		_daoAcc.persist(orig);
////		assert(0 < verifyCredentials(orig.getName(), orig.getPassword()));
////		assert(0 >= verifyCredentials(orig.getName(), orig.getPassword() +"a"));
////		_daoAcc.remove(orig);
////	}
////
////	@Test
////	public void changePasswordTest() {
////		_daoAcc.persist(orig);
////		changePassword(orig.getId(), orig.getPassword());
////		assertEquals(orig.getPassword(), (_daoAcc.find(orig.getId()).getPassword()));
////		changePassword(orig.getId(), orig.getPassword()+"a");
////		assertFalse(orig.getPassword().equals(_daoAcc.find(orig.getId()).getPassword()));
////		_daoAcc.remove(orig);
////	}
////	
////	@Test
////	public void changeEmailTest() {
////		_daoAcc.persist(orig);
////		changeEmail(orig.getId(), orig.getEmail());
////		assertEquals(_daoAcc.find(orig.getId()).getEmail(), orig.getEmail());
////		changeEmail(orig.getId(), orig.getEmail() + "a");
////		assertFalse(_daoAcc.find(orig.getId()).getEmail().equals(orig.getEmail()));
////		_daoAcc.remove(orig);
////	}
//
//}
