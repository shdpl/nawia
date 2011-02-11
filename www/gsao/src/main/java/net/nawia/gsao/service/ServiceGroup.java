package net.nawia.gsao.service;

import net.nawia.gsao.domain.Group;

public interface ServiceGroup {
	
	void changeVipLimit(Group g, int num);
	
	void changeDepotLimit(Group g, int num);
	
	void rename(Group g, String newName);

}
