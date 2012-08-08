-- A couple of type definitions

---
-- @param x uint
-- @param y uint
-- @param z uint
--
function makePos(x, y, z)
    return { x=x, y=y, z=z }
end

---
-- @param x uint
-- @param y uint
-- @param z uint
-- @param stackpos uint
--
function makePosEx(x, y, z, stackpos)
    local ret = makePos(x,y,z)
    ret["stackpos"] = stackpos
    return ret
end

---
-- @param type uint
-- @param head uint
-- @param body uint
-- @param legs uint
-- @param feet uint
-- @param item uint
-- @param addons uint
--
function makeOutfit(type, head, body, legs, feet, item, addons)
    return { type=type, head=head, body=body, legs=legs, feet=feet, item=item, addons=addons }
end


--- @return timestamp
function getOTSYSTime() end

--- @param string:key
function getConfigValue(key) end

--- checks for how many seconds a player is full
-- @return time in seconds for which player is full
function getPlayerFood(cid) end

--- checks for current player mana points
-- @return players current mana
function getPlayerMana(cid) end

--- checks for player maximum mana points
-- @return players maximum mana
function getPlayerMaxMana(cid) end

--- checks current player level
-- @return players current level
function getPlayerLevel(cid) end

--- checks for current players magic level
-- @return magic level
function getPlayerMagLevel(cid) end

--- checks for players access
-- @return access
function getPlayerAccess(cid) end

--- checks for player skill value
-- @param cid creature id
-- @param skillid constant id of skill
-- @see CONST_SKILL_FIST
function getPlayerSkill(cid, skillid) end

---
-- @param cid
--
function getPlayerMasterPos(cid) end

--- checks for town where player lives (respawns)
-- @return town id
function getPlayerTown(cid) end

--- checks for player vocation
-- @param cid
-- @return vocation id
function getPlayerVocation(cid) end

--- checks for items inside players inventory
-- @return amount of items with given type
function getPlayerItemCount(cid, itemid, subtype) end

--- check for player current amount of soul points
-- @return number of SP
function getPlayerSoul(cid) end

--- check for players actual free capacity
-- @return number of OZ
function getPlayerFreeCap(cid) end

---
--
function getPlayerIp() end

--- checks for creatures current light color
-- @return id of light color
function getCreatureLight(cid) end

--- return direction index, where creature is facing
-- @return constant representing creature direction
-- @see NORTH
function getCreatureLookDir(cid) end

--- Checks for players item on given slot
-- @param cid character id
-- @param slot slot id
-- @see CONST_SLOT_HEAD
-- @return {itemid, uid, aid}, or 0 if no item
function getPlayerSlotItem(cid, slot) end

---
-- @param cid
-- @param deepSearch
-- @param itemId
-- @param [subType]
--
function getPlayerItemById(cid, deepSearch, itemId, subType) end

--- Checks for amount of player stored item tiles inside his depot
-- @return number of items including depot locker
function getPlayerDepotItems(cid, depotid) end

---
-- @param cid
--
function getPlayerGuildId(cid) end

---
-- @param cid
--
function getPlayerGuildName(cid) end

--- Checks players rank in guild
-- @return :string players rank
function getPlayerGuildRank(cid) end

---
-- @param cid
--
function getPlayerGuildNick(cid) end

---
-- @param cid
--
function getPlayerGuildLevel(cid) end

--- Checks for player sex
-- @return 0 for female, 1 for male
function getPlayerSex(cid) end

--- Checks for player id
-- @return player id, or -1 if creature specified is not a player
function getPlayerGUID(cid) end

---
-- @param guid
--
function getPlayerNameByGUID(guid) end

--- Check for specific player flag
-- @return true if on, false if off
-- @see PLAYERFLAG_CANNOTUSECOMBAT
function getPlayerFlagValue(cid, flag) end

---
-- @param cid
-- @param lossType
--
function getPlayerLossPercent(cid, lossType) end

---
-- @param cid
--
function getPlayerPremiumDays(cid) end

---
-- @param cid
-- @param [viewer]
--
function getPlayerSkullType(cid, viewer) end

