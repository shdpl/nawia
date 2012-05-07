SecretPassage =
{
    itemIdNullItem = 1934;

    getByItem = function(item, originalItemId)
        Item.addOnUseBefore(item, SecretPassage.isSwitchable)
        Item.addOnUse(item, SecretPassage.doSwitch)
        item.originalItemId = originalItemId;
        return item
    end;

    doSwitch = function(passage, player)
        if SecretPassage.isOpen(passage, player) then
            SecretPassage.doClose(passage, player);
        else
            SecretPassage.doOpen(passage, player);
        end
    end;

    isSwitchable = function(passage, player)
        if SecretPassage.isClosed(passage, player) then
            return true
        end

        local tile = Tile.getByPos(passage.pos)
        return not Tile.hasEntityBlocking(tile)
    end;

    isOpen = function(passage, player)
        return passage.itemid == SecretPassage.itemIdNullItem;
    end;

    isClosed = function(passage, player)
        return not SecretPassage.isOpen(passage, player);
    end;

    doOpen = function(passage, player)
        Item.doTransform(passage, SecretPassage.itemIdNullItem);
    end;

    doClose = function(passage, player)
        Item.doTransform(passage, passage.originalItemId)
    end;
}