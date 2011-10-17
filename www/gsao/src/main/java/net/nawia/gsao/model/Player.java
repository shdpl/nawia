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

import java.util.HashSet;
import java.util.Set;
import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.FetchType;
import javax.persistence.Id;
import javax.persistence.JoinColumn;
import javax.persistence.ManyToOne;
import javax.persistence.OneToMany;
import javax.persistence.Table;
import javax.persistence.UniqueConstraint;

import net.nawia.gsao.model.PlayerStorage;
import net.nawia.gsao.model.PlayerViplist;

/**
 * Entity representing Player
 */
@Entity
@Table(name = "players", schema = "public", uniqueConstraints = @UniqueConstraint(columnNames = "name"))
public class Player implements java.io.Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = -7010107633295327536L;
	
	
	private int id;
	private Group group;
	private Account account;
	private String name;
	private short sex;
	private short vocation;
	private long experience;
	private long level;
	private long maglevel;
	private long health;
	private long healthmax;
	private long mana;
	private long manamax;
	private long manaspent;
	private long soul;
	private short direction;
	private long lookbody;
	private long lookfeet;
	private long lookhead;
	private long looklegs;
	private long looktype;
	private long lookaddons;
	private int posx;
	private int posy;
	private int posz;
	private int cap;
	private long lastlogin;
	private long lastlogout;
	private long lastip;
	private short save;
	private byte[] conditions;
	private short skullType;
	private long skullTime;
	private int lossExperience;
	private int lossMana;
	private int lossSkills;
	private int lossItems;
	private int lossContainers;
	private int townId;
	private int balance;
	private int stamina;
	private short online;
	private int rankId;
	private String guildnick;
	private Set<PlayerDepotItem> playerDepotItems = new HashSet<PlayerDepotItem>(
			0);
	private Set<PlayerDeath> playerDeaths = new HashSet<PlayerDeath>(0);
	private Set<PlayerItem> playerItems = new HashSet<PlayerItem>(0);
	private Set<GuildMember> guildMembers = new HashSet<GuildMember>(0);
	private Set<HouseAuction> houseAuctions = new HashSet<HouseAuction>(0);
	private Set<PlayerSpell> playerSpells = new HashSet<PlayerSpell>(0);
	private Set<PlayerStorage> playerStorages = new HashSet<PlayerStorage>(0);
	private Set<PlayerSkill> playerSkills = new HashSet<PlayerSkill>(0);
	private Set<Guild> guilds = new HashSet<Guild>(0);
	private Set<GuildInvite> guildInvites = new HashSet<GuildInvite>(0);
	private Set<PlayerViplist> playerViplistsForVipId = new HashSet<PlayerViplist>(
			0);
	private Set<PlayerViplist> playerViplistsForPlayerId = new HashSet<PlayerViplist>(
			0);
	private Set<PlayerKiller> playerKillers = new HashSet<PlayerKiller>(0);

	public Player() {
	}

	public Player(int id, Group group, Account account, String name, short sex,
			short vocation, long experience, long level, long maglevel,
			long health, long healthmax, long mana, long manamax,
			long manaspent, long soul, short direction, long lookbody,
			long lookfeet, long lookhead, long looklegs, long looktype,
			long lookaddons, int posx, int posy, int posz, int cap,
			long lastlogin, long lastlogout, long lastip, short save,
			byte[] conditions, short skullType, long skullTime,
			int lossExperience, int lossMana, int lossSkills, int lossItems,
			int lossContainers, int townId, int balance, int stamina,
			short online, int rankId, String guildnick) {
		this.id = id;
		this.group = group;
		this.account = account;
		this.name = name;
		this.sex = sex;
		this.vocation = vocation;
		this.experience = experience;
		this.level = level;
		this.maglevel = maglevel;
		this.health = health;
		this.healthmax = healthmax;
		this.mana = mana;
		this.manamax = manamax;
		this.manaspent = manaspent;
		this.soul = soul;
		this.direction = direction;
		this.lookbody = lookbody;
		this.lookfeet = lookfeet;
		this.lookhead = lookhead;
		this.looklegs = looklegs;
		this.looktype = looktype;
		this.lookaddons = lookaddons;
		this.posx = posx;
		this.posy = posy;
		this.posz = posz;
		this.cap = cap;
		this.lastlogin = lastlogin;
		this.lastlogout = lastlogout;
		this.lastip = lastip;
		this.save = save;
		this.conditions = conditions;
		this.skullType = skullType;
		this.skullTime = skullTime;
		this.lossExperience = lossExperience;
		this.lossMana = lossMana;
		this.lossSkills = lossSkills;
		this.lossItems = lossItems;
		this.lossContainers = lossContainers;
		this.townId = townId;
		this.balance = balance;
		this.stamina = stamina;
		this.online = online;
		this.rankId = rankId;
		this.guildnick = guildnick;
	}

	public Player(int id, Group group, Account account, String name, short sex,
			short vocation, long experience, long level, long maglevel,
			long health, long healthmax, long mana, long manamax,
			long manaspent, long soul, short direction, long lookbody,
			long lookfeet, long lookhead, long looklegs, long looktype,
			long lookaddons, int posx, int posy, int posz, int cap,
			long lastlogin, long lastlogout, long lastip, short save,
			byte[] conditions, short skullType, long skullTime,
			int lossExperience, int lossMana, int lossSkills, int lossItems,
			int lossContainers, int townId, int balance, int stamina,
			short online, int rankId, String guildnick,
			Set<PlayerDepotItem> playerDepotItems,
			Set<PlayerDeath> playerDeaths, Set<PlayerItem> playerItems,
			Set<GuildMember> guildMembers, Set<HouseAuction> houseAuctions,
			Set<PlayerSpell> playerSpells, Set<PlayerStorage> playerStorages,
			Set<PlayerSkill> playerSkills, Set<Guild> guilds,
			Set<GuildInvite> guildInvites,
			Set<PlayerViplist> playerViplistsForVipId,
			Set<PlayerViplist> playerViplistsForPlayerId,
			Set<PlayerKiller> playerKillers) {
		this.id = id;
		this.group = group;
		this.account = account;
		this.name = name;
		this.sex = sex;
		this.vocation = vocation;
		this.experience = experience;
		this.level = level;
		this.maglevel = maglevel;
		this.health = health;
		this.healthmax = healthmax;
		this.mana = mana;
		this.manamax = manamax;
		this.manaspent = manaspent;
		this.soul = soul;
		this.direction = direction;
		this.lookbody = lookbody;
		this.lookfeet = lookfeet;
		this.lookhead = lookhead;
		this.looklegs = looklegs;
		this.looktype = looktype;
		this.lookaddons = lookaddons;
		this.posx = posx;
		this.posy = posy;
		this.posz = posz;
		this.cap = cap;
		this.lastlogin = lastlogin;
		this.lastlogout = lastlogout;
		this.lastip = lastip;
		this.save = save;
		this.conditions = conditions;
		this.skullType = skullType;
		this.skullTime = skullTime;
		this.lossExperience = lossExperience;
		this.lossMana = lossMana;
		this.lossSkills = lossSkills;
		this.lossItems = lossItems;
		this.lossContainers = lossContainers;
		this.townId = townId;
		this.balance = balance;
		this.stamina = stamina;
		this.online = online;
		this.rankId = rankId;
		this.guildnick = guildnick;
		this.playerDepotItems = playerDepotItems;
		this.playerDeaths = playerDeaths;
		this.playerItems = playerItems;
		this.guildMembers = guildMembers;
		this.houseAuctions = houseAuctions;
		this.playerSpells = playerSpells;
		this.playerStorages = playerStorages;
		this.playerSkills = playerSkills;
		this.guilds = guilds;
		this.guildInvites = guildInvites;
		this.playerViplistsForVipId = playerViplistsForVipId;
		this.playerViplistsForPlayerId = playerViplistsForPlayerId;
		this.playerKillers = playerKillers;
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
	@JoinColumn(name = "group_id", nullable = false)
	public Group getGroup() {
		return this.group;
	}

	public void setGroup(Group group) {
		this.group = group;
	}

	@ManyToOne(fetch = FetchType.LAZY)
	@JoinColumn(name = "account_id", nullable = false)
	public Account getAccount() {
		return this.account;
	}

	public void setAccount(Account account) {
		this.account = account;
	}

	@Column(name = "name", unique = true, nullable = false)
	public String getName() {
		return this.name;
	}

	public void setName(String name) {
		this.name = name;
	}

	@Column(name = "sex", nullable = false)
	public short getSex() {
		return this.sex;
	}

	public void setSex(short sex) {
		this.sex = sex;
	}

	@Column(name = "vocation", nullable = false)
	public short getVocation() {
		return this.vocation;
	}

	public void setVocation(short vocation) {
		this.vocation = vocation;
	}

	@Column(name = "experience", nullable = false)
	public long getExperience() {
		return this.experience;
	}

	public void setExperience(long experience) {
		this.experience = experience;
	}

	@Column(name = "level", nullable = false)
	public long getLevel() {
		return this.level;
	}

	public void setLevel(long level) {
		this.level = level;
	}

	@Column(name = "maglevel", nullable = false)
	public long getMaglevel() {
		return this.maglevel;
	}

	public void setMaglevel(long maglevel) {
		this.maglevel = maglevel;
	}

	@Column(name = "health", nullable = false)
	public long getHealth() {
		return this.health;
	}

	public void setHealth(long health) {
		this.health = health;
	}

	@Column(name = "healthmax", nullable = false)
	public long getHealthmax() {
		return this.healthmax;
	}

	public void setHealthmax(long healthmax) {
		this.healthmax = healthmax;
	}

	@Column(name = "mana", nullable = false)
	public long getMana() {
		return this.mana;
	}

	public void setMana(long mana) {
		this.mana = mana;
	}

	@Column(name = "manamax", nullable = false)
	public long getManamax() {
		return this.manamax;
	}

	public void setManamax(long manamax) {
		this.manamax = manamax;
	}

	@Column(name = "manaspent", nullable = false)
	public long getManaspent() {
		return this.manaspent;
	}

	public void setManaspent(long manaspent) {
		this.manaspent = manaspent;
	}

	@Column(name = "soul", nullable = false)
	public long getSoul() {
		return this.soul;
	}

	public void setSoul(long soul) {
		this.soul = soul;
	}

	@Column(name = "direction", nullable = false)
	public short getDirection() {
		return this.direction;
	}

	public void setDirection(short direction) {
		this.direction = direction;
	}

	@Column(name = "lookbody", nullable = false)
	public long getLookbody() {
		return this.lookbody;
	}

	public void setLookbody(long lookbody) {
		this.lookbody = lookbody;
	}

	@Column(name = "lookfeet", nullable = false)
	public long getLookfeet() {
		return this.lookfeet;
	}

	public void setLookfeet(long lookfeet) {
		this.lookfeet = lookfeet;
	}

	@Column(name = "lookhead", nullable = false)
	public long getLookhead() {
		return this.lookhead;
	}

	public void setLookhead(long lookhead) {
		this.lookhead = lookhead;
	}

	@Column(name = "looklegs", nullable = false)
	public long getLooklegs() {
		return this.looklegs;
	}

	public void setLooklegs(long looklegs) {
		this.looklegs = looklegs;
	}

	@Column(name = "looktype", nullable = false)
	public long getLooktype() {
		return this.looktype;
	}

	public void setLooktype(long looktype) {
		this.looktype = looktype;
	}

	@Column(name = "lookaddons", nullable = false)
	public long getLookaddons() {
		return this.lookaddons;
	}

	public void setLookaddons(long lookaddons) {
		this.lookaddons = lookaddons;
	}

	@Column(name = "posx", nullable = false)
	public int getPosx() {
		return this.posx;
	}

	public void setPosx(int posx) {
		this.posx = posx;
	}

	@Column(name = "posy", nullable = false)
	public int getPosy() {
		return this.posy;
	}

	public void setPosy(int posy) {
		this.posy = posy;
	}

	@Column(name = "posz", nullable = false)
	public int getPosz() {
		return this.posz;
	}

	public void setPosz(int posz) {
		this.posz = posz;
	}

	@Column(name = "cap", nullable = false)
	public int getCap() {
		return this.cap;
	}

	public void setCap(int cap) {
		this.cap = cap;
	}

	@Column(name = "lastlogin", nullable = false)
	public long getLastlogin() {
		return this.lastlogin;
	}

	public void setLastlogin(long lastlogin) {
		this.lastlogin = lastlogin;
	}

	@Column(name = "lastlogout", nullable = false)
	public long getLastlogout() {
		return this.lastlogout;
	}

	public void setLastlogout(long lastlogout) {
		this.lastlogout = lastlogout;
	}

	@Column(name = "lastip", nullable = false)
	public long getLastip() {
		return this.lastip;
	}

	public void setLastip(long lastip) {
		this.lastip = lastip;
	}

	@Column(name = "save", nullable = false)
	public short getSave() {
		return this.save;
	}

	public void setSave(short save) {
		this.save = save;
	}

	@Column(name = "conditions", nullable = false)
	public byte[] getConditions() {
		return this.conditions;
	}

	public void setConditions(byte[] conditions) {
		this.conditions = conditions;
	}

	@Column(name = "skull_type", nullable = false)
	public short getSkullType() {
		return this.skullType;
	}

	public void setSkullType(short skullType) {
		this.skullType = skullType;
	}

	@Column(name = "skull_time", nullable = false)
	public long getSkullTime() {
		return this.skullTime;
	}

	public void setSkullTime(long skullTime) {
		this.skullTime = skullTime;
	}

	@Column(name = "loss_experience", nullable = false)
	public int getLossExperience() {
		return this.lossExperience;
	}

	public void setLossExperience(int lossExperience) {
		this.lossExperience = lossExperience;
	}

	@Column(name = "loss_mana", nullable = false)
	public int getLossMana() {
		return this.lossMana;
	}

	public void setLossMana(int lossMana) {
		this.lossMana = lossMana;
	}

	@Column(name = "loss_skills", nullable = false)
	public int getLossSkills() {
		return this.lossSkills;
	}

	public void setLossSkills(int lossSkills) {
		this.lossSkills = lossSkills;
	}

	@Column(name = "loss_items", nullable = false)
	public int getLossItems() {
		return this.lossItems;
	}

	public void setLossItems(int lossItems) {
		this.lossItems = lossItems;
	}

	@Column(name = "loss_containers", nullable = false)
	public int getLossContainers() {
		return this.lossContainers;
	}

	public void setLossContainers(int lossContainers) {
		this.lossContainers = lossContainers;
	}

	@Column(name = "town_id", nullable = false)
	public int getTownId() {
		return this.townId;
	}

	public void setTownId(int townId) {
		this.townId = townId;
	}

	@Column(name = "balance", nullable = false)
	public int getBalance() {
		return this.balance;
	}

	public void setBalance(int balance) {
		this.balance = balance;
	}

	@Column(name = "stamina", nullable = false)
	public int getStamina() {
		return this.stamina;
	}

	public void setStamina(int stamina) {
		this.stamina = stamina;
	}

	@Column(name = "online", nullable = false)
	public short getOnline() {
		return this.online;
	}

	public void setOnline(short online) {
		this.online = online;
	}

	@Column(name = "rank_id", nullable = false)
	public int getRankId() {
		return this.rankId;
	}

	public void setRankId(int rankId) {
		this.rankId = rankId;
	}

	@Column(name = "guildnick", nullable = false)
	public String getGuildnick() {
		return this.guildnick;
	}

	public void setGuildnick(String guildnick) {
		this.guildnick = guildnick;
	}

	@OneToMany(fetch = FetchType.LAZY, mappedBy = "player")
	public Set<PlayerDepotItem> getPlayerDepotItems() {
		return this.playerDepotItems;
	}

	public void setPlayerDepotItems(Set<PlayerDepotItem> playerDepotItems) {
		this.playerDepotItems = playerDepotItems;
	}

	@OneToMany(fetch = FetchType.LAZY, mappedBy = "player")
	public Set<PlayerDeath> getPlayerDeaths() {
		return this.playerDeaths;
	}

	public void setPlayerDeaths(Set<PlayerDeath> playerDeaths) {
		this.playerDeaths = playerDeaths;
	}

	@OneToMany(fetch = FetchType.LAZY, mappedBy = "player")
	public Set<PlayerItem> getPlayerItems() {
		return this.playerItems;
	}

	public void setPlayerItems(Set<PlayerItem> playerItems) {
		this.playerItems = playerItems;
	}

	@OneToMany(fetch = FetchType.LAZY, mappedBy = "player")
	public Set<GuildMember> getGuildMembers() {
		return this.guildMembers;
	}

	public void setGuildMembers(Set<GuildMember> guildMembers) {
		this.guildMembers = guildMembers;
	}

	@OneToMany(fetch = FetchType.LAZY, mappedBy = "player")
	public Set<HouseAuction> getHouseAuctions() {
		return this.houseAuctions;
	}

	public void setHouseAuctions(Set<HouseAuction> houseAuctions) {
		this.houseAuctions = houseAuctions;
	}

	@OneToMany(fetch = FetchType.LAZY, mappedBy = "player")
	public Set<PlayerSpell> getPlayerSpells() {
		return this.playerSpells;
	}

	public void setPlayerSpells(Set<PlayerSpell> playerSpells) {
		this.playerSpells = playerSpells;
	}

	@OneToMany(fetch = FetchType.LAZY, mappedBy = "player")
	public Set<PlayerStorage> getPlayerStorages() {
		return this.playerStorages;
	}

	public void setPlayerStorages(Set<PlayerStorage> playerStorages) {
		this.playerStorages = playerStorages;
	}

	@OneToMany(fetch = FetchType.LAZY, mappedBy = "player")
	public Set<PlayerSkill> getPlayerSkills() {
		return this.playerSkills;
	}

	public void setPlayerSkills(Set<PlayerSkill> playerSkills) {
		this.playerSkills = playerSkills;
	}

	@OneToMany(fetch = FetchType.LAZY, mappedBy = "player")
	public Set<Guild> getGuilds() {
		return this.guilds;
	}

	public void setGuilds(Set<Guild> guilds) {
		this.guilds = guilds;
	}

	@OneToMany(fetch = FetchType.LAZY, mappedBy = "player")
	public Set<GuildInvite> getGuildInvites() {
		return this.guildInvites;
	}

	public void setGuildInvites(Set<GuildInvite> guildInvites) {
		this.guildInvites = guildInvites;
	}

	@OneToMany(fetch = FetchType.LAZY, mappedBy = "playerByVipId")
	public Set<PlayerViplist> getPlayerViplistsForVipId() {
		return this.playerViplistsForVipId;
	}

	public void setPlayerViplistsForVipId(
			Set<PlayerViplist> playerViplistsForVipId) {
		this.playerViplistsForVipId = playerViplistsForVipId;
	}

	@OneToMany(fetch = FetchType.LAZY, mappedBy = "playerByPlayerId")
	public Set<PlayerViplist> getPlayerViplistsForPlayerId() {
		return this.playerViplistsForPlayerId;
	}

	public void setPlayerViplistsForPlayerId(
			Set<PlayerViplist> playerViplistsForPlayerId) {
		this.playerViplistsForPlayerId = playerViplistsForPlayerId;
	}

	@OneToMany(fetch = FetchType.LAZY, mappedBy = "player")
	public Set<PlayerKiller> getPlayerKillers() {
		return this.playerKillers;
	}

	public void setPlayerKillers(Set<PlayerKiller> playerKillers) {
		this.playerKillers = playerKillers;
	}

}
