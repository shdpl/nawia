local combat = createCombatObject()
setCombatParam(combat, COMBAT_PARAM_DISTANCEEFFECT, CONST_ANI_EARTH)
setCombatParam(combat, COMBAT_PARAM_CREATEITEM, ITEM_WILDGROWTH) --if the server is non-pvp the server itself changes to the nonPvP version of the item

function onCastSpell(cid, var)
	return doCombat(cid, combat, var)
end