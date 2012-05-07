Switch =
{
    itemIdOff   = {416, 426, 11062},
    itemIdOn    = {417, 425, 11063}
}

function Switch.getByItem(item)
    Item.addOnUseBefore(item, Switch.doSwitch)
    return item
end

function Switch.getByOTItem(otitem)
    return Switch.getByItem(Item.getByOTItem(otitem))
end

function Switch.isOn(switch)
    return table.find(Switch.itemIdOn, switch.itemid) ~= nil
end

function Switch.isOff(switch)
    return table.find(Switch.itemIdOff, switch.itemid) ~= nil
end

function Switch.is(object)
    return Item.is(object) and ( Switch.isOn(object) or Switch.isOff(object) )
end

function Switch.doSwitch(switch)
    if Switch.isOn(switch) then
        Switch.doSwitchOff(switch)
    elseif Switch.isOff(switch) then
        Switch.doSwitchOn(switch)
    else
        assert(false)
    end
end

function Switch.doSwitchOn(switch)
    local idx = table.find(Switch.itemIdOff, switch.itemid)
    Item.doTransform(switch, Switch.itemIdOn[idx])
end

function Switch.doSwitchOff(switch)
    local idx = table.find(Switch.itemIdOn, switch.itemid)
    Item.doTransform(switch, Switch.itemIdOff[idx])
end