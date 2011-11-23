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
 * List of {@link House}s
 */
@Entity
@Table(name = "house_lists", schema = "public")
public class HouseList implements java.io.Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = 3012200316282851728L;
	
	
	private HouseListId id;
	private House house;

	public HouseList() {
	}

	public HouseList(HouseListId id, House house) {
		this.id = id;
		this.house = house;
	}

	@EmbeddedId
	@AttributeOverrides({
			@AttributeOverride(name = "houseId", column = @Column(name = "house_id", nullable = false)),
			@AttributeOverride(name = "listid", column = @Column(name = "listid", nullable = false)),
			@AttributeOverride(name = "list", column = @Column(name = "list", nullable = false)) })
	public HouseListId getId() {
		return this.id;
	}

	public void setId(HouseListId id) {
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
