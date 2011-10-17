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
 * Id of {@link PlayerKiller}
 */
@Embeddable
public class PlayerKillerId implements java.io.Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = 8946648780451080192L;
	
	
	private int killId;
	private int playerId;

	public PlayerKillerId() {
	}

	public PlayerKillerId(int killId, int playerId) {
		this.killId = killId;
		this.playerId = playerId;
	}

	@Column(name = "kill_id", nullable = false)
	public int getKillId() {
		return this.killId;
	}

	public void setKillId(int killId) {
		this.killId = killId;
	}

	@Column(name = "player_id", nullable = false)
	public int getPlayerId() {
		return this.playerId;
	}

	public void setPlayerId(int playerId) {
		this.playerId = playerId;
	}

	public boolean equals(Object other) {
		if ((this == other))
			return true;
		if ((other == null))
			return false;
		if (!(other instanceof PlayerKillerId))
			return false;
		PlayerKillerId castOther = (PlayerKillerId) other;

		return (this.getKillId() == castOther.getKillId())
				&& (this.getPlayerId() == castOther.getPlayerId());
	}

	public int hashCode() {
		int result = 17;

		result = 37 * result + this.getKillId();
		result = 37 * result + this.getPlayerId();
		return result;
	}

}
