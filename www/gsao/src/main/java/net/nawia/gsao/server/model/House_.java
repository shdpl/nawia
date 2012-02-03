package net.nawia.gsao.server.model;

import javax.annotation.Generated;
import javax.persistence.metamodel.SetAttribute;
import javax.persistence.metamodel.SingularAttribute;
import javax.persistence.metamodel.StaticMetamodel;

@Generated(value="Dali", date="2012-02-01T00:44:21.535+0100")
@StaticMetamodel(House.class)
public class House_ {
	public static volatile SingularAttribute<House, Integer> id;
	public static volatile SingularAttribute<House, Integer> townid;
	public static volatile SingularAttribute<House, String> name;
	public static volatile SingularAttribute<House, Integer> rent;
	public static volatile SingularAttribute<House, Short> guildhall;
	public static volatile SingularAttribute<House, Integer> tiles;
	public static volatile SingularAttribute<House, Integer> doors;
	public static volatile SingularAttribute<House, Integer> beds;
	public static volatile SingularAttribute<House, Integer> owner;
	public static volatile SingularAttribute<House, Long> paid;
	public static volatile SingularAttribute<House, Short> clear;
	public static volatile SingularAttribute<House, Integer> warnings;
	public static volatile SingularAttribute<House, Long> lastwarning;
	public static volatile SetAttribute<House, HouseAuction> houseAuctions;
	public static volatile SetAttribute<House, MapStore> mapStores;
	public static volatile SetAttribute<House, HouseList> houseLists;
	public static volatile SetAttribute<House, Tile> tiles_1;
}
