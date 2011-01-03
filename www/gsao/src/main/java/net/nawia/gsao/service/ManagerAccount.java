package net.nawia.gsao.service;

import net.nawia.gsao.domain.Account;

public interface ManagerAccount {

	/**
	 * Adds new account to game server.
	 * 
	 * @return Whether account has been added (true), or not (false)
	 */
	boolean add(Account acc);
	
	/**
	 * Deletes account from game server.
	 * 
	 * @return Whether account has been deleted (true), or not (false)
	 */
	boolean del(Account acc);
	
	/**
	 * Can be used to check if chosen account name is already in database.
	 * 
	 * @param name
	 * @return Whether name is in db (true), or not (false)
	 */
	boolean hasName(String name);
	
}
