Entity = {}

function Entity.doTeleportTo(entity, pos)
    doTeleportThing(entity.uid, pos)
end

function Entity.getByUID(uid)
    local ret = getThing(uid)
    ret.pos = getThingPos(uid)
    return ret
end