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
import javax.persistence.FetchType;
import javax.persistence.Id;
import javax.persistence.JoinColumn;
import javax.persistence.ManyToOne;
import javax.persistence.Table;

/**
 * War between {@link Guild}s
 */
@Entity
@Table(name = "guild_wars", schema = "public")
public class GuildWar implements java.io.Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = -6922327432822748422L;
	
	
	private int id;
	private Guild guildByGuildId;
	private Guild guildByOpponentId;
	private long fragLimit;
	private long declarationDate;
	private long endDate;
	private long guildFee;
	private long opponentFee;
	private long guildFrags;
	private long opponentFrags;
	private String comment;
	private short status;

	public GuildWar() {
	}

	public GuildWar(int id, Guild guildByGuildId, Guild guildByOpponentId,
			long fragLimit, long declarationDate, long endDate, long guildFee,
			long opponentFee, long guildFrags, long opponentFrags,
			String comment, short status) {
		this.id = id;
		this.guildByGuildId = guildByGuildId;
		this.guildByOpponentId = guildByOpponentId;
		this.fragLimit = fragLimit;
		this.declarationDate = declarationDate;
		this.endDate = endDate;
		this.guildFee = guildFee;
		this.opponentFee = opponentFee;
		this.guildFrags = guildFrags;
		this.opponentFrags = opponentFrags;
		this.comment = comment;
		this.status = status;
	}

	@Id
	@Column(name = "id", unique = true, nullable = false)
	public int getId() {
		return this.id;
	}

	public void setId(int id) {
		this.id = id;
	}

	@ManyToOne(fetch = FetchType.LAZY)
	@JoinColumn(name = "guild_id", nullable = false)
	public Guild getGuildByGuildId() {
		return this.guildByGuildId;
	}

	public void setGuildByGuildId(Guild guildByGuildId) {
		this.guildByGuildId = guildByGuildId;
	}

	@ManyToOne(fetch = FetchType.LAZY)
	@JoinColumn(name = "opponent_id", nullable = false)
	public Guild getGuildByOpponentId() {
		return this.guildByOpponentId;
	}

	public void setGuildByOpponentId(Guild guildByOpponentId) {
		this.guildByOpponentId = guildByOpponentId;
	}

	@Column(name = "frag_limit", nullable = false)
	public long getFragLimit() {
		return this.fragLimit;
	}

	public void setFragLimit(long fragLimit) {
		this.fragLimit = fragLimit;
	}

	@Column(name = "declaration_date", nullable = false)
	public long getDeclarationDate() {
		return this.declarationDate;
	}

	public void setDeclarationDate(long declarationDate) {
		this.declarationDate = declarationDate;
	}

	@Column(name = "end_date", nullable = false)
	public long getEndDate() {
		return this.endDate;
	}

	public void setEndDate(long endDate) {
		this.endDate = endDate;
	}

	@Column(name = "guild_fee", nullable = false)
	public long getGuildFee() {
		return this.guildFee;
	}

	public void setGuildFee(long guildFee) {
		this.guildFee = guildFee;
	}

	@Column(name = "opponent_fee", nullable = false)
	public long getOpponentFee() {
		return this.opponentFee;
	}

	public void setOpponentFee(long opponentFee) {
		this.opponentFee = opponentFee;
	}

	@Column(name = "guild_frags", nullable = false)
	public long getGuildFrags() {
		return this.guildFrags;
	}

	public void setGuildFrags(long guildFrags) {
		this.guildFrags = guildFrags;
	}

	@Column(name = "opponent_frags", nullable = false)
	public long getOpponentFrags() {
		return this.opponentFrags;
	}

	public void setOpponentFrags(long opponentFrags) {
		this.opponentFrags = opponentFrags;
	}

	@Column(name = "comment", nullable = false)
	public String getComment() {
		return this.comment;
	}

	public void setComment(String comment) {
		this.comment = comment;
	}

	@Column(name = "status", nullable = false)
	public short getStatus() {
		return this.status;
	}

	public void setStatus(short status) {
		this.status = status;
	}

}
