package net.nawia.gsao.server.model;

import javax.annotation.Generated;
import javax.persistence.metamodel.SingularAttribute;
import javax.persistence.metamodel.StaticMetamodel;

@Generated(value="Dali", date="2012-02-01T00:44:21.550+0100")
@StaticMetamodel(HouseAuction.class)
public class HouseAuction_ {
	public static volatile SingularAttribute<HouseAuction, Integer> id;
	public static volatile SingularAttribute<HouseAuction, House> house;
	public static volatile SingularAttribute<HouseAuction, Player> player;
	public static volatile SingularAttribute<HouseAuction, Integer> bid;
	public static volatile SingularAttribute<HouseAuction, Integer> limit;
	public static volatile SingularAttribute<HouseAuction, Long> endtime;
}
