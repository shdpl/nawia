package net.nawia.www.cms.http.bean;

import javax.enterprise.context.RequestScoped;
import javax.inject.Inject;
import javax.inject.Named;

import net.nawia.www.cms.http.service.ServiceLogin;

@Named
@RequestScoped
public class BeanCredentials {
	private String _login;
	private String _password;
	@Inject
	ServiceLogin sl;
	
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

	void doLogin() {
		sl.doLogin(_login, _password);
	}
	
}
