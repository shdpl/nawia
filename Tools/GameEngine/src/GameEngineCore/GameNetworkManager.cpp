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
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#include "GameNetworkManager.h"

#include "GameModules.h"
#include "GameWorld.h"
#include "GameEntity.h"

#include <GameEngine/GameLog.h>

#include "zlib/zlib.h"

enum PacketType {
	INVALID_PACKET,
	CONNECT,
	DISCONNECT,
	ACCEPT,
	STATE_UPDATE,
	DISCOVER,
	RES_DISCOVER
};

struct ClientRecord {
	SOCKADDR_IN		adress;
	size_t			client_id;
	size_t			client_tick;

	ClientRecord(SOCKADDR_IN cladr, size_t clid) {
		adress = cladr;
		client_id = clid;
		client_tick = 0;
	}
};

struct NetworkMessage {
	static const size_t MAXDATALENGTH = 65521;		// maximum usable amount of data = UDP max packet size minus 15 reserved bytes

	char message[65536];							// data field size = UDP max packet size
	Bytef compressed_data[72088];					// data field size = usable data size * 1.1 + 12 bytes;  additional bytes needed by zlib (de-)compression routine
	uLongf compressed_data_size;

	enum {
		OFFSET_IDENT = 0,
		OFFSET_CLIENTID = 4,
		OFFSET_TYPE = 8,
		OFFSET_DL = 9,
		OFFSET_TICK = 11,
		OFFSET_DATA = 15
	};

	// magic bytes
	inline bool isGameEngineMessage() {
		return (message[OFFSET_IDENT] == 'G')
			&& (message[OFFSET_IDENT + 1] == 'a')
			&& (message[OFFSET_IDENT + 2] == 'm')
			&& (message[OFFSET_IDENT + 3] == 'E');
	}

	inline bool isCompressed() {
		if (message[OFFSET_TYPE] & (char)0x80)
			return true;
		else
			return false;
	}

	PacketType getType() {
		return (PacketType) (message[OFFSET_TYPE] & (char)0x7F);
	}

	size_t getDataLength() {
		return
			((message[OFFSET_DL] & 0xFF) << 8) +
			(message[OFFSET_DL + 1] & 0xFF);
	}

	size_t getTotalLength() {
		return getDataLength() + OFFSET_DATA;
	}

	size_t getTick() {
		return
			((message[OFFSET_TICK] & 0xFF) << 24) +
			((message[OFFSET_TICK + 1] & 0xFF) << 16) +
			((message[OFFSET_TICK + 2] & 0xFF) << 8) +
			(message[OFFSET_TICK + 3] & 0xFF);
	}

	size_t getClientID() {
		return
			((message[OFFSET_CLIENTID] & 0xFF) << 24) +
			((message[OFFSET_CLIENTID + 1] & 0xFF) << 16) +
			((message[OFFSET_CLIENTID + 2] & 0xFF) << 8) +
			(message[OFFSET_CLIENTID + 3] & 0xFF);
	}

	void makeGameEngineMessage() {
		message[OFFSET_IDENT] = 'G';
		message[OFFSET_IDENT + 1] = 'a';
		message[OFFSET_IDENT + 2] = 'm';
		message[OFFSET_IDENT + 3] = 'E';
	}

	void setType(PacketType type) {
		message[OFFSET_TYPE] = type | (message[OFFSET_TYPE] & (char)0x80);
	}

	void setDataLength(unsigned short bytes) {
		message[OFFSET_DL] = bytes >> 8;
		message[OFFSET_DL + 1] = (char)bytes;
	}

	void setTick(size_t tick) {
		message[OFFSET_TICK] = tick >> 24;
		message[OFFSET_TICK + 1] = tick >> 16;
		message[OFFSET_TICK + 2] = tick >> 8;
		message[OFFSET_TICK + 3] = tick;
	}

	void setClientID(size_t clid) {
		message[OFFSET_CLIENTID] = clid >> 24;
		message[OFFSET_CLIENTID + 1] = clid >> 16;
		message[OFFSET_CLIENTID + 2] = clid >> 8;
		message[OFFSET_CLIENTID + 3] = clid;
	}

	inline char* data(int offset) {
		return &(message[OFFSET_DATA]) + offset;
	}

