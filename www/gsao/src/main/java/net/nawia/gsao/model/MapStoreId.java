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

import java.util.Arrays;
import javax.persistence.Column;
import javax.persistence.Embeddable;

/**
 * Id of @link MapStore
 */
@Embeddable
public class MapStoreId implements java.io.Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = -2426464867368443609L;
	
	
	private int houseId;
	private byte[] data;

	public MapStoreId() {
	}

	public MapStoreId(int houseId, byte[] data) {
		this.houseId = houseId;
		this.data = data;
	}

	@Column(name = "house_id", nullable = false)
	public int getHouseId() {
		return this.houseId;
	}

	public void setHouseId(int houseId) {
		this.houseId = houseId;
	}

	@Column(name = "data", nullable = false)
	public byte[] getData() {
		return this.data;
	}

	public void setData(byte[] data) {
		this.data = data;
	}

	public boolean equals(Object other) {
		if ((this == other))
			return true;
		if ((other == null))
			return false;
		if (!(other instanceof MapStoreId))
			return false;
		MapStoreId castOther = (MapStoreId) other;

		return (this.getHouseId() == castOther.getHouseId())
				&& ((this.getData() == castOther.getData()) || (this.getData() != null
						&& castOther.getData() != null && Arrays.equals(
						this.getData(), castOther.getData())));
	}

	public int hashCode() {
		int result = 17;

		result = 37 * result + this.getHouseId();
		result = 37 * result
				+ (getData() == null ? 0 : Arrays.hashCode(this.getData()));
		return result;
	}

}
