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
 * Represents death of {@link Player}
 */
@Entity
@Table(name = "player_deaths", schema = "public")
public class PlayerDeath implements java.io.Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = -5100894779595927162L;
	
	
	private int id;
	private Player player;
	private int date;
	private int level;
	private Set<Killer> killers = new HashSet<Killer>(0);

	public PlayerDeath() {
	}

	public PlayerDeath(int id, Player player, int date, int level) {
		this.id = id;
		this.player = player;
		this.date = date;
		this.level = level;
	}

	public PlayerDeath(int id, Player player, int date, int level,
			Set<Killer> killers) {
		this.id = id;
		this.player = player;
		this.date = date;
		this.level = level;
		this.killers = killers;
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
	@JoinColumn(name = "player_id", nullable = false)
	public Player getPlayer() {
		return this.player;
	}

	public void setPlayer(Player player) {
		this.player = player;
	}

	@Column(name = "date", nullable = false)
	public int getDate() {
		return this.date;
	}

	public void setDate(int date) {
		this.date = date;
	}

	@Column(name = "level", nullable = false)
	public int getLevel() {
		return this.level;
	}

	public void setLevel(int level) {
		this.level = level;
	}

	@OneToMany(fetch = FetchType.LAZY, mappedBy = "playerDeath")
	public Set<Killer> getKillers() {
		return this.killers;
	}

	public void setKillers(Set<Killer> killers) {
		this.killers = killers;
	}

}
