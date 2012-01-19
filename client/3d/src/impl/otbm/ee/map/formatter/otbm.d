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
		onHeader = delegate(in Version map, in ushort width, in ushort height, in Version items)
		{
			writeln("Map version\t- OTBMv",map.major," ","OTBv",items.major,".",items.minor);
			writeln("Map size\t- ",width,"x",height);
		};
		onTile = &deliverEntityCreate;
		parse(otbm);
	}
	
	void deliverEntityCreate(in ushort x, in ushort y, in ubyte z, uint flags, in ushort itemId)
	{
		auto msg = MsgEntityCreate();
		msg.x = x;
		msg.y = y;
		msg.z = z;
		msg.type = itemId;
		_lstnrCreate.deliver(msg);
	}
}