package net.nawia.gsao.domain;


import java.sql.Date;

import net.nawia.gsao.dao.DaoBan;
import net.nawia.gsao.dao.DaoFactory;
import net.nawia.gsao.dao.exception.ExceptionDao;
import net.nawia.gsao.domain.Ban.BAN_T;

import org.jboss.arquillian.api.Deployment;
import org.jboss.arquillian.testng.Arquillian;
import org.jboss.shrinkwrap.api.ShrinkWrap;
import org.jboss.shrinkwrap.api.spec.JavaArchive;
import org.testng.annotations.*;
import static org.testng.Assert.*;

@Test(groups = {"Dao", "Ban"}, dependsOnGroups = "DaoFactory")
public class BanTest extends Arquillian {
	private static final BAN_T _type = BAN_T.BAN_ACCOUNT;
	private static final Date _added = Date.valueOf("1994-10-05");
	private static final boolean _active = true;
	private static final Date _expires = Date.valueOf("1996-11-23");;
	private static final Integer _reason = 1;
	private static final Long _param = 1L;
	private static final Integer _admin_id = 1;
	private static final Integer _value = 1;
	private static final Integer _action = 1;
	private static final String _comment = "jeden";
	private static final String _statement = "pierwszy";

	private static final BAN_T _type2 = BAN_T.BAN_IPADDRESS;
	private static final Date _added2 = Date.valueOf("1993-01-13");
	private static final boolean _active2 = false;
	private static final Date _expires2 = Date.valueOf("1998-05-03");;
	private static final Integer _reason2 = 2;
	private static final Long _param2 = 2L;
	private static final Integer _admin_id2 = 2;
	private static final Integer _value2 = 2;
	private static final Integer _action2 = 2;
	private static final String _comment2 = "dwa";
	private static final String _statement2 = "drugi";
	
	private Ban _orig;
	private Ban _orig2;
	private DaoBan _daoBan;
	
	@Deployment
	public static JavaArchive createDeployment() {
		return ShrinkWrap.create(JavaArchive.class, "test.jar");
	}
	
	private Ban buildPrototype(int which) {
		switch (which) {
		case 1:
			return new Ban(_value, _param, _type, _active, _expires, _added, _admin_id, _reason, _comment, _action, _statement);
		default:
			return new Ban(_value2, _param2, _type2, _active2, _expires2, _added2, _admin_id2, _reason2, _comment2, _action2, _statement2);
		}
	}

	private DaoBan getDao() throws ExceptionDao {
		return (DaoBan) DaoFactory.build(DaoBan.class);
	}
	
	@BeforeClass
	public void beforeClass() {
		_daoBan = getDao();
	}
	
	@BeforeTest
	public void beforeTest() {
		_orig = buildPrototype(1);
		_orig2 = buildPrototype(2);
	}
	
//	@Test
//	public void comparatorTest() {
//		assertEquals(_orig.getId(), _orig.getId());
//		assertEquals(_orig.getValue(), _orig.getValue());
//		assertEquals(_orig.getParam(), _orig.getParam());
//		assertEquals(_orig.getType(), _orig.getType());
//		assertEquals(_orig.getActive(), _orig.getActive());
//		assertEquals(_orig.getExpires(), _orig.getExpires());
//		assertEquals(_orig.getAdded(), _orig.getAdded());
//		assertEquals(_orig.getAdmin_id(), _orig.getAdmin_id());
//		assertEquals(_orig.getReason(), _orig.getReason());
//		assertEquals(_orig.getComment(), _orig.getComment());
//		assertEquals(_orig.getAction(), _orig.getAction());
//		assertEquals(_orig.getStatement(), _orig.getStatement());
//		assertEquals(_orig, _orig);
//		
//		Ban different = _orig;
//		different.setAction(_orig.getAction() +1);
//		// more... senseless, reflection tool would be cool
//		assertFalse(_orig.equals(different));
//	}
//	
//	@Test//(dependsOnMethods = "comparatorTest") FIXME: https://issues.jboss.org/browse/ARQ-55
//	public void createSingleTest() throws ExceptionDao {
//		_daoBan.persist(_orig);
//		Ban retrieved = (Ban) _daoBan.find(_orig.getId());
//		assertEquals(retrieved, _orig);
//		_daoBan.remove(_orig);
//		assertNull(_daoBan.find(_orig.getId()));
//	}
//
//	@Test//(dependsOnMethods = "createSingleTest") FIXME: https://issues.jboss.org/browse/ARQ-55
//	public void createMultipleTest() throws ExceptionDao {
//		Ban a1 = buildPrototype(1);
//		Ban a2 = buildPrototype(1);
//		a2.setId(_orig.id + 1);
//		assert (!a1.equals(a2));
//
//		_daoBan.persist(a1);
//		_daoBan.persist(a2);
//
//		Ban na1 = _daoBan.find(a1.getId());
//		Ban na2 = _daoBan.find(a2.getId());
//		assertEquals(na1, a1);
//		assertEquals(na2, a2);
//		
//		Ban state = na2.clone();
//		state.setId(na1.getId());
//		assertEquals(na1, state);
//		assertFalse(na1.equals(na2));
//
//		_daoBan.remove(a2);
//		assertNull(_daoBan.find(a2.getId()));
//		assertNotNull(_daoBan.find(a1.getId()));
//
//		_daoBan.remove(a1);
//		assertNull(_daoBan.find(a1.getId()));
//	}
//
//	@Test//(dependsOnMethods = "createSingleTest") FIXME: https://issues.jboss.org/browse/ARQ-55
//	public void updateSingleTest() throws ExceptionDao {
//		Ban stored = null;
//		_daoBan.persist(_orig);
//		
//		_orig2.setId(_orig.getId());
//		_daoBan.persist(_orig2);
//		
//		stored = _daoBan.find(_orig2.getId());
//		assertEquals(stored, _orig2);
//		
//		_daoBan.remove(stored);
//	}
//
//	@Test//(dependsOnMethods = "createMultipleTest") FIXME: https://issues.jboss.org/browse/ARQ-55
//	public void updateMultipleTest() throws ExceptionDao {
//		
//		Ban stored1 = _orig;
//		Ban stored2 = _orig2;
//		
//		_daoBan.persist(stored1);
//		_daoBan.persist(stored2);
//		
//		stored1.setId(_orig2.getId());
//		stored2.setId(_orig.getId());
//
//		assertEquals(stored1, _orig2);
//		assertEquals(stored2, _orig);
//	}
}
