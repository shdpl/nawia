--- @return timestamp
function getOTSYSTime() end

--- @param string:key
function getConfigValue(key) end

--- @param [count]
function doRemoveItem(uid, count) end

--- @param food number of seconds
-- @return true on success, or false if cannot find player
function doPlayerFeed(cid, food) end

--- Send cancel message to player (when he cannot perform activity)
-- @return true on success, false if player not found
function doSendCancel(cid, text) end

--- Send one of predefined cancel messages
-- @param ReturnValue message id
-- @see RETURNVALUE_NOERROR
-- @return true on success, false if player not found
function doSendDefaultCancel(cid, ReturnValue) end

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
-- @param pos
-- @param type
-- @param player
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

--- Send animated text onto given position
-- @param pos target {x, y, z} position
-- @param text text string
-- @param color color id
-- @see TEXTCOLOR_BLUE
--
function doSendAnimatedText(pos, text, color) end

---
-- @param cid
-- @param itemid
-- @param text
--
function doShowTextDialog(cid, itemid, text) end

function doDecayItem(uid) end
function doCreateItem(itemid, typeOrCount, pos) end
--- @param [countOrSubtype]
function doCreateItemEx(itemid, countOrSubtype) end
function doCreateTeleport(itemid, topos, createpos) end
function doSummonCreature(name, pos) end
function doPlayerSummonCreature() end
function doRemoveCreature(cid) end
function doMoveCreature(cid, direction) end
function doSetCreatureDirection() end
function doCreatureSay(cid, text, type) end
function doCreatureAddHealth(cid, health) end

--- checks for creatures current light color
-- @return id of light color
function getCreatureLight(cid) end

--- return direction index, where creature is facing
-- @return constant representing creature direction
-- @see NORTH
function getCreatureLookDir(cid) end

function doPlayerAddInFightTicks() end
function doPlayerAddSkillTry(cid, skillid, n) end
function doPlayerAddManaSpent(cid, mana) end
function doPlayerAddMana(cid, mana) end
--- @param [countOrSubtype]
function doPlayerAddItem(uid, itemid, countOrSubtype) end
--- @param [useCidPosOnFail] default 0
function doPlayerAddItemEx(cid, uid, useCidPosOnFail) end
function doTileAddItemEx(pos, uid) end
function addContainerItemEx() end
function doRelocate() end
function doPlayerSendTextMessage(cid, MessageClasses, message) end
function doPlayerRemoveMoney(cid, money) end
function doPlayerAddMoney() end
function doPlayerWithdrawMoney() end
function doPlayerDepositMoney() end
function doPlayerTransferMoneyTo() end
function doPlayerSetMasterPos() end
function doPlayerSetTown(cid, townid) end
function doPlayerSetVocation(cid,voc) end

--- sets player sex
-- @param sex 0 for female, 1 for male
function doPlayerSetSex(cid, sex) end
function doPlayerRemoveItem(cid,itemid,count) end
function doPlayerAddSoul(cid, soul) end
function doPlayerAddExp(cid,exp) end
function doPlayerRemoveExp() end
function doPlayerSetGuildRank() end
function doPlayerSetGuildNick() end
function doSetCreatureLight(cid, lightLevel, lightColor, time) end
function doPlayerSetLossPercent() end
function doSetCreatureDropLoot(cid, doDrop) end
function getPlayerSkullType(cid) end
function setPlayerSkullType() end
function getPlayerSkullEndTime() end
function getPlayerUnjustKills() end
function doSendTutorial() end
function doAddMark() end
function getTownIdByName() end
function getTownNameById() end
function getTownTemplePosition() end
function doPlayerSendOutfitWindow() end
function getWaypointPositionByName() end

--queries
function getPlayerGUIDByName(name) end
function getPlayerByAccountNumber() end
function getAccountNumberByPlayerName() end
function getIPByPlayerName() end
function getPlayersByIPAddress() end

--get item info
function getItemRWInfo(uid) end
function getThingFromPos(pos) end
function getThing(uid) end
function getThingPos(uid) end
function getTileStackItemsSize() end
function getTileItemById() end
function getTileItemByType() end
function getTileThingByPos() end
function getTileThingByTopOrder() end
function getTopCreature() end
function getAllCreatures() end
function getThingDefaultDescription() end
function getItemTypeDefaultDescription() end
function getItemSpecialDescription() end

--set item
function doSetItemActionId(uid, actionid) end
function doSetItemText(uid, text) end
function doSetItemSpecialDescription(uid, desc) end

--get tile info
function getTilePzInfo(pos) end
function getTileHouseInfo(pos) end
-- @param [flags] abc
function queryTileAddThing(uid, pos, flags) end

