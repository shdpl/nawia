package net.nawia.www.cms.http.bean;

import javax.faces.bean.ManagedBean;
import javax.faces.bean.SessionScoped;

import net.nawia.gsao.domain.Account;

@ManagedBean
@SessionScoped
public class BeanUser {
	Account _acc;
	
	public void setAccount(Account acc) {
		System.out.println("-------------------------------------");
		_acc = acc;
	}
	
	public boolean isLogged() {
		return _acc != null;
	}

}
