Player = {}

function Player.getByCID(cid)
    local ret = Entity.getByUID(cid)
    ret.cid = cid
    return ret
end

function Player.doUse(player, action)
    if Usage.isInvokable(action, player) then
        Usage.doInvoke(action, player)
    else
        Usage.doFail(action, player)
    end
end

function Player.doRecvInfo(player, text)
    doPlayerSendTextMessage(player.cid, MESSAGE_INFO_DESCR, text)
end