---
-- @param cid
-- @param skull_type
--
function setPlayerSkullType(cid, skull_type) end

---
-- @param cid
--
function getPlayerSkullEndTime(cid) end

---
-- @param cid
--
function getPlayerUnjustKills(cid) end

---
-- @param cid
--
function getPlayerAccountBalance(cid) end

---
-- @param wildcard name
--
function getPlayerByNameWildcard(wildcard) end

---
-- @param cid
-- @param name
--
function playerLearnInstantSpell(cid, name) end

---
-- @param cid
-- @param name
--
function canPlayerLearnInstantSpell(cid, name) end

---
-- @param cid
-- @param name
--
function getPlayerLearnedInstantSpell(cid, name) end

---
-- @param cid
-- @param index
--
function getPlayerInstantSpellInfo(cid, index) end

---
-- @param cid
--
function getPlayerInstantSpellCount(cid) end

---
-- @param cid
-- @param name
--
function getInstantSpellInfoByName(cid, name) end

---
-- @param name
--
function getInstantSpellWords(name) end

---
-- @param sid
--
function getPlayerStorageValue(sid) end

---
-- @param uid
-- @param sid
-- @param value
--
function setPlayerStorageValue(uid, sid, value) end

---
-- @param name
-- @param key valueId
--
function doErasePlayerStorageValue(name, key) end

---
-- @param cid
--
function isPremium(cid) end

---
-- @param cid
--
function getPlayerLastLogin(cid) end

---
-- @param valueid
--
function getGlobalStorageValue(valueid) end

---
-- @param valueid
-- @param newvalue
--
function setGlobalStorageValue(valueid, newvalue) end

---
-- @param key valueId
--
function doEraseGlobalStorageValue(key) end

---
-- @param name
-- @param key
--
function doErasePlayerStorageValueByName(name, key) end

---
-- @param name
-- @param key
-- @param newValue
--
function setPlayerStorageValueByName(name, key, newValue) end

---
-- @param name
-- @param key
--
function getPlayerStorageValueByName(name, key) end

---
-- @param pos
--
function getTilePzInfo(pos) end

---
-- @param pos
--
function getTileHouseInfo(pos) end

---
-- @param uid
-- @return flags (1 - readable, 2 - writable)
--
function getItemRWInfo(uid) end

---
-- @param uid
-- @param lookDistance
-- @param [canSeeXRay] default false
--
function getThingDefaultDescription(uid, lookDistance, canSeeXRay) end

---
-- @param itemid
-- @param [count]
--
function getItemTypeDefaultDescription(itemid, count) end

---
-- @param uid
--
function getItemSpecialDescription(uid) end

---
-- @param pos
--
function getThingFromPos(pos) end

---
-- @param uid
--
function getThing(uid) end

---
-- @param uid
-- @param pos
-- @param [flags]
--
function queryTileAddThing(uid, pos, flags) end

---
-- @param uid
--
function getThingPos(uid) end

---
-- @param pos
--
function getTileStackItemsSize(pos) end

--- Get item with specific type from given position
-- @param pos
-- @param itemId
-- @param [subType]
-- @returns item
--
function getTileItemById(pos, itemId, subType) end

---
-- @param pos
-- @param type
-- @see ITEM_TYPE_NONE
--
function getTileItemByType(pos, type) end

---
-- @param pos
--
function getTileThingByPos(pos) end

---
-- @param pos
-- @param topOrder
-- @deprecated
--
function getTileThingByTopOrder(pos, topOrder) end

---
-- @param pos
-- BUGGED: as of 2012-05-06
--
function getTopCreature(pos) end

---
-- @param pos
-- @param [flag]
--
function getAllCreatures(pos, flag) end

---
-- @param name
--
function getWaypointPositionByName(name) end

--- @param [count]
function doRemoveItem(uid, count) end

--- @param food number of seconds
-- @return true on success, or false if cannot find player
function doPlayerFeed(cid, food) end

--- Send cancel message to player (when he cannot perform activity)
-- @return true on success, false if player not found
function doPlayerSendCancel(cid, text) end

