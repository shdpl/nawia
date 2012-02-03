package net.nawia.gsao.server.model;

import javax.annotation.Generated;
import javax.persistence.metamodel.SingularAttribute;
import javax.persistence.metamodel.StaticMetamodel;

@Generated(value="Dali", date="2012-02-01T00:44:20.975+0100")
@StaticMetamodel(GuildInvite.class)
public class GuildInvite_ {
	public static volatile SingularAttribute<GuildInvite, GuildInviteId> id;
	public static volatile SingularAttribute<GuildInvite, Guild> guild;
	public static volatile SingularAttribute<GuildInvite, Player> player;
}