	void compressData() {
		if (getDataLength() == 0)
			return;

		compressed_data_size = 72088;
		int z_result = compress(compressed_data, &compressed_data_size, (const Bytef*)data(0), getDataLength());

		if (z_result != Z_OK) {
			printf(" NetworkManager: zlib compression failed!\n");
			return;
		} //else
			//printf(" NetworkManager: compressed %i data bytes to %i bytes.\n", getDataLength(), compressed_data_size);

		memcpy(data(0), compressed_data, compressed_data_size);
		setDataLength((unsigned short)compressed_data_size);

		message[OFFSET_TYPE] |= (char)0x80;		// set compressed flag
	}

	void decompressData() {
		if (getDataLength() == 0)
			return;

		memcpy(compressed_data, data(0), getDataLength());
		uLongf dataLength = MAXDATALENGTH;
		int z_result = uncompress((Bytef*)data(0), &dataLength, compressed_data, getDataLength());

		if (z_result != Z_OK) {
			printf(" NetworkManager: zlib decompression failed! Error Code = %i\n", z_result);
			return;
		}

		setDataLength((unsigned short)dataLength);

		message[OFFSET_TYPE] &= (char)0x7F;		// unset compressed flag
	}
};

GameNetworkManager::GameNetworkManager()
{
	m_currentState = GameEngine::INVALID_STATE;
	
	m_outgoing_message = new NetworkMessage();
	m_incoming_message = new NetworkMessage();
	
	m_outgoing_message->makeGameEngineMessage();

	m_buffer = new char[NetworkMessage::MAXDATALENGTH];
}

GameNetworkManager::~GameNetworkManager()
{
	release();
}

bool GameNetworkManager::init()
{
	GameLog::logMessage("Initializing GameNetworkManager. Using zlib version %s", ZLIB_VERSION);

	// init Winsock
	WSADATA wsa;
	if ( WSAStartup(MAKEWORD(2,0),&wsa) != 0) {
		GameLog::errorMessage("GameNetworkManager: Could not initialize Winsock.");
		return false;
	}

	// set up UDP socket
	if ( ( m_socket = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP) ) == INVALID_SOCKET ) {
		GameLog::errorMessage("GameNetworkManager: Could not create UDP socket.");
		return false;
	}

	// enable non-blocking
	unsigned long mode = 1;
	ioctlsocket(m_socket, FIONBIO, &mode);

	m_currentState = GameEngine::DISCONNECTED;

	m_sv_adress.sin_family = AF_INET;
	m_sv_adress.sin_addr.S_un.S_addr = INADDR_ANY;
	m_sv_adress.sin_port = htons(22888);

	m_sv_tickinterval = 5;

	m_cl_serveradress.sin_family = AF_INET;
	m_cl_serveradress.sin_port = htons(22888);

	m_cl_tickinterval = 5;

	m_useCompression = true;

	return true;
}

void GameNetworkManager::release()
{
	m_currentState = GameEngine::INVALID_STATE;

	// close UDP socket
	if ( m_socket != 0 )
		closesocket(m_socket);

	// release Winsock
	WSACleanup();

	// clean messages
	delete m_outgoing_message;
	delete m_incoming_message;

	// clean state buffer
	delete[] m_buffer;
}


void GameNetworkManager::setupServer() {
	if (m_currentState != GameEngine::DISCONNECTED) {
		printf(" NetworkManager: Failed to start Server!");
		return;
	}

	m_sv_tick = 0;

	// empty client IDs
	m_sv_clients.clear();

	m_sv_adress.sin_family = AF_INET;
	m_sv_adress.sin_port = htons(22888);
	m_sv_adress.sin_addr.S_un.S_addr = INADDR_ANY;
	m_sv_adress.sin_addr.S_un.S_addr = inet_addr("0.0.0.0");

	// bind socket
	bind(m_socket, (SOCKADDR*) &m_sv_adress, sizeof(SOCKADDR));

	m_currentState = GameEngine::SERVING;
}


void GameNetworkManager::connectToServer(const char* ip_addr) {

	m_cl_serveradress.sin_addr.S_un.S_addr = inet_addr(ip_addr);

	m_cl_tick = 0;
	m_cl_retrytimer = 10;

	// "bind" UDP socket
	connect(m_socket, (SOCKADDR*) &m_cl_serveradress, sizeof(SOCKADDR_IN));

	m_currentState = GameEngine::CONNECTING_TO_SERVER;
}

