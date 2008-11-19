#include <iostream>

#include "DosenApp.h"

#include "GameEngine/GameEngine.h"
#include "GameEngine/GameEngine_BulletPhysics.h"
#include "GameEngine/GameEngine_SceneGraph.h"

#include <stdio.h>
#include <string.h>
#include "Horde3D/Horde3D.h"
#include "Horde3D/Horde3DUtils.h"
#include <cmath>
#include <string>

double pi = std::acos( -1.0 );

using namespace std;

DemoApp::DemoApp(int desktopWidth, int desktopHeight) : m_running(true), m_selectedEntity(0),
m_savedMaterial(0), m_desktopWidth(desktopWidth), m_desktopHeight(desktopHeight)
{
	memset(m_keys, 0, sizeof(m_keys));	
}

DemoApp::~DemoApp()
{
	release();
}

bool DemoApp::init(const char *fileName)
{
	if (GameEngine::init() && GameEngine::loadScene(fileName))
	{			
		m_camID = GameEngine::entityWorldID("camera"); 		
		GameEngine::entitySceneGraphID( m_camID );
		Horde3D::getNodeTransform(m_camID, 0,0,0, &m_camRX, &m_camRY, 0, 0, 0, 0);
		m_selectMaterial = Horde3D::addResource(ResourceTypes::Material, "selectMaterial.material.xml", 0);
		Horde3DUtils::loadResourcesFromDisk("");
		return true;
	}
	else
		return false;	
}

void DemoApp::release()
{
	GameEngine::release();
}

void DemoApp::keyHandler()
{		
	if( m_keys[118] )  // F7
	{
		Horde3D::setOption( EngineOptions::DebugViewMode, Horde3D::getOption(EngineOptions::DebugViewMode) != 0.0f ? 0.0f : 1.0f );	
		m_keys[118] = 0;
	}
	if( m_keys['W'] ) 
	{
		GameEngine::translateEntityLocal(m_camID, 0, 0, -10 / GameEngine::FPS());
	}
	if( m_keys['S'] ) 
	{
		GameEngine::translateEntityLocal(m_camID, 0, 0, 10 / GameEngine::FPS());
	}
	if( m_keys['A'] )  //3
	{
		GameEngine::translateEntityLocal(m_camID, -10 / GameEngine::FPS(), 0, 0);
	}
	if( m_keys['D'] )  //3
	{
		GameEngine::translateEntityLocal(m_camID, 10 / GameEngine::FPS(), 0, 0);
	}
	if( m_keys['R'] )
		GameEngine::resetPhysics();
	
	m_running = m_keys[27] == 0;
}

void DemoApp::mouseMoved(float x, float y)
{
	//if (abs(x) < 30 && abs(y) < 30)
	//{
		m_camRX += y * 0.001f * GameEngine::FPS();
		m_camRY -= x * 0.001f * GameEngine::FPS();
		//m_camRX = y * 0.01f * GameEngine::FPS();
		//m_camRY = -x * 0.01f * GameEngine::FPS();
		//printf("%f, %f\n",m_camRX, m_camRY );
		GameEngine::setEntityRotation( m_camID, m_camRX, m_camRY, 0 );
	//}
}

void DemoApp::render()
{
	keyHandler();
	GameEngine::update();
	Horde3DUtils::dumpMessages();
	const char* data = 0;
	//int size = GameEngine::getSocketData( m_camID, &data);
	//parseSocketData( size, data );
}

void DemoApp::parseSocketData( int size, const char* data )
{
	//if( size <= 0 ) return;
	//// Works only with 0 terminated data, if tere is a null byte in the data, this will result in not defined behavior
	//string eyeData(data, size);
	//const char* searchMask = "ET_SPL ";
	//size_t index = eyeData.rfind( searchMask );
	//int pos[5];
	//if (index != string::npos )
	//{
	//	int i = 0;
	//	string str = eyeData.substr( index + strlen(searchMask) ).c_str();
	//	char* token = strtok( const_cast<char*>( str.c_str() ), " " );
	//	while (token != NULL && i < 5)
	//	{
	//		pos[i++] = atoi( token );				
	//		token = strtok (NULL, " ");
	//	}
	//	pickNode( pos[1], pos[3] );
	//}
}

void DemoApp::pickNode( int x, int y )
{
	NodeHandle newHordeID = Horde3DUtils::pickNode( GameEngine::entitySceneGraphID( m_camID ), x / float( m_width ), ( m_height - y ) / float( m_height ) );
	if( newHordeID != 0 && Horde3D::getNodeType(newHordeID) == SceneNodeTypes::Mesh )
	{
		//if( m_selectedEntity != 0 )
		//{
		//	int oldHordeID = GameEngine::entitySceneGraphID( m_selectedEntity );
		//	Horde3D::setNodeParami( oldHordeID, MeshNodeParams::MaterialRes, m_savedMaterial );
		//}
		//printf(" X: %d Y: %d Mesh Selected %s\n", x, y, Horde3D::getNodeParamstr( newHordeID, SceneNodeParams::Name ) );
		//m_selectedEntity = GameEngine::sceneGraphEntityID( newHordeID );
		//if( m_selectedEntity != 0 )
		//{
		//	m_savedMaterial = Horde3D::getNodeParami( newHordeID, MeshNodeParams::MaterialRes );
		//	Horde3D::setNodeParami(newHordeID, MeshNodeParams::MaterialRes, m_selectMaterial );
		//}
	}
}

void DemoApp::keyPress(unsigned int param, bool pressed)
{
	m_keys[param] = pressed ? 1 : 0;
	if (!pressed)
		printf("%.3f\n",GameEngine::FPS());
	//else
	//	printf("Key: %d\n", param);	
}


void DemoApp::resize(int width, int height)
{	
	Horde3D::resize(0, 0, width, height);
	m_width = width;
	m_height = height;
}
