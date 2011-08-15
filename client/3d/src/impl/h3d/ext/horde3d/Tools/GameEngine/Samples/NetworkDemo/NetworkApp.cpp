#include <iostream>

#include "NetworkApp.h"

#include "GameEngine/GameEngine.h"
#include "GameEngine/GameEngine_Network.h"
#include "GameEngine/GameEngine_SceneGraph.h"
#include "GameEngine/GameEngine_Animations.h"
#include "GameEngine/GameEngine_Sound.h"
#include "GameEngine/GameEngine_SAPI.h"
#include "GameEngine/GameEvent.h"
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <gl/gl.h>

extern "C"
{
	#include "Lua/lua.h"
	#include "Lua/lualib.h"
	#include "Lua/lauxlib.h"
}

using namespace std;

// static variables' definitions
set<string> NetworkApp::m_availablePlayers;
map<size_t,string> NetworkApp::m_assignedPlayers;
unsigned int NetworkApp::m_character = UINT_MAX;
char NetworkApp::m_sentence[100];

NetworkApp::NetworkApp() : m_running(true), m_L(0), m_networkStarted(false)
{
	memset(m_keys, 0, sizeof(m_keys));
	m_networkState = "";

	// make playable characters available
	NetworkApp::m_availablePlayers.insert("Player1");
	NetworkApp::m_availablePlayers.insert("Player2");
	NetworkApp::m_availablePlayers.insert("Player3");
	NetworkApp::m_availablePlayers.insert("Player4");
	NetworkApp::m_availablePlayers.insert("Player5");
	NetworkApp::m_availablePlayers.insert("Player6");
	NetworkApp::m_availablePlayers.insert("Player7");
}

NetworkApp::~NetworkApp()
{
	NetworkApp::m_availablePlayers.clear();

	NetworkApp::m_assignedPlayers.clear();

	GameEngine::release();
	if (m_L)
		lua_close( m_L );
}

bool NetworkApp::init(const char *fileName)
{
	if (!GameEngine::init()) return false;
	
	GameEngine::setNetworkOption(GameEngine::Network::APPLICATION_ID, "GameEngine Network Demo");
	
	if (GameEngine::loadScene(fileName))
	{

		m_camID = GameEngine::entityWorldID("camera");
		
		m_camRX =0;
		m_camRY =0;

		
		_fontMatRes = h3dAddResource( H3DResTypes::Material, "overlays/font.material.xml", 0 );
		_logoMatRes = h3dAddResource( H3DResTypes::Material, "overlays/logo.material.xml", 0 );
		h3dutLoadResourcesFromDisk( "." );

		return true;


	}
	else
		return false;	
}

void NetworkApp::startServer() {
	// only once
	if (m_networkStarted)
		return;

	m_networkStarted = true;

	GameEngine::startServer();

	// register callbacks to handle client connect/disconnect events
	GameEngine::registerCallbackOnClientConnect(clientConnectCb);
	GameEngine::registerCallbackOnClientDisconnect(clientDisconnectCb);
}

void NetworkApp::startClient() {
	// only once
	if (m_networkStarted)
		return;

	m_networkStarted = true;

	// the IP address we want to connect to
	const char* serverip = "127.0.0.1";

	GameEngine::connectToServer(serverip);

	// register a callback to handle upcoming state requests by the server
	GameEngine::registerCallbackOnStateRequest(stateRequestCb);
}

void NetworkApp::clientConnectCb(size_t clientID) {
	// A new client has connected. It has been assigned an unique client ID.
	// We can use this client ID to control the state updates transmitted by this client.
	// In conclusion, we can assign this client a character he will be able to control.
	
	if (NetworkApp::m_availablePlayers.size() == 0) {
		// bad news: no more player characters available
		printf(" NetworkDemo: Client rejected because no more players available.\n");
		GameEngine::removeClient(clientID);
		return;
	}

	string entityID = *(NetworkApp::m_availablePlayers.begin());
	NetworkApp::m_availablePlayers.erase(NetworkApp::m_availablePlayers.begin());
	
	NetworkApp::m_assignedPlayers.insert(pair<size_t,string>(clientID, entityID));

	// request state updates for this character's components from the client
	GameEngine::requestClientUpdate(clientID, entityID.c_str(), "Horde3D");
	GameEngine::requestClientUpdate(clientID, entityID.c_str(), "KeyframeAnimComponent");
	GameEngine::requestClientUpdate(clientID, entityID.c_str(), "Sound3D");
	GameEngine::requestClientUpdate(clientID, entityID.c_str(), "Sapi");

	// also, register components of this character to be distributed to all the clients
	GameEngine::startDistributing(entityID.c_str(), "Horde3D");
	GameEngine::startDistributing(entityID.c_str(), "KeyframeAnimComponent");
	GameEngine::startDistributing(entityID.c_str(), "Sound3D");
	GameEngine::startDistributing(entityID.c_str(), "Sapi");
}

void NetworkApp::clientDisconnectCb(size_t clientID) {
	// A client has disconnected from the server.
	// If a controllable character has already been assigned to this client,
	// it becomes available again.

	map<size_t,string>::iterator it = NetworkApp::m_assignedPlayers.find(clientID);

	if (it == NetworkApp::m_assignedPlayers.end())
		return;

	string entityID = it->second;

	NetworkApp::m_availablePlayers.insert(entityID);

	// as long as noone controls this character,
	// we don't have to distribute its components' states anymore
	GameEngine::stopDistributing(entityID.c_str(), "Horde3D");
	GameEngine::stopDistributing(entityID.c_str(), "KeyframeAnimComponent");
	GameEngine::stopDistributing(entityID.c_str(), "Sound3D");
	GameEngine::stopDistributing(entityID.c_str(), "Sapi");
}

