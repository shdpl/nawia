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
 * Game controlled entity which killed {@link Player}
 */
@Entity
@Table(name = "environment_killers", schema = "public")
public class EnvKiller implements java.io.Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = -675198363483112463L;

	private EnvKillerId id;
	private Killer killer;

	public EnvKiller() {
	}

	public EnvKiller(EnvKillerId id, Killer killer) {
		this.id = id;
		this.killer = killer;
	}

	@EmbeddedId
	@AttributeOverrides({
			@AttributeOverride(name = "killId", column = @Column(name = "kill_id", nullable = false)),
			@AttributeOverride(name = "name", column = @Column(name = "name", nullable = false)) })
	public EnvKillerId getId() {
		return this.id;
	}

	public void setId(EnvKillerId id) {
		this.id = id;
	}

	@ManyToOne(fetch = FetchType.LAZY)
	@JoinColumn(name = "kill_id", nullable = false, insertable = false, updatable = false)
	public Killer getKiller() {
		return this.killer;
	}

	public void setKiller(Killer killer) {
		this.killer = killer;
	}

}
