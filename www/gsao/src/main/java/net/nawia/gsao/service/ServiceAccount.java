package net.nawia.gsao.service;

import java.util.List;

import javax.ejb.Remote;

import net.nawia.gsao.domain.Account;

@Remote
public interface ServiceAccount {

	/**
	 * Registers new account on server
	 * 
	 * @return Whether registration succeed (true), or not (false)
	 */
	boolean register(String name, String password, String email);
	
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
	 * @return Whether name is in database (true), or not (false)
	 */
	boolean hasName(String name);
	
	/**
	 * Verifies credentials
	 * @param login String, that uniquely identifies account
	 * @param pass Password, that protects account from unauthorized access
	 * @return True, if matches, false in other case
	 */
	boolean verifyCredentials(String login, String pass);
	
	/**
	 * Lists every possible accounts on server
	 * @return List<Account> list of accounts
	 */
	List<Account> getAll();
}
