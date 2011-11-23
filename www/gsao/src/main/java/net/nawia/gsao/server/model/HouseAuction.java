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

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.FetchType;
import javax.persistence.Id;
import javax.persistence.JoinColumn;
import javax.persistence.ManyToOne;
import javax.persistence.Table;

/**
 * Status of {@link Player} {@link House} auction
 */
@Entity
@Table(name = "house_auctions", schema = "public")
public class HouseAuction implements java.io.Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = 1579744181719520672L;
	
	
	private int id;
	private House house;
	private Player player;
	private int bid;
	private int limit;
	private long endtime;

	public HouseAuction() {
	}

	public HouseAuction(int id, House house, Player player, int bid, int limit,
			long endtime) {
		this.id = id;
		this.house = house;
		this.player = player;
		this.bid = bid;
		this.limit = limit;
		this.endtime = endtime;
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
	@JoinColumn(name = "house_id", nullable = false)
	public House getHouse() {
		return this.house;
	}

	public void setHouse(House house) {
		this.house = house;
	}

	@ManyToOne(fetch = FetchType.LAZY)
	@JoinColumn(name = "player_id", nullable = false)
	public Player getPlayer() {
		return this.player;
	}

	public void setPlayer(Player player) {
		this.player = player;
	}

	@Column(name = "bid", nullable = false)
	public int getBid() {
		return this.bid;
	}

	public void setBid(int bid) {
		this.bid = bid;
	}

	@Column(name = "limit", nullable = false)
	public int getLimit() {
		return this.limit;
	}

	public void setLimit(int limit) {
		this.limit = limit;
	}

	@Column(name = "endtime", nullable = false)
	public long getEndtime() {
		return this.endtime;
	}

	public void setEndtime(long endtime) {
		this.endtime = endtime;
	}

}
