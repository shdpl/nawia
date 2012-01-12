module impl.otbm.ee.map.formatter.otbm;

public import
	std.stream;
	
private import
	ex.ee.map.obsolete,
	ex.ee.map.unsupported;


class FormatterOTBM
{
	immutable NODE_START = 0xfe;
	immutable NODE_END = 0xff;
	immutable NODE_ESCAPE = 0xfd;
	
	
	MapNode format(Stream otbm)
	{
		uint otbmVer;
		otbm.read(otbmVer);
		enforce(otbmVer == 0);
		return parseNode(otbm);
	}
	
	MapNode parseNode(Stream otbm)
	{
		ubyte curByte;
		otbm.read(curByte);
		enforce(curByte == NODE_START);
		
		auto buffer = new MemoryStream;
		MapNode[] childs = [];
		
		while(1)
		{
			otbm.read(curByte);
			switch(curByte)
			{
				case NODE_START:
					otbm.seekCur(-curByte.sizeof);
					childs ~= parseNode(otbm);
				break;
				
				case NODE_ESCAPE:
					otbm.read(curByte);
					buffer.write(curByte);
				break;
				
				case NODE_END:
					buffer.position(0);
					return MapNode(buffer, childs);
				break;
				
				default:
					buffer.write(curByte);
			}
		}
	}
}

struct MapHeader
{
	uint ver;
	ushort width;
	ushort height;
	uint itemsVerMajor;
	uint itemsVerMinor;
	
	void validate()
	{
		enforceEx!ExMapObsolete(ver > 0);
		enforceEx!ExMapUnsupported(ver <= 2);
		enforceEx!ExMapObsolete(itemsVerMajor >= 3);
		//TODO: content versions on ver and itemsVer
		enforceEx!ExMapObsolete(itemsVerMinor >= 8 || itemsVerMinor == 16);
	}
}

struct MapNode
{
	enum NodeType : ubyte
	{
		ROOT		= 0,
		ROOTV1		= 1,
		MAP_DATA	= 2,
		ITEM_DEF	= 3,
		TILE_AREA	= 4,
		TILE		= 5,
		ITEM		= 6,
		TILE_SQUARE = 7,
		TILE_REF	= 8,
		SPAWNS		= 9,
		SPAWN_AREA	= 10,
		MONSTER		= 11,
		TOWNS		= 12,
		TOWN		= 13,
		HOUSETILE	= 14,
		WAYPOINTS	= 15,
		WAYPOINT	= 16
	}
	enum DataType : ubyte
	{
		DESCRIPTION = 1,
		EXT_FILE = 2,
		TILE_FLAGS = 3,
		ACTION_ID = 4,
		UNIQUE_ID = 5,
		TEXT = 6,
		DESC = 7,
		TELE_DEST = 8,
		ITEM = 9,
		DEPOT_ID = 10,
		EXT_SPAWN_FILE = 11,
		RUNE_CHARGES = 12,
		EXT_HOUSE_FILE = 13,
		HOUSEDOORID = 14,
		COUNT = 15,
		DURATION = 16,
		DECAYING_STATE = 17,
		WRITTENDATE = 18,
		WRITTENBY = 19,
		SLEEPERGUID = 20,
		SLEEPSTART = 21,
		CHARGES = 22
	}
	enum TileState : ubyte
	{
		NONE				= 0,
		PROTECTIONZONE		= 1 << 0,
		DEPRECATED_HOUSE	= 1 << 1,
		NOPVPZONE			= 1 << 2,
		NOLOGOUT			= 1 << 3,
		PVPZONE				= 1 << 4,
		REFRESH				= 1 << 5,
	}
	
	ubyte type;
	MapNode[] childs;
	Stream buffer;
	
	private char[] readStr(Stream buffer)
	{
		ushort len;
		buffer.read(len);
		return buffer.readString(len);
	}
	
	void dispose()
	{
		foreach(ref child; childs)
			child.buffer.close();
		buffer.close();
	}
	
