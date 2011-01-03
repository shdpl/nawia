package net.nawia.gsao.service.impl;

import javax.ejb.EJB;
import javax.ejb.Stateless;

import net.nawia.gsao.dao.DaoAccount;
import net.nawia.gsao.domain.Account;
import net.nawia.gsao.service.ManagerAccount;

@Stateless
public class ImplManagerAccount implements ManagerAccount {
	@EJB
	DaoAccount _daoAcc;
	
	@Override
	public boolean add(Account acc) {
		acc.setId(0);
		boolean ret = null != _daoAcc.find(acc.getId());
		if (ret)
			_daoAcc.persist(acc);
		return ret;
	}

	@Override
	public boolean del(Account acc) {
		if (null != _daoAcc.find(acc.getId()))
			_daoAcc.remove(acc);
		else
			return false;
		return true;
	}

	@Override
	public boolean hasName(String name) {
		_daoAcc.find(id)
		return false;
	}

}
