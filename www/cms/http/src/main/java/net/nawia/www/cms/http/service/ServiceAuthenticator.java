package net.nawia.www.cms.http.service;

import javax.enterprise.context.ApplicationScoped;

import org.owasp.esapi.ESAPI;
import org.owasp.esapi.errors.AuthenticationException;

@ApplicationScoped
public class ServiceLogin {
	
	public boolean doLogin(String login, String pass) {
		try {
			ESAPI.authenticator().login();
		} catch (AuthenticationException e) {
			return false;
		}
		return true;
	}

}
