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

/**
 * {@link Player} rank in {@link Guild}
 */
@Entity
@Table(name = "guild_ranks", schema = "public")
public class GuildRank implements java.io.Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = -4505908076314723998L;
	
	
	private int id;
	private Guild guild;
	private String name;
	private int level;
	private Set<GuildMember> guildMembers = new HashSet<GuildMember>(0);

	public GuildRank() {
	}

	public GuildRank(int id, Guild guild, String name, int level) {
		this.id = id;
		this.guild = guild;
		this.name = name;
		this.level = level;
	}

	public GuildRank(int id, Guild guild, String name, int level,
			Set<GuildMember> guildMembers) {
		this.id = id;
		this.guild = guild;
		this.name = name;
		this.level = level;
		this.guildMembers = guildMembers;
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
	@JoinColumn(name = "guild_id", nullable = false)
	public Guild getGuild() {
		return this.guild;
	}

	public void setGuild(Guild guild) {
		this.guild = guild;
	}

	@Column(name = "name", nullable = false)
	public String getName() {
		return this.name;
	}

	public void setName(String name) {
		this.name = name;
	}

	@Column(name = "level", nullable = false)
	public int getLevel() {
		return this.level;
	}

	public void setLevel(int level) {
		this.level = level;
	}

	@OneToMany(fetch = FetchType.LAZY, mappedBy = "guildRank")
	public Set<GuildMember> getGuildMembers() {
		return this.guildMembers;
	}

	public void setGuildMembers(Set<GuildMember> guildMembers) {
		this.guildMembers = guildMembers;
	}

}
