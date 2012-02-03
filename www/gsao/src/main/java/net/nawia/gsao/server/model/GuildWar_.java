package net.nawia.gsao.server.model;

import javax.annotation.Generated;
import javax.persistence.metamodel.SingularAttribute;
import javax.persistence.metamodel.StaticMetamodel;

@Generated(value="Dali", date="2012-02-01T00:44:21.522+0100")
@StaticMetamodel(GuildWar.class)
public class GuildWar_ {
	public static volatile SingularAttribute<GuildWar, Integer> id;
	public static volatile SingularAttribute<GuildWar, Guild> guildByGuildId;
	public static volatile SingularAttribute<GuildWar, Guild> guildByOpponentId;
	public static volatile SingularAttribute<GuildWar, Long> fragLimit;
	public static volatile SingularAttribute<GuildWar, Long> declarationDate;
	public static volatile SingularAttribute<GuildWar, Long> endDate;
	public static volatile SingularAttribute<GuildWar, Long> guildFee;
	public static volatile SingularAttribute<GuildWar, Long> opponentFee;
	public static volatile SingularAttribute<GuildWar, Long> guildFrags;
	public static volatile SingularAttribute<GuildWar, Long> opponentFrags;
	public static volatile SingularAttribute<GuildWar, String> comment;
	public static volatile SingularAttribute<GuildWar, Short> status;
}
