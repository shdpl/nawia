package net.nawia.gsao.server.model;

import javax.annotation.Generated;
import javax.persistence.metamodel.SingularAttribute;
import javax.persistence.metamodel.StaticMetamodel;

@Generated(value="Dali", date="2012-02-01T00:44:21.724+0100")
@StaticMetamodel(PlayerKiller.class)
public class PlayerKiller_ {
	public static volatile SingularAttribute<PlayerKiller, PlayerKillerId> id;
	public static volatile SingularAttribute<PlayerKiller, Killer> killer;
	public static volatile SingularAttribute<PlayerKiller, Player> player;
	public static volatile SingularAttribute<PlayerKiller, Short> unjustified;
}