void NetworkApp::stateRequestCb(std::string entityID, std::string componentID) {
	// The server has requested state updates for a certain entity/component.
	// This is how we know what character to control.

	m_character = GameEngine::entityWorldID(entityID.c_str());

	// arrange a personalized chat line to hit on other players ;-)
	sprintf_s(m_sentence, 100, "I am %s. Nice to meet you.", entityID.c_str());
}

void NetworkApp::keyHandler()
{		
	if( m_keys[118] )  // F7
	{
		h3dSetOption( H3DOptions::DebugViewMode, h3dGetOption(H3DOptions::DebugViewMode) != 0.0f ? 0 : 1.0f );	
		m_keys[118] = 0;
	}


	if ( m_keys['C'] )
		startClient();
		
	if( m_keys['X'] )
		startServer();

	if (m_keys[27]) {	// Esc
		GameEngine::disconnect();
		m_running = false;

	}

	// character controls

	if (m_character == UINT_MAX)
		return;

	if( m_keys['W'] ) 
		GameEngine::translateEntityLocal(m_character, 0, 0, 0.8f);
	if( m_keys['S'] ) 
		GameEngine::translateEntityLocal(m_character, 0, 0, -0.8f);
	if( m_keys['A'] )
		GameEngine::rotateEntityLocal(m_character, 0, 2.5f, 0);
	if( m_keys['D'] )
		GameEngine::rotateEntityLocal(m_character, 0, -2.5f, 0);

	if( m_keys['Q'] ) {
		if (!GameEngine::isPlaying(m_character, "wave")) {
			GameEngine::playAnim(m_character, "wave", 0 , 1.0, 3.0, 30.0, 0);
			GameEngine::setSoundGain(m_character, 1.0f);
		}
	}

	if( m_keys['E'] ) {
		if (!GameEngine::isSpeaking(m_character))
			GameEngine::speak(m_character, m_sentence);
	}

}

void NetworkApp::updateCamera() {
	if (m_character == UINT_MAX)
		return;

	// set camera right behind controlled character

	Matrix4f trans(GameEngine::getEntityTransformation(m_character));

	Vec3f t, r, s;

	trans.decompose(t, r, s);
	t.y += 2;
	t.x -= 2 * sin(r.y);
	t.z -= 2 * cos(r.y);

	GameEngine::setEntityTranslation(m_camID, t.x, t.y, t.z);
	GameEngine::setEntityRotation(m_camID, -10, r.y / Math::Pi * 180.0f - 180.0f, 0);
}

void NetworkApp::render()
{
	keyHandler();

	updateCamera();
	
	// print current network state
	switch (GameEngine::getNetworkState()) {
	case GameEngine::Network::DISCONNECTED:
		h3dutShowText( "Disconnected.", 0.01f, 0.02f, 0.04f, 1, 1, 1, _fontMatRes );
		h3dutShowText( "X - start server       C - connect to server", 0.01f, 0.94f, 0.04f, 1, 1, 1, _fontMatRes );
		// reset network controls
		m_character = UINT_MAX;
		m_networkStarted = false;
		break;

	case GameEngine::Network::CONNECTING_TO_SERVER:
		h3dutShowText( "Connecting to server...", 0.01f, 0.02f, 0.04f, 1, 1, 1, _fontMatRes );
		break;

	case GameEngine::Network::CONNECTED_TO_SERVER:
		h3dutShowText( "Connected to server.", 0.01f, 0.02f, 0.04f, 1, 1, 1, _fontMatRes );
		h3dutShowText( "[W,A,S,D] - move       Q - greet       E - talk", 0.01f, 0.94f, 0.04f, 1, 1, 1, _fontMatRes );
		break;

	case GameEngine::Network::SERVING:
		h3dutShowText( "Server is running.", 0.01f, 0.02f, 0.04f, 1, 1, 1, _fontMatRes );
		break;

	default:
		m_networkState = "";
		break;
	}
	
	GameEngine::update();
	
	h3dutDumpMessages();

}

void NetworkApp::keyboardCb(unsigned int param, bool pressed, void *userData)
{
	NetworkApp* app = static_cast<NetworkApp*>(userData);
	if (app)
	{
		app->m_keys[param] = pressed ? 1 : 0;
	}
}

void NetworkApp::mouseButtonCb(float x, float y, void *userData)
{
}

void NetworkApp::mouseCb(float x, float y, void *userData)
{
}

void NetworkApp::renderCb(void *userData)
{
	NetworkApp* app = static_cast<NetworkApp*>(userData);
	if (app) app->render();
}

void NetworkApp::resizeCb(void* userData, int width, int height)
{	
	//h3dSetupViewport(0, 0, width, height, true);

	NetworkApp* app = static_cast<NetworkApp*>(userData);
	H3DNode camID = GameEngine::entitySceneGraphID( app->m_camID );
	h3dSetNodeParamI( camID, H3DCamera::ViewportXI, 0 );
	h3dSetNodeParamI( camID, H3DCamera::ViewportYI, 0 );
	h3dSetNodeParamI( camID, H3DCamera::ViewportWidthI, width );
	h3dSetNodeParamI( camID, H3DCamera::ViewportHeightI, height );	
	h3dResizePipelineBuffers( h3dGetNodeParamI( camID, H3DCamera::PipeResI ), width, height );
}
