Entity =
{
}

local function hasPosition(object)
    return "table" == type(object.pos)
        and nil ~= object.pos.x
        and nil ~= object.pos.y
        and nil ~= object.pos.z
end

function Entity.is(object)
    return object ~= nil and hasPosition(object)
end

function Entity.doTeleport(entity, pos)
    doTeleportThing(entity.uid, pos)
end

function Entity.getByUID(uid)
    return Entity.getByThing(getThing(uid))
end

function Entity.getByThing(thing)
    thing.pos = getThingPos(thing.uid)
    return thing
end;

function Entity.getPosition(entity)
    return entity.pos
end