module otbm.parser;

public {
	import std.stream;
	import std.typecons : Nullable, Tuple;
}
private {
	import std.exception : enforceEx, Exception;
	import std.conv : text, to;
}

alias Tuple!(uint, "major", uint, "minor") Version;

// callbacks
void delegate(in Version map, in ushort width, in ushort height, in Version items) onHeader;

void delegate(in char[] description) onMapDescription;
void delegate(in char[] spawn) onMapSpawnFile;
void delegate(in char[] houses) onMapHousesFile;

void delegate(in uint id, in char[] name, in ushort x, in ushort y, in ubyte z) onTown;
void delegate(in char[] name, in ushort x, in ushort y, in ubyte z) onWaypoint;

void delegate(in ushort x, in ushort y, in ubyte z, uint flags, in ushort itemId) onTile;
void delegate(in uint id, in ushort x, in ushort y, in ubyte z, uint flags, in ushort itemId) onHouseTile;


/**
 Tries to parse input file. During parsing, it calls every set callback methods.
 */
void parse(Stream otbm)
{
	Version vOtbm;
	otbm.read(vOtbm.major);
	enforceEx!OTBMVersionNotSupported(isSupported(vOtbm), text("version=",vOtbm));
	tokenize(otbm);
}


/**
 Checks whether otbm file format version is supported by library (it's not an map version)
 */
bool isSupported(Version otbm)
{
	return otbm.major == 0;
}

/**
 Checks whether map version supported by library (it's not an otbm version)
 */
bool isSupported(Nullable!Version map, Nullable!Version item)
{
	if (!map.isNull)
	{
		if (map.major <= 0 || map.major > 2)
			return false;
	}
	if (!item.isNull)
	{
		if (item.major < 3 || item.minor < 8 || item.minor == 16)
			return false;
	}
	return true;
}

private:
Token tokenize(Stream otbm)
{
	immutable NODE_START	= 0xfe;
	immutable NODE_END		= 0xff;
	immutable NODE_ESCAPE	= 0xfd;
	ubyte curByte;
	otbm.read(curByte);
	enforceEx!MapFormatBroken(curByte == NODE_START);
	
	auto buffer = new MemoryStream;
	Token[] childs = [];
	
	while(1)
	{
		otbm.read(curByte);
		switch(curByte)
		{
			case NODE_START:
				otbm.seekCur(-curByte.sizeof);
				childs ~= tokenize(otbm);
			break;
			
			case NODE_ESCAPE:
				otbm.read(curByte);
				buffer.write(curByte);
			break;
			
			case NODE_END:
				buffer.position(0);
				return Token(buffer, childs);
			break;
			
			default:
				buffer.write(curByte);
		}
	}
}

struct Token
{
	ubyte type;
	Token[] childs;
	Stream buffer;
	
	
	this(Stream buffer, Token[] childs)
	{
		this.buffer = buffer;
		this.childs = childs;
		
		buffer.read(type);
		parseNode();
	}
	
	void parseNode()
	{
		switch(type)
		{
			case NodeType.ROOT:
				parseHeader();
			break;
			case NodeType.MAP_DATA:
				parseMapData();
			break;
			case NodeType.TOWNS:
				parseTowns();
			break;
			case NodeType.WAYPOINTS:
				parseWaypoints();
			break;
			case NodeType.TILE_AREA:
				parseTiles();
			break;
			default:
				enforceEx!MapFormatBroken(NodeType.TILE == type || NodeType.HOUSETILE == type || NodeType.ITEM == type || NodeType.TOWN == type);
		}
	}
	
	void parseHeader()
	{
		uint ver;			buffer.read(ver);
		ushort width;		buffer.read(width);
		ushort height;		buffer.read(height);
		uint itemsVerMajor;	buffer.read(itemsVerMajor);
		uint itemsVerMinor;	buffer.read(itemsVerMinor);
		
		Nullable!Version map = Version(ver, 0);
		Nullable!Version items = Version(itemsVerMajor, itemsVerMinor);
		enforceEx!MapVersionNotSupported(isSupported(map, items));
		
		if (onHeader !is null)
			onHeader(map, width, height, items);
	}
	
	void parseMapData()
	{
		byte key;
		while(buffer.position < buffer.size)
		{
			buffer.read(key);
			switch (key)
			{
				case DataType.DESCRIPTION:
					char[] desc = readStr(buffer);
					if (onMapDescription !is null)
						onMapDescription(desc);
				break;
				case DataType.EXT_SPAWN_FILE:
					char[] spawn = readStr(buffer);
					if (onMapSpawnFile !is null)
						onMapSpawnFile(spawn);
				break;
				case DataType.EXT_HOUSE_FILE:
					char[] houses = readStr(buffer);
					if (onMapHousesFile !is null)
						onMapHousesFile(houses);
				break;
				default:
					enforceEx!MapFormatBroken(false);
			}
		}
	}
	
