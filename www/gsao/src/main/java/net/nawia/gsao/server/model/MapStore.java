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
 * Part of game Map
 */
@Entity
@Table(name = "map_store", schema = "public")
public class MapStore implements java.io.Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = -1543952197241648655L;
	
	
	private MapStoreId id;
	private House house;

	public MapStore() {
	}

	public MapStore(MapStoreId id, House house) {
		this.id = id;
		this.house = house;
	}

	@EmbeddedId
	@AttributeOverrides({
			@AttributeOverride(name = "houseId", column = @Column(name = "house_id", nullable = false)),
			@AttributeOverride(name = "data", column = @Column(name = "data", nullable = false)) })
	public MapStoreId getId() {
		return this.id;
	}

	public void setId(MapStoreId id) {
		this.id = id;
	}

	@ManyToOne(fetch = FetchType.LAZY)
	@JoinColumn(name = "house_id", nullable = false, insertable = false, updatable = false)
	public House getHouse() {
		return this.house;
	}

	public void setHouse(House house) {
		this.house = house;
	}

}
