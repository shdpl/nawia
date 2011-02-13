package net.nawia.gsao.service.impl;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import javax.annotation.security.DeclareRoles;
import javax.annotation.security.RolesAllowed;
import javax.ejb.*;

import net.nawia.gsao.dao.DaoAccount;
import net.nawia.gsao.dao.DaoBan;
import net.nawia.gsao.dao.DaoFactory;
import net.nawia.gsao.dao.exceptions.ExceptionDao;
import net.nawia.gsao.domain.Account;
import net.nawia.gsao.domain.Ban;
import net.nawia.gsao.domain.Ban.BAN_T;
import net.nawia.gsao.service.ServiceBan;

@Stateless(name="ServiceBan")
//@DeclareRoles({"GM"})
//@RolesAllowed({"GM"})
//@TransactionAttribute(TransactionAttributeType.REQUIRES_NEW)
public class ImplServiceBan implements ServiceBan {
	DaoBan _daoBan;
	DaoAccount _daoAcc;
	
	public ImplServiceBan() {
		try {
			_daoBan = (DaoBan) DaoFactory.build(DaoBan.class);
			_daoAcc = (DaoAccount) DaoFactory.build(DaoAccount.class);
		} catch (ExceptionDao e) {
			throw new RuntimeException(e); //FIXME
		}
	}

	@Override
	public boolean add(Ban ban, Account acc) {
		//TODO: tranzakcje
		if (ban.getType() != BAN_T.BAN_ACCOUNT)
		return false;
		//TODO: refactor
		_daoBan.persist(ban);
		return true;
	}

	@Override
	public boolean del(Ban ban) {
		if (null != _daoBan.find(ban.getId()))
				return true;
		return false;
	}

	@Override
	public Map<Account, Ban> list() {
		Map<Account, Ban> ret = new HashMap<Account, Ban>();
		List<Ban> bans = new ArrayList<Ban>();
		
		for(Ban b : bans) {
			Account acc = _daoAcc.find(b.getParam().intValue());
			if (null == acc)
				return null;
			ret.put(acc, b);
		}
		
		return ret;
	}

}
