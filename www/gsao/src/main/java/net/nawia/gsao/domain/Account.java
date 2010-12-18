package net.nawia.gsao.domain;

import javax.persistence.*;
import net.nawia.gsao.dao.*;

@Entity(name="Accounts")
public class Account {
	@Id private int id;
	String name;
	String password;
	String email;
	int premend;
	short blocked;
	short warnings;
	DaoFactory df;
	
	Account() {
		try {
			DaoFactory.build(DaoAccount.class).persist(this);
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
	
	
}