package net.nawia.gsao.server.model;

import javax.annotation.Generated;
import javax.persistence.metamodel.SetAttribute;
import javax.persistence.metamodel.SingularAttribute;
import javax.persistence.metamodel.StaticMetamodel;

@Generated(value="Dali", date="2012-02-01T00:44:20.956+0100")
@StaticMetamodel(Group.class)
public class Group_ {
	public static volatile SingularAttribute<Group, Integer> id;
	public static volatile SingularAttribute<Group, String> name;
	public static volatile SingularAttribute<Group, Long> flags;
	public static volatile SingularAttribute<Group, Integer> access;
	public static volatile SingularAttribute<Group, Integer> violation;
	public static volatile SingularAttribute<Group, Integer> maxdepotitems;
	public static volatile SingularAttribute<Group, Integer> maxviplist;
	public static volatile SetAttribute<Group, Player> players;
}