	this(Stream buffer, MapNode[] childs)
	{
		this.buffer = buffer;
		this.childs = childs;
		
		buffer.read(type);
		switch (type)
		{
			case NodeType.ROOT:
				auto m = MapHeader();
				buffer.read(m.ver);
				buffer.read(m.width);
				buffer.read(m.height);
				buffer.read(m.itemsVerMajor);
				buffer.read(m.itemsVerMinor);
				m.validate();
//				std.stdio.writeln(m);
			break;
			case NodeType.MAP_DATA:
				byte key;
				while(buffer.position < buffer.size)
				{
					buffer.read(key);
					switch (key)
					{
						case DataType.DESCRIPTION:
							std.stdio.writeln("descr ", readStr(buffer)); 
						break;
						case DataType.EXT_SPAWN_FILE:
							std.stdio.writeln("spawn ", readStr(buffer)); 
						break;
						case DataType.EXT_HOUSE_FILE:
							std.stdio.writeln("house ", readStr(buffer)); 
						break;
						default:
							assert(false);
					}
				}
			break;
			case NodeType.TOWNS:
//				ushort x, y;
//				ubyte z;
//				foreach(ref child; childs)
//				{
//					assert(child.type == NodeType.TOWN);
//					uint townId;
//					child.buffer.read(townId);
//					std.stdio.writeln(townId);
//					
//					std.stdio.writeln(readStr(child.buffer));
//					
//					child.buffer.read(x);
//					child.buffer.read(y);
//					child.buffer.read(z);	// temple position
//				}
			break;
			case NodeType.WAYPOINTS:
//				ushort x, y;
//				ubyte z;
//				foreach(ref child; childs)
//				{
//					assert(child.type == NodeType.WAYPOINT);
//					std.stdio.writeln(readStr(child.buffer));
//					
//					child.buffer.read(x);
//					child.buffer.read(y);
//					child.buffer.read(z);	// temple position
//				}
			break;
			case NodeType.TILE_AREA:
				ushort x, y;
				ubyte z;
				buffer.read(x);
				buffer.read(y);
				buffer.read(z);
				
				foreach(ref child; childs)
				{
					if (child.type == NodeType.TILE || child.type == NodeType.HOUSETILE)
					{
						ubyte dx, dy;
						child.buffer.read(dx);
						child.buffer.read(dy);
//						std.stdio.writeln(x + dx, " ", y + dy, " ", z);
						if (child.type == NodeType.HOUSETILE)
						{
							uint houseId;
							child.buffer.read(houseId);
//							std.stdio.writeln(houseId);
						}
						while(child.buffer.position + ubyte.sizeof < child.buffer.size)
						{
							ubyte attrId;
							child.buffer.read(attrId);
							switch(attrId)
							{
								case DataType.TILE_FLAGS:
									uint flags, validFlags;
									child.buffer.read(flags);
									if (flags & TileState.PROTECTIONZONE)
									{
										validFlags &= TileState.PROTECTIONZONE;
									}
									if (flags & TileState.NOPVPZONE)
									{
										validFlags &= TileState.NOPVPZONE;
									}
									if (flags & TileState.PVPZONE)
									{
										validFlags &= TileState.PVPZONE;
									}
									if (flags & TileState.NOLOGOUT)
									{
										validFlags &= TileState.NOLOGOUT;
									}
									if (flags & TileState.REFRESH)
									{
										validFlags &= TileState.REFRESH;
									}
//									if (validFlags != 0)
//										std.stdio.writeln(validFlags);
								break;
								case DataType.ITEM:
									ushort itemId;
									child.buffer.read(itemId);
//									std.stdio.writeln(itemId);
								break;
								default:
									assert(false);
							}
						}
					}
				}
			break;
			default:
				assert(NodeType.TILE == type || NodeType.HOUSETILE == type || NodeType.ITEM == type || NodeType.TOWN == type);
		}
	}
}