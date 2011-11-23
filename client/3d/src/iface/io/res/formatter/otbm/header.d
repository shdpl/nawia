/*
 * Copyright (C) 2010 Mariusz 'shd' Gliwiński.
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

module io.res.formatter.otbm.header;

private import
	std.stream;

//uint version = 0
//ubyte command = 0xFE //NODE_START
//ubyte type
//ubyte[] properties ~= if (char !+ ESCAPE_CHAR=0xFD)
//ubyte command = 0xFF

//Header hdr = cast(Header) properties;
// assert(minorVersionItems >= 810 && minorVersionItems <= itemsOTB.minor && minorVersionItems != 854)

enum Type : ulong {
	Root = 0,
		MapData = 2,
			Region = 4,
				Tile = 5,
					Item = 6,
				HouseTile = 14
};

struct NodeRoot {
	static immutable Type type = Type.Root;
	uint _version;
	ushort _width;
	ushort _height;
	uint _majorVersionItems;
	uint _minorVersionItems;
	
	this(InputStream stream) {
		stream.read(_version);
		stream.read(_width);
		stream.read(_height);
		stream.read(_majorVersionItems);
		stream.read(_minorVersionItems);
	}
}

struct NodeNull {
	static immutable Type type = Type.Root;
}

struct NodeMapData {
	static immutable Type type = Type.MapData;
	struct Attribute {
		enum Subtype : ubyte {
			Description = OTBM_AttrTypes_t.OTBM_ATTR_DESCRIPTION,
			SpawnFile = OTBM_AttrTypes_t.OTBM_ATTR_EXT_SPAWN_FILE,
			HouseFile = OTBM_AttrTypes_t.OTBM_ATTR_EXT_HOUSE_FILE
		}
		Subtype subtype;
		string tag;
	}//[0..n]
	
	this(InputStream stream) {
		
	}
}

struct NodeRegion {
	align (1):
	static immutable Type type = Type.Region;
	ushort x, y;
	ubyte z;
}

struct NodeTile {
	align (1):
	static immutable Type type = Type.Tile;
	ubyte x, y;
	struct Attribute1 {
		static immutable ubyte type = OTBM_AttrTypes_t.OTBM_ATTR_TILE_FLAGS;
		enum Flags : uint {
			ProtectionZone = tileflags_t.TILESTATE_PROTECTIONZONE,
			NonPvPZone = tileflags_t.TILESTATE_NOPVPZONE,
			PvPZone = tileflags_t.TILESTATE_PVPZONE,
			NoLogout = tileflags_t.TILESTATE_NOLOGOUT,
			Refresh = tileflags_t.TILESTATE_REFRESH
		}
		Flags flags;
	}
	struct Attribute2 {
		static immutable ubyte type = OTBM_AttrTypes_t.OTBM_ATTR_ITEM;
		ushort itemId;
	}
}

struct NodeHouseTile {
	align (1):
	static immutable Type type = Type.HouseTile;
	ubyte x, y;
	uint houseId;
	struct Attribute1 {
		static immutable ubyte type = OTBM_AttrTypes_t.OTBM_ATTR_TILE_FLAGS;
		enum Flags : uint {
			ProtectionZone = tileflags_t.TILESTATE_PROTECTIONZONE,
			NonPvPZone = tileflags_t.TILESTATE_NOPVPZONE,
			PvPZone = tileflags_t.TILESTATE_PVPZONE,
			NoLogout = tileflags_t.TILESTATE_NOLOGOUT,
			Refresh = tileflags_t.TILESTATE_REFRESH
		}
		Flags flags;
	}
	struct Attribute2 {
		static immutable ubyte type = OTBM_AttrTypes_t.OTBM_ATTR_ITEM;
		ushort itemId;
	}
}

struct NodeItem {
	align (1):
	static immutable Type type = Type.Item;
	ushort itemId;
	ubyte attribute;
}

enum OTBM_AttrTypes_t{
	OTBM_ATTR_DESCRIPTION = 1,
	OTBM_ATTR_EXT_FILE = 2,
	OTBM_ATTR_TILE_FLAGS = 3,
	OTBM_ATTR_ACTION_ID = 4,
	OTBM_ATTR_UNIQUE_ID = 5,
	OTBM_ATTR_TEXT = 6,
	OTBM_ATTR_DESC = 7,
	OTBM_ATTR_TELE_DEST = 8,
	OTBM_ATTR_ITEM = 9,
	OTBM_ATTR_DEPOT_ID = 10,
	OTBM_ATTR_EXT_SPAWN_FILE = 11,
	OTBM_ATTR_RUNE_CHARGES = 12,
	OTBM_ATTR_EXT_HOUSE_FILE = 13,
	OTBM_ATTR_HOUSEDOORID = 14,
	OTBM_ATTR_COUNT = 15,
	OTBM_ATTR_DURATION = 16,
	OTBM_ATTR_DECAYING_STATE = 17,
	OTBM_ATTR_WRITTENDATE = 18,
	OTBM_ATTR_WRITTENBY = 19,
	OTBM_ATTR_SLEEPERGUID = 20,
	OTBM_ATTR_SLEEPSTART = 21,
	OTBM_ATTR_CHARGES = 22
};

enum OTBM_NodeTypes_t{
	OTBM_ROOTV1 = 1,
	OTBM_MAP_DATA = 2,
	OTBM_ITEM_DEF = 3,
	OTBM_TILE_AREA = 4,
	OTBM_TILE = 5,
	OTBM_ITEM = 6,
	OTBM_TILE_SQUARE = 7,
	OTBM_TILE_REF = 8,
	OTBM_SPAWNS = 9,
	OTBM_SPAWN_AREA = 10,
	OTBM_MONSTER = 11,
	OTBM_TOWNS = 12,
	OTBM_TOWN = 13,
	OTBM_HOUSETILE = 14,
	OTBM_WAYPOINTS = 15,
	OTBM_WAYPOINT = 16
};

enum tileflags_t{
	TILESTATE_NONE						= 0,
	TILESTATE_PROTECTIONZONE			= 1 << 0,
	TILESTATE_DEPRECATED_HOUSE			= 1 << 1,
	TILESTATE_NOPVPZONE					= 1 << 2,
	TILESTATE_NOLOGOUT					= 1 << 3,
	TILESTATE_PVPZONE					= 1 << 4,
	TILESTATE_REFRESH					= 1 << 5,

	//internal usage
	TILESTATE_HOUSE						= 1 << 6,
	TILESTATE_FLOORCHANGE				= 1 << 7,
	TILESTATE_FLOORCHANGE_DOWN			= 1 << 8,
	TILESTATE_FLOORCHANGE_NORTH			= 1 << 9,
	TILESTATE_FLOORCHANGE_SOUTH			= 1 << 10,
	TILESTATE_FLOORCHANGE_EAST			= 1 << 11,
	TILESTATE_FLOORCHANGE_WEST			= 1 << 12,
	TILESTATE_TELEPORT      			= 1 << 13,
	TILESTATE_MAGICFIELD                = 1 << 14,
	TILESTATE_MAILBOX                   = 1 << 15,
	TILESTATE_TRASHHOLDER               = 1 << 16,
	TILESTATE_BED                       = 1 << 17,
	TILESTATE_DEPOT                     = 1 << 18,
	TILESTATE_BLOCKSOLID				= 1 << 19,
	TILESTATE_BLOCKPATH					= 1 << 20,
	TILESTATE_IMMOVABLEBLOCKSOLID		= 1 << 21,
	TILESTATE_IMMOVABLEBLOCKPATH		= 1 << 22,
	TILESTATE_IMMOVABLENOFIELDBLOCKPATH = 1 << 23,
	TILESTATE_NOFIELDBLOCKPATH			= 1 << 24,
	TILESTATE_DYNAMIC_TILE				= 1 << 25
};