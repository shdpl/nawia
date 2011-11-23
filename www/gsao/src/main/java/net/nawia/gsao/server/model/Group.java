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

import java.util.HashSet;
import java.util.Set;
import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.FetchType;
import javax.persistence.Id;
import javax.persistence.OneToMany;
import javax.persistence.Table;

/**
 * {@link Player} groups
 */
@Entity
@Table(name = "groups", schema = "public")
public class Group implements java.io.Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = -4591013948253205845L;

	private int id;
	
	/**
	 * Group name
	 */
	private String name;
	
	/**
	 * Access flags
	 */
	private long flags;
	
	/**
	 * Access level
	 */
	private int access;
	
	/**
	 * Violation level
	 */
	private int violation;
	
	/**
	 * Maximum amount of items in depot
	 */
	private int maxdepotitems;
	
	/**
	 * Maximum number of VIP's
	 */
	private int maxviplist;
	
	
	private Set<Player> players = new HashSet<Player>(0);

	public Group() {
	}

	public Group(int id, String name, long flags, int access, int violation,
			int maxdepotitems, int maxviplist) {
		this.id = id;
		this.name = name;
		this.flags = flags;
		this.access = access;
		this.violation = violation;
		this.maxdepotitems = maxdepotitems;
		this.maxviplist = maxviplist;
	}

	public Group(int id, String name, long flags, int access, int violation,
			int maxdepotitems, int maxviplist, Set<Player> players) {
		this.id = id;
		this.name = name;
		this.flags = flags;
		this.access = access;
		this.violation = violation;
		this.maxdepotitems = maxdepotitems;
		this.maxviplist = maxviplist;
		this.players = players;
	}

	@Id
	@Column(name = "id", unique = true, nullable = false)
	public int getId() {
		return this.id;
	}

	public void setId(int id) {
		this.id = id;
	}

	@Column(name = "name", nullable = false)
	public String getName() {
		return this.name;
	}

	public void setName(String name) {
		this.name = name;
	}

	@Column(name = "flags", nullable = false)
	public long getFlags() {
		return this.flags;
	}

	public void setFlags(long flags) {
		this.flags = flags;
	}

	@Column(name = "access", nullable = false)
	public int getAccess() {
		return this.access;
	}

	public void setAccess(int access) {
		this.access = access;
	}

	@Column(name = "violation", nullable = false)
	public int getViolation() {
		return this.violation;
	}

	public void setViolation(int violation) {
		this.violation = violation;
	}

	@Column(name = "maxdepotitems", nullable = false)
	public int getMaxdepotitems() {
		return this.maxdepotitems;
	}

	public void setMaxdepotitems(int maxdepotitems) {
		this.maxdepotitems = maxdepotitems;
	}

	@Column(name = "maxviplist", nullable = false)
	public int getMaxviplist() {
		return this.maxviplist;
	}

	public void setMaxviplist(int maxviplist) {
		this.maxviplist = maxviplist;
	}

	@OneToMany(fetch = FetchType.LAZY, mappedBy = "group")
	public Set<Player> getPlayers() {
		return this.players;
	}

	public void setPlayers(Set<Player> players) {
		this.players = players;
	}

}