void GameNetworkManager::disconnect() {
	if (m_currentState == GameEngine::CONNECTED_TO_SERVER) {
		cl_disconnect();
	}
	
	if (m_currentState == GameEngine::SERVING) {
		// send goodbye messages to clients
		m_outgoing_message->setDataLength(0);
		m_outgoing_message->setTick(m_sv_tick);
		m_outgoing_message->setType(DISCONNECT);

		sv_broadcastOutgoingMessage();
	}
	
	m_currentState = GameEngine::DISCONNECTED;
}

void GameNetworkManager::update() {
	
	switch (m_currentState) {

		case GameEngine::SERVING:
			m_sv_tick++;
			sv_handleClientMessages();
			sv_testClientsTimeout();
			sv_transmitComponentStates();
			break;

		case GameEngine::CONNECTING_TO_SERVER:
			if (m_cl_retrytimer == 10) {
				m_cl_retrytimer = 0;
				// send/resend CONNECT message
				cl_connectToServer();
			} else
				m_cl_retrytimer++;

			cl_awaitAccept();			
			break;

		case GameEngine::CONNECTED_TO_SERVER:
			cl_transmitComponentStates();
			cl_handleServerMessages();
			break;

		default:
			break;
	}

}

void GameNetworkManager::cl_connectToServer() {
	m_outgoing_message->setType(CONNECT);
	m_outgoing_message->setDataLength(0);
	m_outgoing_message->setTick(m_cl_tick);

	send(m_socket, m_outgoing_message->message, m_outgoing_message->getTotalLength(), 0);
}

void GameNetworkManager::cl_disconnect() {
	m_outgoing_message->setType(DISCONNECT);
	m_outgoing_message->setDataLength(0);
	m_outgoing_message->setTick(m_cl_tick);

	send(m_socket, m_outgoing_message->message, m_outgoing_message->getTotalLength(), 0);
}

void GameNetworkManager::cl_awaitAccept() {
	//SOCKADDR_IN from_addr;
	//int from_len = sizeof(SOCKADDR_IN);

	while (recv(m_socket, m_incoming_message->message, 65536, 0) > 0) {

		if (!m_incoming_message->isGameEngineMessage())
			continue;

		if (m_incoming_message->getType() == ACCEPT) {
			// connection has been accepted by server
			m_cl_id = m_incoming_message->getClientID();
			m_currentState = GameEngine::CONNECTED_TO_SERVER;
			// set local tick to server's tick
			m_cl_tick = m_incoming_message->getTick();
		}
	}
}

void GameNetworkManager::cl_handleServerMessages() {
	//SOCKADDR_IN from_addr;
	//int from_len = sizeof(SOCKADDR_IN);

	while (recv(m_socket, m_incoming_message->message, 65536, 0) > 0) {

		if (!m_incoming_message->isGameEngineMessage())
			continue;

		if (m_incoming_message->getClientID() != m_cl_id)
			continue;

		switch (m_incoming_message->getType()) {

			case STATE_UPDATE:
				
				// discard if too old
				if (m_incoming_message->getTick() < m_cl_tick)
					break;
				else
				{
					m_cl_tick = m_incoming_message->getTick();

					if (m_incoming_message->isCompressed()) {
						m_incoming_message->decompressData();		// decompress message
						
						if (m_incoming_message->isCompressed())		// decompression failed
							continue;
					}
					
					size_t datacursor = 0;

					while (datacursor < m_incoming_message->getDataLength()) {
						size_t statelength = 0;
						memcpy(&statelength, m_incoming_message->data(datacursor), sizeof(size_t));		datacursor += sizeof(size_t);

						std::string entityID(m_incoming_message->data(datacursor));						datacursor += entityID.length() + 1;
						std::string componentID(m_incoming_message->data(datacursor));					datacursor += componentID.length() + 1;

						GameEntity* ge = GameModules::gameWorld()->entity(entityID);

						// discard if this is a component registered on this client
						if (m_cl_components.find(ge->component(componentID)) != m_cl_components.end()) {
							datacursor += statelength;
							continue;
						}

						// set component's state
						ge->component(componentID)->setSerializedState(m_incoming_message->data(datacursor), statelength);	datacursor += statelength;
					}
				}
				break;

			default:
				break;
		}
	}
}

