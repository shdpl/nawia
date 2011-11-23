package net.nawia.www.cms.http.bean;

import java.io.Serializable;

import javax.ejb.EJB;
import javax.enterprise.context.SessionScoped;
import javax.faces.application.FacesMessage;
import javax.faces.context.FacesContext;
import javax.inject.Named;

import net.nawia.gsao.server.service.remote.ServiceAccountRemote;

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

	private static final FacesMessage msgWrongCredentials = new FacesMessage(
			FacesMessage.SEVERITY_ERROR, "You provided wrong credentials",
			"You provided wrong user name or password, please try again."); // TODO:
	// internationalize
	// with
	// resource
	// bundles
	private static final FacesMessage msgAccountLocked = new FacesMessage(
			FacesMessage.SEVERITY_ERROR,
			"Your account has been locked",
			"You cannot login, because Your account has been locked."
					+ "If You're in doubt about reason, please contact with administration");

	private static final FacesMessage msgAccountExists = new FacesMessage(
			FacesMessage.SEVERITY_ERROR,
			"Account with that name already exists",
			"Requested account name is already occupied. Please, choose a different name");

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
		if (_sa.hasName(name)) {
			FacesContext.getCurrentInstance()
					.addMessage(null, msgAccountExists);
			return "register_failure_exists";
		}
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
			if (!_sa.locked(id))
				return "login";
			FacesContext.getCurrentInstance()
					.addMessage(null, msgAccountLocked);
		}
		FacesContext.getCurrentInstance().addMessage(null, msgWrongCredentials);
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
