package net.nawia.gsao.dao;

import org.testng.annotations.*;

@Test
public class DaoFactoryTest {
	DaoFactory f;
	
	@BeforeTest
	void prepareFactory() {
		f = new DaoFactory();
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