void GameNetworkManager::cl_transmitComponentStates() {
	static size_t count = 0;

	// do nothing for m_cl_tickinterval frames
	if (++count != m_cl_tickinterval) {
		return;
	}

	count = 0;

	// compose a packet
	// this client's ID
	m_outgoing_message->setClientID(m_cl_id);

	// type
	m_outgoing_message->setType(STATE_UPDATE);

	// client tick
	m_outgoing_message->setTick(m_cl_tick);

	m_outgoing_message->setDataLength(0);

	size_t datacursor = 0;

	std::set<GameComponent*>::iterator comp_it = m_cl_components.begin();

	while (comp_it != m_cl_components.end()) {
		size_t state_length = (*comp_it)->getSerializedState(m_buffer);
		size_t componentID_length = (*comp_it)->componentID().length();
		size_t entityID_length = (*comp_it)->owner()->id().length();

		// does component provide game state?
		if (state_length > 0) {
			
			// check for NetworkMessage overflow
			if (datacursor + state_length > NetworkMessage::MAXDATALENGTH) {
				
				// transmit data and start a new package
				if (m_useCompression)
					m_outgoing_message->compressData();

				send(m_socket, m_outgoing_message->message, m_outgoing_message->getTotalLength(), 0);

				m_outgoing_message->setDataLength(0);
			}

			// update packet's data length
			m_outgoing_message->setDataLength(m_outgoing_message->getDataLength() + state_length + entityID_length + componentID_length + 2 + sizeof(size_t));

			// size of following state data (doesn't include length of NULL-terminated entity/component IDs
			memcpy(m_outgoing_message->data(datacursor), &state_length, sizeof(size_t));	datacursor += sizeof(size_t);

			// Entity ID
			strcpy(m_outgoing_message->data(datacursor), (*comp_it)->owner()->id().c_str());	datacursor += entityID_length + 1;

			// Component ID
			strcpy(m_outgoing_message->data(datacursor), (*comp_it)->componentID().c_str());	datacursor += componentID_length + 1;

			// Component's state
			memcpy(
				m_outgoing_message->data(datacursor), m_buffer, state_length);		datacursor += state_length;

		}

		comp_it++;
	}
	
	// send message to server
	if (m_useCompression)
		m_outgoing_message->compressData();

	send(m_socket, m_outgoing_message->message, m_outgoing_message->getTotalLength(), 0);
}


size_t GameNetworkManager::sv_addClient(SOCKADDR_IN client) {

	//std::vector<ClientRecord>::iterator it = m_sv_clients.begin();

	//while (it != m_sv_clients.end()) {
	//	if ((*it).adress.sin_addr.S_un.S_addr == client.sin_addr.S_un.S_addr)
	//		return;
	//	it++;
	//}

	size_t id = m_sv_clientid++;

	ClientRecord* cr = new ClientRecord(client, id);
	cr->client_tick = m_sv_tick;

	m_sv_clients.push_back(cr);

	return id;
}

void GameNetworkManager::sv_removeClient(size_t clientID) {
	std::vector<ClientRecord*>::iterator it = m_sv_clients.begin();

	while (it != m_sv_clients.end()) {
		if ((*it)->client_id == clientID) {
			delete (*it);
			m_sv_clients.erase(it);
			return;
		}
		it++;
	}
}

