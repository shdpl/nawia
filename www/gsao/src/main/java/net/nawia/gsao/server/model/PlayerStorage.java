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
 * Container for any key/value pairs assigned to {@link Player}
 */
@Entity
@Table(name = "player_storage", schema = "public")
public class PlayerStorage implements java.io.Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = -7243701914659799182L;
	
	private PlayerStorageId id;
	private Player player;

	public PlayerStorage() {
	}

	public PlayerStorage(PlayerStorageId id, Player player) {
		this.id = id;
		this.player = player;
	}

	@EmbeddedId
	@AttributeOverrides({
			@AttributeOverride(name = "playerId", column = @Column(name = "player_id", nullable = false)),
			@AttributeOverride(name = "key", column = @Column(name = "key", nullable = false)),
			@AttributeOverride(name = "value", column = @Column(name = "value", nullable = false)) })
	public PlayerStorageId getId() {
		return this.id;
	}

	public void setId(PlayerStorageId id) {
		this.id = id;
	}

	@ManyToOne(fetch = FetchType.LAZY)
	@JoinColumn(name = "player_id", nullable = false, insertable = false, updatable = false)
	public Player getPlayer() {
		return this.player;
	}

	public void setPlayer(Player player) {
		this.player = player;
	}

}
