package net.nawia.www.cms.http.bean;

import javax.ejb.EJB;
import javax.enterprise.context.RequestScoped;
import javax.faces.application.FacesMessage;
import javax.faces.context.FacesContext;
import javax.inject.Inject;
import javax.inject.Named;

import net.nawia.gsao.server.service.remote.ServiceAccountRemote;

@Named
@RequestScoped
public class BeanUserData {
	private String name;
	private String password;
	private String newPassword;
	private String newPassword2;
	private String newMail;
	private String newMail2;
	private static final FacesMessage msgPasswordNotMatch = new FacesMessage(
			FacesMessage.SEVERITY_ERROR, "You provided wrong old password",
			"You provided wrong old password. Please, try again"); // TODO:
																	// internationalize
																	// with
																	// resource
																	// bundles
	private static final FacesMessage msgNewPasswordNotMatch = new FacesMessage(
			FacesMessage.SEVERITY_ERROR,
			"New passwords doesn't match",
			"New passwords, that You provided doesn't match with each other."
					+ "Please, fill both fields with same string, that will be Your new password");
	private static final FacesMessage msgNewEmailNotMatch = new FacesMessage(
			FacesMessage.SEVERITY_ERROR, "New e-mails doesn't match",
			"New e-mail addresses, that You've provided doesn't match with each other."
					+ "Please, fill both fields with same string,"
					+ "that will be Your new registered e-mail address");
	private static final FacesMessage msgNewEmailHasBeenModified = new FacesMessage(
			FacesMessage.SEVERITY_INFO, "E-mail modified",
			"Your e-mail address have been modified successfully.");
	private static final FacesMessage msgNewPasswordHasBeenModified = new FacesMessage(
			FacesMessage.SEVERITY_INFO, "Password modified.",
			"Your password has been modified successfully.");

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

	public String getNewPassword() {
		return newPassword;
	}

	public void setNewPassword(String password2) {
		this.newPassword = password2;
	}

	public String getMail() {
		return newMail;
	}

	public String getNewPassword2() {
		return newPassword2;
	}

	public void setNewPassword2(String newPassword2) {
		this.newPassword2 = newPassword2;
	}

	public void setMail(String mail) {
		this.newMail = mail;
	}

	public String getMail2() {
		return newMail2;
	}

	public void setMail2(String mail) {
		this.newMail2 = mail;
	}

	public String changePass() {
		if (!this.password.equals(curUser.getPassword())) {
			FacesContext.getCurrentInstance().addMessage(null,
					msgPasswordNotMatch);
			return "failure";
		}
		if (!this.newPassword.equals(this.newPassword2)) {
			FacesContext.getCurrentInstance().addMessage(null,
					msgNewPasswordNotMatch);
			return "failure";
		}
		//TODO: CallValidate
		FacesContext.getCurrentInstance().addMessage(null,
				msgNewPasswordHasBeenModified);
		curUser.changePassword(this.password);
		return "success";
	}

	public String changeMail() {
		if (!this.password.equals(curUser.getPassword())) {
			FacesContext.getCurrentInstance().addMessage(null,
					msgPasswordNotMatch);
			return "failure";
		}
		if (!this.newMail.equals(this.newMail2)) {
			FacesContext.getCurrentInstance().addMessage(null,
					msgNewEmailNotMatch);
			return "failure";
		}
		//TODO: CallValidate
		FacesContext.getCurrentInstance().addMessage(null,
				msgNewEmailHasBeenModified);
		curUser.changeEmail(this.newMail);
		return "success";
	}

}
