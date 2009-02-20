#include <iostream>
#include <sstream>

#include "AlfredXpadApp.h"

#include "GameEngine/GameEngine.h"
#include "GameEngine/GameEngine_SceneGraph.h"
#include <GameEngine/GameEntity.h>

#include <stdio.h>
#include <math.h>

#pragma comment(lib, "ws2_32.lib")

using namespace std;

WSADATA			wsaData;
SOCKET			alfredSocket;
sockaddr_in		alfredAdress;


int AlfredXpadApp::strtoken( char *str, char *separator, char *token[] )
{
	int i = 0;
	token[0] = strtok( str, separator );

	while( token[i] ) {
		i++;
		token[i] = strtok( NULL, separator );
	}

	return i;
}


AlfredXpadApp::AlfredXpadApp() : m_running(true)
{
	memset(m_keys, 0, sizeof(m_keys));
}

AlfredXpadApp::~AlfredXpadApp()
{
	GameEngine::release();
}

bool AlfredXpadApp::init(const char *fileName)
{
	if (GameEngine::init() && GameEngine::loadScene(fileName))
	{
		m_camRX = 0;
		m_camRY = 0;

		m_alfred = GameEngine::entitySceneGraphID( GameEngine::entityWorldID( "Alfred" ) );

		m_logoMatRes = Horde3D::addResource( ResourceTypes::Material, "logo.material.xml", 0 );
		Horde3DUtils::loadResourcesFromDisk( "" );

		for (int i = 0; i < 45; i++)
			AUs[i] = 0.0f;

		addrLen = sizeof(SOCKADDR_IN);
		WSAStartup( MAKEWORD(2,2), &wsaData );
		alfredSocket = socket( AF_INET, SOCK_DGRAM, IPPROTO_UDP );

		if (alfredSocket == INVALID_SOCKET)
		{
			cout << "ERROR " << WSAGetLastError() << endl;
			WSACleanup();
		}

		alfredAdress.sin_family = AF_INET;
		alfredAdress.sin_addr.s_addr = inet_addr( "127.0.0.1" );
		//alfredAdress.sin_addr.s_addr = ADDR_ANY;
		alfredAdress.sin_port = htons( 3208 );

		int bnd = bind( alfredSocket, (SOCKADDR*) &alfredAdress, sizeof(SOCKADDR_IN) );
		if (bnd == SOCKET_ERROR)
		{
			cout << "ERROR " << WSAGetLastError() << endl;
		}

		unsigned long mode = 1;	
		ioctlsocket( alfredSocket, FIONBIO, &mode );

		return true;
	}
	else
	{
		return false;
	}
}

void AlfredXpadApp::keyHandler()
{		
	if( m_keys[118] )  // F7
	{
		Horde3D::setOption( EngineOptions::DebugViewMode, Horde3D::getOption(EngineOptions::DebugViewMode) != 0 ? 0 : 1 );
		m_keys[118] = 0;
	}

	if( m_keys[49] )  // 1
	{	

		m_keys[49] = 0;
	}

	if( m_keys[50] )  // 2
	{

		m_keys[50] = 0;
	}

	if( m_keys[51] )  // 3
	{

		m_keys[51] = 0;
	}

	if( m_keys[52] )  // 4
	{

		m_keys[52] = 0;
	}

	if( m_keys[53] )  // 5
	{

		m_keys[53] = 0;
	}

	if( m_keys[54] )  // 6
	{

		m_keys[54] = 0;
	}

	if( m_keys[55] )  // 7
	{

		m_keys[55] = 0;
	}

	if( m_keys[56] )  // 8
	{

		m_keys[56] = 0;
	}

	if( m_keys[57] )  // 9
	{

		m_keys[57] = 0;
	}

	if( m_keys[48] )  // 0
	{

		m_keys[48] = 0;
	}

	m_running = m_keys[27] == 0;
}

void AlfredXpadApp::mouseMoved(float x, float y)
{
}

void AlfredXpadApp::render()
{
	Horde3D::clearOverlays();
	keyHandler();

	parseAU();

	Horde3D::showOverlay( 0.6f, 0, 0, 0, 
		1, 0, 1, 0, 
		1, 0.2f, 1,	1,
		0.6f, 0.2f, 0, 1, 
		0, m_logoMatRes
		);

	GameEngine::update();

	Horde3D::clearOverlays();
	Horde3DUtils::dumpMessages();
}

void AlfredXpadApp::setAU(int auID, float weight)
{
	AUs[auID] = weight;

	stringstream auStr;
	auStr << "AU_";
	if (auID < 10) 
		auStr << "0";
	auStr << auID;

	Horde3D::setModelMorpher( m_alfred, auStr.str().c_str(), weight );

	if ( auID == 27 )
	{
		Horde3D::setModelMorpher( m_alfred, "bottomgums_au_27", weight );
		Horde3D::setModelMorpher( m_alfred, "bottom_au_27", weight );
	}
}

void AlfredXpadApp::parseAU()
{
	if (alfredSocket != NULL)
	{
		char buf[512];
		u_long u = 1;
		ioctlsocket (alfredSocket, FIONREAD, &u);

		while (u > 0)
		{
			result = recvfrom( alfredSocket, buf, sizeof(buf), 0, (SOCKADDR*)&alfredAdress, &addrLen );
			ioctlsocket ( alfredSocket, FIONREAD, &u );
		}

		if(result == SOCKET_ERROR)
		{
			if (WSAGetLastError() != WSAEWOULDBLOCK)
			{
				cout << WSAGetLastError() << endl;
			}
		} 
		else
		{
			char *token[50];
			int pcktFloatNum = strtoken( buf, " ", token );

			if ( pcktFloatNum == 46 )
			{
				for (int i = 0; i < 45; i++)
					setAU ( i, float ( atof(token[i+1]) ) );
			}	
		}
	}
}

void AlfredXpadApp::keyboardCb(unsigned int param, bool pressed, void *userData)
{
	AlfredXpadApp* app = static_cast<AlfredXpadApp*>(userData);
	if (app)
	{
		app->m_keys[param] = pressed ? 1 : 0;
	}
}

void AlfredXpadApp::mouseCb(float x, float y, void *userData)
{
	AlfredXpadApp* app = static_cast<AlfredXpadApp*>(userData);
	if (app) app->mouseMoved(x, y);

	y = -1 * (y - float(app->m_height));
}

void AlfredXpadApp::renderCb(void *userData)
{
	AlfredXpadApp* app = static_cast<AlfredXpadApp*>(userData);
	if (app) app->render();
}

void AlfredXpadApp::resizeCb(int width, int height, void *userData)
{	
	AlfredXpadApp* app = static_cast<AlfredXpadApp*>(userData);
	if (app)
	{
		app->m_width = width;
		app->m_height = height;
	}

	Horde3D::setupViewport(0, 0, width, height, true);
	Horde3D::setupCameraView( GameEngine::entitySceneGraphID( GameEngine::entityWorldID( "Camera" ) ), 28.6f, (float) width / height, 0.1f, 1000.0f );
}