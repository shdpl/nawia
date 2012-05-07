TrapDoor =
{
    itemIdClosed    = {9624},
    itemIdOpen      = {9625}
}

function TrapDoor.doOpen(trapdoor, creature)
    Item.doTransformInc(trapdoor);
    Item.doDecay(trapdoor)
    return true
end

function TrapDoor.doClose(trapdoor, creature)
    Item.doTransformDec(trapdoor);
    Item.doDecay(trapdoor)
    return true
end

function TrapDoor.is(item)
    return Item.is(item) and (TrapDoor.isOpen(item) or TrapDoor.isClosed(item))
end

function TrapDoor.isOpen(trapdoor)
    return table.find(TrapDoor.itemIdOpen, trapdoor.itemid)
end

function TrapDoor.isClosed(trapdoor)
    return table.find(TrapDoor.itemIdClosed, trapdoor.itemid)
end

function TrapDoor.getByItem(item)
    assert(TrapDoor.is(item))
    local is_open = TrapDoor.isOpen(item)
    if is_open then
        Item.addOnUseBefore(item, TrapDoor.isClosable)
    end
    Item.addOnUse(item, is_open and TrapDoor.doClose or TrapDoor.doOpen)
    return item;
end

function TrapDoor.getByOTItem(otitem)
    return TrapDoor.getByItem(Item.getByOTItem(otitem))
end

function TrapDoor.getByUID(uid)
    return TrapDoor.getByOTItem(Entity.getByUID(uid))
end