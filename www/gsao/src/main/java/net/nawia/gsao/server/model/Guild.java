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

import java.util.HashSet;
import java.util.Set;
import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.FetchType;
import javax.persistence.Id;
import javax.persistence.JoinColumn;
import javax.persistence.ManyToOne;
import javax.persistence.OneToMany;
import javax.persistence.Table;
import javax.persistence.UniqueConstraint;

/**
 * Group of {@link Player}s forming a guild
 */
@Entity
@Table(name = "guilds", schema = "public", uniqueConstraints = @UniqueConstraint(columnNames = "name"))
public class Guild implements java.io.Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = 3822703609896209002L;
	
	private int id;
	private Player player;
	private String name;
	private int creationdate;
	private Set<GuildInvite> guildInvites = new HashSet<GuildInvite>(0);
	private Set<GuildWar> guildWarsForGuildId = new HashSet<GuildWar>(0);
	private Set<GuildRank> guildRanks = new HashSet<GuildRank>(0);
	private Set<GuildWar> guildWarsForOpponentId = new HashSet<GuildWar>(0);

	public Guild() {
	}

	public Guild(int id, Player player, String name, int creationdate) {
		this.id = id;
		this.player = player;
		this.name = name;
		this.creationdate = creationdate;
	}

	public Guild(int id, Player player, String name, int creationdate,
			Set<GuildInvite> guildInvites, Set<GuildWar> guildWarsForGuildId,
			Set<GuildRank> guildRanks, Set<GuildWar> guildWarsForOpponentId) {
		this.id = id;
		this.player = player;
		this.name = name;
		this.creationdate = creationdate;
		this.guildInvites = guildInvites;
		this.guildWarsForGuildId = guildWarsForGuildId;
		this.guildRanks = guildRanks;
		this.guildWarsForOpponentId = guildWarsForOpponentId;
	}

	@Id
	@Column(name = "id", unique = true, nullable = false)
	public int getId() {
		return this.id;
	}

	public void setId(int id) {
		this.id = id;
	}

	@ManyToOne(fetch = FetchType.LAZY)
	@JoinColumn(name = "owner_id", nullable = false)
	public Player getPlayer() {
		return this.player;
	}

	public void setPlayer(Player player) {
		this.player = player;
	}

	@Column(name = "name", unique = true, nullable = false)
	public String getName() {
		return this.name;
	}

	public void setName(String name) {
		this.name = name;
	}

	@Column(name = "creationdate", nullable = false)
	public int getCreationdate() {
		return this.creationdate;
	}

	public void setCreationdate(int creationdate) {
		this.creationdate = creationdate;
	}

	@OneToMany(fetch = FetchType.LAZY, mappedBy = "guild")
	public Set<GuildInvite> getGuildInvites() {
		return this.guildInvites;
	}

	public void setGuildInvites(Set<GuildInvite> guildInvites) {
		this.guildInvites = guildInvites;
	}

	@OneToMany(fetch = FetchType.LAZY, mappedBy = "guildByGuildId")
	public Set<GuildWar> getGuildWarsForGuildId() {
		return this.guildWarsForGuildId;
	}

	public void setGuildWarsForGuildId(Set<GuildWar> guildWarsForGuildId) {
		this.guildWarsForGuildId = guildWarsForGuildId;
	}

	@OneToMany(fetch = FetchType.LAZY, mappedBy = "guild")
	public Set<GuildRank> getGuildRanks() {
		return this.guildRanks;
	}

	public void setGuildRanks(Set<GuildRank> guildRanks) {
		this.guildRanks = guildRanks;
	}

	@OneToMany(fetch = FetchType.LAZY, mappedBy = "guildByOpponentId")
	public Set<GuildWar> getGuildWarsForOpponentId() {
		return this.guildWarsForOpponentId;
	}

	public void setGuildWarsForOpponentId(Set<GuildWar> guildWarsForOpponentId) {
		this.guildWarsForOpponentId = guildWarsForOpponentId;
	}

}
