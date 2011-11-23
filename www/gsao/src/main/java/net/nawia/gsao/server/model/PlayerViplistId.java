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
 * Id of {@link PlayerVipList}
 */
@Embeddable
public class PlayerViplistId implements java.io.Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = -5917440143793162958L;
	
	private int playerId;
	private int vipId;

	public PlayerViplistId() {
	}

	public PlayerViplistId(int playerId, int vipId) {
		this.playerId = playerId;
		this.vipId = vipId;
	}

	@Column(name = "player_id", nullable = false)
	public int getPlayerId() {
		return this.playerId;
	}

	public void setPlayerId(int playerId) {
		this.playerId = playerId;
	}

	@Column(name = "vip_id", nullable = false)
	public int getVipId() {
		return this.vipId;
	}

	public void setVipId(int vipId) {
		this.vipId = vipId;
	}

	public boolean equals(Object other) {
		if ((this == other))
			return true;
		if ((other == null))
			return false;
		if (!(other instanceof PlayerViplistId))
			return false;
		PlayerViplistId castOther = (PlayerViplistId) other;

		return (this.getPlayerId() == castOther.getPlayerId())
				&& (this.getVipId() == castOther.getVipId());
	}

	public int hashCode() {
		int result = 17;

		result = 37 * result + this.getPlayerId();
		result = 37 * result + this.getVipId();
		return result;
	}

}
