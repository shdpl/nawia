package net.nawia.gsao.server.model;

import javax.annotation.Generated;
import javax.persistence.metamodel.SingularAttribute;
import javax.persistence.metamodel.StaticMetamodel;

@Generated(value="Dali", date="2012-02-01T00:44:21.487+0100")
@StaticMetamodel(GuildMember.class)
public class GuildMember_ {
	public static volatile SingularAttribute<GuildMember, GuildMemberId> id;
	public static volatile SingularAttribute<GuildMember, GuildRank> guildRank;
	public static volatile SingularAttribute<GuildMember, Player> player;
}
