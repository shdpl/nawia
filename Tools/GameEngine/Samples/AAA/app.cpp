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
#include "app.h"

#include "Horde3D/Horde3DUtils.h"
#include "Horde3D/Horde3D.h"

#include "GameEngine/GameEngine.h"
#include "GameEngine/GameLog.h"
#include "GameEngine/GameEngine_SceneGraph.h"
#include "GameEngine/GameEngine_Agent.h"
#include "GameEngine/GameEngine_Socket.h"
#include "GameEngine/GameEngine_IK.h"
#include "GameEngine/GameEngine_Sapi.h"
#include "GameEngine/utmath.h"

#include <direct.h>
#include <iostream>
#include <string.h>
#include <time.h>

using namespace Horde3D;

Application::Application()
{
	for( unsigned int i = 0; i < 320; ++i ) _keys[i] = false;
	
	_velocity = 4.0f;
	_curFPS = 30;
	m_m0pressed = false;
	m_m1pressed = false;

	_debugViewMode = false;
	m_pc = 0;

	//SCENARIOS PLAYBACK (imported from 0.25.4.video)
	m_scenario = 0;
	srand((unsigned int)time(0));
	m_dummyAgent = new AgentNode(0,0);
}


bool Application::init( const char *fileName )
{	
	//** Initialize engine **
	if (!GameEngine::init()) return false;	
	if (!GameEngine::loadScene(fileName)) return false;

	//init cam
	m_cam_eID = GameEngine::entityWorldID("camera");
	m_cam_hID = GameEngine::entitySceneGraphID(m_cam_eID);
	GameEngine::setActiveCamera(m_cam_hID);
	//default camera position
	h3dGetNodeTransform( m_cam_hID, &init_x, &init_y, &init_z, &init_rx, &init_ry, &init_rz, 0,0,0 );
	_x = init_x; _y = init_y; _z = init_z; 
	_rx = init_rx; _ry = init_ry; _rz = init_rz; 

	// VON PETER für Shader Uniform
	m_waterMaterial = h3dAddResource( H3DResTypes::Material, "models/holzBrunnen/wasser.material.xml", 0 );
	m_leafMaterial = h3dAddResource( H3DResTypes::Material, "models/baumNeu01/aeste.material.xml", 0 );
	m_bushMaterial = h3dAddResource( H3DResTypes::Material, "models/busch01/aeste.material.xml", 0 );
	m_counter = 0.0f;
	m_scenario_counter = 0;

	//** configure AAA with settings from XML file
	if(!config( getSceneXMLNode(fileName) ))
		GameLog::errorMessage( "AAA failed to load properly - xml data incomplete, corrupt or missing" );

	return true;
}

/**
 * gets the xml node of the scene.xml file
 * WARNING: reserves memory for the XMLNode, be sure to free the memory after usage (with delete)
 */
XMLNode* Application::getSceneXMLNode( const char* fileName )
{
	// get path of file loaded
	std::string fileNameStr = fileName;
	size_t lastSeparator1 = fileNameStr.find_last_of( '/' );
	size_t lastSeparator2 = fileNameStr.find_last_of( '\\' );		
	if (lastSeparator1 != std::string::npos || lastSeparator2 != std::string::npos )
	{
		size_t index = max( (int) lastSeparator1, (int) lastSeparator2 );
		// change working directory to directory containing the scene file
		_chdir(fileNameStr.substr(0, index).c_str());
		fileNameStr = fileNameStr.substr(index+1);
	}

	XMLResults results;
	XMLNode scn_config = XMLNode::parseFile(fileNameStr.c_str(), "Configuration", &results);
	XMLNode* scene;
	if (!scn_config.isEmpty())
	{	
		scene = new XMLNode(XMLNode::openFileHelper(scn_config.getChildNode("SceneGraph").getAttribute("path"), "Group"));
	}
	return scene;	
}

/**
 * Configures AAA according to the data in the xml file
 * (Initializes agents and other settings)
 */
