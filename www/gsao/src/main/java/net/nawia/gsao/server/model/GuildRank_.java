package net.nawia.gsao.server.model;

import javax.annotation.Generated;
import javax.persistence.metamodel.SetAttribute;
import javax.persistence.metamodel.SingularAttribute;
import javax.persistence.metamodel.StaticMetamodel;

@Generated(value="Dali", date="2012-02-01T00:44:21.516+0100")
@StaticMetamodel(GuildRank.class)
public class GuildRank_ {
	public static volatile SingularAttribute<GuildRank, Integer> id;
	public static volatile SingularAttribute<GuildRank, Guild> guild;
	public static volatile SingularAttribute<GuildRank, String> name;
	public static volatile SingularAttribute<GuildRank, Integer> level;
	public static volatile SetAttribute<GuildRank, GuildMember> guildMembers;
}
