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
import javax.validation.constraints.NotNull;

/**
 * Admin punishment
 */
@Entity
@Table(name = "bans", schema = "public")
public class Ban implements java.io.Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = -222950276117256237L;

	private int id;

	/**
	 * Ban type
	 */
	private long type;

	/**
	 * Ban parameter
	 */
	private long param;

	/**
	 * Whether ban is active
	 */
	private Short active;

	/**
	 * Expiration date
	 */
	private long expires;

	/**
	 * Addition date
	 */
	private long added;

	/**
	 * ID of administrator, who created ban
	 */
	private Integer adminId;

	/**
	 * Reason, why ban has been added
	 */
	private Integer reason;

	/**
	 * Additional comment
	 */
	private String comment;

	/**
	 * Kind of ban action
	 */
	private Integer action;

	/**
	 * Statement
	 */
	private String statement;

	public enum BAN_T {
		BAN_IPADDRESS, BAN_PLAYER, BAN_ACCOUNT, BAN_NOTATION, BAN_STATEMENT, BAN_NAMELOCK
	}

	public Ban() {
	}

	public Ban(int id, long type, long param, long expires, long added,
			String comment, String statement) {
		this.id = id;
		this.type = type;
		this.param = param;
		this.expires = expires;
		this.added = added;
		this.comment = comment;
		this.statement = statement;
	}

	public Ban(int id, long type, long param, Short active, long expires,
			long added, Integer adminId, String comment, Integer reason,
			Integer action, String statement) {
		this.id = id;
		this.type = type;
		this.param = param;
		this.active = active;
		this.expires = expires;
		this.added = added;
		this.adminId = adminId;
		this.comment = comment;
		this.reason = reason;
		this.action = action;
		this.statement = statement;
	}

	@Id
	@Column(name = "id", unique = true, nullable = false)
	public int getId() {
		return this.id;
	}

	public void setId(int id) {
		this.id = id;
	}

	@NotNull
	@Column(name = "type", nullable = false)
	public long getType() {
		return this.type;
	}

	public void setType(long type) {
		this.type = type;
	}

	@Column(name = "param", nullable = false)
	public long getParam() {
		return this.param;
	}

	public void setParam(long param) {
		this.param = param;
	}

	@Column(name = "active")
	public Short getActive() {
		return this.active;
	}

	public void setActive(Short active) {
		this.active = active;
	}

	@Column(name = "expires", nullable = false)
	public long getExpires() {
		return this.expires;
	}

	public void setExpires(long expires) {
		this.expires = expires;
	}

	@NotNull
	@Column(name = "added", nullable = false)
	public long getAdded() {
		return this.added;
	}

	public void setAdded(long added) {
		this.added = added;
	}

	@Column(name = "admin_id")
	public Integer getAdminId() {
		return this.adminId;
	}

	public void setAdminId(Integer adminId) {
		this.adminId = adminId;
	}

	@NotNull
	@Column(name = "comment", nullable = false, length = 1024)
	public String getComment() {
		return this.comment;
	}

	public void setComment(String comment) {
		this.comment = comment;
	}

	@Column(name = "reason")
	public Integer getReason() {
		return this.reason;
	}

	public void setReason(Integer reason) {
		this.reason = reason;
	}

	@Column(name = "action")
	public Integer getAction() {
		return this.action;
	}

	public void setAction(Integer action) {
		this.action = action;
	}

	@NotNull
	@Column(name = "statement", nullable = false)
	public String getStatement() {
		return this.statement;
	}

	public void setStatement(String statement) {
		this.statement = statement;
	}

}
