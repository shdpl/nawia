function getOTSYSTime() end
function getConfigValue() end
function doRemoveItem() end
function doFeedPlayer() end
function doSendCancel() end
function doSendDefaultCancel() end
function doPlayerSetIdleTime() end
function doTeleportThing() end
function doTransformItem() end
function doSendMagicEffect() end
function doSendDistanceShoot() end
function doChangeTypeItem() end
function doSendAnimatedText() end
function doShowTextWindow() end
function doShowTextDialog() end
function doDecayItem() end
function doCreateItem() end
function doCreateItemEx() end
function doCreateTeleport() end
function doSummonCreature() end
function doPlayerSummonCreature() end
function doRemoveCreature() end
function doMoveCreature() end
function doSetCreatureDirection() end
function doCreatureSay() end
function doCreatureAddHealth() end
function getCreatureLight() end
function getCreatureLookDir() end

function doPlayerAddInFightTicks() end
function doPlayerAddSkillTry() end
function doPlayerAddManaSpent() end
function doPlayerAddMana() end
function doPlayerAddItem() end
function doPlayerAddItemEx() end
function doTileAddItemEx() end
function addContainerItemEx() end
function doRelocate() end
function doPlayerSendTextMessage() end
function doPlayerRemoveMoney() end
function doPlayerAddMoney() end
function doPlayerWithdrawMoney() end
function doPlayerDepositMoney() end
function doPlayerTransferMoneyTo() end
function doPlayerSetMasterPos() end
function doPlayerSetTown() end
function doPlayerSetVocation() end
function doPlayerSetSex() end
function doPlayerRemoveItem() end
function doPlayerAddSoul() end
function doPlayerAddExp() end
function doPlayerRemoveExp() end
function doPlayerSetGuildRank() end
function doPlayerSetGuildNick() end
function doSetCreatureLight() end
function doPlayerSetLossPercent() end
function doSetCreatureDropLoot() end
function getPlayerSkullType() end
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
function getPlayerGUIDByName() end
function getPlayerByAccountNumber() end
function getAccountNumberByPlayerName() end
function getIPByPlayerName() end
function getPlayersByIPAddress() end

--get item info
function getItemRWInfo() end
function getThingFromPos() end
function getThing() end
function getThingPos() end
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
function doSetItemActionId() end
function doSetItemText() end
function doSetItemSpecialDescription() end

--get tile info
function getTilePzInfo() end
function getTileHouseInfo() end
function queryTileAddThing() end

--houses
function getHouseOwner() end
function getHouseName() end
function getHouseEntry() end
function getHouseRent() end
function getHouseTown() end
function getHouseAccessList() end
function getHouseByPlayerGUID() end
function getHouseTilesSize() end
function getHouseDoorCount() end
function getHouseBedCount() end
function isHouseGuildHall() end
function setHouseOwner() end
function setHouseAccessList() end
function getHouseList() end
function cleanHouse() end

--get player info functions
function getPlayerFood() end
function getPlayerAccess() end
function getPlayerLevel() end
function getPlayerMagLevel() end
function getPlayerMana() end
function getPlayerMaxMana() end
function getPlayerSkill() end
function getPlayerVocation() end
function getPlayerMasterPos() end
function getPlayerTown() end
function getPlayerItemCount() end
function getPlayerSoul() end
function getPlayerFreeCap() end
function getPlayerSlotItem() end
function getPlayerItemById() end
function getPlayerDepotItems() end
function getPlayerGuildId() end
function getPlayerGuildName() end
function getPlayerGuildRank() end
function getPlayerGuildNick() end
function getPlayerGuildLevel() end
function getPlayerSex() end
function getPlayerGUID() end
function getPlayerFlagValue() end
function getPlayerLossPercent() end
function getPlayerPremiumDays() end
function getPlayerAccountBalance() end
function getPlayerByNameWildcard() end
function isPremium() end
function getPlayerLastLogin() end
function getPlayerExperience() end

function playerLearnInstantSpell() end
function canPlayerLearnInstantSpell() end
function getPlayerLearnedInstantSpell() end
function getPlayerInstantSpellInfo() end
function getPlayerInstantSpellCount() end
function getInstantSpellInfoByName() end
function getInstantSpellWords() end

function getPlayerStorageValue() end
function setPlayerStorageValue() end
function doErasePlayerStorageValueByName() end
function setPlayerStorageValueByName() end
function getPlayerStorageValueByName() end
function doErasePlayerStorageValue() end

function getGlobalStorageValue() end
function setGlobalStorageValue() end
function doEraseGlobalStorageValue() end

function doPlayerAddOutfit() end
function doPlayerRemoveOutfit() end
function doPlayerAddOutfitEx() end
function doPlayerRemoveOutfitEx() end
function canPlayerWearOutfit() end

function isGmInvisible() end
function doPlayerToogleGmInvisible() end
function getPlayerAccountId() end
function doPlayerAddPremiumDays() end
function doPlayerRemovePremiumDays() end

function getFirstItemFromInventory() end
function getCreatureConditionInfo() end
function getCreatureCondition() end
function doPlayerSetStamina() end
function getPlayerStamina() end
function getPlayerModes() end
function doUpdateGuildWar() end

function getWorldType() end
function getWorldTime() end
function getWorldLight() end
function getWorldCreatures() end
function getWorldUpTime() end
function getPlayersOnlineList() end
function doPlayerBroadcastMessage() end
function getGuildId() end

--type validation
function isMonsterName() end
function isValidItemId() end
function isCreature() end
function isContainer() end
function isCorpse() end
function isMoveable() end
function isValidUID() end

--container
function getContainerSize() end
function getContainerCap() end
function getContainerItem() end
function doAddContainerItem() end
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
function createCombatArea() end
function setCombatArea() end
function setCombatCondition() end
function setCombatParam() end
function createConditionObject() end
function setConditionParam() end
function addDamageCondition() end
function addOutfitCondition() end

function setCombatCallBack() end
function setCombatFormula() end
function setConditionFormula() end
function doCombat() end

function doAreaCombatHealth() end
function doTargetCombatHealth() end

--
function doAreaCombatMana() end
function doTargetCombatMana() end

function doAreaCombatCondition() end
function doTargetCombatCondition() end

function doAreaCombatDispel() end
function doTargetCombatDispel() end

function doChallengeCreature() end
function doConvinceCreature() end
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

function doChangeSpeed() end

function doCreatureChangeOutfit() end
function setCreatureOutfit() end
function getCreatureOutfit() end
function setMonsterOutfit() end
function setItemOutfit() end
function getCreaturePosition() end
function getCreatureName() end
function getCreatureSpeed() end
function getCreatureBaseSpeed() end
function getCreatureTarget() end
function getCreatureHealth() end
function getCreatureMaxHealth() end
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
function isItemStackable() end
function isItemRune() end
function isItemDoor() end
function isItemContainer() end
function isItemFluidContainer() end
function isItemMoveable() end
function getItemName() end
function getItemDescriptions() end
function getItemWeight() end
function getItemIdByName() end
function isSightClear() end
function getPlayerNameByGUID() end

function debugPrint() end
function isIntegerInArray() end
function getFluidSourceType() end
function addEvent() end
function stopEvent() end
function registerCreatureEvent() end
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