package net.nawia.gsao.service.impl;

import javax.ejb.Stateless;

import net.nawia.gsao.domain.Group;
import net.nawia.gsao.service.ServiceGroup;

@Stateless(name="ServiceGroup")
//@DeclareRoles({"GM"})
//@RolesAllowed({"GM"})
//@TransactionAttribute(TransactionAttributeType.REQUIRES_NEW)
public class ImplServiceGroup implements ServiceGroup {

	@Override
	public void changeVipLimit(Group g, int num) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void changeDepotLimit(Group g, int num) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void rename(Group g, String newName) {
		// TODO Auto-generated method stub
		
	}

	
}
