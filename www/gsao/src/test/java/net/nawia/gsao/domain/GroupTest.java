package net.nawia.gsao.domain;

import net.nawia.gsao.dao.DaoFactory;
import net.nawia.gsao.dao.DaoGroup;
import net.nawia.gsao.dao.exception.ExceptionDao;

//import org.jboss.arquillian.api.Deployment;
//import org.jboss.arquillian.testng.Arquillian;
//import org.jboss.shrinkwrap.api.ShrinkWrap;
//import org.jboss.shrinkwrap.api.spec.JavaArchive;
import org.testng.annotations.BeforeClass;
import org.testng.annotations.BeforeTest;
import org.testng.annotations.Test;
import static org.testng.Assert.*;

//@Test(groups = { "Dao", "Group" }, dependsOnGroups = "DaoFactory")
//public class GroupTest extends Arquillian {
//
//	private static final Integer _maxdepotitems = 1;
//	private static final Integer _access = 1;
//	private static final Long _flags = 1L;
//	private static final Integer _maxviplist = 1;
//	private static final String _name = "Prosy";
//	private static final Integer _violation = 0;
//	
//	private static final Integer _maxdepotitems2 = 2;
//	private static final Integer _access2 = 2;
//	private static final Long _flags2 = 2L;
//	private static final Integer _maxviplist2 = 2;
//	private static final String _name2 = "Nubosy";
//	private static final Integer _violation2 = 2;
//
//	DaoGroup _daoGroup;
//	Group _orig1;
//	Group _orig2;
//
//	@Deployment
//	public static JavaArchive createDeployment() {
//		return ShrinkWrap.create(JavaArchive.class, "test.jar");
//	}
//
//	private Group buildPrototype(int which) {
//		switch (which) {
//		case 1:
//			return new Group(_name, _flags, _access, _violation,
//					_maxdepotitems, _maxviplist);
//		default:
//			return new Group(_name2, _flags2, _access2, _violation2,
//					_maxdepotitems2, _maxviplist2);
//		}
//	}
//
//	private DaoGroup getDao() throws ExceptionDao {
//		return (DaoGroup) DaoFactory.build(DaoGroup.class);
//	}
//
//	@BeforeClass
//	public void beforeClass() {
//		_daoGroup = getDao();
//	}
//
//	@BeforeTest
//	public void beforeTest() {
//		_orig1 = buildPrototype(1);
//		_orig2 = buildPrototype(2);
//	}
//	
////	@Test
////	public void comparatorTest() {
////		assertEquals(_orig1.getAccess(), _orig1.getAccess());
////		assertEquals(_orig1.getFlags(), _orig1.getFlags());
////		assertEquals(_orig1.getId(), _orig1.getId());
////		assertEquals(_orig1.getMaxdepotitems(), _orig1.getMaxdepotitems());
////		assertEquals(_orig1.getName(), _orig1.getName());
////		assertEquals(_orig1.getViolation(), _orig1.getViolation());
////		assertEquals(_orig1, _orig1);
////	}
////
////	@Test//(dependsOnMethods = "comparatorTest") FIXME: https://issues.jboss.org/browse/ARQ-55
////	public void createSingleTest() throws ExceptionDao {
////		_daoGroup.persist(_orig1);
////		Group retrieved = (Group) _daoGroup.find(_orig1.getId());
////		assertEquals(retrieved, _orig1);
////		_daoGroup.remove(_orig1);
////		assertNull(_daoGroup.find(_orig1.getId()));
////	}
////
////	@Test//(dependsOnMethods = "createSingleTest") FIXME: https://issues.jboss.org/browse/ARQ-55
////	public void createMultipleTest() throws ExceptionDao {
////		Group a1 = buildPrototype(1);
////		Group a2 = buildPrototype(1);
////		a2.setId(_orig1.getId() + 1);
////		assertFalse(!a1.equals(a2));
////
////		_daoGroup.persist(a1);
////		_daoGroup.persist(a2);
////
////		Group na1 = _daoGroup.find(a1.getId());
////		Group na2 = _daoGroup.find(a2.getId());
////		assertEquals(na1, a1);
////		assertEquals(na2, a2);
////		
////		Group state = na2.clone();
////		state.setId(na1.getId());
////		assertEquals(na1, state);
////		assertFalse(na1.equals(na2));
////
////		_daoGroup.remove(a2);
////		assertNull(_daoGroup.find(a2.getId()));
////		assertNotNull(_daoGroup.find(a1.getId()));
////
////		_daoGroup.remove(a1);
////		assertNull(_daoGroup.find(a1.getId()));
////	}
////
////	@Test//(dependsOnMethods = "createSingleTest") FIXME: https://issues.jboss.org/browse/ARQ-55
////	public void updateSingleTest() throws ExceptionDao {
////		Group stored = null;
////		_daoGroup.persist(_orig1);
////		
////		_orig2.setId(_orig1.getId());
////		_daoGroup.persist(_orig2);
////		
////		stored = _daoGroup.find(_orig2.getId());
////		assertEquals(stored, _orig2);
////		
////		_daoGroup.remove(stored);
////	}
////
////	@Test//(dependsOnMethods = "createMultipleTest") FIXME: https://issues.jboss.org/browse/ARQ-55
////	public void updateMultipleTest() throws ExceptionDao {
////		
////		Group stored1 = _orig1;
////		Group stored2 = _orig2;
////		
////		_daoGroup.persist(stored1);
////		_daoGroup.persist(stored2);
////		
////		stored1.setId(_orig2.getId());
////		stored2.setId(_orig2.getId());
////
////		assertEquals(stored1, _orig2);
////		assertEquals(stored2, _orig2);
////	}
//
//}
