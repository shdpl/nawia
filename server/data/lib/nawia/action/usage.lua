Usage =
{
    get = function()
        local ret = Action.get();
        ret.onUseBefore  = {}
        ret.onUse        = {}
        ret.onUseFailure = {}
        return ret;
    end;

    getByItem = function(item)
        return Usage.inherit(Usage.get(), item)
    end;

    inherit = function(usage, item)
        Usage.inheritBefore(usage, item)
        Usage.inheritAction(usage, item)
        Usage.inheritFailure(usage, item)
        return usage
    end;

    inheritBefore = function(usage, item)
        usage.onUseBefore = List.concat(usage.onUseBefore, _.map(Item.getOnUseBefore(item), function(f) return {i=item, f=f} end))
    end;

    inheritAction = function(usage, item)
        usage.onUse = List.concat(usage.onUse, _.map(Item.getOnUse(item), function(f) return {i=item, f=f} end))
    end;

    inheritFailure = function(usage, item)
        usage.onUseFailure = List.concat(usage.onUseFailure, _.map(Item.getOnUseFailure(item), function(f) return {i=item, f=f} end))
    end;

    addBefore = function(usage, item, func)
        table.insert(usage.onUseBefore, {i=item, f=func})
    end;

    addAction = function(usage, item, func)
        table.insert(usage.onUse, {i=item, f=func})
    end;

    addFailure = function(usage, item, func)
        table.insert(usage.onUseFailure, {i=item, f=func})
    end;

    isInvokable = function(usage, player)
        for _,t in ipairs(usage.onUseBefore) do
            if false == t.f(t.i, player) then
                return false
            end
        end
        return true
    end;

    doInvoke = function(usage, player)
        for _,t in ipairs(usage.onUse) do
            t.f(t.i, player)
        end
    end;

    doFail = function(usage, player)
        for _,t in ipairs(usage.onUseFailure) do
            t.f(t.i, player)
        end
    end;
}