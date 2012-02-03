package net.nawia.gsao.server.model;

import javax.annotation.Generated;
import javax.persistence.metamodel.SingularAttribute;
import javax.persistence.metamodel.StaticMetamodel;
import net.nawia.gsao.server.model.Ban.BAN_T;

@Generated(value="Dali", date="2012-02-01T00:44:20.874+0100")
@StaticMetamodel(Ban.class)
public class Ban_ {
	public static volatile SingularAttribute<Ban, Integer> id;
	public static volatile SingularAttribute<Ban, BAN_T> type;
	public static volatile SingularAttribute<Ban, Long> param;
	public static volatile SingularAttribute<Ban, Short> active;
	public static volatile SingularAttribute<Ban, Long> expires;
	public static volatile SingularAttribute<Ban, Long> added;
	public static volatile SingularAttribute<Ban, Integer> adminId;
	public static volatile SingularAttribute<Ban, String> comment;
	public static volatile SingularAttribute<Ban, Integer> reason;
	public static volatile SingularAttribute<Ban, Integer> action;
	public static volatile SingularAttribute<Ban, String> statement;
}