--- Send one of predefined cancel messages
-- @param ReturnValue message id
-- @see RETURNVALUE_NOERROR
-- @return true on success, false if player not found
function doPlayerSendDefaultCancel(cid, ReturnValue) end

---
-- @param cid
-- @param time timestamp
-- @param warned true if player has been warned, false otherwise
-- @return bool:success
--
function doPlayerSetIdleTime(cid, time, warned) end

--- Teleport item or creature
-- @param uid
-- @param newpos {x, y, z} target position
-- @return true on success, false otherwise
--
function doTeleportThing(uid, newpos) end

--- Transform item into something else
-- @param uid
-- @param toitemid
-- @param [countOrSubtype]
-- @return bool:success
--
function doTransformItem(uid, toitemid, countOrSubtype) end

---
-- @param cid
-- @param text
-- @param type
--
function doCreatureSay(cid, text, type) end
---
-- @param pos
-- @param type
-- @param [player]
--
function doSendMagicEffect(pos, type, player) end

--- Send shoot animation
-- @param frompos where is shoot from
-- @param topos where is shoot to
-- @param type projectile type
-- @see CONST_ANI_SPEAR
--
function doSendDistanceShoot(frompos, topos, type) end

--- Change item type
-- @param uid id of item to change
-- @param newtype new item type
-- @see doTransformItem
--
function doChangeTypeItem(uid, newtype) end

---
-- @param uid
-- @param actionid
--
function doSetItemActionId(uid, actionid) end

---
-- Set text of i.e. book
-- @param uid
-- @param text
--
function doSetItemText(uid, text) end

---
-- @param uid
-- @param desc
--
function doSetItemSpecialDescription(uid, desc) end

--- Send animated text onto given position
-- @param pos target {x, y, z} position
-- @param text text string
-- @param color color id
-- @see TEXTCOLOR_BLUE
--
function doSendAnimatedText(pos, text, color) end

---
-- @param cid
-- @param ticks
-- @param [pzLock] default 0
--
function doPlayerAddInFightTicks(cid, ticks, pzLock) end

---
-- @param cid
-- @param skillid
-- @param [useMultiplier] default 0
--
function doPlayerAddSkillTry(cid, skillid, useMultiplier) end

---
-- @param cid
-- @param mana
-- @param [useMultiplier] default 0
--
function doPlayerAddManaSpent(cid, mana, useMultiplier) end

---
-- @param cid
-- @param health
-- @param [filter] default 0
--
function doCreatureAddHealth(cid, health, filter) end

---
-- @param cid
-- @param mana
-- @param [withoutAnimation] default 1
--
function doPlayerAddMana(cid, mana, withoutAnimation) end

---
-- @param cid
-- @param soul
--
function doPlayerAddSoul(cid, soul) end

---
-- @param uid
-- @param itemid
-- @param [countOrSubtype] default 1
--
function doPlayerAddItem(uid, itemid, countOrSubtype) end

---
-- @param cid
-- @param itemid
-- @param [count] default 1
-- @param [canDropOnMap] default 1
-- @param [subtype] default 1
--
-- @return uid of the created item
--
function doPlayerAddItem(uid, itemid, count, canDropOnMap, subtype) end

---
-- @param cid
-- @param uid
-- @param [canDropOnMap] default 0
-- @param [slot]
--
function doPlayerAddItemEx(cid, uid, canDropOnMap, slot) end

---
-- @param cid
-- @param MessageClasses
-- @param message
--
function doPlayerSendTextMessage(cid, MessageClasses, message) end

---
-- @param cid
-- @param money
--
function doPlayerRemoveMoney(cid, money) end

---
-- @param cid
-- @param money
--
function doPlayerAddMoney(cid, money) end

---
-- @param cid
-- @param money
--
function doPlayerWithdrawMoney(cid, money) end

---
-- @param cid
-- @param money
--
function doPlayerDepositMoney(cid, money) end

---
-- @param cid
-- @param target
-- @param money
--
function doPlayerTransferMoneyTo(cid, target, money) end

---
-- @param cid
-- @param maxlen
-- @param canWrite
--
function doShowTextWindow(cid, maxlen, canWrite) end

