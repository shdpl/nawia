package net.nawia.www.cms.http.bean;

import java.util.Date;
import java.util.List;

import javax.ejb.EJB;
import javax.enterprise.inject.Model;
import javax.persistence.Column;

import net.nawia.gsao.domain.Account;
import net.nawia.gsao.service.ServiceAccountRemote;

@Model
public class BeanAccount {
	@EJB
	ServiceAccountRemote _sa;
	List<Account> _al;
	
	public List<Account> getAll() {
		assert(null != _sa);
		_al = _sa.getAll();
		return _al;
	}
	
	public int getNum() {
		assert(null != _sa);
		_al = _sa.getAll();
		return _al.size();
	}
}
