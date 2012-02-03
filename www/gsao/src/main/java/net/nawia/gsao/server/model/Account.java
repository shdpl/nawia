/*******************************************************************************
 * Copyright (C) 2010 Mariusz 'shd' Gliwiński.
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 * 
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 ******************************************************************************/
package net.nawia.gsao.server.model;

import java.util.Date;
import java.util.HashSet;
import java.util.Set;
import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.FetchType;
import javax.persistence.GeneratedValue;
import javax.persistence.Id;
import javax.persistence.OneToMany;
import javax.persistence.Table;
import javax.persistence.UniqueConstraint;
import javax.validation.constraints.Max;
import javax.validation.constraints.Min;
import javax.validation.constraints.Pattern;
import javax.validation.constraints.Size;

/**
 * Player account
 */
@Entity
@Table(name = "accounts", schema = "\"public\"", uniqueConstraints = @UniqueConstraint(columnNames = "name"))
public class Account implements java.io.Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = -4136123587650054949L;

	private int id;

	/**
	 * Account name
	 */
	private String name;

	/**
	 * Account password
	 */
	private String password;

	/**
	 * E-mail connected to this account
	 */
	private String email;

	/**
	 * Date of premium account expiry
	 */
	private long premend;

	/**
	 * Whether this account is blocked
	 */
	private short blocked;

	/**
	 * Number of warnings addressed for this account owner
	 */
	private short warnings;
	private Set<Player> players = new HashSet<Player>(0);

	public Account() {
	}

	public Account(int id, String name, String password, String email,
			Date premend, boolean blocked, int warnings) {
		this.id = id;
		this.name = name;
		this.password = password;
		this.email = email;
		this.premend = premend.getTime();
		this.blocked = (short) (blocked ? 1 : 0);
		this.warnings = (short) warnings;
	}

	public Account(int id, String name, String password, String email,
			Date premend, boolean blocked, short warnings, Set<Player> players) {
		this.id = id;
		this.name = name;
		this.password = password;
		this.email = email;
		this.premend = premend.getTime();
		this.blocked = (short) (blocked ? 1 : 0);
		this.warnings = warnings;
		this.players = players;
	}

	@Id
	@Min(0)
	@Max(Integer.MAX_VALUE)
	@GeneratedValue
	@Column(name = "\"id\"", unique = true, nullable = false)
	public int getId() {
		return this.id;
	}

	public void setId(int id) {
		this.id = id;
	}

	@Size(min = 3, max = 32)
	@Column(name = "name", unique = true, nullable = false, length = 32)
	public String getName() {
		return this.name;
	}

	public void setName(String name) {
		this.name = name;
	}

	@Size(min = 8, max = 255)
	@Pattern(regexp = "^.*(?=.{8,})(?=.*\\d)(?=.*[a-z])(?=.*[A-Z])(?=.*[@#$%^&+=]).*$")
	@Column(name = "password", nullable = false)
	public String getPassword() {
		return this.password;
	}

	public void setPassword(String password) {
		this.password = password;
	}

	@Size(min = 5, max = 255)
	@Pattern(regexp = "^[\\w\\-]([\\.\\w])+[\\w]+@([\\w\\-]+\\.)+[a-zA-Z]{2,4}$")
	@Column(name = "email", nullable = false)
	public String getEmail() {
		return this.email;
	}

	public void setEmail(String email) {
		this.email = email;
	}

	@Column(name = "premend", nullable = false)
	public Date getPremend() {
		return new Date(this.premend);
	}

	public void setPremend(Date premend) {
		this.premend = premend.getTime();
	}

	@Column(name = "blocked", nullable = false)
	public boolean getBlocked() {
		return this.blocked != 0;
	}

	public void setBlocked(boolean blocked) {
		this.blocked = (short)(blocked ? 1 : 0);
	}

	@Min(0)
	@Max(Short.MAX_VALUE)
	@Column(name = "warnings", nullable = false)
	public short getWarnings() {
		return this.warnings;
	}

	public void setWarnings(short warnings) {
		this.warnings = warnings;
	}

	@OneToMany(fetch = FetchType.LAZY, mappedBy = "account")
	public Set<Player> getPlayers() {
		return this.players;
	}

	public void setPlayers(Set<Player> players) {
		this.players = players;
	}

}
