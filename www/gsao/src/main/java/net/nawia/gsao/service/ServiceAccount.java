package net.nawia.gsao.service;

import java.util.Date;
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
	 * Can be used to rename account
	 * 
	 * @param id
	 *            ID of Account for being renamed
	 * @param name
	 *            Desired user name
	 * @return Whether account has been successfully renamed
	 */
	boolean rename(int id, String name);

	/**
	 * Method, for locking users Account
	 * 
	 * @param id
	 *            ID of Account to be locked
	 * @return Whether Account has been locked successfully
	 */
	boolean lock(int id);

	/**
	 * Method, for unlocking users Account
	 * 
	 * @param id
	 *            ID of Account to be unlocked
	 * @return Whether Account has been unlocked successfully
	 */
	boolean unlock(int id);

	/**
	 * Method, for obtaining information, whether Account is locked
	 * 
	 * @param id
	 *            ID of Account, in which lock state we are interested to
	 * @return True, if account is locked and false in other case. null if
	 *         method fails
	 */
	Boolean locked(int id);

	/**
	 * Verifies credentials, and returns proper user ID
	 * 
	 * @param login
	 *            String, that uniquely identifies account
	 * @param pass
	 *            Password, that protects account from unauthorized access
	 * @return ID of user if properly verified, or -1 in other case
	 */
	int verifyCredentials(String login, String password);

	/**
	 * Lists every possible accounts on server
	 * 
	 * @return List<Account> list of accounts
	 */
	List<Account> getAll();

	/**
	 * Changes account password
	 * 
	 * @param id
	 *            Account ID
	 * @param password
	 *            New password, that will protect account from unauthorized
	 *            access
	 * @return true, if password has been successfully changed, or false in
	 *         other way
	 */
	boolean changePassword(int id, String password);

	/**
	 * Changes E-Mail associated with account
	 * 
	 * @param id
	 *            Account ID
	 * @param mail
	 *            New E-mail, that will be associated with account
	 * @return true, if e-mail has been successfully changed, or false in other
	 *         way
	 */
	boolean changeEmail(int id, String mail);

	/**
	 * Method, that can be used to set appropriate number of warnings for given
	 * Account
	 * 
	 * @param id
	 *            ID of Account, for which warns should be modified
	 * @param warnings
	 *            Number of warnings, for being to for given Account
	 * @return true, if warnings have been modified properly, false in other
	 *         case
	 */
	boolean setWarnings(int id, int warnings);

	/**
	 * Method, for retrieving number of warnings for given Account
	 * 
	 * @param id
	 *            ID of Account, that warning number should be returned
	 * @return number of warnings of given Account, or <0 if failed to retrieve
	 */
	int getWarnings(int id);

	/**
	 * Sets up Account premium time limit until given date
	 * 
	 * @param id
	 *            ID of Account, for which premium time is changed
	 * @param until
	 *            Date, of potential premium time end
	 * @return True, if premium time has been changed successfully, false in
	 *         other case
	 */
	boolean setPremium(int id, Date until);

	/**
	 * Method, that might be used for retrieving premium time end for given
	 * Account
	 * 
	 * @param id
	 *            ID of Account, that premium time we want to retrieve
	 * @return Date, when Accounts premium time ends or null if method fails
	 */
	Date getPremium(int id);

	/**
	 * Call it, if You want to know whether account is still premium or not
	 * 
	 * @param id
	 *            ID of Account, that needs to be checked for premium time
	 * @return True, if Account is premium or false in other case
	 */
	Boolean isPremium(int id);
}
