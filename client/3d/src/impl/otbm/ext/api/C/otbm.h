/// callbacks
extern (C) void delegate(in Version map, in ushort width, in ushort height, in Version items) onHeader;

extern (C) void delegate(in char[] description) onMapDescription;
extern (C) void delegate(in char[] spawn) onMapSpawnFile;
extern (C) void delegate(in char[] houses) onMapHousesFile;

extern (C) void delegate(in Town) onTown;
extern (C) void delegate(in Waypoint) onWaypoint;

extern (C) void delegate(in Tile) onTile;
/** BUG:OTBM-1 Tile, and parent here might not be fully filled with its data **/
extern (C) void delegate(in Tile, in Item, in Item* parent) onItem;
//extern (C) void delegate(in uint id, in ushort x, in ushort y, in ubyte z, uint flags, in ushort itemId) onHouseTile;