	void parseTowns()
	{
		uint townId;
		char[] name;
		ushort x, y;
		ubyte z;
		foreach(ref child; childs)
		{
			enforceEx!MapFormatBroken(child.type == NodeType.TOWN);
			child.buffer.read(townId);
			
			name = readStr(child.buffer);
			
			child.buffer.read(x);
			child.buffer.read(y);
			child.buffer.read(z);
			if (onTown !is null)
				onTown(townId, name, x, y, z); 
		}
	}
	
	void parseWaypoints()
	{
		char[] name;
		ushort x, y;
		ubyte z;
		foreach(ref child; childs)
		{
			enforceEx!MapFormatBroken(child.type == NodeType.WAYPOINT);
			name = readStr(child.buffer);
			
			child.buffer.read(x);
			child.buffer.read(y);
			child.buffer.read(z);
			if (onWaypoint !is null)
				onWaypoint(name, x, y, z);
		}
	}
	
	void parseTiles()
	{
		ushort x, y;
		ubyte z;
		buffer.read(x);
		buffer.read(y);
		buffer.read(z);
		foreach(ref child; childs)
		{
			ubyte dx, dy;
			uint flags;
			ushort itemId;
			child.buffer.read(dx);
			child.buffer.read(dy);
			
			if (child.type == NodeType.HOUSETILE)
			{
				uint houseId;
				child.buffer.read(houseId);
				flags = readFlags(child.buffer);	// parsing more strictly than ots
				itemId = readItems(child.buffer);
				if (onHouseTile !is null)
					onHouseTile(houseId, to!ushort(x+dx), to!ushort(y+dy), z, flags, itemId);
			}
			else if (child.type == NodeType.TILE)
			{
				flags = readFlags(child.buffer);	// parsing more strictly than ots
				itemId = readItems(child.buffer);
				if (onTile !is null)
					onTile(to!ushort(x+dx), to!ushort(y+dy), z, flags, itemId);
			}
		}
	}
	
	uint readFlags(Stream buffer)
	{
		ubyte attrType;
		uint flags, validFlags;
		if (buffer.size - buffer.position < attrType.sizeof + flags.sizeof)
			return 0;
		
		buffer.read(attrType);
		enforceEx!MapFormatBroken(attrType == DataType.TILE_FLAGS);
		
		buffer.read(flags);
		if (flags & TileState.PROTECTIONZONE)
		{
			validFlags |= TileState.PROTECTIONZONE;
		}
		if (flags & TileState.NOPVPZONE)
		{
			validFlags |= TileState.NOPVPZONE;
		}
		if (flags & TileState.PVPZONE)
		{
			validFlags |= TileState.PVPZONE;
		}
		if (flags & TileState.NOLOGOUT)
		{
			validFlags |= TileState.NOLOGOUT;
		}
		if (flags & TileState.REFRESH)
		{
			validFlags |= TileState.REFRESH;
		}
		//enforceEx!MapFormatBroken(validFlags == flags);
		return flags;
	}
	
	ushort readItems(Stream buffer)
	{
		ubyte attrType;
		ushort itemId;
		
		if (buffer.size - buffer.position < attrType.sizeof + itemId.sizeof)
			return 0;
			
		buffer.read(attrType);
		enforceEx!MapFormatBroken(attrType == DataType.ITEM);
		
		buffer.read(itemId);
		return itemId;
		//TODO (more items on one tile?)
	}
	
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
}
char[] readStr(Stream buffer)
{
	ushort len;
	buffer.read(len);
	return buffer.readString(len);
}

public:
// Exceptions
class ExceptionOTBM : Exception
{
	this(string msg, string file, size_t line)
	{
		super("libotbm: "~msg, file, line);
	}
}

class OTBMVersionNotSupported : ExceptionOTBM {
	this(string msg, string file, size_t line)
	{
		super("OTBM version isn't supported. Try using the latest map editor version to be able to load correctly. "
			~msg, file, line);
	}
}

class MapVersionNotSupported : ExceptionOTBM {
	this(string msg, string file, size_t line)
	{
		super("Map version isn't supported. Try using the latest map editor version to be able to load correctly. "
			~msg, file, line);
	}
}

class MapFormatBroken : ExceptionOTBM {
	this(string msg, string file, size_t line)
	{
		super("File format is broken. Try recover previous version or fix it manually. "
			~msg, file, line);
	}
}