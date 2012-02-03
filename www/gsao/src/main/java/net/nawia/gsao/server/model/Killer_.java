package net.nawia.gsao.server.model;

import javax.annotation.Generated;
import javax.persistence.metamodel.SetAttribute;
import javax.persistence.metamodel.SingularAttribute;
import javax.persistence.metamodel.StaticMetamodel;

@Generated(value="Dali", date="2012-02-01T00:44:21.591+0100")
@StaticMetamodel(Killer.class)
public class Killer_ {
	public static volatile SingularAttribute<Killer, Integer> id;
	public static volatile SingularAttribute<Killer, PlayerDeath> playerDeath;
	public static volatile SingularAttribute<Killer, Short> finalHit;
	public static volatile SetAttribute<Killer, PlayerKiller> playerKillers;
	public static volatile SetAttribute<Killer, EnvKiller> envKillers;
}
