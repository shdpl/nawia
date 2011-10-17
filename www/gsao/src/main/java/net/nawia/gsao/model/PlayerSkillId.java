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
package net.nawia.gsao.model;

import javax.persistence.Column;
import javax.persistence.Embeddable;

/**
 * Id of {@link PlayerSkill}
 */
@Embeddable
public class PlayerSkillId implements java.io.Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = 4904983657868110329L;
	
	
	private int playerId;
	private long skillid;
	private long value;
	private long count;

	public PlayerSkillId() {
	}

	public PlayerSkillId(int playerId, long skillid, long value, long count) {
		this.playerId = playerId;
		this.skillid = skillid;
		this.value = value;
		this.count = count;
	}

	@Column(name = "player_id", nullable = false)
	public int getPlayerId() {
		return this.playerId;
	}

	public void setPlayerId(int playerId) {
		this.playerId = playerId;
	}

	@Column(name = "skillid", nullable = false)
	public long getSkillid() {
		return this.skillid;
	}

	public void setSkillid(long skillid) {
		this.skillid = skillid;
	}

	@Column(name = "value", nullable = false)
	public long getValue() {
		return this.value;
	}

	public void setValue(long value) {
		this.value = value;
	}

	@Column(name = "count", nullable = false)
	public long getCount() {
		return this.count;
	}

	public void setCount(long count) {
		this.count = count;
	}

	public boolean equals(Object other) {
		if ((this == other))
			return true;
		if ((other == null))
			return false;
		if (!(other instanceof PlayerSkillId))
			return false;
		PlayerSkillId castOther = (PlayerSkillId) other;

		return (this.getPlayerId() == castOther.getPlayerId())
				&& (this.getSkillid() == castOther.getSkillid())
				&& (this.getValue() == castOther.getValue())
				&& (this.getCount() == castOther.getCount());
	}

	public int hashCode() {
		int result = 17;

		result = 37 * result + this.getPlayerId();
		result = 37 * result + (int) this.getSkillid();
		result = 37 * result + (int) this.getValue();
		result = 37 * result + (int) this.getCount();
		return result;
	}

}
