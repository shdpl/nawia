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

import javax.persistence.Column;
import javax.persistence.Embeddable;

/**
 * Id of @{link EnvKiller}
 */
@Embeddable
public class EnvKillerId implements java.io.Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = 1937737552547712024L;

	private int killId;
	private String name;

	public EnvKillerId() {
	}

	public EnvKillerId(int killId, String name) {
		this.killId = killId;
		this.name = name;
	}

	@Column(name = "kill_id", nullable = false)
	public int getKillId() {
		return this.killId;
	}

	public void setKillId(int killId) {
		this.killId = killId;
	}

	@Column(name = "name", nullable = false)
	public String getName() {
		return this.name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public boolean equals(Object other) {
		if ((this == other))
			return true;
		if ((other == null))
			return false;
		if (!(other instanceof EnvKillerId))
			return false;
		EnvKillerId castOther = (EnvKillerId) other;

		return (this.getKillId() == castOther.getKillId())
				&& ((this.getName() == castOther.getName()) || (this.getName() != null
						&& castOther.getName() != null && this.getName()
						.equals(castOther.getName())));
	}

	public int hashCode() {
		int result = 17;

		result = 37 * result + this.getKillId();
		result = 37 * result
				+ (getName() == null ? 0 : this.getName().hashCode());
		return result;
	}

}
