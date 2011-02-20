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
	private int id = -1;
	private String name;
	private String password;
	private String mail;
	@EJB
	private ServiceAccountRemote _sa;

	public boolean isLogged() {
		return id >= 0;
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
	
	public String logout() {
		id = -1;
		return "logout";
	}
	
	public String register() {
		if (_sa.register(name, password, mail))
			return "registered";
		return "register_failure";
	}
	
	public boolean isInRole(String role) {
		if (!isLogged())
			return false;
		if (role.equals("admin")) {
			if (name.equals("nawia"))
				return true;
			else
				return false;
		}
		return true;
	}

	public void changePassword(String password) {
		if (isLogged())
			_sa.changePassword(id, password);
	}
	
	public String login() {
		id = _sa.verifyCredentials(name, password);
		if (id >= 0) {
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

	public boolean changeEmail(String mail) {
		if (isLogged())
			return _sa.changeEmail(id, mail);
		return false;
		
	}
}
