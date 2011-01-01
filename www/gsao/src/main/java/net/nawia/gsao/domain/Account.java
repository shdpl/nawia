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

import java.util.Date;

import javax.persistence.*;

@Entity(name = "Accounts")
public class Account {
	@Id
	private int id;
	private String name;
	private String password;
	private String email;
	private Date premend;
	private boolean blocked;
	private short warnings;

	public Account() {
		
	}
	
	public Account(final int id, final String name, final String password,
			final String email, final Date premend, final boolean blocked,
			final short warnings) {
		this.id = id;
		this.name = name;
		this.password = password;
		this.email = email;
		this.premend = premend;
		this.blocked = blocked;
		this.warnings = warnings;
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
		return premend;
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
		this.premend = premend;
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
		result = prime * result + ((premend == null) ? 0 : premend.hashCode());
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
		if (premend == null) {
			if (other.premend != null)
				return false;
		} else if (!premend.equals(other.premend))
			return false;
		if (warnings != other.warnings)
			return false;
		return true;
	}

	@Override
	public String toString() {
		return "Account [id=" + id + ", name=" + name + ", password="
				+ password + ", email=" + email + ", premend=" + premend
				+ ", blocked=" + blocked + ", warnings=" + warnings + "]";
	}

}
