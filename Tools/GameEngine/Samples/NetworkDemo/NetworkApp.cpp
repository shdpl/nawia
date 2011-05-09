#include <iostream>

#include "NetworkApp.H"

#include "GameEngine/GameEngine.h"
#include "GameEngine/GameEngine_Network.h"
#include "GameEngine/GameEngine_SceneGraph.h"
#include "GameEngine/GameEngine_Animations.h"
#include "GameEngine/GameEngine_Sound.h"
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

NetworkApp::NetworkApp() : m_running(true), m_L(0), m_networkStarted(false)
{
	memset(m_keys, 0, sizeof(m_keys));
	m_controlledChar = "";
	m_character = UINT_MAX;
	m_networkState = "";
}

NetworkApp::~NetworkApp()
{
	GameEngine::release();
	if (m_L)
		lua_close( m_L );
}

void NetworkApp::startServer() {
	// only once
	if (m_networkStarted)
		return;

	m_networkStarted = true;

	// register components of all playable characters on server
	GameEngine::registerComponentOnServer("Player1", "Horde3D");
	GameEngine::registerComponentOnServer("Player1", "KeyframeAnimComponent");
	GameEngine::registerComponentOnServer("Player1", "Sound3D");

	GameEngine::registerComponentOnServer("Player2", "Horde3D");
	GameEngine::registerComponentOnServer("Player2", "KeyframeAnimComponent");
	GameEngine::registerComponentOnServer("Player2", "Sound3D");

	GameEngine::registerComponentOnServer("Player3", "Horde3D");
	GameEngine::registerComponentOnServer("Player3", "KeyframeAnimComponent");
	GameEngine::registerComponentOnServer("Player3", "Sound3D");

	GameEngine::registerComponentOnServer("Player4", "Horde3D");
	GameEngine::registerComponentOnServer("Player4", "KeyframeAnimComponent");
	GameEngine::registerComponentOnServer("Player4", "Sound3D");

	GameEngine::registerComponentOnServer("Player5", "Horde3D");
	GameEngine::registerComponentOnServer("Player5", "KeyframeAnimComponent");
	GameEngine::registerComponentOnServer("Player5", "Sound3D");

	GameEngine::registerComponentOnServer("Player6", "Horde3D");
	GameEngine::registerComponentOnServer("Player6", "KeyframeAnimComponent");
	GameEngine::registerComponentOnServer("Player6", "Sound3D");

	GameEngine::registerComponentOnServer("Player7", "Horde3D");
	GameEngine::registerComponentOnServer("Player7", "KeyframeAnimComponent");
	GameEngine::registerComponentOnServer("Player7", "Sound3D");

	GameEngine::disconnect();

	GameEngine::startServer();

}

void NetworkApp::startClient(const char* character) {
	// only once
	if (m_networkStarted)
		return;

	m_character = GameEngine::entityWorldID(character);

	const char* serverip = "127.0.0.1";

	m_networkStarted = true;

	// register components of user-controlled character on client
	GameEngine::registerComponentOnClient(character, "Horde3D");
	GameEngine::registerComponentOnClient(character, "KeyframeAnimComponent");
	GameEngine::registerComponentOnClient(character, "Sound3D");

	GameEngine::disconnect();
	GameEngine::connectToServer(serverip);
}

bool NetworkApp::init(const char *fileName)
{
	if (!GameEngine::init()) return false;
	

	
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

void NetworkApp::keyHandler()
{		
	if( m_keys[118] )  // F7
	{
		h3dSetOption( H3DOptions::DebugViewMode, h3dGetOption(H3DOptions::DebugViewMode) != 0.0f ? 0 : 1.0f );	
		m_keys[118] = 0;
	}


	if ( m_keys['1'] ) {
		startClient("Player1");
	}
		
	if ( m_keys['2'] ) {
		startClient("Player2");
	}
		
	if ( m_keys['3'] ) {
		startClient("Player3");
	}
		
	if ( m_keys['4'] ) {
		startClient("Player4");
	}
		
	if ( m_keys['5'] ) {
		startClient("Player5");
	}
		
	if ( m_keys['6'] ) {
		startClient("Player6");
	}

	if ( m_keys['7'] ) {
		startClient("Player7");
	}

	if( m_keys['X'] )
		startServer();

	if (m_keys[27]) {	// Esc
		GameEngine::disconnect();
		m_running = false;

	}

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

}

void NetworkApp::mouseMoved(float x, float y)
{
}

void NetworkApp::updateCamera() {
	if (m_character == UINT_MAX)
		return;

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
	case GameEngine::DISCONNECTED:
		h3dutShowText( "Disconnected.", 0.01f, 0.02f, 0.04f, 1, 1, 1, _fontMatRes );
		h3dutShowText( "X - start server       [1..7] - select character and connect", 0.01f, 0.94f, 0.04f, 1, 1, 1, _fontMatRes );
		break;

	case GameEngine::CONNECTING_TO_SERVER:
		h3dutShowText( "Connecting to server...", 0.01f, 0.02f, 0.04f, 1, 1, 1, _fontMatRes );
		break;

	case GameEngine::CONNECTED_TO_SERVER:
		h3dutShowText( "Connected to server.", 0.01f, 0.02f, 0.04f, 1, 1, 1, _fontMatRes );
		h3dutShowText( "[W,A,S,D] - move       Q - greet", 0.01f, 0.94f, 0.04f, 1, 1, 1, _fontMatRes );
		break;

	case GameEngine::SERVING:
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
		//if (!pressed)
		//	printf("%.3f\n",GameEngine::FPS());
		//else
		//	printf("Key: %d\n", param);
	}
}

void NetworkApp::mouseButtonCb(float x, float y, void *userData)
{
	//NetworkApp* app = static_cast<NetworkApp*>(userData);
	//if (app)
	//{
	//	float coords[3];
	//	const char* nodeName = GameEngine::pickNodeWithIntersectionCoords(x,y, coords);
	//	if(strcmp(nodeName,"Ground")==0)
	//	{
	//		//GameEngine::goToPosition(GameEngine::entityWorldID(app->getControlledChar()), coords[0],coords[1],coords[2]);
	//		//GameEngine::setCrowdParticleTargetPosition(GameEngine::entityWorldID(app->getControlledChar()),coords[0],coords[1],coords[2]);
	//		//GameEngine::setCrowdParticleLoop(GameEngine::entityWorldID(app->getControlledChar()), false);
	//	}
	//	else
	//	{
	//		app->setControlledChar(nodeName);
	//	}
	//	
	//	printf("%.2f,%.2f,%.2f : %s - ", coords[0],coords[1],coords[2],nodeName);
	//	int gridIndex = worldToGrid(-coords[0]) * 27 + worldToGrid(coords[2]);
	//	printf("GridIndex: %d\n", gridIndex);
	//}
}

void NetworkApp::mouseCb(float x, float y, void *userData)
{
	NetworkApp* app = static_cast<NetworkApp*>(userData);
	if (app) app->mouseMoved(x, y);
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

int NetworkApp::worldToGrid(float coords)
{
	float wc;   
    if (coords >= 0)
    {
        wc = floor(coords + 0.5f);
    }
    else
    {
        wc = ceil(coords - 0.5f);
    }
	 
	// Don't return values out of the grid
	return (int) clamp((wc + 13), 0, 26);
}