package net.nawia.www.cms.http.bean;

import javax.ejb.EJB;
import javax.enterprise.context.RequestScoped;
import javax.inject.Inject;
import javax.inject.Named;

import net.nawia.gsao.service.remote.ServiceAccountRemote;

@Named
@RequestScoped
public class BeanUserData {
	private String name;
	private String password;
	private String password2;
	private String mail;
	private String mail2;
	
	@Inject
	BeanUser curUser;
	
	@EJB
	ServiceAccountRemote sa;

	
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



	public String getPassword2() {
		return password2;
	}



	public void setPassword2(String password2) {
		this.password2 = password2;
	}



	public String getMail() {
		return mail;
	}



	public void setMail(String mail) {
		this.mail = mail;
	}

	public String changePass() {
		if (this.password.equals(curUser.getPassword())) {
			curUser.changePassword(this.password);
			return "success";
		}
		return "failure";
	}
	
	public String changeMail() {
		if (this.password.equals(curUser.getPassword())) {
			curUser.changeEmail(this.mail);
			return "success";
		}
		return "failure";
	}

}
