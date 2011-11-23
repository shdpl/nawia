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

import java.util.Arrays;
import javax.persistence.Column;
import javax.persistence.Embeddable;

/**
 * Id of {@link PlayerItem}
 */
@Embeddable
public class PlayerItemId implements java.io.Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = -2738016398871355282L;
	
	
	private int playerId;
	private int sid;
	private int pid;
	private int itemtype;
	private int count;
	private byte[] attributes;

	public PlayerItemId() {
	}

	public PlayerItemId(int playerId, int sid, int pid, int itemtype, int count) {
		this.playerId = playerId;
		this.sid = sid;
		this.pid = pid;
		this.itemtype = itemtype;
		this.count = count;
	}

	public PlayerItemId(int playerId, int sid, int pid, int itemtype,
			int count, byte[] attributes) {
		this.playerId = playerId;
		this.sid = sid;
		this.pid = pid;
		this.itemtype = itemtype;
		this.count = count;
		this.attributes = attributes;
	}

	@Column(name = "player_id", nullable = false)
	public int getPlayerId() {
		return this.playerId;
	}

	public void setPlayerId(int playerId) {
		this.playerId = playerId;
	}

	@Column(name = "sid", nullable = false)
	public int getSid() {
		return this.sid;
	}

	public void setSid(int sid) {
		this.sid = sid;
	}

	@Column(name = "pid", nullable = false)
	public int getPid() {
		return this.pid;
	}

	public void setPid(int pid) {
		this.pid = pid;
	}

	@Column(name = "itemtype", nullable = false)
	public int getItemtype() {
		return this.itemtype;
	}

	public void setItemtype(int itemtype) {
		this.itemtype = itemtype;
	}

	@Column(name = "count", nullable = false)
	public int getCount() {
		return this.count;
	}

	public void setCount(int count) {
		this.count = count;
	}

	@Column(name = "attributes")
	public byte[] getAttributes() {
		return this.attributes;
	}

	public void setAttributes(byte[] attributes) {
		this.attributes = attributes;
	}

	public boolean equals(Object other) {
		if ((this == other))
			return true;
		if ((other == null))
			return false;
		if (!(other instanceof PlayerItemId))
			return false;
		PlayerItemId castOther = (PlayerItemId) other;

		return (this.getPlayerId() == castOther.getPlayerId())
				&& (this.getSid() == castOther.getSid())
				&& (this.getPid() == castOther.getPid())
				&& (this.getItemtype() == castOther.getItemtype())
				&& (this.getCount() == castOther.getCount())
				&& ((this.getAttributes() == castOther.getAttributes()) || (this
						.getAttributes() != null
						&& castOther.getAttributes() != null && Arrays.equals(
						this.getAttributes(), castOther.getAttributes())));
	}

	public int hashCode() {
		int result = 17;

		result = 37 * result + this.getPlayerId();
		result = 37 * result + this.getSid();
		result = 37 * result + this.getPid();
		result = 37 * result + this.getItemtype();
		result = 37 * result + this.getCount();
		result = 37
				* result
				+ (getAttributes() == null ? 0 : Arrays.hashCode(this
						.getAttributes()));
		return result;
	}

}
