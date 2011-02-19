package net.nawia.www.cms.http.bean;

import java.io.Serializable;

import javax.ejb.EJB;
import javax.enterprise.context.SessionScoped;
import javax.inject.Named;

import net.nawia.gsao.service.remote.ServiceAccountRemote;

@Named
@SessionScoped
public class BeanUser implements Serializable {
	private static final long serialVersionUID = 1431411956385831617L;
	private boolean logged = false;
	private String name;
	private String password;
	private String mail;
	@EJB
	private ServiceAccountRemote _sa;

	public boolean isLogged() {
		return logged;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public String getPassword() {
		return password;
	}

	public void setPassword(String password) {
		this.password = password;
	}

	public String getMail() {
		return mail;
	}

	public void setMail(String mail) {
		this.mail = mail;
	}

	public String login() {
		if (_sa.verifyCredentials(name, password)) {
			logged = true;
			return "login";
		}
		return "login_error";
		// try {
		// User u = ESAPI.authenticator().getUser(login);
		// u.loginWithPassword(pass);
		// return true;
		// } catch (AuthenticationException e) {
		// return false;
		// }
	}
	
	public String logout() {
		logged = false;
		return "logout";
	}
	
	public String register() {
		if (_sa.register(name, password, mail))
			return "registered";
		return "register_failure";
	}
	
	public boolean isInRole(String role) {
		if (!logged)
			return false;
		if (role.equals("admin")) {
			if (name.equals("nawia"))
				return true;
			else
				return false;
		}
		return true;
	}

}
