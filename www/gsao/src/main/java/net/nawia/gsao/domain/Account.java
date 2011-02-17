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
package net.nawia.gsao.domain;

import java.io.Serializable;
import java.util.Date;

import javax.inject.Named;
import javax.persistence.*;
import javax.validation.constraints.Max;
import javax.validation.constraints.Min;
import javax.validation.constraints.Pattern;
import javax.validation.constraints.Size;

@Named
@Entity
@Table (name = "accounts")
public class Account implements Cloneable, Serializable {
	
	private static final long serialVersionUID = -5029958322298559966L;
	
	@Min(0)
	@Max(Integer.MAX_VALUE)
	@Id
	@GeneratedValue
	private int id;
	
	/**
	 * Account name
	 */
	@Size(min=3, max=32)
	@Column(nullable = false)
	private String name;
	
	/**
	 * Account password
	 */
	@Size(min=8, max=255)
	@Pattern(regexp = "^.*(?=.{8,})(?=.*\\d)(?=.*[a-z])(?=.*[A-Z])(?=.*[@#$%^&+=]).*$")
	@Column(nullable = false)
	private String password;
	
	/**
	 * E-mail connected to this account
	 */
	@Size(min=5, max=255)
	@Pattern(regexp = "^[\\w\\-]([\\.\\w])+[\\w]+@([\\w\\-]+\\.)+[a-zA-Z]{2,4}$")
	@Column(nullable = false)
	private String email;
	
	/**
	 * Date of premium account expiry
	 */
	@Column(nullable = false)
	private Date premiumEnd;
	
	/**
	 * Whether this account is blocked
	 */
	@Column(nullable = false)
	private boolean blocked;
	
	/**
	 * Number of warnings addressed for this account owner
	 */
	@Min(0)
	@Max(Short.MAX_VALUE)
	@Column(nullable = false)
	private short warnings;

	@Override
	public Object clone() throws CloneNotSupportedException {
		return super.clone();
	}

	public Account(final int id, final String name, final String password,
			final String email, final Date premend, final boolean blocked,
			final int warnings) {
		super();
		this.id = id;
		this.name = name;
		this.password = password;
		this.email = email;
		this.premiumEnd = premend;
		this.blocked = blocked;
		this.warnings = (short) warnings;
	}

	public String getEmail() {
		return email;
	}

	public int getId() {
		return id;
	}

	public String getName() {
		return name;
	}

	public String getPassword() {
		return password;
	}

	public Date getPremend() {
		return premiumEnd;
	}

	public short getWarnings() {
		return warnings;
	}

	public boolean isBlocked() {
		return blocked;
	}

	public void setBlocked(final boolean blocked) {
		this.blocked = blocked;
	}

	public void setEmail(String email) {
		this.email = email;
	}

	public void setId(int id) {
		this.id = id;
	}

	public void setName(String name) {
		this.name = name;
	}

	public void setPassword(String password) {
		this.password = password;
	}

	public void setPremend(Date premend) {
		this.premiumEnd = premend;
	}

	public void setWarnings(short warnings) {
		this.warnings = warnings;
	}

	@Override
	public int hashCode() {
		final int prime = 31;
		int result = 1;
		result = prime * result + (blocked ? 1231 : 1237);
		result = prime * result + ((email == null) ? 0 : email.hashCode());
		result = prime * result + id;
		result = prime * result + ((name == null) ? 0 : name.hashCode());
		result = prime * result
				+ ((password == null) ? 0 : password.hashCode());
		result = prime * result + ((premiumEnd == null) ? 0 : premiumEnd.hashCode());
		result = prime * result + warnings;
		return result;
	}

	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Account other = (Account) obj;
		if (blocked != other.blocked)
			return false;
		if (email == null) {
			if (other.email != null)
				return false;
		} else if (!email.equals(other.email))
			return false;
		if (id != other.id)
			return false;
		if (name == null) {
			if (other.name != null)
				return false;
		} else if (!name.equals(other.name))
			return false;
		if (password == null) {
			if (other.password != null)
				return false;
		} else if (!password.equals(other.password))
			return false;
		if (premiumEnd == null) {
			if (other.premiumEnd != null)
				return false;
		} else if (!premiumEnd.equals(other.premiumEnd))
			return false;
		if (warnings != other.warnings)
			return false;
		return true;
	}

	@Override
	public String toString() {
		return "Account [id=" + id + ", name=" + name + ", password="
				+ password + ", email=" + email + ", premend=" + premiumEnd
				+ ", blocked=" + blocked + ", warnings=" + warnings + "]";
	}

}