bool Application::config( XMLNode* scene )
{
	// Read XML content of scn file
	XMLNode aaa_node;
	XMLNode agent_node;	
	XMLNode symbol_node;	
	char* agentNames[MAX_AGENTS];

	if(scene->isEmpty())
		return false;

	if(!scene->getChildNode("AAA").isEmpty())
	{
		aaa_node = scene->getChildNode("AAA");

		/**
		 * Agents
		 */
		NR_OF_AGENTS = aaa_node.getChildNode("Agents").nChildNode();

		if(NR_OF_AGENTS <= 0)
			return false;

		for(int i=0; i< NR_OF_AGENTS; i++)
		{
			agent_node = aaa_node.getChildNode("Agents").getChildNode("Agent", i);
			if(agent_node.isEmpty())
				return false;
			
			//Agent name
			if(agent_node.getAttribute("name") != 0
			  && strcmp(agent_node.getAttribute("name"), "") != 0)
			{
				agentNames[i] = (char*)agent_node.getAttribute("name");
			}
			else
				return false;

			//Generate agent node and save it
			int entity_id = GameEngine::entityWorldID(agentNames[i]);
			if(entity_id >= 0)
				m_agents.push_back(new AgentNode( i, entity_id ));
			else
				return false;

			//Agent initial visibility
			if(agent_node.getAttribute("visible") != 0
			  && strcmp(agent_node.getAttribute("visible"), "") != 0)
			{
				if(strcmp(agent_node.getAttribute("visible"), "false") == 0)
				{
					getAgent(i)->setVisibility(false);
				}
			}

			//Set pc status
			if(agent_node.getAttribute("pc") != 0
			  && strcmp(agent_node.getAttribute("pc"), "") != 0)
			{
				if(strcmp(agent_node.getAttribute("pc"), "true") == 0)
				{
					setPersonalChar(getAgent(i));
				}
			}			
		}
	}

	delete scene;
	return true;
}


void Application::update( float fps )
{
	_curFPS = fps;

	keyHandler();
	h3dSetOption( H3DOptions::DebugViewMode, _debugViewMode ? 1.0f : 0.0f );

	//SCENARIOS PLAYBACK (imported from 0.25.4.video)
	//continous scenario updates
	int anim_status, agent_status;
	if(m_scenario == 5 || m_scenario == 1)
	{
		m_scenario_counter += 10.0f/_curFPS;		

		for(int i=0; i< NR_OF_AGENTS; i++)
		{
			if(getAgent(i)->isPC())
				continue;

			//check if anim is still playing
			if(getAgent(i)->animation_id >= 0)
			{
				anim_status = GameEngine::Agent_getAnimationStatus( getAgent(i)->entity_id, getAgent(i)->animation_id );
				if(anim_status != 2)
					getAgent(i)->animation_id = -1;
			}

			//check if agent is walking
			if(getAgent(i)->movement >= 0)
			{				
				agent_status = GameEngine::Agent_getMovementStatus( getAgent(i)->entity_id, getAgent(i)->movement );
				if(agent_status < 0)
					getAgent(i)->movement = -1;
			}

			
			if(getAgent(i)->active && (getAgent(i)->animation_id < 0) && (getAgent(i)->movement < 0)
			&&(rand() % 1000 < 250)) // chance for anim load = 25%
				getAgent(i)->animation_id = GameEngine::Agent_playAnimationI( getAgent(i)->entity_id, ((int)m_scenario_counter % 29)+1, 1, 1, 1, "Bip01_R_Clavicle", 0);

			//generate speach
			if(getAgent(i)->active &&(rand() % 1000 < 5)) // chance for anim load = 0.5%
			{			
				getAgent(i)->speaks = true;
				GameEngine::speak( getAgent(i)->entity_id, "Hello!" );
			}

			//generate movement
			int dest;
			if(getAgent(i)->active && (getAgent(i)->animation_id < 0) && (getAgent(i)->movement < 0)
			&&(rand() % 1000 < 100)) // chance for anim load = 10%
			{
				dest = rand() % NR_OF_AGENTS;
				if(getAgent(dest) != 0)
				{
					GameEngine::Agent_gotoF( getAgent(i)->entity_id, getAgent(dest)->entity_id, 1.0f, 0,0 );
					getAgent(i)->movement = 1;
				}
			}

		}
	}

	//** Animate fountain
	h3dFindNodes( 1, "BrunnenWasser",  H3DNodeTypes::Emitter );
	unsigned int particleSys = h3dGetNodeFindResult(0);

	unsigned int cnt = h3dFindNodes( particleSys, "", H3DNodeTypes::Emitter ); 
    for( unsigned int i = 0; i < cnt; ++i ) 
		h3dAdvanceEmitterTime( h3dGetNodeFindResult( i ), 1.0f / GameEngine::FPS() );

	// VON PETER für Shader-Uniform
	h3dSetMaterialUniform(m_waterMaterial, "counter", m_counter, m_counter, m_counter, m_counter);
	h3dSetMaterialUniform(m_leafMaterial, "counter", m_counter, m_counter, m_counter, m_counter);
	h3dSetMaterialUniform(m_bushMaterial, "counter", m_counter, m_counter, m_counter, m_counter);
    m_counter += 10.0f/_curFPS;

	//** Set camera parameters
	h3dSetNodeTransform( m_cam_hID, _x, _y, _z, _rx, _ry, _rz, 1, 1, 1 );

	//** Render scene
	GameEngine::update();

	//** Write all mesages to log file
	h3dutDumpMessages();
}


