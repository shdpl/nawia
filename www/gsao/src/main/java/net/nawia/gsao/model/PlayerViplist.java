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

/**
 * List of friends/foes of {@link Player}
 */
@Entity
@Table(name = "player_viplist", schema = "public")
public class PlayerViplist implements java.io.Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = 4279487014045835199L;
	
	private PlayerViplistId id;
	private Player playerByVipId;
	private Player playerByPlayerId;

	public PlayerViplist() {
	}

	public PlayerViplist(PlayerViplistId id, Player playerByVipId,
			Player playerByPlayerId) {
		this.id = id;
		this.playerByVipId = playerByVipId;
		this.playerByPlayerId = playerByPlayerId;
	}

	@EmbeddedId
	@AttributeOverrides({
			@AttributeOverride(name = "playerId", column = @Column(name = "player_id", nullable = false)),
			@AttributeOverride(name = "vipId", column = @Column(name = "vip_id", nullable = false)) })
	public PlayerViplistId getId() {
		return this.id;
	}

	public void setId(PlayerViplistId id) {
		this.id = id;
	}

	@ManyToOne(fetch = FetchType.LAZY)
	@JoinColumn(name = "vip_id", nullable = false, insertable = false, updatable = false)
	public Player getPlayerByVipId() {
		return this.playerByVipId;
	}

	public void setPlayerByVipId(Player playerByVipId) {
		this.playerByVipId = playerByVipId;
	}

	@ManyToOne(fetch = FetchType.LAZY)
	@JoinColumn(name = "player_id", nullable = false, insertable = false, updatable = false)
	public Player getPlayerByPlayerId() {
		return this.playerByPlayerId;
	}

	public void setPlayerByPlayerId(Player playerByPlayerId) {
		this.playerByPlayerId = playerByPlayerId;
	}

}
