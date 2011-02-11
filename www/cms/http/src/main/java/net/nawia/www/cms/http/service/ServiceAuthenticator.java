package net.nawia.www.cms.http.service;

import javax.ejb.EJB;
import javax.enterprise.context.ApplicationScoped;
import javax.inject.Inject;

import net.nawia.gsao.domain.Account;
import net.nawia.gsao.service.ServiceAccount;
import net.nawia.www.cms.http.bean.BeanUser;

//import org.owasp.esapi.ESAPI;
//import org.owasp.esapi.User;
//import org.owasp.esapi.errors.AuthenticationException;

@ApplicationScoped
public class ServiceAuthenticator {
	@EJB
	ServiceAccount _sa;
	@Inject
	BeanUser _curUsr;
	
	@Inject
	public ServiceAuthenticator() {
		
	}
	
	public boolean doLogin(String login, String pass) {
//		try {
//			User u = ESAPI.authenticator().getUser(login);
//			u.loginWithPassword(pass);
//			return true;
//		} catch (AuthenticationException e) {
//			return false;
//		}
		System.out.println("-----------------ENTRY---------------");
		Account acc = _sa.login(login, pass);
		System.out.println("-------------------------------------");
		if (acc == null)
			return false;
		_curUsr.setAccount(acc);
		return true;
	}

}
