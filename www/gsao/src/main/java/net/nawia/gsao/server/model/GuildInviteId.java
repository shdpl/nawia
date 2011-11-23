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
 * Id of {@link GuildInvite}
 */
@Embeddable
public class GuildInviteId implements java.io.Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = 783286088508550472L;
	
	
	private int playerId;
	private int guildId;

	public GuildInviteId() {
	}

	public GuildInviteId(int playerId, int guildId) {
		this.playerId = playerId;
		this.guildId = guildId;
	}

	@Column(name = "player_id", unique = true, nullable = false)
	public int getPlayerId() {
		return this.playerId;
	}

	public void setPlayerId(int playerId) {
		this.playerId = playerId;
	}

	@Column(name = "guild_id", nullable = false)
	public int getGuildId() {
		return this.guildId;
	}

	public void setGuildId(int guildId) {
		this.guildId = guildId;
	}

	public boolean equals(Object other) {
		if ((this == other))
			return true;
		if ((other == null))
			return false;
		if (!(other instanceof GuildInviteId))
			return false;
		GuildInviteId castOther = (GuildInviteId) other;

		return (this.getPlayerId() == castOther.getPlayerId())
				&& (this.getGuildId() == castOther.getGuildId());
	}

	public int hashCode() {
		int result = 17;

		result = 37 * result + this.getPlayerId();
		result = 37 * result + this.getGuildId();
		return result;
	}

}
