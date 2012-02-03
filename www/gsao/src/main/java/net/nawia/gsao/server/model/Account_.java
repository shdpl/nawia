package net.nawia.gsao.server.model;

import java.util.Date;
import javax.annotation.Generated;
import javax.persistence.metamodel.SetAttribute;
import javax.persistence.metamodel.SingularAttribute;
import javax.persistence.metamodel.StaticMetamodel;

@Generated(value="Dali", date="2012-02-01T00:44:20.821+0100")
@StaticMetamodel(Account.class)
public class Account_ {
	public static volatile SingularAttribute<Account, Integer> id;
	public static volatile SingularAttribute<Account, String> name;
	public static volatile SingularAttribute<Account, String> password;
	public static volatile SingularAttribute<Account, String> email;
	public static volatile SingularAttribute<Account, Date> premend;
	public static volatile SingularAttribute<Account, Boolean> blocked;
	public static volatile SingularAttribute<Account, Short> warnings;
	public static volatile SetAttribute<Account, Player> players;
}
