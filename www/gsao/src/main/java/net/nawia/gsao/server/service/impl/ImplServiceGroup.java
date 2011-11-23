package net.nawia.gsao.server.service.impl;

import java.util.List;

//import javax.ejb.Stateless;

import net.nawia.gsao.server.domain.Group;
import net.nawia.gsao.server.domain.Player;
import net.nawia.gsao.server.service.ServiceGroup;
import net.nawia.gsao.server.service.local.ServiceGroupLocal;
import net.nawia.gsao.server.service.remote.ServiceGroupRemote;

//@Stateless(name="ServiceGroup")
//@DeclareRoles({"GM"})
//@RolesAllowed({"GM"})
//@TransactionAttribute(TransactionAttributeType.REQUIRES_NEW)
public class ImplServiceGroup implements ServiceGroupLocal, ServiceGroupRemote {

	@Override
	public int add(Group g) {
		// TODO Auto-generated method stub
		return 0;
	}

	@Override
	public boolean del(int gid) {
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public List<Group> getAll() {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public int getVipLimit(int gid) {
		// TODO Auto-generated method stub
		return 0;
	}

	@Override
	public int getDepotLimit(int gid) {
		// TODO Auto-generated method stub
		return 0;
	}

	@Override
	public String getName(int gid) {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public boolean setFlags(int gid, long flags) {
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public boolean unsetFlags(int gid, long flags) {
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public List<Player> getPlayers(int gid) {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public boolean changeVipLimit(int gid, int num) {
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public boolean changeDepotLimit(int gid, int num) {
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public boolean rename(int gid, String newName) {
		// TODO Auto-generated method stub
		return false;
	}


	
}