void GameNetworkManager::sv_handleClientMessages() {
	SOCKADDR_IN from_addr;
	int from_len = sizeof(SOCKADDR_IN);

	while (recvfrom(m_socket, m_incoming_message->message, 65536, 0, (SOCKADDR*) &from_addr, &from_len) > 0)   {

		// is it a GameEngine message?
		if (!m_incoming_message->isGameEngineMessage())
			continue;

		// determine message type
		switch (m_incoming_message->getType()) {
			size_t id;

			// someone is looking for servers
			case DISCOVER:
				m_outgoing_message->setType(RES_DISCOVER);
				m_outgoing_message->setClientID(0);
				m_outgoing_message->setDataLength(0);
				m_outgoing_message->setTick(m_sv_tick);
				sendto(m_socket, m_outgoing_message->message, m_outgoing_message->getTotalLength(), 0, (SOCKADDR*) &from_addr, sizeof(SOCKADDR_IN));
				break;

			// new client connects
			case CONNECT:
				id = sv_addClient(from_addr);
				m_outgoing_message->setType(ACCEPT);
				m_outgoing_message->setClientID(id);
				m_outgoing_message->setDataLength(0);
				m_outgoing_message->setTick(m_sv_tick);
				sendto(m_socket, m_outgoing_message->message, m_outgoing_message->getTotalLength(), 0, (SOCKADDR*) &from_addr, sizeof(SOCKADDR_IN));
				break;

			// client disconnects
			case DISCONNECT:
				sv_removeClient(m_incoming_message->getClientID());
				break;

			// client transmits the state of its entities
			case STATE_UPDATE:
				{
					size_t clientID = m_incoming_message->getClientID();

					ClientRecord* client = NULL;

					std::vector<ClientRecord*>::iterator it = m_sv_clients.begin();
					while (it != m_sv_clients.end()) {
						if ((*it)->client_id == clientID) {
							client = (*it);
							break;
						}
						it++;
					}

					if (client == NULL)		// client ID not found on server
						break;

					// discard if too old
					if (client->client_tick > m_incoming_message->getTick())
						break;

					client->client_tick = m_incoming_message->getTick();

					if (m_incoming_message->isCompressed()) {
						m_incoming_message->decompressData();		// decompress message

						if (m_incoming_message->isCompressed())		// decompression failed
							continue;
					}

					size_t datacursor = 0;

					while (datacursor < m_incoming_message->getDataLength()) {
						size_t statelength = 0;
						memcpy(&statelength, m_incoming_message->data(datacursor), sizeof(size_t));		datacursor += sizeof(size_t);

						std::string entityID(m_incoming_message->data(datacursor));						datacursor += entityID.length() + 1;
						std::string componentID(m_incoming_message->data(datacursor));					datacursor += componentID.length() + 1;

						GameEntity* ge = GameModules::gameWorld()->entity(entityID);

						// set component's state
						ge->component(componentID)->setSerializedState(m_incoming_message->data(datacursor), statelength);	datacursor += statelength;
					}
				}
				break;

			//case ALIVE:	obsolete, empty STATE_UDPATE acts as an ALIVE message
			//	break;

			default:
				break;
		}

	}
}

void GameNetworkManager::sv_testClientsTimeout() {
	static size_t count = 0;

	// do not test for m_sv_tickinterval frames
	if (++count != m_sv_tickinterval) {
		return;
	}

	count = 0;

	std::vector<ClientRecord*>::iterator it = m_sv_clients.begin();

	while (it != m_sv_clients.end()) {
		if (m_sv_tick - (*it)->client_tick > 600) {
			printf(" NetworkManager: Client at adress %s timed out and will be removed.\n", inet_ntoa((*it)->adress.sin_addr));
			delete (*it);
			it = m_sv_clients.erase(it);
		} else {
			it++;
		}
	}
}

void GameNetworkManager::sv_transmitComponentStates() {
	static size_t count = 0;

	// do nothing for m_sv_tickinterval frames
	if (++count != m_sv_tickinterval) {
		return;
	}

	count = 0;

	// compose a packet

	// type
	m_outgoing_message->setType(STATE_UPDATE);

	// server tick
	m_outgoing_message->setTick(m_sv_tick);

	m_outgoing_message->setDataLength(0);

	size_t datacursor = 0;

	std::set<GameComponent*>::iterator comp_it = m_sv_components.begin();

	while (comp_it != m_sv_components.end()) {
		size_t state_length = (*comp_it)->getSerializedState(m_buffer);
		size_t componentID_length = (*comp_it)->componentID().length();
		size_t entityID_length = (*comp_it)->owner()->id().length();

		// does component provide game state?
		if (state_length > 0) {
			
			// check for NetworkMessage overflow
			if (datacursor + state_length > NetworkMessage::MAXDATALENGTH) {
				
				// transmit data and start a new package
				sv_broadcastOutgoingMessage();

				m_outgoing_message->setDataLength(0);
			}

			// update packet's data length
			m_outgoing_message->setDataLength(m_outgoing_message->getDataLength() + state_length + entityID_length + componentID_length + 2 + sizeof(size_t));

			// size of following state data (doesn't include length of NULL-terminated entity/component IDs
			memcpy(m_outgoing_message->data(datacursor), &state_length, sizeof(size_t));	datacursor += sizeof(size_t);

			// Entity ID
			strcpy(m_outgoing_message->data(datacursor), (*comp_it)->owner()->id().c_str());	datacursor += entityID_length + 1;

			// Component ID
			strcpy(m_outgoing_message->data(datacursor), (*comp_it)->componentID().c_str());	datacursor += componentID_length + 1;

			// Component's state
			memcpy(
				m_outgoing_message->data(datacursor), m_buffer, state_length);		datacursor += state_length;

		}

		comp_it++;
	}
	
	// send message to clients
	sv_broadcastOutgoingMessage();
}

