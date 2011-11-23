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
 * Object representing death of {@link Player} by another set of {@link Player}s
 */
@Entity
@Table(name = "killers", schema = "public")
public class Killer implements java.io.Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = -4616590920983122744L;
	
	
	private int id;
	private PlayerDeath playerDeath;
	private short finalHit;
	private Set<PlayerKiller> playerKillers = new HashSet<PlayerKiller>(0);
	private Set<EnvKiller> envKillers = new HashSet<EnvKiller>(0);

	public Killer() {
	}

	public Killer(int id, PlayerDeath playerDeath, short finalHit) {
		this.id = id;
		this.playerDeath = playerDeath;
		this.finalHit = finalHit;
	}

	public Killer(int id, PlayerDeath playerDeath, short finalHit,
			Set<PlayerKiller> playerKillers, Set<EnvKiller> envKillers) {
		this.id = id;
		this.playerDeath = playerDeath;
		this.finalHit = finalHit;
		this.playerKillers = playerKillers;
		this.envKillers = envKillers;
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
	@JoinColumn(name = "death_id", nullable = false)
	public PlayerDeath getPlayerDeath() {
		return this.playerDeath;
	}

	public void setPlayerDeath(PlayerDeath playerDeath) {
		this.playerDeath = playerDeath;
	}

	@Column(name = "final_hit", nullable = false)
	public short getFinalHit() {
		return this.finalHit;
	}

	public void setFinalHit(short finalHit) {
		this.finalHit = finalHit;
	}

	@OneToMany(fetch = FetchType.LAZY, mappedBy = "killer")
	public Set<PlayerKiller> getPlayerKillers() {
		return this.playerKillers;
	}

	public void setPlayerKillers(Set<PlayerKiller> playerKillers) {
		this.playerKillers = playerKillers;
	}

	@OneToMany(fetch = FetchType.LAZY, mappedBy = "killer")
	public Set<EnvKiller> getEnvKillers() {
		return this.envKillers;
	}

	public void setEnvKillers(Set<EnvKiller> envKillers) {
		this.envKillers = envKillers;
	}

}
