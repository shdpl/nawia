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
import javax.persistence.UniqueConstraint;

/**
 * Item, belonging to {@link Player} and stored in depot
 */
@Entity
@Table(name = "player_depotitems", schema = "public", uniqueConstraints = @UniqueConstraint(columnNames = {
		"player_id", "sid" }))
public class PlayerDepotItem implements java.io.Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = 4610992109201517489L;
	
	
	private PlayerDepotItemId id;
	private Player player;

	public PlayerDepotItem() {
	}

	public PlayerDepotItem(PlayerDepotItemId id, Player player) {
		this.id = id;
		this.player = player;
	}

	@EmbeddedId
	@AttributeOverrides({
			@AttributeOverride(name = "playerId", column = @Column(name = "player_id", nullable = false)),
			@AttributeOverride(name = "sid", column = @Column(name = "sid", nullable = false)),
			@AttributeOverride(name = "pid", column = @Column(name = "pid", nullable = false)),
			@AttributeOverride(name = "itemtype", column = @Column(name = "itemtype", nullable = false)),
			@AttributeOverride(name = "count", column = @Column(name = "count", nullable = false)),
			@AttributeOverride(name = "attributes", column = @Column(name = "attributes", nullable = false)) })
	public PlayerDepotItemId getId() {
		return this.id;
	}

	public void setId(PlayerDepotItemId id) {
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