--houses
function getHouseOwner(houseid) end
function getHouseName(houseid) end
function getHouseEntry(houseid) end
function getHouseRent(houseid) end
function getHouseTown(houseid) end
function getHouseAccessList(houseid, listid) end
function getHouseByPlayerGUID(playerGUID) end
function getHouseTilesSize() end
function getHouseDoorCount() end
function getHouseBedCount() end
function isHouseGuildHall() end
function setHouseOwner(houseid, ownerGUID) end
function setHouseAccessList(houseid, listid, listtext) end
function getHouseList() end
function cleanHouse() end

--- checks for how many seconds a player is full
-- @return time in seconds for which player is full
function getPlayerFood(cid) end

--- checks for players access
-- @return access
function getPlayerAccess(cid) end

--- checks current player level
-- @return players current level
function getPlayerLevel(cid) end

--- checks for current players magic level
-- @return magic level
function getPlayerMagLevel(cid) end

--- checks for current player mana points
-- @return players current mana
function getPlayerMana(cid) end

--- checks for player maximum mana points
-- @return players maximum mana
function getPlayerMaxMana(cid) end

--- checks for player skill value
-- @param cid creature id
-- @param skillid constant id of skill
-- @see CONST_SKILL_FIST
function getPlayerSkill(cid, skillid) end

--- checks for player vocation
-- @param cid
-- @return vocation id
function getPlayerVocation(cid) end

function getPlayerMasterPos() end

--- checks for town where player lives (respawns)
-- @return town id
function getPlayerTown(cid) end

--- checks for items inside players inventory
-- @return amount of items with given type
function getPlayerItemCount(cid, itemid) end

--- check for player current amount of soul points
-- @return number of SP
function getPlayerSoul(cid) end

--- check for players actual free capacity
-- @return number of OZ
function getPlayerFreeCap(cid) end

--- Checks for players item on given slot
-- @param cid character id
-- @param slot slot id
-- @see CONST_SLOT_HEAD
-- @return {itemid, uid, aid}, or 0 if no item
function getPlayerSlotItem(cid, slot) end

function getPlayerItemById() end

--- Checks for amount of player stored item tiles inside his depot
-- @return number of items including depot locker
function getPlayerDepotItems(cid, depotid) end

function getPlayerGuildId(cid) end
function getPlayerGuildName(cid) end

--- Checks players rank in guild
-- @return :string players rank
function getPlayerGuildRank(cid) end

function getPlayerGuildNick(cid) end
function getPlayerGuildLevel() end

--- Checks for player sex
-- @return 0 for female, 1 for male
function getPlayerSex(cid) end

--- Checks for player id
-- @return player id, or -1 if creature specified is not a player
function getPlayerGUID(cid) end

--- Check for specific player flag
-- @return true if on, false if off
-- @see PLAYERFLAG_CANNOTUSECOMBAT
function getPlayerFlagValue(cid, flag) end

function getPlayerLossPercent() end
function getPlayerPremiumDays(cid) end
function getPlayerAccountBalance() end
function getPlayerByNameWildcard(wildcard) end
function isPremium() end
function getPlayerLastLogin() end
function getPlayerExperience() end

function playerLearnInstantSpell(cid, name) end
function canPlayerLearnInstantSpell(cid, name) end
function getPlayerLearnedInstantSpell(cid, name) end
function getPlayerInstantSpellInfo(cid, index) end
function getPlayerInstantSpellCount(cid) end
function getInstantSpellInfoByName(cid, name) end
function getInstantSpellWords(name) end

function getPlayerStorageValue(sid) end
function setPlayerStorageValue(uid, sid, value) end
function doErasePlayerStorageValueByName() end
function setPlayerStorageValueByName() end
function getPlayerStorageValueByName() end
function doErasePlayerStorageValue() end

function getGlobalStorageValue() end
function setGlobalStorageValue() end
function doEraseGlobalStorageValue() end

function doPlayerAddOutfit(cid,looktype,addons) end
function doPlayerRemoveOutfit(cid,looktype,addons) end
function doPlayerAddOutfitEx() end
function doPlayerRemoveOutfitEx() end
function canPlayerWearOutfit() end

function isGmInvisible() end
function doPlayerToogleGmInvisible() end
function getPlayerAccountId() end
function doPlayerAddPremiumDays(cid, days) end
function doPlayerRemovePremiumDays(cid, days) end

function getFirstItemFromInventory() end
function getCreatureConditionInfo() end
function getCreatureCondition(cid, condition) end
function doPlayerSetStamina() end
function getPlayerStamina() end
function getPlayerModes() end
function doUpdateGuildWar() end

function getWorldType() end
function getWorldTime() end
function getWorldLight() end
function getWorldCreatures(type) end
function getWorldUpTime() end
function getPlayersOnlineList() end
function doPlayerBroadcastMessage(message, type) end
function getGuildId(guildName) end

