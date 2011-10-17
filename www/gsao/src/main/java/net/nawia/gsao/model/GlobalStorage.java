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

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.Id;
import javax.persistence.Table;

/**
 * Game-server side global storage, which can be used to store various key/value
 * pairs
 */
@Entity
@Table(name = "global_storage", schema = "public")
public class GlobalStorage implements java.io.Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = -6509012982041189624L;

	private int key;
	private int value;

	public GlobalStorage() {
	}

	public GlobalStorage(int key, int value) {
		this.key = key;
		this.value = value;
	}

	@Id
	@Column(name = "key", unique = true, nullable = false)
	public int getKey() {
		return this.key;
	}

	public void setKey(int key) {
		this.key = key;
	}

	@Column(name = "value", nullable = false)
	public int getValue() {
		return this.value;
	}

	public void setValue(int value) {
		this.value = value;
	}

}
