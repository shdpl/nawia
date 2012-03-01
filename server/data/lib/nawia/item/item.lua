Item = {}

function Item.getByOTItem(otitem)
    otitem.beforeUse = {}
    otitem.onUse = {}
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