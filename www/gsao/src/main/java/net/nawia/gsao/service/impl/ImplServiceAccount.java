package net.nawia.gsao.service.impl;

import javax.ejb.EJB;
import javax.ejb.Stateless;

import net.nawia.gsao.dao.DaoAccount;
import net.nawia.gsao.domain.Account;
import net.nawia.gsao.service.ServiceAccount;

@Stateless
public class ImplServiceAccount implements ServiceAccount {
	@EJB
	DaoAccount _daoAcc;
	
	@Override
	public boolean add(Account acc) {
		assert(null != acc);
		acc.setId(0);
		boolean ret = null != _daoAcc.find(acc.getId());
		if (ret)
			_daoAcc.persist(acc);
		return ret;
	}

	@Override
	public boolean del(Account acc) {
		assert(null != acc);
		if (null != _daoAcc.find(acc.getId()))
			_daoAcc.remove(acc);
		else
			return false;
		return true;
	}

	@Override
	public boolean hasName(String name) {
		assert(null != name && !name.isEmpty());
		return !_daoAcc.findAll(new Account(0, name, null, null, null, false, (short) 0)).isEmpty();
	}

}