--type validation
function isMonsterName() end
function isValidItemId() end
function isCreature(cid) end
function isContainer(uid) end
function isCorpse() end
function isMoveable(uid) end
function isValidUID() end

--container
function getContainerSize(uid) end
function getContainerCap(uid) end
function getContainerItem(uid, slot) end
--- @param [countOrSubtype]
function doAddContainerItem(uid, itemid, countOrSubtype) end
function getDepotId() end

-- bans
function addPlayerBan() end
function addAccountBan() end
function addIPBan() end
function removeAccountBan() end
function removePlayerBan() end
function removeIPBan() end
function getPlayerBanList() end
function getAccountBanList() end
function getIPBanList() end

--
function createCombatObject() end
--- @param [extArea]
function createCombatArea(area, extArea) end
function setCombatArea(combat, area) end
function setCombatCondition(combat, condition) end
function setCombatParam(combat, key, value) end
function createConditionObject(type) end
function setConditionParam(condition, key, value) end
function addDamageCondition(condition, rounds, time, value) end
function addOutfitCondition(condition, lookTypeEx, lookType, lookHead, lookBody, lookLegs, lookFeet) end

function setCombatCallBack(combat, key, functionName) end
function setCombatFormula(combat, type, mina, minb, maxa, maxb) end
function setConditionFormula(combat, mina, minb, maxa, maxb) end
function doCombat(cid, combat, param) end

function doAreaCombatHealth(cid, type, pos, area, min, max, effect) end
function doTargetCombatHealth(cid, target, type, min, max, effect) end

--
function doAreaCombatMana(cid, pos, area, min, max, effect) end
function doTargetCombatMana(cid, target, min, max, effect) end

function doAreaCombatCondition(cid, pos, area, condition, effect) end
function doTargetCombatCondition(cid, target, condition, effect) end

function doAreaCombatDispel(cid, pos, area, type, effect) end
function doTargetCombatDispel(cid, target, type, effect) end

function doChallengeCreature(cid, target) end
function doConvinceCreature(cid, target) end
function getMonsterTargetList() end
function getMonsterFriendList() end
function doSetMonsterTarget() end
function doMonsterChangeTarget() end
function doAddCondition() end
function doRemoveCondition() end

function numberToVariant() end
function stringToVariant() end
function positionToVariant() end
function targetPositionToVariant() end

function variantToNumber() end
function variantToString() end
function variantToPosition() end

function doChangeSpeed(cid, delta) end

function doCreatureChangeOutfit() end
function setCreatureOutfit(cid, outfit, time) end
function getCreatureOutfit(cid) end
function setMonsterOutfit(cid, name, time) end
function setItemOutfit(cid, item, time) end

--- checks for creature position
-- @return {x, y, z, stackpos} position, where stackpos is number of tiles below the player
function getCreaturePosition(cid) end

--- check creatures name
-- @return creature name
function getCreatureName(cid) end

function getCreatureSpeed(cid) end
function getCreatureBaseSpeed(cid) end
function getCreatureTarget(cid) end

--- check for creature current health points
-- @return current health points
function getCreatureHealth(cid) end

--- check for creature maximum health points
-- @return maximum health points
function getCreatureMaxHealth(cid) end

function getCreatureByName() end
function getCreatureMaster() end
function getCreatureSummons() end
function getSpectators() end
function getPartyMembers() end
function hasCondition() end

function isCreatureImmuneToCondition() end
function hasProperty() end
function isItemTwoHandedByUID() end
function isItemTwoHanded() end
function isItemStackable(itemid) end
function isItemRune(itemid) end
function isItemDoor(itemid) end
function isItemContainer(itemid) end
function isItemFluidContainer(itemid) end
function isItemMoveable(itemid) end
function getItemName(itemid) end
function getItemDescriptions() end
function getItemWeight(itemid, count) end
function getItemIdByName() end
function isSightClear() end
function getPlayerNameByGUID() end

function debugPrint(text) end
function isIntegerInArray(array, value) end
function getFluidSourceType() end
function addEvent(callback, delay, parameter) end
function stopEvent(eventid) end
function registerCreatureEvent(uid, eventName) end
function getDataDirectory() end
function doPlayerSetRate() end
function doPlayerSetVipLimit() end
function doPlayerSetDepotLimit() end
function isPzLocked() end
function doSaveServer() end
function doSetGameState() end
function doReloadInfo() end
function doRefreshMap() end
--
function getPlayerIp() end

function internalGetPlayerInfo() end

function isNpcName() end
function getMonsterParameter() end
function getNpcParameterByName() end

function getItemWeaponType() end
function getItemAttack() end
function getItemDefense() end
function getItemExtraDef() end
function getItemArmor() end
function getItemWeaponTypeByUID() end
function getItemAttackByUID() end
function getItemDefenseByUID() end
function getItemExtraDefByUID() end
function getItemArmorByUID() end