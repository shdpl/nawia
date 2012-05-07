Door =
{   --todo: ids
    itemIdLocked    = {1209, 5732},
    itemIdClosed    = {461, 1210, 5733},
    itemIdOpen      = {462, 1211, 5734},
}

function Door.doOpen(door, creature)
    Item.doTransformInc2(door);
    Item.doDecay(door)
    return true
end

function Door.isClosable(door)
--    local tile = Tile.getByPos(door.pos)
--    local topEntity = Tile.getContent(tile)
--    return topEntity.uid == nil
    return true
end

function Door.doClose(door, creature)
--    local tile = Tile.getByPos(door.pos)
--    local topEntity = Tile.getContent(tile)
--
--    if topEntity.uid ~= nil then
--        local field = Tile.getContentsByType(tile, Field.typeid)
--
--        if (field.uid ~= topEntity.uid) then
--            Entity.doTeleportTo(topEntity, creature.pos) --todo: all entities?
--        end
--    end
    --doRelocate
    Item.doTransformDec2(door);
    Item.doDecay(door)
    return true
end

--todo: lock, unlock

function Door.is(item)
    return isItemDoor(item.itemid)
end

function Door.isOpen(door)
    return table.find(Door.itemIdOpen, door.itemid)
end

function Door.isClosed(door)
    return table.find(Door.itemIdClosed, door.itemid)
end

function Door.isLocked(door)
    return table.find(Door.itemIdLocked, door.itemid)
end

function Door.getByItem(item)
    Item.addOnUseBefore(item, Door.is)
    if Door.isOpen(item) then
        Item.addOnUseBefore(item, Door.isClosable)
    end
    Item.addOnUse(item, Door.isOpen(item) and Door.doClose or Door.doOpen) --todo: lock, unlock
    return item;
end

function Door.getByOTItem(otitem)
    return Door.getByItem(Item.getByOTItem(otitem))
end

function Door.getByUID(uid)
    return Door.getByOTItem(Entity.getByUID(uid))
end