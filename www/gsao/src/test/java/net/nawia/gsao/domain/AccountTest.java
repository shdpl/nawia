package net.nawia.gsao.domain;

import java.io.File;
import java.io.FileInputStream;
import java.util.logging.*;

import org.testng.Assert;
import org.testng.annotations.Test;

@Test
public class AccountTest {

	@Test
	void buildTest() {
		Account a = new Account();
		Assert.assertNotNull(a);
	}

}
