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
import javax.persistence.Embeddable;

/**
 * Id of {@link HouseList}
 */
@Embeddable
public class HouseListId implements java.io.Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = 5207135758189507963L;
	
	
	private int houseId;
	private int listid;
	private String list;

	public HouseListId() {
	}

	public HouseListId(int houseId, int listid, String list) {
		this.houseId = houseId;
		this.listid = listid;
		this.list = list;
	}

	@Column(name = "house_id", nullable = false)
	public int getHouseId() {
		return this.houseId;
	}

	public void setHouseId(int houseId) {
		this.houseId = houseId;
	}

	@Column(name = "listid", nullable = false)
	public int getListid() {
		return this.listid;
	}

	public void setListid(int listid) {
		this.listid = listid;
	}

	@Column(name = "list", nullable = false)
	public String getList() {
		return this.list;
	}

	public void setList(String list) {
		this.list = list;
	}

	public boolean equals(Object other) {
		if ((this == other))
			return true;
		if ((other == null))
			return false;
		if (!(other instanceof HouseListId))
			return false;
		HouseListId castOther = (HouseListId) other;

		return (this.getHouseId() == castOther.getHouseId())
				&& (this.getListid() == castOther.getListid())
				&& ((this.getList() == castOther.getList()) || (this.getList() != null
						&& castOther.getList() != null && this.getList()
						.equals(castOther.getList())));
	}

	public int hashCode() {
		int result = 17;

		result = 37 * result + this.getHouseId();
		result = 37 * result + this.getListid();
		result = 37 * result
				+ (getList() == null ? 0 : this.getList().hashCode());
		return result;
	}

}
