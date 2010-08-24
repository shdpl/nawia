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
#include <sstream>
#include <GLFW/glfw.h>

double pi = std::acos( -1.0 );

using namespace std;

DemoApp::DemoApp(int desktopWidth, int desktopHeight) : m_running(true), m_selectedEntity(0),
m_savedMaterial(0), m_desktopWidth(desktopWidth), m_desktopHeight(desktopHeight), m_eyeX(0), m_eyeY(0),
m_mouseDown(false), m_enableMouseTracking(true), m_selectedHordeID(0), m_throwingStartedAt(0)
{
	memset(m_keys, 0, sizeof(m_keys));
	memset(m_pickingCoords, 0, sizeof(m_pickingCoords));
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
		h3dGetNodeTransform(m_camID, 0,0,0, &m_camRX, &m_camRY, 0, 0, 0, 0);
		m_selectMaterial = h3dAddResource(H3DResTypes::Material, "materials/selectMaterial.material.xml", 0);
		m_fontMatRes = h3dAddResource( H3DResTypes::Material, "materials/font.material.xml", 0 );
		h3dutLoadResourcesFromDisk(".");
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
	if( m_keys[GLFW_KEY_F7] )  // F7
	{
		h3dSetOption( H3DOptions::DebugViewMode, h3dGetOption(H3DOptions::DebugViewMode) != 0.0f ? 0.0f : 1.0f );	
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
	if(m_keys['M'])
		m_enableMouseTracking = !m_enableMouseTracking;
	
	m_running = m_keys[27] == 0;
}

void DemoApp::mouseMoved(float x, float y)
{
	if (m_mouseDown)
	{
		m_camRX -= (y-m_mouseY) * 15.0f / GameEngine::FPS();
		m_camRY -= (x-m_mouseX) * 15.0f / GameEngine::FPS();
		GameEngine::setEntityRotation( m_camID, m_camRX, m_camRY, 0);
	}
	// Test picking by mouse instead of the eye tracker
	else if (m_enableMouseTracking)
	{
		pickNode(x, y);
	}

	// Update mouse coordinates
	m_mouseX = x;
	m_mouseY = y;
}

void DemoApp::mouseClick(int button, int action)
{
	if (button == GLFW_MOUSE_BUTTON_RIGHT)
	{
		m_mouseDown = (action == GLFW_PRESS) ? true : false;

		if (m_mouseDown)
		{
			glfwDisable(GLFW_MOUSE_CURSOR);	
			// Mouse is automatically setted to the middle of the screen
			m_mouseX = m_width / 2.0f;
			m_mouseY = m_height / 2.0f;
		}
		else
			glfwEnable(GLFW_MOUSE_CURSOR);
	}
	else if (button == GLFW_MOUSE_BUTTON_LEFT)
	{
		if (action == GLFW_PRESS)
		{
			// Start throwing the ball
			m_throwingStartedAt = GameEngine::currentTimeStamp();
		}
		else if( m_selectedEntity != 0 )
		{
			// Now throw it
			float strength = clamp((GameEngine::currentTimeStamp() - m_throwingStartedAt), 0.01f, 2.0f);
			const float* trans = GameEngine::getEntityTransformation(GameEngine::entityWorldID("KugelModel"));
			Vec3f impulse = (Vec3f(m_pickingCoords[0], m_pickingCoords[1], m_pickingCoords[2]) - Vec3f(trans[12], trans[13], trans[14])) * strength;
			GameEngine::applyEntityPhysicsImpulse("KugelModel", impulse.x, impulse.y, impulse.z, 0, 0, 0);
			m_throwingStartedAt = 0;
		}
	}
}

void DemoApp::render()
{
	keyHandler();
	
	if (m_throwingStartedAt > Math::Epsilon)
	{
		std::stringstream text;
		float force = clamp(GameEngine::currentTimeStamp() - m_throwingStartedAt, 0, 2.0f) * 50.0f;
		text << "Force: " << force << "%";
		h3dutShowText( text.str().c_str(), 0.01f, 0.02f, 0.03f, 1, 1, 1, m_fontMatRes);
	}
	else
	{
		h3dutShowText( "Hold down the left mouse button to start shooting!", 0.01f, 0.02f, 0.03f, 1, 1, 1, m_fontMatRes);
	}

	GameEngine::update();
	h3dutDumpMessages();
	// Get data from eye tracker
	//const char* data = 0;
	//int size = GameEngine::getSocketData( m_camID, &data);
	//if (size > 0)
	//{
	//	parseSocketData(size, data);
	//	// And use the data
	//	pickNode(m_eyeX, m_eyeY);
	//}
}

void DemoApp::parseSocketData( int size, const char* data )
{
	if( size > 0 )
	{
		std::string str( data, size );

		char *token[10];
		int pcktFloatNum = strtoken(const_cast<char *> ( str.c_str()), " ", token );

		if( strcmp( token[0], "ET_SPL" ) == 0 )
		{
			m_eyeX = (float) (atof(token[2]) + atof(token[3])) / 2.0f;
			m_eyeY = (float) (atof(token[4]) + atof(token[5])) / 2.0f;
		}
	}
}

int DemoApp::strtoken( char *str, char *separator, char *token[] )
{
#pragma warning( push )
#pragma warning( disable : 4996 )

	int i = 0;
	token[0] = strtok( str, separator );

	while( token[i] ) {
		i++;
		token[i] = strtok( NULL, separator );
	}

	return i;

#pragma warning( pop )
}

void DemoApp::pickNode( float x, float y )
{
	H3DNode newHordeID = h3dutPickNode( GameEngine::entitySceneGraphID( m_camID ), x / float( m_width ), ( m_height - y ) / float( m_height ) );
	if( newHordeID != 0 && h3dGetNodeType(newHordeID) == H3DNodeTypes::Mesh )
	{
		if( m_selectedHordeID != 0 )
		{
			h3dSetNodeParamI( m_selectedHordeID, H3DMesh::MatResI, m_savedMaterial );
		}
		
		//printf(" X: %d Y: %d Mesh Selected %s\n", x, y, h3dGetNodeParamStr( newHordeID, H3DNodeParams::NameStr ) );

		m_selectedEntity = GameEngine::sceneGraphEntityID( newHordeID);
		if( m_selectedEntity == 0 )
		{
			// No luck with that mesh, but maybe with the parent model?
			int modelID = h3dGetNodeParent(newHordeID);
			m_selectedEntity = GameEngine::sceneGraphEntityID( modelID );
		}

		if( m_selectedEntity != 0 )
		{
			m_selectedHordeID = newHordeID;
			m_savedMaterial = h3dGetNodeParamI( m_selectedHordeID, H3DMesh::MatResI );
			h3dSetNodeParamI(m_selectedHordeID, H3DMesh::MatResI, m_selectMaterial );

			// Now get the clicked coordinates
			h3dGetCastRayResult(0, 0, 0, m_pickingCoords);
		}
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
	h3dSetupViewport(0, 0, width, height, true);
	m_width = width;
	m_height = height;
}
