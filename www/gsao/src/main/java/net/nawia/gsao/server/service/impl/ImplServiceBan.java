package net.nawia.gsao.server.service.impl;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import javax.annotation.security.DeclareRoles;
import javax.annotation.security.RolesAllowed;
import javax.ejb.*;

import net.nawia.gsao.server.dao.DaoAccount;
import net.nawia.gsao.server.dao.DaoBan;
import net.nawia.gsao.server.model.Account;
import net.nawia.gsao.server.model.Ban;
import net.nawia.gsao.server.model.Ban.BAN_T;
import net.nawia.gsao.server.service.ServiceBan;
import net.nawia.gsao.server.service.local.ServiceBanLocal;
import net.nawia.gsao.server.service.remote.ServiceBanRemote;

@Stateless(name = "ServiceBan")
 @DeclareRoles({"GM"})
 @RolesAllowed({"GM"})
 @TransactionAttribute(TransactionAttributeType.REQUIRES_NEW)
public class ImplServiceBan implements ServiceBanLocal, ServiceBanRemote {

	@Override
	public boolean add(Ban ban, Account acc) {
		assert (ban != null && acc != null);

		DaoBan _daoBan = new DaoBan();
		// TODO: transakcje
		if (ban.getType() != BAN_T.BAN_ACCOUNT)
			return false;
		// TODO: refactor
		_daoBan.persist(ban);
		return true;
	}

	@Override
	public boolean del(Ban ban) {
		DaoBan _daoBan = new DaoBan();
		if (null != _daoBan.findById(ban.getId()))
			return true;
		return false;
	}

	@Override
	public Map<Account, Ban> list() {
		Map<Account, Ban> ret = new HashMap<Account, Ban>();
		DaoBan _daoBan = new DaoBan();
		DaoAccount _daoAcc = new DaoAccount();
//		List<Ban> bans = _daoBan.findById(id)
//
//		for (Ban b : bans) {
//			Account acc = _daoAcc.find(b.getParam().intValue());
//			if (null == acc)
//				return null;
//			ret.put(acc, b);
//		}

		return ret;
	}
}
