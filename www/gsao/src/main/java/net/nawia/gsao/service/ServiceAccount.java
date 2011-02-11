package net.nawia.gsao.service;

import java.util.List;

import javax.ejb.Remote;

import net.nawia.gsao.domain.Account;

@Remote
public interface ServiceAccount {

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
	 * @return Whether name is in database (true), or not (false)
	 */
	boolean hasName(String name);
	
	/**
	 * Verifies credentials, and returns matched Account
	 * @param login String, that uniquely identifies account
	 * @param pass Password, that protects account from unauthorized access
	 * @return Account object if successful, or null if login failed.
	 */
	Account login(String login, String pass);
	
	/**
	 * Lists every possible accounts on server
	 * @return List<Account> list of accounts
	 */
	List<Account> getAll();
}
