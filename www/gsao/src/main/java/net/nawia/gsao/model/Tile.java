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
 * Tile descriptor
 */
@Entity
@Table(name = "tiles", schema = "public")
public class Tile implements java.io.Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = -5623781568844286498L;
	
	private int id;
	private House house;
	private int x;
	private int y;
	private short z;
	private Set<TileItem> tileItems = new HashSet<TileItem>(0);

	public Tile() {
	}

	public Tile(int id, House house, int x, int y, short z) {
		this.id = id;
		this.house = house;
		this.x = x;
		this.y = y;
		this.z = z;
	}

	public Tile(int id, House house, int x, int y, short z,
			Set<TileItem> tileItems) {
		this.id = id;
		this.house = house;
		this.x = x;
		this.y = y;
		this.z = z;
		this.tileItems = tileItems;
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

	@Column(name = "x", nullable = false, precision = 6, scale = 0)
	public int getX() {
		return this.x;
	}

	public void setX(int x) {
		this.x = x;
	}

	@Column(name = "y", nullable = false, precision = 6, scale = 0)
	public int getY() {
		return this.y;
	}

	public void setY(int y) {
		this.y = y;
	}

	@Column(name = "z", nullable = false, precision = 3, scale = 0)
	public short getZ() {
		return this.z;
	}

	public void setZ(short z) {
		this.z = z;
	}

	@OneToMany(fetch = FetchType.LAZY, mappedBy = "tile")
	public Set<TileItem> getTileItems() {
		return this.tileItems;
	}

	public void setTileItems(Set<TileItem> tileItems) {
		this.tileItems = tileItems;
	}

}
