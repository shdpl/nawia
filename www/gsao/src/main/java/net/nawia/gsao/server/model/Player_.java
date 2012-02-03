package net.nawia.gsao.server.model;

import javax.annotation.Generated;
import javax.persistence.metamodel.SetAttribute;
import javax.persistence.metamodel.SingularAttribute;
import javax.persistence.metamodel.StaticMetamodel;

@Generated(value="Dali", date="2012-02-01T00:44:21.630+0100")
@StaticMetamodel(Player.class)
public class Player_ {
	public static volatile SingularAttribute<Player, Integer> id;
	public static volatile SingularAttribute<Player, Group> group;
	public static volatile SingularAttribute<Player, Account> account;
	public static volatile SingularAttribute<Player, String> name;
	public static volatile SingularAttribute<Player, Short> sex;
	public static volatile SingularAttribute<Player, Short> vocation;
	public static volatile SingularAttribute<Player, Long> experience;
	public static volatile SingularAttribute<Player, Long> level;
	public static volatile SingularAttribute<Player, Long> maglevel;
	public static volatile SingularAttribute<Player, Long> health;
	public static volatile SingularAttribute<Player, Long> healthmax;
	public static volatile SingularAttribute<Player, Long> mana;
	public static volatile SingularAttribute<Player, Long> manamax;
	public static volatile SingularAttribute<Player, Long> manaspent;
	public static volatile SingularAttribute<Player, Long> soul;
	public static volatile SingularAttribute<Player, Short> direction;
	public static volatile SingularAttribute<Player, Long> lookbody;
	public static volatile SingularAttribute<Player, Long> lookfeet;
	public static volatile SingularAttribute<Player, Long> lookhead;
	public static volatile SingularAttribute<Player, Long> looklegs;
	public static volatile SingularAttribute<Player, Long> looktype;
	public static volatile SingularAttribute<Player, Long> lookaddons;
	public static volatile SingularAttribute<Player, Integer> posx;
	public static volatile SingularAttribute<Player, Integer> posy;
	public static volatile SingularAttribute<Player, Integer> posz;
	public static volatile SingularAttribute<Player, Integer> cap;
	public static volatile SingularAttribute<Player, Long> lastlogin;
	public static volatile SingularAttribute<Player, Long> lastlogout;
	public static volatile SingularAttribute<Player, Long> lastip;
	public static volatile SingularAttribute<Player, Short> save;
	public static volatile SingularAttribute<Player, byte[]> conditions;
	public static volatile SingularAttribute<Player, Short> skullType;
	public static volatile SingularAttribute<Player, Long> skullTime;
	public static volatile SingularAttribute<Player, Integer> lossExperience;
	public static volatile SingularAttribute<Player, Integer> lossMana;
	public static volatile SingularAttribute<Player, Integer> lossSkills;
	public static volatile SingularAttribute<Player, Integer> lossItems;
	public static volatile SingularAttribute<Player, Integer> lossContainers;
	public static volatile SingularAttribute<Player, Integer> townId;
	public static volatile SingularAttribute<Player, Integer> balance;
	public static volatile SingularAttribute<Player, Integer> stamina;
	public static volatile SingularAttribute<Player, Short> online;
	public static volatile SingularAttribute<Player, Integer> rankId;
	public static volatile SingularAttribute<Player, String> guildnick;
	public static volatile SetAttribute<Player, PlayerDepotItem> playerDepotItems;
	public static volatile SetAttribute<Player, PlayerDeath> playerDeaths;
	public static volatile SetAttribute<Player, PlayerItem> playerItems;
	public static volatile SetAttribute<Player, GuildMember> guildMembers;
	public static volatile SetAttribute<Player, HouseAuction> houseAuctions;
	public static volatile SetAttribute<Player, PlayerSpell> playerSpells;
	public static volatile SetAttribute<Player, PlayerStorage> playerStorages;
	public static volatile SetAttribute<Player, PlayerSkill> playerSkills;
	public static volatile SetAttribute<Player, Guild> guilds;
	public static volatile SetAttribute<Player, GuildInvite> guildInvites;
	public static volatile SetAttribute<Player, PlayerViplist> playerViplistsForVipId;
	public static volatile SetAttribute<Player, PlayerViplist> playerViplistsForPlayerId;
	public static volatile SetAttribute<Player, PlayerKiller> playerKillers;
}
