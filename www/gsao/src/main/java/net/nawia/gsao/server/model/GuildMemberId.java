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
 * Id of {@link GuildMember}
 */
@Embeddable
public class GuildMemberId implements java.io.Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = 3987990758872348069L;
	
	
	private int playerId;
	private int rankId;
	private String guildNick;

	public GuildMemberId() {
	}

	public GuildMemberId(int playerId, int rankId, String guildNick) {
		this.playerId = playerId;
		this.rankId = rankId;
		this.guildNick = guildNick;
	}

	@Column(name = "player_id", unique = true, nullable = false)
	public int getPlayerId() {
		return this.playerId;
	}

	public void setPlayerId(int playerId) {
		this.playerId = playerId;
	}

	@Column(name = "rank_id", nullable = false)
	public int getRankId() {
		return this.rankId;
	}

	public void setRankId(int rankId) {
		this.rankId = rankId;
	}

	@Column(name = "guild_nick", nullable = false)
	public String getGuildNick() {
		return this.guildNick;
	}

	public void setGuildNick(String guildNick) {
		this.guildNick = guildNick;
	}

	public boolean equals(Object other) {
		if ((this == other))
			return true;
		if ((other == null))
			return false;
		if (!(other instanceof GuildMemberId))
			return false;
		GuildMemberId castOther = (GuildMemberId) other;

		return (this.getPlayerId() == castOther.getPlayerId())
				&& (this.getRankId() == castOther.getRankId())
				&& ((this.getGuildNick() == castOther.getGuildNick()) || (this
						.getGuildNick() != null
						&& castOther.getGuildNick() != null && this
						.getGuildNick().equals(castOther.getGuildNick())));
	}

	public int hashCode() {
		int result = 17;

		result = 37 * result + this.getPlayerId();
		result = 37 * result + this.getRankId();
		result = 37 * result
				+ (getGuildNick() == null ? 0 : this.getGuildNick().hashCode());
		return result;
	}

}
