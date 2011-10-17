package net.nawia.gsao.service;

import java.util.List;

import net.nawia.gsao.model.Group;
import net.nawia.gsao.model.Player;


public interface ServiceGroup {
	int add(Group g);
	
	boolean del(int gid);
	
	List<Group> getAll();
	
	int getVipLimit(int gid);
	
	boolean changeVipLimit(int gid, int num);
	
	int getDepotLimit(int gid);
	
	boolean changeDepotLimit(int gid, int num);
	
	String getName(int gid);
	
	boolean rename(int gid, String newName);
	
	boolean setFlags(int gid, long flags);

	boolean unsetFlags(int gid, long flags);
	
	List<Player> getPlayers(int gid);
	
	//TODO: access
	
	//TODO: violation

}
