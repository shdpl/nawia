package net.nawia.gsao.service;

import java.util.Map;



import net.nawia.gsao.model.Account;
import net.nawia.gsao.model.Ban;

public interface ServiceBan {

	/**
	 * Bans account.
	 * 
	 * @return Whether account has been banned (true), or not (false)
	 */
	boolean add(Ban acc, Account a);
	
	/**
	 * Removes ban from account.
	 * 
	 * @return Whether ban has been properly removed (true), or not (false)
	 */
	boolean del(Ban ban);
	
	/**
	 * Lists banned accounts.
	 * 
	 * @return Map of every Account that has been banned, and Ban object
	 */
	Map<Account, Ban> list();
	
}
