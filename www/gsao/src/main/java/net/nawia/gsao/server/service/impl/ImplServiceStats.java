package net.nawia.gsao.server.service.impl;

import javax.ejb.Stateless;
import javax.ejb.TransactionAttribute;
import javax.ejb.TransactionAttributeType;

import net.nawia.gsao.server.service.ServiceStats;

@Stateless(name="ServiceStats")
//@DeclareRoles({"GM"})
//@RolesAllowed({"GM"})
@TransactionAttribute(TransactionAttributeType.REQUIRES_NEW)
public class ImplServiceStats implements ServiceStats {

	@Override
	public boolean isOnline() {
		return false;
	}

	@Override
	public float getLatency() {
		// TODO Auto-generated method stub
		return 0;
	}

	@Override
	public int getPlayersOnline() {
		// TODO Auto-generated method stub
		return 0;
	}

	@Override
	public int getUptime() {
		// TODO Auto-generated method stub
		return 0;
	}

	@Override
	public float getLoad() {
		// TODO Auto-generated method stub
		return 0;
	}

	@Override
	public int getSecretsUnsolved() {
		// TODO Auto-generated method stub
		return 0;
	}
	
}
