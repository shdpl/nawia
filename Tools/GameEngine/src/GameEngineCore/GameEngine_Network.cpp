// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// This file is part of the GameEngine developed at the 
// Lab for Multimedia Concepts and Applications of the University of Augsburg
//
// This software is distributed under the terms of the Eclipse Public License v1.0.
// A copy of the license may be obtained at: http://www.eclipse.org/legal/epl-v10.html
//
// *************************************************************************************************
//


// ****************************************************************************************
//
// GameEngine Core Library of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2011 Christoph Nuscheler
// 
// ****************************************************************************************

#include "GameEngine_Network.h"

#include "GameWorld.h"
#include "GameEntity.h"
#include "GameLog.h"

#include "GameModules.h"
#include "GamePlugInManager.h"
#include "GameNetworkManager.h"
#include "GameComponentRegistry.h"
#include "TimingManager.h"

#include <XmlParser/utXmlParser.h>
#include <direct.h>


namespace GameEngine
{
	GAMEENGINE_API void GameEngine::connectToServer(const char* ip_addr) {
		GameModules::networkManager()->connectToServer(ip_addr);
	}

	GAMEENGINE_API void GameEngine::startServer() {
		GameModules::networkManager()->setupServer();
	}

	GAMEENGINE_API void GameEngine::disconnect() {
		GameModules::networkManager()->disconnect();
	}

	GAMEENGINE_API bool GameEngine::registerComponentOnServer(const char* entityID, const char* componentID) {
		GameEntity* ge = GameModules::gameWorld()->entity(entityID);
		
		if (!ge)
			return false;

		GameComponent* gc = ge->component(componentID);

		if (!gc)
			return false;

		return GameModules::networkManager()->registerServerComponent(gc);
	}
	
	GAMEENGINE_API bool GameEngine::deregisterComponentOnServer(const char* entityID, const char* componentID) {
		GameEntity* ge = GameModules::gameWorld()->entity(entityID);
		
		if (!ge)
			return false;

		GameComponent* gc = ge->component(componentID);

		if (!gc)
			return false;

		return GameModules::networkManager()->deregisterServerComponent(gc);
	}

	GAMEENGINE_API bool GameEngine::registerComponentOnClient(const char* entityID, const char* componentID) {
		GameEntity* ge = GameModules::gameWorld()->entity(entityID);
		
		if (!ge)
			return false;

		GameComponent* gc = ge->component(componentID);

		if (!gc)
			return false;

		return GameModules::networkManager()->registerClientComponent(gc);
	}
	
	GAMEENGINE_API bool GameEngine::deregisterComponentOnClient(const char* entityID, const char* componentID) {
		GameEntity* ge = GameModules::gameWorld()->entity(entityID);
		
		if (!ge)
			return false;

		GameComponent* gc = ge->component(componentID);

		if (!gc)
			return false;

		return GameModules::networkManager()->deregisterClientComponent(gc);
	}

	GAMEENGINE_API void GameEngine::allowClientUpdate(size_t clientID, const char* entityID, const char* componentID) {
		GameModules::networkManager()->allowClientUpdate(clientID, entityID, componentID);
	}

	GAMEENGINE_API void GameEngine::disallowClientUpdate(size_t clientID, const char* entityID, const char* componentID) {
		GameModules::networkManager()->disallowClientUpdate(clientID, entityID, componentID);
	}

	GAMEENGINE_API void GameEngine::registerCallbackOnClientConnect(void (*callback)(size_t)) {
		GameModules::networkManager()->registerCallbackOnClientConnect(callback);
	}

	GAMEENGINE_API void GameEngine::registerCallbackOnClientDisconnect(void (*callback)(size_t)) {
		GameModules::networkManager()->registerCallbackOnClientDisconnect(callback);
	}

	GAMEENGINE_API GameEngine::Network::NetworkState GameEngine::getNetworkState() {
		return GameModules::networkManager()->getState();
	}

	GAMEENGINE_API bool GameEngine::setNetworkOption(GameEngine::Network::NetworkOption option, const size_t value) {
		return GameModules::networkManager()->setOption(option, value);
	}

	GAMEENGINE_API bool GameEngine::setNetworkOption(GameEngine::Network::NetworkOption option, const char* value) {
		return GameModules::networkManager()->setOption(option, value);
	}

	GAMEENGINE_API bool GameEngine::setNetworkOption(GameEngine::Network::NetworkOption option, const bool value) {
		return GameModules::networkManager()->setOption(option, value);
	}

	GAMEENGINE_API bool removeClient(const size_t clientID) {
		return GameModules::networkManager()->removeClient(clientID);
	}
}