void GameNetworkManager::sv_broadcastOutgoingMessage() {
	if (m_useCompression)
		m_outgoing_message->compressData();

	// send the message to all clients
	std::vector<ClientRecord*>::iterator cl_it = m_sv_clients.begin();

	while (cl_it != m_sv_clients.end()) {
		m_outgoing_message->setClientID((*cl_it)->client_id);
		sendto(m_socket, m_outgoing_message->message, m_outgoing_message->getTotalLength(), 0, (SOCKADDR*) &((*cl_it)->adress), sizeof(SOCKADDR_IN));
		cl_it++;
	}
}

GameEngine::NetworkState GameNetworkManager::getState() {
	return m_currentState;
}

bool GameNetworkManager::registerServerComponent(GameComponent* component) {
	
	// no duplicates
	if (m_sv_components.find(component) == m_sv_components.end()) {
		m_sv_components.insert(component);
		return true;
	} else {
		return false;
	}
}

bool GameNetworkManager::deregisterServerComponent(GameComponent* component) {
	
	if (m_sv_components.find(component) != m_sv_components.end()) {
		m_sv_components.erase(component);
		return true;
	} else {
		return false;
	}
}

bool GameNetworkManager::registerClientComponent(GameComponent* component) {
	
	// no duplicates
	if (m_cl_components.find(component) == m_cl_components.end()) {
		m_cl_components.insert(component);
		return true;
	} else {
		return false;
	}
}

bool GameNetworkManager::deregisterClientComponent(GameComponent* component) {
	
	if (m_cl_components.find(component) != m_cl_components.end()) {
		m_cl_components.erase(component);
		return true;
	} else {
		return false;
	}
}

bool GameNetworkManager::setOption(GameEngine::NetworkOption option, const size_t value) {

	switch (option) {
		case GameEngine::SV_IP:
			if (m_currentState == GameEngine::DISCONNECTED) {
				m_sv_adress.sin_addr.S_un.S_addr = value;
				return true;
			} else {
				return false;
			}
			break;


		case GameEngine::SV_PORT:
			if (m_currentState == GameEngine::DISCONNECTED) {
				m_sv_adress.sin_port = htons(value);
				return true;
			} else {
				return false;
			}
			break;


		case GameEngine::SV_TICKRATE:
			m_sv_tickinterval = value;
			return true;


		case GameEngine::CL_SERVERPORT:
			if (m_currentState == GameEngine::DISCONNECTED) {
				m_cl_serveradress.sin_port = htons(value);
				return true;
			} else {
				return false;
			}
			break;


		case GameEngine::CL_TICKRATE:
			m_cl_tickinterval = value;
			return true;


		default:
			return false;
	}

	return false;
}

bool GameNetworkManager::setOption(GameEngine::NetworkOption option, const char *value) {

	switch (option) {
		case GameEngine::SV_IP:
			if (m_currentState == GameEngine::DISCONNECTED) {
				m_sv_adress.sin_addr.S_un.S_addr = inet_addr(value);
				return true;
			} else {
				return false;
			}
			break;


		default:
			return false;
	}

	return false;
}

bool GameNetworkManager::setOption(GameEngine::NetworkOption option, const bool value) {

	switch (option) {
		case GameEngine::USE_COMPRESSION:
			m_useCompression = value;
			return true;

		default:
			return false;
	}

	return false;
}