void Application::release()
{
	//delete all animations and agents
	for(int i=0; i< NR_OF_AGENTS; i++)
	{
		//GameEngine::AgentAnim_clearStages( getAgent(i)->entity_id );
		delete getAgent(i);
	}
	
	// Release engine
	GameEngine::release();
	h3dRelease();
}


void Application::resize( int width, int height )
{
	// Resize viewport
	h3dSetNodeParamI( m_cam_hID, H3DCamera::ViewportXI, 0 );
	h3dSetNodeParamI( m_cam_hID, H3DCamera::ViewportYI, 0 );
	h3dSetNodeParamI( m_cam_hID, H3DCamera::ViewportWidthI, width );
	h3dSetNodeParamI( m_cam_hID, H3DCamera::ViewportHeightI, height );	
	h3dResizePipelineBuffers( h3dGetNodeParamI( m_cam_hID, H3DCamera::PipeResI ), width, height );
}


void Application::keyPressEvent( int key, bool pressed )
{
	//if(pressed) printf("Key press: %d\n", key);
	_keys[key] = pressed;
}


void Application::keyHandler()
{
	float curVel = _velocity / _curFPS;
	float transSpeed = 0.7f;
	float rotSpeed = 5;

	if(_keys[287]) //Shift
	{
		transSpeed *= 10;
		rotSpeed *= 10;
	}	

	if( _keys[264] )	// F7
	{
		_debugViewMode = !_debugViewMode;
		_keys[264] = false;
	}

	/**
	 * Camera movement
	 */
	if( _keys['W'] )
	{
		// Move forward
		_x -= sinf( degToRad( _ry ) ) * cosf( -degToRad( _rx ) ) * curVel * transSpeed;
		_y -= sinf( -degToRad( _rx ) ) * curVel * transSpeed;
		_z -= cosf( degToRad( _ry ) ) * cosf( -degToRad( _rx ) ) * curVel * transSpeed;

		//_keys['W']=false;
	}

	if( _keys['S'] )
	{
		// Move backward
		_x += sinf( degToRad( _ry ) ) * cosf( -degToRad( _rx ) ) * curVel * transSpeed;
		_y += sinf( -degToRad( _rx ) ) * curVel * transSpeed;
		_z += cosf( degToRad( _ry ) ) * cosf( -degToRad( _rx ) ) * curVel * transSpeed;

		//_keys['S']=false;
	}

	if( _keys['A'] )
	{
		// Strafe left
		_x += sinf( degToRad( _ry - 90) ) * curVel * transSpeed;
		_z += cosf( degToRad( _ry - 90 ) ) * curVel * transSpeed;
		
		//_keys['A']=false;
	}

	if( _keys['D'] )
	{
		// Strafe right
		_x += sinf( degToRad( _ry + 90 ) ) * curVel * transSpeed;
		_z += cosf( degToRad( _ry + 90 ) ) * curVel * transSpeed;

		//_keys['D']=false;
	}

	if( _keys['R'] )
	{
		// go up
		_y += curVel * transSpeed;

		//_keys['R']=false;
	}
	
	if( _keys['F'] )
	{
		// go down
		_y -= curVel * transSpeed;

		//_keys['F']=false;
	}

	/**
	 * Camera rotation
	 */
	if( _keys['J'] )
	{
		// turn left
		_ry += curVel * rotSpeed;

		//_keys['J']=false;
	}
	
	if( _keys['L'] )
	{
		// turn right
		_ry -= curVel * rotSpeed;

		//_keys['L']=false;
	}

	if( _keys['I'] )
	{
		// turn up
		_rx += curVel * rotSpeed;

		//_keys['I']=false;
	}
	
	if( _keys['K'] )
	{
		// turn down
		_rx -= curVel * rotSpeed;

		//_keys['K']=false;
	}	

	if( _keys['X'] )
	{
		_x = init_x; _y = init_y; _z = init_z; 
		_rx = init_rx; _ry = init_ry; _rz = init_rz; 
		h3dSetNodeTransform( m_cam_hID, _x, _y, _z, _rx, _ry, _rz, 1, 1, 1 );
	}

	if( _keys['T'] )
	{
		//GameEngine::Agent_playAnimationI( m_agents[0]->entity_id, 51, 1, 1, 1, 0, 0); 

		//head nod
		//determine a point straight ahead of the agent
		const float *agent_relArray;
		h3dGetNodeTransMats( GameEngine::entitySceneGraphID( m_agents[0]->entity_id ), &agent_relArray, 0 );
		Matrix4f agent_relMat(agent_relArray);

		Vec3f targetGaze = agent_relMat * Vec3f(0,15,20);

		GameEngine::IK_setParamI( m_agents[0]->entity_id, IK_Param::UseDofr_I, 0);
		GameEngine::Agent_gazeP( m_agents[0]->entity_id, targetGaze.x, targetGaze.y, targetGaze.z, 0.5f, 0.2f );

		_keys['T']=false;
	}

	//check number keys
	for(unsigned int i=0; i<10; i++)
	{
		if( _keys[i +48] ) // '0' = 48
		{
			//if shift is pressed, we will switch scenarios
			if(_keys[287]) //Shift
			{
				m_scenario = i;
				printf("Scenario %d activated\n", i);
				_keys[i +48]=false;
				break;
			}

			//if ctrl is pressed, an act in the current scenario is requested
			if(_keys[289]) //CTRL
			{
				processScenario(i);
				_keys[i +48]=false;
				break;
			}

			//select agent i as user agent (pc)
			if(m_agents.size() > i)
				setPersonalChar(getAgent(i));			

			_keys[i +48]=false;
		}
	}
}

