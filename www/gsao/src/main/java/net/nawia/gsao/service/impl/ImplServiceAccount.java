package net.nawia.gsao.service.impl;

import java.util.List;

import javax.annotation.security.DeclareRoles;
import javax.annotation.security.RolesAllowed;
import javax.ejb.*;
import javax.inject.Inject;

import net.nawia.gsao.dao.DaoAccount;
import net.nawia.gsao.dao.DaoBan;
import net.nawia.gsao.dao.DaoFactory;
import net.nawia.gsao.dao.exceptions.ExceptionDao;
import net.nawia.gsao.domain.Account;
import net.nawia.gsao.service.ServiceAccount;

@Stateless
//@DeclareRoles({"AccountManager"})
//@RolesAllowed({"AccountManager"})
//@TransactionAttribute(TransactionAttributeType.REQUIRES_NEW)
public class ImplServiceAccount implements ServiceAccount {
	DaoAccount _daoAcc;
	
	public ImplServiceAccount() {
		try {
			_daoAcc = (DaoAccount) DaoFactory.build(DaoAccount.class);
		} catch (ExceptionDao e) {
			throw new RuntimeException(e); //FIXME
		}
	}
	
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

	@Override
	public Account login(String login, String pass) {
		List<Account> accs = _daoAcc.findAll(new Account(0, login, null, null, null, false, (short) 0));
		assert(accs.size() < 2);
		if (accs.size() != 0 && accs.get(0).getPassword().equals(pass))
			return accs.get(0);
		return null;
	}

	@Override
	public List<Account> getAll() {
		return _daoAcc.findAll();
	}
	
	
}
