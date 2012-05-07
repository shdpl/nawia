Tile =
{
    ContentType =
    {
        STACKPOS_TOP_MOVEABLE_ITEM_OR_CREATURE
    }
}

function Tile.getTopCreature(tile)
    return Entity.getByThing(getTopCreature(tile.pos))
end

function Tile.getContent(tile)
    return getThingFromPosition(tile.pos)
end

function Tile.getContentsByType(tile, type)
    return getTileItemsByType(tile.pos, type)
end

function Tile.getByPos(pos)
    return {pos = pos}  --todo
end

function Tile.hasEntityBlocking(tile)
    -- TODO: getTopCreature is bugged in OTS
    return not getTopCreature(tile.pos).uid == nil
end