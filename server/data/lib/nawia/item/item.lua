Item = {}

function Item.getByOTItem(otitem)
    otitem.beforeUse    = {}
    otitem.onUse        = {}
    otitem.onUseFailure = {}
    return otitem;
end

function Item.doTransformInc(item)
    doTransformItem(item.uid, item.itemid + 1)

    if item.actionid ~= 0 then
        doSetItemActionId(item.uid, item.actionid)
    end
end

function Item.doTransformDec(item)
    doTransformItem(item.uid, item.itemid - 1)

    if item.actionid ~= 0 then
        doSetItemActionId(item.uid, item.actionid)
    end
end

function Item.doTransformInc2(item)
    doTransformItem(item.uid, item.itemid + 2)

    if item.actionid ~= 0 then
        doSetItemActionId(item.uid, item.actionid)
    end
end

function Item.doTransformDec2(item)
    doTransformItem(item.uid, item.itemid - 2)

    if item.actionid ~= 0 then
        doSetItemActionId(item.uid, item.actionid)
    end
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