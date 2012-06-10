module impl.otbm.ee.map.formatter.otbm;

public import
	std.stream,
	std.algorithm;
	
private import
	std.stdio;
	
private import
	msg.listener,
	msg._ee.entity.create;
	
private import
	impl.otbm.ext.src.otbm.parser; //FIXME


class FormatterOTBM : IMsgProvider
{
	mixin InjectMsgListener!MsgEntityCreate _lstnrCreate;
	ushort width;
	ushort height;
	ItemType[ushort] types;

	void init()
	{
		_lstnrCreate.register(this);
	}
	
	void dispose()
	{
		_lstnrCreate.unregister(this);
	}
	
	void format(Stream otbm)
	{
		onHeader = &formatHeader;
//		onTile = &formatTile;
		onItem = &formatItem;
//		onTown = &formatTown;
//		onWaypoint = &formatWaypoint;
		auto otb = new std.stream.BufferedFile();
		otb.open("/home/shd/Downloads/trunk.r5673/trunk.r5673/data/items/items.otb");
		onItemType = delegate(ItemType it)
		{
			if (0 != it.serverId)
			{
				types[it.serverId] = it; 
			}
		};
		otb.parseOTB();
		parse(otbm);
	}
	
	void formatHeader(in Version map, in ushort width, in ushort height, in Version items)
	{
		writeln("Map version\t- OTBMv",map.major," ","OTBv",items.major,".",items.minor);
		writeln("Map size\t- ",width,"x",height);
		this.width = width;
		this.height = height;
	}
	
//	void formatTile(in Tile t)
//	{
//		if (t.pos.x > width || t.pos.y > height)
//		{
//			writeln("WARNING: Entity positioned out of map found(",t.pos.x,",",t.pos.y,").");
//			return;
//		}
//	}
	
	void formatItem(in Tile t, in Item i, in Item* p)
	{
		if (t.pos.x > width || t.pos.y > height)
			writeln("WARNING: Entity positioned out of map found(",t.pos.x,",",t.pos.y,").");
		else
		{
			auto msg = MsgEntityCreate();
			msg.x = t.pos.x;
			msg.y = t.pos.y;
			msg.z = t.pos.z;
			msg.type = i.type;
			if( (ItemFlags.LookThrough & types[i.type].flags) == 0
				 && (ItemFlags.BlockSolid & types[i.type].flags) == 1)
				_lstnrCreate.deliver(msg);
		}
	}
	
//	void formatTown(in Town t)
//	{
//		writeln(t.name);
//	}
//	
//	void formatWaypoint(in Waypoint w)
//	{
//		writeln(w.name);
//	}
}