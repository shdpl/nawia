package net.nawia.www.cms.http.bean;

import javax.enterprise.inject.Model;
import javax.inject.Inject;

import net.nawia.www.cms.http.service.ServiceAuthenticator;


@Model
public class BeanCredentials {
	private String _login;
	private String _password;
	@Inject
	ServiceAuthenticator _authenticator;
	
	@Inject
	public BeanCredentials() {
		
	}
	
	public String getLogin() {
		return _login;
	}

	public void setLogin(String login) {
		_login = login;
	}

	public String getPassword() {
		return _password;
	}

	public void setPassword(String password) {
		_password = password;
	}

	public String login() {
		_authenticator.doLogin(_login, _password);
		return "login";
	}
	
}
