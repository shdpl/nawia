package net.nawia.gsao.service;

import java.util.List;

import net.nawia.gsao.domain.Account;

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
	 * Verifies credentials, and returns proper user ID
	 * @param login String, that uniquely identifies account
	 * @param pass Password, that protects account from unauthorized access
	 * @return ID of user if properly verified, or -1 in either case
	 */
	int verifyCredentials(String login, String password);
	
	/**
	 * Lists every possible accounts on server
	 * @return List<Account> list of accounts
	 */
	List<Account> getAll();

	/**
	 * Changes account password
	 * @param id Account ID
	 * @param password New password, that will protect account from unauthorized access
	 * @return true, if password has been successfully changed, or false in other way
	 */
	boolean changePassword(int id, String password);

	/**
	 * Changes E-Mail associated with account
	 * @param id Account ID
	 * @param mail New E-mail, that will be associated with account
	 * @return true, if e-mail has been successfully changed, or false in other way
	 */
	boolean changeEmail(int id, String mail);
}
