package net.nawia.gsao.server.model;

import javax.annotation.Generated;
import javax.persistence.metamodel.SingularAttribute;
import javax.persistence.metamodel.StaticMetamodel;

@Generated(value="Dali", date="2012-02-01T00:44:21.897+0100")
@StaticMetamodel(PlayerViplist.class)
public class PlayerViplist_ {
	public static volatile SingularAttribute<PlayerViplist, PlayerViplistId> id;
	public static volatile SingularAttribute<PlayerViplist, Player> playerByVipId;
	public static volatile SingularAttribute<PlayerViplist, Player> playerByPlayerId;
}
