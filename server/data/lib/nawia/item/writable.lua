Writable =
{
    attributes = { 'text', 'writer', 'date' };

    clone = function(item, attributes)
        attributes = attributes ~= nil and List.concat(attributes, Writable.attributes) or Writable.attributes

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
    end;

    getByItem = function(item)
        return item
    end;

    getByOTItem = function(otitem)
        return Writable.getByItem(Item.getByOTItem(otitem))
    end;

    getText = function(item)
        return getItemAttribute(item.uid, "text");
    end;

    setText = function(item, text)
        --doSetItemText
        doItemSetAttribute(item.uid, "text", text)
    end;

    getAuthor = function(item)
        return getItemAttribute(item.uid, "writer");
    end;

    setAuthor = function(item, text)
        doItemSetAttribute(item.uid, "writer", tostring(text))
    end;

    getDate = function(item)
        return getItemAttribute(item.uid, "date");
    end;

    setDate = function(item, text)
        doItemSetAttribute(item.uid, "date", tonumber(text))
    end;
}