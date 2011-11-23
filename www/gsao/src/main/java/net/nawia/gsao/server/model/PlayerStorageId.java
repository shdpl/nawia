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
 * Id of {@link PlayerStorage}
 */
@Embeddable
public class PlayerStorageId implements java.io.Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = -5638986371587383774L;
	
	private int playerId;
	private int key;
	private int value;

	public PlayerStorageId() {
	}

	public PlayerStorageId(int playerId, int key, int value) {
		this.playerId = playerId;
		this.key = key;
		this.value = value;
	}

	@Column(name = "player_id", nullable = false)
	public int getPlayerId() {
		return this.playerId;
	}

	public void setPlayerId(int playerId) {
		this.playerId = playerId;
	}

	@Column(name = "key", nullable = false)
	public int getKey() {
		return this.key;
	}

	public void setKey(int key) {
		this.key = key;
	}

	@Column(name = "value", nullable = false)
	public int getValue() {
		return this.value;
	}

	public void setValue(int value) {
		this.value = value;
	}

	public boolean equals(Object other) {
		if ((this == other))
			return true;
		if ((other == null))
			return false;
		if (!(other instanceof PlayerStorageId))
			return false;
		PlayerStorageId castOther = (PlayerStorageId) other;

		return (this.getPlayerId() == castOther.getPlayerId())
				&& (this.getKey() == castOther.getKey())
				&& (this.getValue() == castOther.getValue());
	}

	public int hashCode() {
		int result = 17;

		result = 37 * result + this.getPlayerId();
		result = 37 * result + this.getKey();
		result = 37 * result + this.getValue();
		return result;
	}

}
