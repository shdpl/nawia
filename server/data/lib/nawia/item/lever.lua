Lever =
{
    itemIdOff   = {1945, 9825, 9827, 10029},
    itemIdOn    = {1946, 9826, 9828, 10030}
}

function Lever.doSwitchOn(lever)
    Item.doTransformInc(lever);
    Item.doDecay(lever)
    return true
end

function Lever.doSwitchOff(lever)
    Item.doTransformDec(lever);
    Item.doDecay(lever)
    return true
end

function Lever.doSwitch(lever)
    return Lever.isOn(lever) and Lever.doSwitchOff(lever) or Lever.doSwitchOn(lever)
end

function Lever.doSwitchFailure(lever, player)
    Player.doRecvInfo(player, Translate.getString('It stuck.'))
end

function Lever.is(item)
    return Lever.isOn(item) or Lever.isOff(item)
end

function Lever.isOff(lever)
    return table.find(Lever.itemIdOff, lever.itemid)
end

function Lever.isOn(lever)
    return table.find(Lever.itemIdOn, lever.itemid)
end

function Lever.getByItem(item)
    Item.addOnUseFailure(item, Lever.doSwitchFailure)
    Item.addOnUse(item, Lever.doSwitch)
    return item;
end

function Lever.getByOTItem(otitem)
    return Lever.getByItem(Item.getByOTItem(otitem))
end