Item =
{
    attributes = { 'name', 'pluralname', 'article', 'description' }
}

function Item.getByOTItem(otitem)
    otitem.beforeUse    = {}
    otitem.onUse        = {}
    otitem.onUseFailure = {}
    return otitem
end

function Item.is(item)
    return Entity.is(item) and "table" == type(item.beforeUse) and "table" == type(item.onUse) and "table" == type(item.onUseFailure)
end

function Item.getByUID(uid)
    return Item.getByOTItem(Entity.getByUID(uid))
end

function Item.clone(item, attributes)
    attributes = attributes ~= nil and List.concat(attributes, Writable.attributes) or Item.attributes

    local ret = doCreateItemEx(item.itemid, item.type)
    for _, key in ipairs(attributes) do
        local value = getItemAttribute(item.uid, key)
        if(value ~= nil) then
            doItemSetAttribute(ret, key, value)
        end
    end

    if(isContainer(item.uid)) then
        for i = (getContainerSize(item.uid) - 1), 0, -1 do
            local tmp = getContainerItem(item.uid, i)
            if(tmp.itemid > 0) then
                doAddContainerItemEx(ret, Item.clone(tmp, attributes).uid)
            end
        end
    end

    return Item.getByOTItem(getThing(ret))
end

function Item.doTransform(item, itemid)
    doTransformItem(item.uid, itemid)

    if item.actionid ~= 0 then
        doSetItemActionId(item.uid, item.actionid)
    end
end;

function Item.doTransformInc(item)
    return Item.doTransform(item, item.itemid + 1)
end

function Item.doTransformDec(item)
    return Item.doTransform(item, item.itemid - 1)
end

function Item.doTransformInc2(item)
    return Item.doTransform(item, item.itemid + 2)
end

function Item.doTransformDec2(item)
    return Item.doTransform(item, item.itemid - 2)
end

function Item.doDecay(item)
    doDecayItem(item.uid)
end

function Item.addOnUse(item, callback)
    table.insert(item.onUse, callback)
end

function Item.getOnUse(item)
    return item.onUse
end

function Item.addOnUseBefore(item, callback)
    table.insert(item.beforeUse, callback)
end

function Item.getOnUseBefore(item)
    return item.beforeUse
end

function Item.addOnUseFailure(item, callback)
    table.insert(item.onUseFailure, callback)
end

function Item.getOnUseFailure(item)
    return item.onUseFailure
end

---
-- @param item
-- @param direction
-- @see NORTH
--
function Item.doMove(item, direction)
    doTeleportThing(item.uid, getPositionByDirection(item.pos, direction))
end;