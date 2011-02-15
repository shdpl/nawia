package net.nawia.gsao.service.impl;

import java.util.Date;
import java.util.List;
import java.util.logging.Logger;

import javax.ejb.*;

import net.nawia.gsao.dao.DaoAccount;
import net.nawia.gsao.dao.DaoFactory;
import net.nawia.gsao.dao.exceptions.ExceptionDao;
import net.nawia.gsao.domain.Account;
import net.nawia.gsao.service.ServiceAccountLocal;
import net.nawia.gsao.service.ServiceAccountRemote;


@Stateless(name="ServiceAccount")
//@DeclareRoles({"AccountManager"})
//@RolesAllowed({"AccountManager"})
//@TransactionAttribute(TransactionAttributeType.REQUIRES_NEW)
public class ImplServiceAccount implements ServiceAccountLocal, ServiceAccountRemote {	private static final Logger _log = Logger
	.getLogger(ImplServiceAccount.class.getName());
	DaoAccount _daoAcc;
	
	public ImplServiceAccount() {
		_log.entering("ImplServiceAccount", "ImplServiceAccount()");
		try {
			_daoAcc = (DaoAccount) DaoFactory.build(DaoAccount.class);
		} catch (ExceptionDao e) {
			throw new RuntimeException(e); //FIXME
		}
	}
	
	@Override
	public boolean register(String name, String password, String email) {
		_log.entering("ImplServiceAccount", "register()");
		assert(null != name && null!= password && null != email);
		Account acc = new Account(0, name, password, email, new Date(), false, 0);
		boolean ret = _daoAcc.findAll(acc).size() == 0;
		if (ret)
			_daoAcc.persist(acc);
		return ret;
	}

	@Override
	public boolean del(Account acc) {
		_log.entering("ImplServiceAccount", "del()");
		assert(null != acc);
		if (null != _daoAcc.find(acc.getId()))
			_daoAcc.remove(acc);
		else
			return false;
		return true;
	}

	@Override
	public boolean hasName(String name) {
		_log.entering("ImplServiceAccount", "hasName()");
		assert(null != name && !name.isEmpty());
		return !_daoAcc.findAll(new Account(0, name, null, null, null, false, (short) 0)).isEmpty();
	}

	@Override
	public boolean verifyCredentials(String login, String pass) {
		_log.entering("ImplServiceAccount", "verifyCredentials()");
		assert(login != null && !login.isEmpty() && pass != null && !pass.isEmpty());
		List<Account> accs = _daoAcc.findAll(new Account(0, login, null, null, null, false, (short) 0));
		assert(accs.size() < 2);
		if (accs.size() != 0)
			return true;
		return false;
	}

	@Override
	public List<Account> getAll() {
		_log.entering("ImplServiceAccount", "getAll()");
		return _daoAcc.findAll();
	}
	
	
	//TODO: OnDestroy() {_daoAcc.close()}
	
}
