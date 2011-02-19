package net.nawia.gsao.service.impl;

import java.util.Date;
import java.util.List;
import java.util.logging.Logger;

import javax.ejb.*;

import net.nawia.gsao.dao.DaoAccount;
import net.nawia.gsao.dao.DaoFactory;
import net.nawia.gsao.domain.Account;
import net.nawia.gsao.service.local.ServiceAccountLocal;
import net.nawia.gsao.service.remote.ServiceAccountRemote;


@Stateless(name="ServiceAccount")
//@DeclareRoles({"AccountManager"})
//@RolesAllowed({"AccountManager"})
//@TransactionAttribute(TransactionAttributeType.REQUIRES_NEW)
public class ImplServiceAccount implements ServiceAccountLocal, ServiceAccountRemote {	private static final Logger _log = Logger
	.getLogger(ImplServiceAccount.class.getName());
	DaoAccount _daoAcc;
	
	@Override
	public boolean register(String name, String password, String email) {
		_log.entering("ImplServiceAccount", "register()");
		assert (null != name && null != password && null != email);

		DaoAccount _daoAcc = (DaoAccount) DaoFactory.build(DaoAccount.class);
		try {
			Account acc = new Account(0, name, password, email, new Date(),
					false, 0);
			boolean ret = _daoAcc.findAll(acc).size() == 0;
			if (ret)
				_daoAcc.persist(acc);
			return ret;
		} finally {
			_daoAcc.close();
		}
	}

	@Override
	public boolean del(Account acc) {
		_log.entering("ImplServiceAccount", "del()");
		assert (null != acc);

		DaoAccount _daoAcc = (DaoAccount) DaoFactory.build(DaoAccount.class);
		try {
			if (null != _daoAcc.find(acc.getId()))
				_daoAcc.remove(acc);
			else
				return false;
			return true;
		} finally {
			_daoAcc.close();
		}
	}

	@Override
	public boolean hasName(String name) {
		_log.entering("ImplServiceAccount", "hasName()");
		assert (null != name && !name.isEmpty());

		DaoAccount _daoAcc = (DaoAccount) DaoFactory.build(DaoAccount.class);
		try {
			return !_daoAcc.findAll(
					new Account(0, name, null, null, null, false, (short) 0))
					.isEmpty();
		} finally {
			_daoAcc.close();
		}
	}

	@Override
	public int verifyCredentials(String login, String password) {
		_log.entering("ImplServiceAccount", "verifyCredentials()");
		assert (login != null && !login.isEmpty() && password != null && !password
				.isEmpty());

		DaoAccount _daoAcc = (DaoAccount) DaoFactory.build(DaoAccount.class);
		try {
			List<Account> accs = _daoAcc.findAll(new Account(0, login, null,
					null, null, false, (short) 0));
			assert (accs.size() < 2);
			if (accs.size() != 0 && accs.get(0).getPassword().equals(password))
				return accs.get(0).getId();
			return -1;
		} finally {
			_daoAcc.close();
		}
	}

	@Override
	public List<Account> getAll() {
		_log.entering("ImplServiceAccount", "getAll()");

		DaoAccount _daoAcc = (DaoAccount) DaoFactory.build(DaoAccount.class);
		try {
			return _daoAcc.findAll();
		} finally {
			_daoAcc.close();
		}
	}

	@Override
	public void changePassword(int id, String password) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public boolean changeEmail(int id, String mail) {
		// TODO Auto-generated method stub
		return false;
	}

	// @SuppressWarnings("unused")
	// @PostConstruct
	// private void open() {
	// _daoAcc = (DaoAccount) DaoFactory.build(DaoAccount.class);
	// }

	// @SuppressWarnings("unused")
	// @PreDestroy
	// private void close() {
	// _daoAcc.close();
	// }

}