//SCENARIOS PLAYBACK (imported from 0.25.4.video)
void Application::processScenario(int act_id)
{
	switch(m_scenario)
	{
	case 5: //Final scene
		switch(act_id)
		{
		case 1: //scene5_1: init
			//movement
			GameEngine::Agent_gotoE( getAgent(0)->entity_id, getAgent(2)->entity_id, 1, false, 0, 0 );
			//GameEngine::Agent_gotoE( getAgent(1)->entity_id, getAgent(4)->entity_id, 1, false, 0, 0 );

			//barman gesticulates
			GameEngine::Agent_playAnimationN( getAgent(12)->entity_id, "Gesture_2", 1, 1, 0, 0, 0);
			
			//INIT	
			m_scenario_counter = 0;
			for(int i=0; i<NR_OF_AGENTS; i++)
			{
				getAgent(i)->setVisibility(true);
				GameEngine::IK_setParamI( getAgent(i)->entity_id, IK_Param::UseDofr_I, 1 );
			}
			//set the camera
			_x=-17; _y=6.1f; _z=15; _rx=-17.8f; _ry=-34.7f; _rz=0;
			break;
		}
		break;
	}
}

void Application::mouseMoveEvent( float dX, float dY )
{
	float mouseRotSpeed = 30.0f;
	float _fps = GameEngine::FPS();

	if(_keys[289]) //ctrl
		mouseRotSpeed *= 0.05f; //this should allow the user to make realistic camera movements
	else if(_keys[287]) //shift
		mouseRotSpeed *= 0.23f; //this should allow the user to make realistic camera movements

	if(m_m1pressed) //we have to invert x and y ... don't know why
	{
		_rx += dY * mouseRotSpeed / _fps;
		_ry -= dX * mouseRotSpeed / _fps;		
		if(_keys[287] || _keys[289]) //shift or ctrl
			_rz -= (dX * mouseRotSpeed / _fps) * 0.5f;

		GameEngine::setEntityRotation( m_cam_eID, _rx, _ry, _rz);
	}
}

void Application::mouseClickEvent(int button, int action, float x, float y)
{
	if(button == 1) //right mb
	{
		m_m1pressed = (action == 1);
	}
	else //left mb
	{
		m_m0pressed = (action == 1);
		if(m_m0pressed)
		{			
			float coords[3];
			const char* nodeName = GameEngine::pickNodeWithIntersectionCoords(x,y, coords);
			processDestination(nodeName, coords[0],coords[1],coords[2]);
		}
	}
}

