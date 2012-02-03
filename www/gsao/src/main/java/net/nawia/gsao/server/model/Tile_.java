package net.nawia.gsao.server.model;

import javax.annotation.Generated;
import javax.persistence.metamodel.SetAttribute;
import javax.persistence.metamodel.SingularAttribute;
import javax.persistence.metamodel.StaticMetamodel;

@Generated(value="Dali", date="2012-02-01T00:44:21.930+0100")
@StaticMetamodel(Tile.class)
public class Tile_ {
	public static volatile SingularAttribute<Tile, Integer> id;
	public static volatile SingularAttribute<Tile, House> house;
	public static volatile SingularAttribute<Tile, Integer> x;
	public static volatile SingularAttribute<Tile, Integer> y;
	public static volatile SingularAttribute<Tile, Short> z;
	public static volatile SetAttribute<Tile, TileItem> tileItems;
}
