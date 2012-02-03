package net.nawia.gsao.server.model;

import javax.annotation.Generated;
import javax.persistence.metamodel.SetAttribute;
import javax.persistence.metamodel.SingularAttribute;
import javax.persistence.metamodel.StaticMetamodel;

@Generated(value="Dali", date="2012-02-01T00:44:21.646+0100")
@StaticMetamodel(PlayerDeath.class)
public class PlayerDeath_ {
	public static volatile SingularAttribute<PlayerDeath, Integer> id;
	public static volatile SingularAttribute<PlayerDeath, Player> player;
	public static volatile SingularAttribute<PlayerDeath, Integer> date;
	public static volatile SingularAttribute<PlayerDeath, Integer> level;
	public static volatile SetAttribute<PlayerDeath, Killer> killers;
}
