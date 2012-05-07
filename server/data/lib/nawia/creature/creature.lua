Creature = {}

function Creature.getByEntity(entity)
    entity.cid = entity.uid
    return entity
end

function Creature.getByCID(cid)
    return Creature.getByEntity(Entity.getByUID(cid))
end

--- Receive dmg from undefined source
-- @param creature damage receiver
-- @param type_dmg type of damage
-- @param amount table with min, and max keys for randomization, or integer value
-- @param magic_effect magic effect to show on creature after taking damage
-- @see COMBAT_NONE
-- @see CONST_ME_NONE
--
function Creature.doDamageReceive(creature, type_dmg, amount, magic_effect)
    local randomize = type (amount) == "table"
    local min = randomize and amount.min or amount
    local max = randomize and amount.max or amount
    doTargetCombatHealth(0, creature.cid, type_dmg, -min, -max, magic_effect)
end

--- Apply damage on another creature
-- @param creature damage issuer
-- @param target_creature damage receiver
-- @param type_dmg type of damage
-- @param amount table with min, and max keys for randomization, or integer value
-- @param magic_effect magic effect to show on creature after taking damage
-- @see COMBAT_NONE
-- @see CONST_ME_NONE
--
function Creature.doDamageGive(creature, target_creature, type_dmg, amount, magic_effect)
    local randomize = type (amount) == "table"
    local min = randomize and amount.min or amount
    local max = randomize and amount.max or amount
    doTargetCombatHealth(creature.cid, target_creature.cid, type_dmg, -min, -max, magic_effect)
end