---
-- @param cid
-- @param itemid
-- @param text
--
function doShowTextDialog(cid, itemid, text) end

---
-- @param cid
-- @param tutorialid
--
function doSendTutorial(cid, tutorialid) end

---
-- @param cid
--
function doPlayerSendOutfitWindow(cid) end

---
-- @param cid
-- @param pos
-- @param type
-- @param [description]
--
function doAddMapMark(cid, pos, type, description) end

---
-- @param townName
--
function getTownIdByName(townName) end

---
-- @param townId
--
function getTownNameById(townId) end

---
-- @param townId
--
function getTownTemplePosition(townId) end

---
-- @param uid
--
function doDecayItem(uid) end

---
-- @param itemid
-- @param [typeOrCount] don't ask me why it is optional and pos isn't...
-- @param pos
-- @return uid of the created item
--
function doCreateItem(itemid, typeOrCount, pos) end

---
-- @param itemid
-- @param [countOrSubtype]
-- @return uid of created item
--
function doCreateItemEx(itemid, countOrSubtype) end

---
-- @param pos
-- @param uid
--
function doTileAddItemEx(pos, uid) end

---
-- @param uid
-- @param virtuid
--
function doAddContainerItemEx(uid, virtuid) end

--- Moves all objects from pos to posTo
-- (limited by the value of maxAmount - so only the first maxAmount items are
-- relocated even if there are too many items at the tile - it is important to prevent lag if there are too many items)
-- It also move ALL creatures from pos to posTo (it doesn't matter how many creatures there are in the tile).
-- @param pos
-- @param posTo
-- @param [moveUnmoveable] default false
-- @param [maxAmount] default 0
--
function doRelocate(pos, posTo, moveUnmoveable, maxAmount) end

---
-- @param itemid
-- @param topos
-- @param createpos
--
function doCreateTeleport(itemid, topos, createpos) end

---
-- @param name
-- @param pos
-- @param [extendedPosition]
-- @param [forceSpawn]
-- @return cid
--
function doSummonCreature(name, pos, extendedPosition, forceSpawn) end
---
-- @param cid
-- @param name
-- @param pos
-- @param [extendedPosition]
-- @param [forceSpawn]
--
function doPlayerSummonCreature(cid, name, pos, extendedPosition, forceSpawn) end

---
-- @param cid
--
function doRemoveCreature(cid) end

---
-- @param cid
-- @param direction
-- @param [flags]
--
function doMoveCreature(cid, direction, flags) end

---
-- @param cid
-- @param direction
--
function doSetCreatureDirection(cid, direction) end

---
-- @param cid
-- @param pos
--
function doPlayerSetMasterPos(cid, pos) end

---
-- @param cid
-- @param townid
--
function doPlayerSetTown(cid, townid) end

---
-- @param cid
-- @param voc
--
function doPlayerSetVocation(cid,voc) end

--- sets player sex
-- @param sex 0 for female, 1 for male
function doPlayerSetSex(cid, sex) end

---
-- @param cid
-- @param itemid
-- @param [count]
-- @param [subtype]
-- @param [ignoreEquipped]
--
function doPlayerRemoveItem(cid,itemid,count,subtype,ignoreEquipped) end

---
-- @param cid
-- @param exp
-- @param [useRate] default 0
-- @param [useMultiplier] default 0
--
function doPlayerAddExp(cid,exp,useRate,useMultiplier) end

---
-- @param cid
-- @param exp
-- @param [useRate] default 0
-- @param [useMultiplier] default 0
--
function doPlayerRemoveExp(cid, exp, useRate, useMultiplier) end

---
-- @param cid
--
function getPlayerExperience(cid) end

---
-- @param cid
-- @param rank
--
function doPlayerSetGuildRank(cid, rank) end

---
-- @param cid
-- @param nick
--
function doPlayerSetGuildNick(cid, nick) end

---
-- @param cid
-- @param looktype
-- @param addons
--
function doPlayerAddOutfit(cid,looktype,addons) end

---
-- @param cid
-- @param looktype
-- @param addons
--
function doPlayerRemoveOutfit(cid,looktype,addons) end

---
-- @param cid
-- @param outfitid
-- @param addons
--
function doPlayerAddOutfitEx(cid, outfitid, addons) end

---
-- @param cid
-- @param outfitid
-- @param [addons]
--
function doPlayerRemoveOutfitEx(cid, outfitid, addons) end

---
-- @param cid
-- @param looktype
-- @param addon
--
function canPlayerWearOutfit(cid, looktype, addon) end

---
-- @param cid
-- @param lightLevel
-- @param lightColor
-- @param time
--
function doSetCreatureLight(cid, lightLevel, lightColor, time) end

---
-- @param cid
-- @param lossType
-- @param newPercent
--
function doPlayerSetLossPercent(cid, lossType, newPercent) end

---
-- @param cid
-- @param doDrop
--
function doSetCreatureDropLoot(cid, doDrop) end

---
-- @param uid
--
function isValidUID(uid) end

---
-- @param cid
-- @param conditionType
--
function isCreatureImmuneToCondition(cid, conditionType) end

---
-- @param cid
--
function isCreature(cid) end

---
-- @param uid
--
function isItemTwoHandedByUID(uid) end

---
-- @param itemid
--
function isItemTwoHanded(itemid) end

---
-- @param uid
--
function isContainer(uid) end

---
-- @param uid
--
function isCorpse(uid) end

---
-- @param uid
--
function isMoveable(uid) end

---
-- @param name
--
function getPlayerGUIDByName(name) end

---
-- @param uid
-- @param eventName
--
function registerCreatureEvent(uid, eventName) end

---
-- @param uid
--
function getContainerSize(uid) end

---
-- @param uid
--
function getContainerCap(uid) end

---
-- @param uid
-- @param slot
--
function getContainerItem(uid, slot) end

---
-- @param uid
-- @param itemid
-- @param [countOrSubtype]
--
function doAddContainerItem(uid, itemid, countOrSubtype) end

---
-- @param uid
--
function getDepotId(uid) end

---
-- @param houseid
--
function getHouseOwner(houseid) end

---
-- @param houseid
--
function getHouseName(houseid) end

---
-- @param houseid
--
function getHouseEntry(houseid) end

---
-- @param houseid
--
function getHouseRent(houseid) end

---
-- @param houseid
--
function getHouseTown(houseid) end

---
-- @param houseid
-- @param listid
--
function getHouseAccessList(houseid, listid) end

---
-- @param playerGUID
--
function getHouseByPlayerGUID(playerGUID) end

---
-- @param houseid
--
function getHouseTilesSize(houseid) end

---
-- @param houseid
--
function getHouseDoorCount(houseid) end

---
-- @param houseid
--
function getHouseBedCount(houseid) end

---
-- @param houseid
--
function isHouseGuildHall(houseid) end

---
-- @param houseid
-- @param listid
-- @param listtext
--
function setHouseAccessList(houseid, listid, listtext) end

---
-- @param houseid
-- @param ownerGUID
--
function setHouseOwner(houseid, ownerGUID) end

---
-- @param townid default 0
--
function getHouseList(townid) end

---
-- @param houseid
--
function cleanHouse(houseid) end

---
--
function getWorldType() end

---
--
function getWorldTime() end

---
--
function getWorldLight() end

---
-- @param type 0 players, 1 monsters, 2 npcs, 3 all
--
function getWorldCreatures(type) end

---
--
function getWorldUpTime() end

---
--
function getPlayersOnlineList() end

---
-- @param message
-- @param type
--
function doPlayerBroadcastMessage(message, type) end

---
-- @param guildName
--
function getGuildId(guildName) end

---
-- @param area
-- @param [extArea]
--
function createCombatArea(area, extArea) end

---
-- @param type
--
function createConditionObject(type) end

---
-- @param combat
-- @param area
--
function setCombatArea(combat, area) end

---
-- @param combat
-- @param condition
--
function setCombatCondition(combat, condition) end

---
-- @param combat
-- @param key
-- @param value
--
function setCombatParam(combat, key, value) end

---
-- @param condition
-- @param key
-- @param value
--
function setConditionParam(condition, key, value) end

---
-- @param condition
-- @param rounds
-- @param time
-- @param value
--
function addDamageCondition(condition, rounds, time, value) end

---
-- @param condition
-- @param lookTypeEx
-- @param lookType
-- @param lookHead
-- @param lookBody
-- @param lookLegs
-- @param lookFeet
--
function addOutfitCondition(condition, lookTypeEx, lookType, lookHead, lookBody, lookLegs, lookFeet) end

---
-- @param combat
-- @param key
-- @param functionName
--
function setCombatCallBack(combat, key, functionName) end

---
-- @param combat
-- @param type
-- @param mina
-- @param minb
-- @param maxa
-- @param maxb
--
function setCombatFormula(combat, type, mina, minb, maxa, maxb) end

---
-- @param combat
-- @param mina
-- @param minb
-- @param maxa
-- @param maxb
--
function setConditionFormula(combat, mina, minb, maxa, maxb) end

---
-- @param cid
-- @param combat
-- @param param
--
function doCombat(cid, combat, param) end

---
--
function createCombatObject() end

---
-- @param cid
-- @param type
-- @param pos
-- @param area
-- @param min
-- @param max
-- @param effect
--
function doAreaCombatHealth(cid, type, pos, area, min, max, effect) end

---
-- @param cid dmg issuer
-- @param target dmg receiver
-- @param type type of damage
-- @param min
-- @param max
-- @param effect
-- @see COMBAT_
--
function doTargetCombatHealth(cid, target, type, min, max, effect) end

---
-- @param cid
-- @param pos
-- @param area
-- @param min
-- @param max
-- @param effect
--
function doAreaCombatMana(cid, pos, area, min, max, effect) end

---
-- @param cid
-- @param target
-- @param min
-- @param max
-- @param effect
--
function doTargetCombatMana(cid, target, min, max, effect) end

---
-- @param cid
-- @param pos
-- @param area
-- @param condition
-- @param effect
--
function doAreaCombatCondition(cid, pos, area, condition, effect) end

---
-- @param cid
-- @param target
-- @param condition
-- @param effect
--
function doTargetCombatCondition(cid, target, condition, effect) end

---
-- @param cid
-- @param pos
-- @param area
-- @param type
-- @param effect
--
function doAreaCombatDispel(cid, pos, area, type, effect) end

---
-- @param cid
-- @param target
-- @param type
-- @param effect
--
function doTargetCombatDispel(cid, target, type, effect) end

---
-- @param cid
-- @param target
--
function doChallengeCreature(cid, target) end

---
-- @param cid
-- @param target
--
function doConvinceCreature(cid, target) end

---
-- @param cid
--
function getMonsterTargetList(cid) end

---
-- @param cid
--
function getMonsterFriendList(cid) end

---
-- @param cid
-- @param target
--
function doSetMonsterTarget(cid, target) end

---
-- @param cid
--
function doMonsterChangeTarget(cid) end

---
-- @param cid
-- @param condition
--
function doAddCondition(cid, condition) end

---
-- @param cid
-- @param type
-- @param [subId]
--
function doRemoveCondition(cid, type, subId) end

---
-- @param number
--
function numberToVariant(number) end

---
-- @param string
--
function stringToVariant(string) end

---
-- @param pos
--
function positionToVariant(pos) end

---
-- @param pos
--
function targetPositionToVariant(pos) end

---
-- @param var
--
function variantToNumber(var) end

---
-- @param var
--
function variantToString(var) end

---
-- @param var
--
function variantToPosition(var) end

---
-- @param cid
-- @param delta
--
function doChangeSpeed(cid, delta) end

---
-- @param cid
-- @param outfit
--
function doCreatureChangeOutfit(cid, outfit) end

---
-- @param cid
-- @param outfit
-- @param time
--
function setCreatureOutfit(cid, outfit, time) end

---
-- @param cid
--
function getCreatureOutfit(cid) end

--- checks for creature position
-- @return {x, y, z, stackpos} position, where stackpos is number of tiles below the player
function getCreaturePosition(cid) end

--- check creatures name
-- @return creature name
function getCreatureName(cid) end

---
-- @param cid
--
function getCreatureSpeed(cid) end

---
-- @param cid
--
function getCreatureBaseSpeed(cid) end

---
-- @param cid
--
function getCreatureTarget(cid) end

--- check for creature current health points
-- @return current health points
function getCreatureHealth(cid) end

--- check for creature maximum health points
-- @return maximum health points
function getCreatureMaxHealth(cid) end

---
-- @param name
--
function getCreatureByName(name) end

--- returns the creature's master or itself if the creature isn't a summon
-- @param cid
--
function getCreatureMaster(cid) end

--- returns a table with all the summons of the creature
-- @param cid
--
function getCreatureSummons(cid) end

---
-- @param centerPos
-- @param rangex
-- @param rangey
-- @param multifloor
--
function getSpectators(centerPos, rangex, rangey, multifloor) end

---
-- @param cid
--
function getPartyMembers(cid) end

---
-- @param cid
-- @param conditionid
--
function hasCondition(cid, conditionid) end

---
-- @param uid
-- @param prop
-- @see CONST_PROP_BLOCKSOLID
--
function hasProperty(uid, prop) end

---
-- @param itemid
--
function isItemStackable(itemid) end

---
-- @param itemid
--
function isItemRune(itemid) end

---
-- @param itemid
--
function isItemDoor(itemid) end

---
-- @param itemid
--
function isItemContainer(itemid) end

---
-- @param itemid
--
function isItemFluidContainer(itemid) end

---
-- @param itemid
--
function isItemMoveable(itemid) end

---
-- @param itemid
--
function getItemName(itemid) end

---
-- @return item.name, item.plural, item.article
function getItemDescriptions(uid) end

---
-- @param itemid
--
function getItemWeight(itemid) end

---
-- @param name
--
function getItemIdByName(name) end

---
-- @param fromPos
-- @param toPos
-- @param floorCheck
--
function isSightClear(fromPos, toPos, floorCheck) end

---
-- @param type
--
function getFluidSourceType(type) end

---
-- @param array
-- @param value
--
function isIntegerInArray(array, value) end

---
-- @param callback
-- @param delay
--
function addEvent(callback, delay, ...) end

---
-- @param eventid
--
function stopEvent(eventid) end

---
-- @param playerName
-- @param [length]
-- @param [admin]
-- @param [comment]
--
function addPlayerBan(playerName, length, admin, comment) end

---
-- @param accno
-- @param [length]
-- @param [admin]
-- @param [comment]
--
function addAccountBan(accno, length, admin, comment) end

---
-- @param ip
-- @param [mask]  default 0xFFFFFFFF
-- @param [length] default 0
-- @param [admin] default 0
-- @param [comment] default "No Comment"
--
function addIPBan(ip, mask, length, admin, comment) end

---
-- @param playerName
--
function removePlayerBan(playerName) end

---
-- @param accno
--
function removeAccountBan(accno) end

---
-- @param accno
--
function removeIPBan(accno) end

---
--
function getPlayerBanList() end

---
--
function getAccountBanList() end

---
--
function getIPBanList() end

---
-- @param accountNumber
--
function getPlayerByAccountNumber(accountNumber) end

---
-- @param cid
--
function getPlayerAccountId(cid) end

---
-- @param name
--
function getAccountNumberByPlayerName(name) end

---
-- @param name
--
function getIPByPlayerName(name) end

---
-- @param ip
--
function getPlayersByIPAddress(ip) end

---
--
function getDataDir() end

---
-- @param cid
-- @param item
-- @param time
--
function setItemOutfit(cid, item, time) end

---
-- @param cid
-- @param type
-- @param value
--
function doPlayerSetRate(cid, type, value) end

---
-- @param cid
-- @param quantity
--
function doPlayerSetVipLimit(cid, quantity) end

---
-- @param cid
-- @param quantity
--
function doPlayerSetDepotLimit(cid, quantity) end

---
-- @param cid
--
function isPzLocked(cid) end

---
-- @param payHouses
--
function doSaveServer(payHouses) end

---
-- @param gameState
--
function doSetGameState(gameState) end

---
-- @param info
--
function doReloadInfo(info) end

---
--
function doRefreshMap() end

---
-- @param text
--
function debugPrint(text) end

---
-- @param name
--
function isMonsterName(name) end

---
-- @param itemid
--
function isValidItemId(itemid) end

---
-- @param name
--
function isNpcName(name) end

---
-- @param name
-- @param key
--
function getMonsterParameter(name, key) end

---
-- @param name
-- @param key
--
function getNpcParameterByName(name, key) end

---
-- @param itemid
-- @see WEAPON_NONE
--
function getItemWeaponType(itemid) end

---
-- @param itemid
--
function getItemAttack(itemid) end

---
-- @param itemid
--
function getItemDefense(itemid) end

---
-- @param itemid
--
function getItemExtraDef(itemid) end

---
-- @param itemid
--
function getItemArmor(itemid) end

---
-- @param uid
--
function getItemWeaponTypeByUID(uid) end

---
-- @param uid
--
function getItemAttackByUID(uid) end

---
-- @param uid
--
function getItemDefenseByUID(uid) end

---
-- @param uid
--
function getItemExtraDefByUID(uid) end

---
-- @param uid
--
function getItemArmorByUID(uid) end


db = {}
---
-- @param query
--
function db.query(query) end

---
-- @param query
--
function db.storeQuery(query) end

---
-- @param string
--
function db.escapeString(string) end

---
-- @param s
-- @param length
--
function db.escapeBlob(s, length) end

function db.lastInsertId() end

function db.stringComparer() end

function db.updateLimiter() end

function db.connected() end

---
-- @param name
--
function db.tableExists(name) end

function db.transBegin() end

function db.transRollback() end

function db.transCommit() end

result = {}

---
-- @param resId
-- @param s
--
function result.getDataInt(resId, s) end

---
-- @param resId
-- @param s
--
function result.getDataLong(resId, s) end

---
-- @param resId
-- @param s
--
function result.getDataString(resId, s) end

---
-- @param resId
-- @param s
-- @param length
--
function result.getDataStream(resId, s, length) end

---
-- @param resId
--
function result.next(resId) end

---
-- @param resId
--
function result.free(resId) end

bit = {}

---
-- @param value
--
function bit.bnot(value) end

---
-- @param value
--
function bit.band(value) end

---
-- @param value
--
function bit.bor(value) end

---
-- @param value
--
function bit.bxor(value) end

---
-- @param value
--
function bit.lshift(value) end

---
-- @param value
--
function bit.rshift(value) end


---
-- @param value
--
function bit.ubnot(value) end

---
-- @param value
--
function bit.uband(value) end

---
-- @param value
--
function bit.ubor(value) end

---
-- @param value
--
function bit.ubxor(value) end

---
-- @param value
--
function bit.ulshift(value) end

---
-- @param value
--
function bit.urshift(value) end

---
-- @param cid
--
function isGmInvisible(cid) end

---
-- @param cid
--
function doPlayerToogleGmInvisible(cid) end

---
-- @param cid
-- @param days
--
function doPlayerAddPremiumDays(cid, days) end

---
-- @param cid
-- @param days
--
function doPlayerRemovePremiumDays(cid, days) end

---
-- @param cid
-- @param idOrName
-- @param [reportError]
--
function getFirstItemFromInventory(cid, idOrName, reportError) end

---
-- @param cid
-- @param conditionType
-- @param [subId] default 0
-- @param [conditionId] default CONDITIONID_DEFAULT
-- @see CONDITIONID_DEFAULT
--
function getCreatureConditionInfo(cid, conditionType, subId, conditionId) end

---
-- @param cid
-- @param conditionType
-- @param [subId] default 0
-- @param [conditionId] default CONDITIONID_DEFAULT
-- @see CONDITIONID_DEFAULT
--
function getCreatureCondition(cid, conditionType) end

---
-- @param cid
--
function getPlayerStamina(cid) end

---
-- @param cid
-- @param minutes
--
function doPlayerSetStamina(cid, minutes) end

---
-- @param cid
--
function getPlayerModes(cid) end

---
-- @param warId
--
function doUpdateGuildWar(warId) end

---
-- @param cid
--
function doSavePlayer(cid) end