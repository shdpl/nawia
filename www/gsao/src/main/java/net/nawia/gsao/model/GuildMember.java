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

import javax.persistence.AttributeOverride;
import javax.persistence.AttributeOverrides;
import javax.persistence.Column;
import javax.persistence.EmbeddedId;
import javax.persistence.Entity;
import javax.persistence.FetchType;
import javax.persistence.JoinColumn;
import javax.persistence.ManyToOne;
import javax.persistence.Table;
import javax.persistence.UniqueConstraint;

/**
 * Member player of a {@link Guild}
 */
@Entity
@Table(name = "guild_members", schema = "public", uniqueConstraints = @UniqueConstraint(columnNames = "player_id"))
public class GuildMember implements java.io.Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = 7489492035047679604L;
	
	
	private GuildMemberId id;
	private GuildRank guildRank;
	private Player player;

	public GuildMember() {
	}

	public GuildMember(GuildMemberId id, GuildRank guildRank, Player player) {
		this.id = id;
		this.guildRank = guildRank;
		this.player = player;
	}

	@EmbeddedId
	@AttributeOverrides({
			@AttributeOverride(name = "playerId", column = @Column(name = "player_id", unique = true, nullable = false)),
			@AttributeOverride(name = "rankId", column = @Column(name = "rank_id", nullable = false)),
			@AttributeOverride(name = "guildNick", column = @Column(name = "guild_nick", nullable = false)) })
	public GuildMemberId getId() {
		return this.id;
	}

	public void setId(GuildMemberId id) {
		this.id = id;
	}

	@ManyToOne(fetch = FetchType.LAZY)
	@JoinColumn(name = "rank_id", nullable = false, insertable = false, updatable = false)
	public GuildRank getGuildRank() {
		return this.guildRank;
	}

	public void setGuildRank(GuildRank guildRank) {
		this.guildRank = guildRank;
	}

	@ManyToOne(fetch = FetchType.LAZY)
	@JoinColumn(name = "player_id", unique = true, nullable = false, insertable = false, updatable = false)
	public Player getPlayer() {
		return this.player;
	}

	public void setPlayer(Player player) {
		this.player = player;
	}

}
