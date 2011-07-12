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
// ****************************************************************************************
//

// ****************************************************************************************
//
// Advanced Agent Animation
//
// -------------------------
// Copyright (C) 2011 Ionut Damian
//
// ****************************************************************************************
//
// For information on how to use AAA, please read the readme.txt in the project folder 
// (ex: GameEngine\Samples\AAA\readme.txt) or check out the website at: 
// http://mm-werkstatt.informatik.uni-augsburg.de/projects/aaa/
//
// ****************************************************************************************

#ifndef _app_H_
#define _app_H_

/************* DEFINITIONS *************/
/** Current Version of the Application */
#define APP_VERSION "1.0 beta2"
#define APP_VERSION_LEN 9
//#define VERSION_HAS_BAYESNET
/** Maximal number of agents allowed ***/
#define MAX_AGENTS 256
/***************************************/

#include "Horde3D/Horde3D.h"
#include "AgentNode.h"
#include <XMLParser/utXMLParser.h>

#include <sstream>
#include <vector>
using namespace std;

class CommManager;

class Application
{
private:
	///array storing keyboard status
	bool			_keys[320];

	//** Camera
	///camera ids (horde3d id and entity id)
	int				m_cam_hID;
	int				m_cam_eID;
	///initial camera position and rotation
	float			init_x, init_y, init_z, init_rx, init_ry, init_rz;
	///current camera position and rotation
	float			_x, _y, _z, _rx, _ry, _rz;
	///camera movement velocityvelocity
	float			_velocity;
	///current FPS
	float			_curFPS;
	///flag for H3D debug rendering
	bool			_debugViewMode;
	
	//**Shader update
	///Shader control parameter
	float         m_counter;
	///water material resource, used for shader update (spring)
	H3DRes        m_waterMaterial;
	///leaf material resource, used for shader update (trees)
	H3DRes        m_leafMaterial;
	///water material resource, used for shader update (vegetation)
	H3DRes        m_bushMaterial;
	
	///vector containing all agents
	vector<AgentNode*> m_agents;

	int m_fontMatRes;

public:
	///number of agents in the scene, active or inactive
	int NR_OF_AGENTS;
	///current personal character (user agent)
	AgentNode* m_pc;

	//**Scenarios
	///current active scenario
	int m_scenario;
	///a counter to be used by the scenario
	float m_scenario_counter;
	bool m_randomize;
	
	///an "empty" agent, contains neutral parameter initializations
	AgentNode* m_dummyAgent;
	///flag for mouse button 0 press event
	bool m_m0pressed;
	///flag for mouse button 1 press event
	bool m_m1pressed;

	Application();
	
	///processes key events
	void keyHandler();
	///handler for key events
	void keyPressEvent( int key, bool pressed );
	///handler for mouse move events
	void mouseMoveEvent( float dX, float dY );
	///handler for mouse click events
	void mouseClickEvent(int button, int action, float x, float y);

	//**initializations
	///Initializes the demo
	bool init( const char *fileName );
	///retreives the root xml node from the scene file
	XMLNode* getSceneXMLNode( const char* fileName );
	///configures the application with data from the scene file
	bool config( XMLNode* scene );

	//**runtime
	///analyzes entity positions, defines and processes interations between them and updates the application accordingly
	void processEntityInteractions(AgentNode* agent);
	///performs actions defined ´by the current scenario
	void Application::processScenario(int act_id);
	///main application update function, gets called up every frame
	void update( float fps );

	///initializes and queues up a new gazing action
	void setGaze( unsigned int agent_id, float targetX, float targetY, float targetZ, int head_pitch, float speed );
	///initializes and queues up a new gazing action
	void setGaze( unsigned int agent_id, unsigned int target_id, int head_pitch, float speed );

	///retrieves current PC (user agent)
	AgentNode* getPersonalChar();
	///sets new PC (user agent)
	void setPersonalChar(AgentNode* agent);
	///retrievs agent with specified entity id
	AgentNode* findAgent(unsigned int entity_id);
	///retrievs agent with specified h3d id
	AgentNode* findAgent(H3DNode horde_id);
	///retrievs agent with specified local id
	AgentNode* getAgent(unsigned int id);
	///processes a possible agent movement destination
	void processDestination(const char* nodeName, float x, float y, float z);
	
	///window resize handler
	void resize( int width, int height );
	///releases all allocated memory space and prepares application for termination
	void release();
};

#endif // _app_H_
