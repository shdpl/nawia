package net.nawia.gsao.service.impl;

import javax.annotation.security.DeclareRoles;
import javax.annotation.security.RolesAllowed;
import javax.ejb.*;

import net.nawia.gsao.dao.DaoAccount;
import net.nawia.gsao.domain.Account;
import net.nawia.gsao.service.ServiceAccount;

@Stateless
@DeclareRoles({"AccountManager"})
@RolesAllowed({"AccountManager"})
@TransactionAttribute(TransactionAttributeType.REQUIRES_NEW)
public class ImplServiceAccount implements ServiceAccount {
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