void Application::processDestination(const char* nodeName, float x, float y, float z)
{
	//do nothing if there is no PC in the scene (or PC is inactive)
	if(getPersonalChar() == 0 || !getPersonalChar()->active)
		return;

	bool shiftIsPressed = _keys[287];
	bool ctrlIsPressed = _keys[289];
	bool queueMovement = shiftIsPressed;

	std::stringstream msg_ss("");
	if(strcmp(nodeName,"berg")==0)
	{
		int agent_id = getPersonalChar()->id;

		GameEngine::Agent_gotoP( getPersonalChar()->entity_id, x,y,z, 1.3f, queueMovement, 0, 0 );

		AgentNode* a = getAgent(agent_id);
		a->movement = 1;

		//send feedback
		//generate message
		char* agentid_spacer;
		if(agent_id < 10) agentid_spacer = "0";
		else  agentid_spacer = "";

		msg_ss << agentid_spacer << agent_id << "00" << "352";
		msg_ss << " agent #" << agent_id << " movement towards a world location started";
		//send message
		GameEngine::sendSocketData( getAgent(0)->entity_id, msg_ss.str().c_str() );
	}
	else
	{
		int agent_id = getPersonalChar()->id;
		AgentNode* dest = findAgent(GameEngine::entityWorldID(nodeName)); 
		if(dest == 0)
			return; //if this entity isn't a known agent, break.
		
		GameEngine::Agent_gotoF( getPersonalChar()->entity_id, dest->entity_id, 1.3f, 0, 0 );
		
		AgentNode* a = getAgent(agent_id);
		a->movement = 1;

		//send feedback
		//generate message		
		char* agentid_spacer, *destid_spacer;
		if(agent_id < 10) agentid_spacer = "0";
		else  agentid_spacer = "";
		if(dest->id < 10) destid_spacer = "0";
		else  destid_spacer = "";

		msg_ss << agentid_spacer << agent_id << destid_spacer << dest->id << "351";
		msg_ss << " agent #" << agent_id << " movement towards other entity started";
		//send message
		GameEngine::sendSocketData( getAgent(0)->entity_id, msg_ss.str().c_str() );
	}	
}

AgentNode* Application::getPersonalChar()
{
	return m_pc;
}

void Application::setPersonalChar(AgentNode* agent)
{
	if(agent == 0)
		return;

	//remove PC status from old agent (if necessarily)
	if(m_pc != 0) 
	{
		if(m_pc->id == agent->id)
			return;

		m_pc->makeNPC();

		//send feedback
		//generate message
		std::stringstream msg_ss("");
		char* agentid_spacer;
		if(m_pc->id < 10) agentid_spacer = "0";
		else  agentid_spacer = "";

		msg_ss << agentid_spacer << m_pc->id << "00" << "451";
		msg_ss << " agent #" << m_pc->id << " is no longer user controlled (npc)";
		//send message
		GameEngine::sendSocketData( getAgent(0)->entity_id, msg_ss.str().c_str() );

		m_pc = 0;
	}

	//set new PC
	agent->makePC();
	m_pc = agent;

	//send feedback
	//generate message
	std::stringstream msg_ss("");
	char* agentid_spacer;
	if(m_pc->id < 10) agentid_spacer = "0";
	else  agentid_spacer = "";

	msg_ss << agentid_spacer << m_pc->id << "00" << "450";
	msg_ss << " agent #" << m_pc->id << " is user controlled (pc)";
	//send message
	GameEngine::sendSocketData( getAgent(0)->entity_id, msg_ss.str().c_str() );
}

AgentNode* Application::findAgent(unsigned int entity_id)
{
	for(unsigned int i=0; i<m_agents.size(); i++)
	{
		if(getAgent(i)->entity_id == entity_id)
		{
			return getAgent(i);
		}
	}

	return 0;
}

AgentNode* Application::findAgent(H3DNode horde_id)
{
	for(unsigned int i=0; i<m_agents.size(); i++)
	{
		if(getAgent(i)->horde_id == horde_id)
		{
			return getAgent(i);
		}
	}

	return 0;
}

AgentNode* Application::getAgent(unsigned int id)
{
	if(id < 0 || id >= m_agents.size())
	{
		//return 0;
		return m_dummyAgent;
		printf("AAA Warning: Agent does not exist!\n");
	}

	else return m_agents[id];
}