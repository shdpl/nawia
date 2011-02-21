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

@Stateless(name = "ServiceAccount")
// @DeclareRoles({"AccountManager"})
// @RolesAllowed({"AccountManager"})
// @TransactionAttribute(TransactionAttributeType.REQUIRES_NEW)
public class ImplServiceAccount implements ServiceAccountLocal,
		ServiceAccountRemote {
	private static final Logger _log = Logger
			.getLogger(ImplServiceAccount.class.getName());

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
	public boolean changePassword(int id, String password) {
		_log.entering("ImplServiceAccount", "changePassword()", new Object[] {
				id, password });
		assert (id >= 0 && password != null);
		DaoAccount _daoAcc = (DaoAccount) DaoFactory.build(DaoAccount.class);
		try {
			Account acc = _daoAcc.find(id);
			if (acc == null) {
				_log.severe("Could not find account with ID " + id);
				return false;
			}
			acc.setPassword(password);
			_daoAcc.persist(acc);
			return true;
		} finally {
			_daoAcc.close();
		}
	}

	@Override
	public boolean changeEmail(int id, String email) {
		_log.entering("ImplServiceAccount", "changeEmail", new Object[] { id,
				email });
		assert (id >= 0 && email != null);
		DaoAccount _daoAcc = (DaoAccount) DaoFactory.build(DaoAccount.class);
		try {
			Account acc = _daoAcc.find(id);
			if (acc == null) {
				_log.severe("Could not find account with ID " + id);
				return false;
			}
			acc.setEmail(email);
			_daoAcc.persist(acc);
			return true;
		} finally {
			_daoAcc.close();
		}
	}

	@Override
	public boolean rename(int id, String name) {
		_log.entering("ImplServiceAccount", "rename", new Object[] { id, name });
		assert (id >= 0 && name != null);
		DaoAccount _daoAcc = (DaoAccount) DaoFactory.build(DaoAccount.class);
		try {
			Account acc = _daoAcc.find(id);
			if (acc == null) {
				_log.severe("Could not find account with ID " + id);
				return false;
			}
			acc.setName(name);
			_daoAcc.persist(acc);
			return true;
		} finally {
			_daoAcc.close();
		}
	}

	@Override
	public boolean lock(int id) {
		_log.entering("ImplServiceAccount", "lock", id);
		assert (id >= 0);
		DaoAccount _daoAcc = (DaoAccount) DaoFactory.build(DaoAccount.class);
		try {
			Account acc = _daoAcc.find(id);
			if (acc == null) {
				_log.severe("Could not find account with ID " + id);
				return false;
			}
			acc.setBlocked(true);
			_daoAcc.persist(acc);
			return true;
		} finally {
			_daoAcc.close();
		}
	}

	@Override
	public boolean unlock(int id) {
		_log.entering("ImplServiceAccount", "unlock", id);
		assert (id >= 0);
		DaoAccount _daoAcc = (DaoAccount) DaoFactory.build(DaoAccount.class);
		try {
			Account acc = _daoAcc.find(id);
			if (acc == null) {
				_log.severe("Could not find account with ID " + id);
				return false;
			}
			acc.setBlocked(false);
			_daoAcc.persist(acc);
			return true;
		} finally {
			_daoAcc.close();
		}
	}

	@Override
	public Boolean locked(int id) {
		_log.entering("ImplServiceAccount", "locked", id);
		assert (id >= 0);
		DaoAccount _daoAcc = (DaoAccount) DaoFactory.build(DaoAccount.class);
		try {
			Account acc = _daoAcc.find(id);
			if (acc == null) {
				_log.severe("Could not find account with ID " + id);
				return null;
			}
			return acc.isBlocked();
		} finally {
			_daoAcc.close();
		}
	}

	@Override
	public boolean setWarnings(int id, int warnings) {
		_log.entering("ImplServiceAccount", "setWarnings", new Object[] { id, warnings });
		assert (id >= 0 && warnings >= 0);
		DaoAccount _daoAcc = (DaoAccount) DaoFactory.build(DaoAccount.class);
		try {
			Account acc = _daoAcc.find(id);
			if (acc == null) {
				_log.severe("Could not find account with ID " + id);
				return false;
			}
			acc.setWarnings((short) warnings);
			_daoAcc.persist(acc);
			return true;
		} finally {
			_daoAcc.close();
		}
	}

	@Override
	public int getWarnings(int id) {
		_log.entering("ImplServiceAccount", "getWarnings", id);
		assert (id >= 0);
		DaoAccount _daoAcc = (DaoAccount) DaoFactory.build(DaoAccount.class);
		try {
			Account acc = _daoAcc.find(id);
			if (acc == null) {
				_log.severe("Could not find account with ID " + id);
				return -1;
			}
			return acc.getWarnings();
		} finally {
			_daoAcc.close();
		}
	}

	@Override
	public boolean setPremium(int id, Date until) {
		_log.entering("ImplServiceAccount", "setPremium", new Object[]{id, until});
		assert (id >= 0) && until != null;
		DaoAccount _daoAcc = (DaoAccount) DaoFactory.build(DaoAccount.class);
		try {
			Account acc = _daoAcc.find(id);
			if (acc == null) {
				_log.severe("Could not find account with ID " + id);
				return false;
			}
			acc.setPremend(until);
			_daoAcc.persist(acc);
			return true;
		} finally {
			_daoAcc.close();
		}
	}

	@Override
	public Date getPremium(int id) {
		_log.entering("ImplServiceAccount", "getPremium", id);
		assert (id >= 0);
		DaoAccount _daoAcc = (DaoAccount) DaoFactory.build(DaoAccount.class);
		try {
			Account acc = _daoAcc.find(id);
			if (acc == null) {
				_log.severe("Could not find account with ID " + id);
				return null;
			}
			return acc.getPremend();
		} finally {
			_daoAcc.close();
		}
	}

	@Override
	public Boolean isPremium(int id) {
		_log.entering("ImplServiceAccount", "isPremium", id);
		assert (id >= 0);
		DaoAccount _daoAcc = (DaoAccount) DaoFactory.build(DaoAccount.class);
		try {
			Account acc = _daoAcc.find(id);
			if (acc == null) {
				_log.severe("Could not find account with ID " + id);
				return null;
			}
			return !acc.getPremend().before(new Date());
		} finally {
			_daoAcc.close();
		}
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
