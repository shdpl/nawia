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
 * Item, that lays on {@link Tile}
 */
@Entity
@Table(name = "tile_items", schema = "public")
public class TileItem implements java.io.Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = 8844483166265823660L;
	
	private TileItemId id;
	private Tile tile;

	public TileItem() {
	}

	public TileItem(TileItemId id, Tile tile) {
		this.id = id;
		this.tile = tile;
	}

	@EmbeddedId
	@AttributeOverrides({
			@AttributeOverride(name = "tileId", column = @Column(name = "tile_id", nullable = false)),
			@AttributeOverride(name = "sid", column = @Column(name = "sid", nullable = false)),
			@AttributeOverride(name = "pid", column = @Column(name = "pid", nullable = false)),
			@AttributeOverride(name = "itemtype", column = @Column(name = "itemtype", nullable = false)),
			@AttributeOverride(name = "count", column = @Column(name = "count", nullable = false)),
			@AttributeOverride(name = "attributes", column = @Column(name = "attributes", nullable = false)) })
	public TileItemId getId() {
		return this.id;
	}

	public void setId(TileItemId id) {
		this.id = id;
	}

	@ManyToOne(fetch = FetchType.LAZY)
	@JoinColumn(name = "tile_id", nullable = false, insertable = false, updatable = false)
	public Tile getTile() {
		return this.tile;
	}

	public void setTile(Tile tile) {
		this.tile = tile;
	}

}
