package net.nawia.gsao.server.service.impl;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import javax.annotation.security.DeclareRoles;
import javax.annotation.security.RolesAllowed;
//import javax.ejb.*;

import net.nawia.gsao.server.dao.DaoAccount;
import net.nawia.gsao.server.dao.DaoBan;
import net.nawia.gsao.server.dao.DaoFactory;
import net.nawia.gsao.server.dao.exception.ExceptionDao;
import net.nawia.gsao.server.domain.Account;
import net.nawia.gsao.server.domain.Ban;
import net.nawia.gsao.server.domain.Ban.BAN_T;
import net.nawia.gsao.server.service.ServiceBan;
import net.nawia.gsao.server.service.local.ServiceBanLocal;
import net.nawia.gsao.server.service.remote.ServiceBanRemote;

//@Stateless(name = "ServiceBan")
// @DeclareRoles({"GM"})
// @RolesAllowed({"GM"})
// @TransactionAttribute(TransactionAttributeType.REQUIRES_NEW)
public class ImplServiceBan implements ServiceBanLocal, ServiceBanRemote {

	@Override
	public boolean add(Ban ban, Account acc) {
		assert (ban != null && acc != null);

		DaoBan _daoBan = (DaoBan) DaoFactory.build(DaoBan.class);
		try {
			// TODO: transakcje
			if (ban.getType() != BAN_T.BAN_ACCOUNT)
				return false;
			// TODO: refactor
			_daoBan.persist(ban);
			return true;
		} finally {
			_daoBan.close();
		}
	}

	@Override
	public boolean del(Ban ban) {
		DaoBan _daoBan = (DaoBan) DaoFactory.build(DaoBan.class);
		try {
			if (null != _daoBan.find(ban.getId()))
				return true;
			return false;
		} finally {
			_daoBan.close();
		}
	}

	@Override
	public Map<Account, Ban> list() {
		Map<Account, Ban> ret = new HashMap<Account, Ban>();
		DaoBan _daoBan = (DaoBan) DaoFactory.build(DaoBan.class);
		try {
			DaoAccount _daoAcc = (DaoAccount) DaoFactory
					.build(DaoAccount.class);
			try {
				List<Ban> bans = _daoBan.findAll();

				for (Ban b : bans) {
					Account acc = _daoAcc.find(b.getParam().intValue());
					if (null == acc)
						return null;
					ret.put(acc, b);
				}

				return ret;
			} finally {
				_daoAcc.close();
			}
		} finally {
			_daoBan.close();
		}
	}
}
