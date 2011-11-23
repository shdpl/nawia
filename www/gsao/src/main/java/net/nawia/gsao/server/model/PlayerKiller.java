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

import javax.persistence.AttributeOverride;
import javax.persistence.AttributeOverrides;
import javax.persistence.Column;
import javax.persistence.EmbeddedId;
import javax.persistence.Entity;
import javax.persistence.FetchType;
import javax.persistence.JoinColumn;
import javax.persistence.ManyToOne;
import javax.persistence.Table;

/**
 * Human controlled character, which killed another {@link Player}
 */
@Entity
@Table(name = "player_killers", schema = "public")
public class PlayerKiller implements java.io.Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = 5055321751921255751L;
	
	
	private PlayerKillerId id;
	private Killer killer;
	private Player player;
	private short unjustified;

	public PlayerKiller() {
	}

	public PlayerKiller(PlayerKillerId id, Killer killer, Player player,
			short unjustified) {
		this.id = id;
		this.killer = killer;
		this.player = player;
		this.unjustified = unjustified;
	}

	@EmbeddedId
	@AttributeOverrides({
			@AttributeOverride(name = "killId", column = @Column(name = "kill_id", nullable = false)),
			@AttributeOverride(name = "playerId", column = @Column(name = "player_id", nullable = false)) })
	public PlayerKillerId getId() {
		return this.id;
	}

	public void setId(PlayerKillerId id) {
		this.id = id;
	}

	@ManyToOne(fetch = FetchType.LAZY)
	@JoinColumn(name = "kill_id", nullable = false, insertable = false, updatable = false)
	public Killer getKiller() {
		return this.killer;
	}

	public void setKiller(Killer killer) {
		this.killer = killer;
	}

	@ManyToOne(fetch = FetchType.LAZY)
	@JoinColumn(name = "player_id", nullable = false, insertable = false, updatable = false)
	public Player getPlayer() {
		return this.player;
	}

	public void setPlayer(Player player) {
		this.player = player;
	}

	@Column(name = "unjustified", nullable = false)
	public short getUnjustified() {
		return this.unjustified;
	}

	public void setUnjustified(short unjustified) {
		this.unjustified = unjustified;
	}

}
