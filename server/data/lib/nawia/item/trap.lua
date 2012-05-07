Trap =
{
    prototype =
    {
        -- doPlayerSetLossPercent
        -- addDamageCondition
        animation = CONST_ANI_ARROW;
        damage = 30;

        --todo: if not isSightClear then target = ...
    }
}

function Trap.getByItem(item)
    _.extend(item, Trap.prototype)
    Item.addOnUse(item, Trap.doShoot)
    return item
end

function Trap.getByUID (uid)
    return Trap.getByItem(Item.getByUID(uid))
end

function Trap.doShoot(trap, creature)
    doSendDistanceShoot(trap.pos, creature.pos, trap.animation)
    Creature.doDamageReceive(creature, COMBAT_PHYSICALDAMAGE, trap.damage, CONST_ME_NONE)
end