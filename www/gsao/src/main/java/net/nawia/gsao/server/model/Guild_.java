package net.nawia.gsao.server.model;

import javax.annotation.Generated;
import javax.persistence.metamodel.SetAttribute;
import javax.persistence.metamodel.SingularAttribute;
import javax.persistence.metamodel.StaticMetamodel;

@Generated(value="Dali", date="2012-02-01T00:44:20.960+0100")
@StaticMetamodel(Guild.class)
public class Guild_ {
	public static volatile SingularAttribute<Guild, Integer> id;
	public static volatile SingularAttribute<Guild, Player> player;
	public static volatile SingularAttribute<Guild, String> name;
	public static volatile SingularAttribute<Guild, Integer> creationdate;
	public static volatile SetAttribute<Guild, GuildInvite> guildInvites;
	public static volatile SetAttribute<Guild, GuildWar> guildWarsForGuildId;
	public static volatile SetAttribute<Guild, GuildRank> guildRanks;
	public static volatile SetAttribute<Guild, GuildWar> guildWarsForOpponentId;
}
