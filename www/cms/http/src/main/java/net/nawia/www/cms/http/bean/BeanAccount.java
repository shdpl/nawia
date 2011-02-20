package net.nawia.www.cms.http.bean;

import java.util.List;

import javax.ejb.EJB;
import javax.enterprise.inject.Model;

import net.nawia.gsao.domain.Account;
import net.nawia.gsao.service.remote.ServiceAccountRemote;

@Model
public class BeanAccount {
	@EJB
	private ServiceAccountRemote _sa;
	private List<Account> _al;

	public BeanAccount() {
		_al = _sa.getAll();
	}
	
	public List<Account> getAll() {
		assert (null != _sa);
		return _al;
	}

	public int getNum() {
		assert (null != _sa);
		return _al.size();
	}

	public String modify(Account which) {
		if (!_sa.changeEmail(which.getId(), which.getEmail()))
			return "failure";
		if (!_sa.changePassword(which.getId(), which.getPassword()))
			return "failure";
		return "success";
	}

	public String delete(Account which) {
		if (!_sa.del(which))
			return "failure";
		return "success";
	}

	public String resetPassword(Account which) {// TODO: after JavaMail will be
												// set-up, make it work as it's
												// intended to
		System.out.println("resetPassword()");
		if (!_sa.changePassword(which.getId(), which.getName()))
			return "failure";
		return "success";
	}
}
