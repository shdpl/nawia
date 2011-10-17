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
 * Invites to {@link Guild}
 */
@Entity
@Table(name = "guild_invites", schema = "public", uniqueConstraints = @UniqueConstraint(columnNames = "player_id"))
public class GuildInvite implements java.io.Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = -635721490537506739L;
	
	
	private GuildInviteId id;
	private Guild guild;
	private Player player;

	public GuildInvite() {
	}

	public GuildInvite(GuildInviteId id, Guild guild, Player player) {
		this.id = id;
		this.guild = guild;
		this.player = player;
	}

	@EmbeddedId
	@AttributeOverrides({
			@AttributeOverride(name = "playerId", column = @Column(name = "player_id", unique = true, nullable = false)),
			@AttributeOverride(name = "guildId", column = @Column(name = "guild_id", nullable = false)) })
	public GuildInviteId getId() {
		return this.id;
	}

	public void setId(GuildInviteId id) {
		this.id = id;
	}

	@ManyToOne(fetch = FetchType.LAZY)
	@JoinColumn(name = "guild_id", nullable = false, insertable = false, updatable = false)
	public Guild getGuild() {
		return this.guild;
	}

	public void setGuild(Guild guild) {
		this.guild = guild;
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
