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
// Copyright (C) 2010 Ionut Damian
//
// ****************************************************************************************
//
// For information on how to use AAA, please read the readme.txt in the project folder 
// (ex: GameEngine\Samples\AAA\readme.txt) or check out the website at: 
// http://mm-werkstatt.informatik.uni-augsburg.de/projects/aaa/
//
// ****************************************************************************************
#include "app.h"
#include "CommManager.h"
#include "Symbol.h"

#include "Horde3D/Horde3DUtils.h"
#include "GameEngine/GameEngine.h"
#include "GameEngine/GameLog.h"
#include "GameEngine/GameEngine_SceneGraph.h"
#include "GameEngine/GameEngine_IK.h"
#include "GameEngine/GameEngine_AgentAnim.h"
#include "GameEngine/GameEngine_AgentAction.h"
#include "GameEngine\GameEngine_Socket.h"
#include "GameEngine\GameEngine_Sapi.h"

#include <direct.h>
#include <iostream>
#include <string.h>
#include <time.h>


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

	//** configure AAA with settings from XML file
	if(!config( getSceneXMLNode(fileName) ))
		GameLog::errorMessage( "AAA failed to load properly - xml data incomplete, corrupt or missing" );

	//init communication manager (socket communication)
	m_comm = new CommManager(this);

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

			//Agent symbol
			if(agent_node.getAttribute("symbol") != 0
			  && strcmp(agent_node.getAttribute("symbol"), "") != 0)
			{
				getAgent(i)->setSymbol( Symbol::getInstance((char*)agent_node.getAttribute("symbol")) );
			}
			else
				getAgent(i)->setSymbol( Symbol::getInstance("symb_default") );

			//distance between agent and its symbol
			if(agent_node.getAttribute("symbol_dist") != 0
			  && strcmp(agent_node.getAttribute("symbol_dist"), "") != 0)
			{
				getAgent(i)->getSymbol()->setDistanceFromAgent((float)atof(agent_node.getAttribute("symbol_dist")));
			}
			else
				getAgent(i)->getSymbol()->setDistanceFromAgent(30); //default

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

	//process client commands
	m_comm->processMessages();

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
				anim_status = GameEngine::AgentAnim_getAnimStatus( getAgent(i)->entity_id, getAgent(i)->animation_id );
				if(anim_status != 2)
					getAgent(i)->animation_id = -1;
			}

			//check if agent is walking
			if(getAgent(i)->animation_id >= 0)
			{				
				agent_status = GameEngine::Agent_getAgentStatus( getAgent(i)->entity_id );
				if(agent_status == 4 || agent_status == 5)
					getAgent(i)->movement = -1;
			}

			
			if(getAgent(i)->active && (getAgent(i)->animation_id < 0) && (getAgent(i)->movement < 0)
			&&(rand() % 1000 < 9)) // chance for anim load = 0.9%
				getAgent(i)->animation_id = GameEngine::AgentAnim_loadAnimByID( getAgent(i)->entity_id, ((int)m_scenario_counter % 29)+1, Agent_AnimType::AAT_GESTURE, 0, 0 );

			////generate speach
			//if(getAgent(i)->active &&(rand() % 1000 < 5)) // chance for anim load = 0.5%
			//{			
			//	getAgent(i)->speaks = true;
			//	GameEngine::speak( getAgent(i)->entity_id, "Hello!" );
			//}

			////generate movement
			//int dest;
			//if(getAgent(i)->active && (getAgent(i)->animation_id < 0) && (getAgent(i)->movement < 0)
			//&&(rand() % 1000 < 1)) // chance for anim load = 0.1%
			//{
			//	dest = rand() % NR_OF_AGENTS;
			//	if(getAgent(dest) != 0)
			//	{
			//		GameEngine::Agent_goToEntity( getAgent(i)->entity_id, getAgent(dest)->entity_id, 1.0f );
			//		getAgent(i)->movement = 1;
			//	}
			//}

		}
	}

	//** Process the agents
	vector<AgentNode*>::iterator iter = m_agents.begin();
	const vector<AgentNode*>::iterator end = m_agents.end();
	while ( iter != end )
	{
		// Process the interactions
		processEntityInteractions(*iter);
	
		//update agent node
		(*iter)->update();

		++iter;
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

void Application::processEntityInteractions(AgentNode* agent)
{
	if(agent == 0 || !agent->active || agent->isPC())
		return;

	int *new_surroundingEntities_id;
	int new_numSurrEntities;
	int newcommer = -1;
	bool exists;

	// Check for newcommers
	new_numSurrEntities = GameEngine::Agent_getSurroundingEntities( agent->entity_id, (unsigned int**)&new_surroundingEntities_id );
	if(new_numSurrEntities < 0)
		return;

	//remove entities outside the agent's field of view
	for(int i=0; i < new_numSurrEntities; i++)
	{
		const float *absArray;
		h3dFindNodes( GameEngine::entitySceneGraphID(new_surroundingEntities_id[i]), "Bip01_Head", H3DNodeTypes::Joint );
		int head = h3dGetNodeFindResult(0);
		h3dGetNodeTransMats( head, 0, &absArray );

		Vec3f target = Matrix4f(absArray) * Vec3f(0,0,0);

		if(!agent->checkGaze(target))
		{
			//printf("[AAAd][agent %d] Unable to gaze at (%.2f, %.2f, %.2f)\n", agent->id, target.x, target.y, target.z);
			new_surroundingEntities_id[i] = -1; //remove entity from this list so it will be ignored
		}
	}

	//check for newcommers
	for(int i=0; i < new_numSurrEntities; i++)
	{
		if(new_surroundingEntities_id[i] < 0) //is empty
			continue;

		exists = false;
		for(unsigned int j=0; j < agent->surroundingAgents.size(); j++)
		{
			if(agent->surroundingAgents[j] != 0 && agent->surroundingAgents[j]->entity_id == new_surroundingEntities_id[i])
				exists = true;
		}
		if(!exists)
			newcommer = new_surroundingEntities_id[i];
	}

	//overwrite old array
	agent->surroundingAgents.resize(0); //remove references only, keep content intact
	for(int i=0; i<new_numSurrEntities; i++)
	{
		if(new_surroundingEntities_id[i] >= 0)
			agent->surroundingAgents.push_back( findAgent( (unsigned int)new_surroundingEntities_id[i]) );
	}	

	// Gaze
	//lookat the newcommer
	if(newcommer >= 0 && agent->movement <= 0)
	{
		setGaze( agent->id, findAgent((unsigned int)newcommer)->id, 0, 10 );
	}
}


void Application::release()
{
	//delete all animations and agents
	for(int i=0; i< NR_OF_AGENTS; i++)
	{
		GameEngine::AgentAnim_clearStages( getAgent(i)->entity_id );
		delete getAgent(i);
	}

	//delete all symbols
	Symbol::deleteAll();
	
	// Release engine
	GameEngine::release();
	//h3dRelease();
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
	case 0: //Intro
		switch(act_id)
		{
		case 1: //scene0_1: agent 1 goes to agent 0 + init
			GameEngine::Agent_goToEntity( getAgent(1)->entity_id, getAgent(0)->entity_id, 1 );
			
			//INIT		
			for(int i=0; i<NR_OF_AGENTS; i++)
			{
				getAgent(i)->setVisibility(true);
				GameEngine::IK_setParamI( getAgent(i)->entity_id, IK_Param::UseDofr_I, 0 );
				GameEngine::AgentAnim_setSpeedf( getAgent(i)->entity_id, 1.0 );
				GameEngine::AgentAnim_setExtenti( getAgent(i)->entity_id, 0, false );
			}
			getAgent(3)->setVisibility(false);
			getAgent(4)->setVisibility(false);
			//remove PC status from PC
			getPersonalChar()->makeNPC();
			//set the camera
			_x=-8.4f; _y=1.7f; _z=-2.0f; _rx=0; _ry=0; _rz=0;
			break;
		case 2: //scene0_2: agent 2 goes to agent 0	
			GameEngine::Agent_goToEntity( getAgent(2)->entity_id, getAgent(1)->entity_id, 1 );
			setGaze( 1, 2, 0, 3 );
			setGaze( 0, 2, 0, 3 );
			break;
		case 3: //scene0_3: agent 2 gesticulates, other gaze at it
			GameEngine::AgentAnim_loadAnimByName( getAgent(2)->entity_id, "Gesture_4", Agent_AnimType::AAT_GESTURE, 0, 0 );
			setGaze( 1, 2, 0, 3 );
			setGaze( 0, 2, 0, 3 );

			GameEngine::speak( getAgent(2)->entity_id ,"So, how did this happen ?");
			break;
		case 4: //scene0_4: agent 1 gesticulates
			GameEngine::AgentAnim_loadAnimByName( getAgent(1)->entity_id, "Gesture_1", Agent_AnimType::AAT_GESTURE, 0, 0 );
			setGaze( 2, 1, 0, 3 );
			setGaze( 0, 1, 0, 3 );

			GameEngine::speak( getAgent(1)->entity_id ,"Well, I just went straight in there and told them my opinion.");
			break;
		case 5: //scene0_5: all agents turn and gaze towards the camera
			GameEngine::Agent_rotate( getAgent(0)->entity_id, 0,1,0, 1);
			//getAgent(0)->gazeNodes.top()->defaultGaze();
			//getAgent(0)->active = false;
			setGaze( 0, -8.4f, 1.7f, -2, 0, 2 );
			GameEngine::Agent_rotate( getAgent(1)->entity_id, 0,0,0, 1);
			//getAgent(1)->gazeNodes.top()->defaultGaze();
			//getAgent(1)->active = false;
			setGaze( 1, -8.4f, 1.7f, -2, 0, 2 );
			GameEngine::Agent_rotate( getAgent(2)->entity_id, 0,1,0, 1);
			//getAgent(2)->gazeNodes.top()->defaultGaze();
			//getAgent(2)->active = false;
			setGaze( 2, -8.4f, 1.7f, -2, 0, 2 );
			break;
		case 6: //waving
			GameEngine::AgentAnim_setSpeedf( getAgent(2)->entity_id, 0.8f );

			GameEngine::AgentAnim_loadAnimByName( getAgent(0)->entity_id, "Becking_1", Agent_AnimType::AAT_GESTURE, 0, 0 );
			GameEngine::AgentAnim_loadAnimByName( getAgent(1)->entity_id, "Becking_2", Agent_AnimType::AAT_GESTURE, 0, 0 );
			GameEngine::AgentAnim_loadAnimByName( getAgent(2)->entity_id, "Becking_1", Agent_AnimType::AAT_GESTURE, 0, 0 );
			break;
		}
		break;
	
	case 1: //Overview
		switch(act_id)
		{
		case 1: //scene1_1: agent 1 goes to agent 0 + init
			GameEngine::Agent_goToEntity( getAgent(0)->entity_id, getAgent(2)->entity_id, 1 );
			getAgent(0)->movement = 1;
			//move yellow male outside the camera view
			GameEngine::Agent_goToPosition( getAgent(4)->entity_id, 10, 0, 0, 2 );
			
			//INIT			
			for(int i=0; i<NR_OF_AGENTS; i++)
			{
				getAgent(i)->setVisibility(false);
				GameEngine::IK_setParamI( getAgent(i)->entity_id, IK_Param::UseDofr_I, 1 );
				GameEngine::AgentAnim_setSpeedf( getAgent(i)->entity_id, 1.0 );
				GameEngine::AgentAnim_setExtenti( getAgent(i)->entity_id, 0, false );
			}
			getAgent(0)->setVisibility(true);
			getAgent(1)->setVisibility(true);
			getAgent(2)->setVisibility(true);
			getAgent(3)->setVisibility(true);
			getAgent(4)->setVisibility(true);
			//remove PC status from PC
			setPersonalChar(getAgent(4));
			//set the camera
			//_x=-8.4; _y=1.7f; _z=-2; _rx=0; _ry=0; _rz=0;
			//slow some agents down
			GameEngine::AgentAnim_setSpeedf( getAgent(2)->entity_id, 0.8f );
			GameEngine::AgentAnim_setSpeedf( getAgent(3)->entity_id, 0.8f );
			break;
		case 2: //scene1_2: blue male goes to sleeveless male and the females gesticulate	
			GameEngine::Agent_goToEntity( getAgent(1)->entity_id, getAgent(3)->entity_id, 1 );
			getAgent(1)->movement = 1;

			GameEngine::AgentAnim_loadAnimByName( getAgent(0)->entity_id, "Me", Agent_AnimType::AAT_GESTURE, 0, 0 );
			setGaze( 0, 2, 0, 3 );
			GameEngine::AgentAnim_loadAnimByName( getAgent(2)->entity_id, "Gesture_4", Agent_AnimType::AAT_GESTURE, 0, 0 );
			setGaze( 2, 0, 0, 3 );
			break;
		case 3: //scene1_3: yellow male walks to bathroom_p1 while the other gesticulate
			GameEngine::Agent_goToPosition( getAgent(4)->entity_id, -9, 0, -5, 1.2f );

			//females
			GameEngine::AgentAnim_loadAnimByName( getAgent(0)->entity_id, "Gesture_5", Agent_AnimType::AAT_GESTURE, 0, 0 );
			setGaze( 0, 2, 0, 3 );
			GameEngine::AgentAnim_loadAnimByName( getAgent(2)->entity_id, "Gesture_6", Agent_AnimType::AAT_GESTURE, 0, 0 );
			setGaze( 2, 0, 0, 3 );

			//males
			GameEngine::AgentAnim_loadAnimByName( getAgent(1)->entity_id, "Gesture_1", Agent_AnimType::AAT_GESTURE, 0, 0 );
			setGaze( 1, 3, 0, 3 );
			GameEngine::AgentAnim_loadAnimByName( getAgent(3)->entity_id, "Eat_1", Agent_AnimType::AAT_GESTURE, 0, 0 );
			setGaze( 3, 1, 0, 3 );
			break;
		case 4: //scene1_4: yellow male walks to bathroom_p2 while the other gesticulate
			GameEngine::Agent_goToPosition( getAgent(4)->entity_id, -9, 0, 12, 1.2f );

			//females
			GameEngine::AgentAnim_loadAnimByName( getAgent(0)->entity_id, "Gesture_1", Agent_AnimType::AAT_GESTURE, 0, 0 );
			setGaze( 0, 2, 0, 3 );
			GameEngine::AgentAnim_loadAnimByName( getAgent(2)->entity_id, "Gesture_2", Agent_AnimType::AAT_GESTURE, 0, 0 );
			setGaze( 2, 0, 0, 3 );

			//males
			GameEngine::AgentAnim_loadAnimByName( getAgent(1)->entity_id, "Stand_up", Agent_AnimType::AAT_GESTURE, 0, 0 );
			setGaze( 1, 3, 0, 3 );
			setGaze( 3, 1, 0, 3 );
			break;
		}
		break;

	case 2: //Animation blending
		switch(act_id)
		{
		case 1: //scene2_1: agent 1 goes to agent 0 + init
			GameEngine::Agent_goToEntity( getAgent(1)->entity_id, getAgent(0)->entity_id, 1 );
			
			//INIT			
			for(int i=0; i<NR_OF_AGENTS; i++)
			{
				getAgent(i)->setVisibility(false);
				GameEngine::IK_setParamI( getAgent(i)->entity_id, IK_Param::UseDofr_I, 0 );
				GameEngine::AgentAnim_setSpeedf( getAgent(i)->entity_id, 1.0f );
				GameEngine::AgentAnim_setExtenti( getAgent(i)->entity_id, 0, false );
			}
			getAgent(0)->setVisibility(true);
			getAgent(1)->setVisibility(true);

			//remove PC status from PC
			getPersonalChar()->makeNPC();
			//set the camera
			_x=-9.7f; _y=1.25f; _z=-5.5f; _rx=0; _ry=-70; _rz=0;
			break;
		case 2: //scene2_2: gazing
			setGaze( 0, 1, 0, 3 );
			setGaze( 1, 0, 0, 3 );
			break;
		case 3: //scene2_3: female gesture1
			GameEngine::AgentAnim_loadAnimByName( getAgent(0)->entity_id, "Gesture_4", Agent_AnimType::AAT_GESTURE, 0, 0 );
			break;
		case 4: //scene2_4: female gesture2
			GameEngine::AgentAnim_loadAnimByName( getAgent(0)->entity_id, "Gesture_1", Agent_AnimType::AAT_GESTURE, 0, 0 );
			break;
		}
		break;

	case 3: //Animation customization
		switch(act_id)
		{
		case 1: //scene3_1: agent 1 goes to agent 0 + init
			GameEngine::Agent_goToEntity( getAgent(1)->entity_id, getAgent(0)->entity_id, 1 );
			
			//INIT			
			for(int i=0; i<NR_OF_AGENTS; i++)
			{
				getAgent(i)->setVisibility(false);
				GameEngine::IK_setParamI( getAgent(i)->entity_id, IK_Param::UseDofr_I, 0 );
				GameEngine::AgentAnim_setSpeedf( getAgent(i)->entity_id, 1.0f); //random speed
				GameEngine::AgentAnim_setExtenti( getAgent(i)->entity_id, 0, false );
			}
			getAgent(0)->setVisibility(true);
			getAgent(1)->setVisibility(true);

			//remove PC status from PC
			getPersonalChar()->makeNPC();
			//set the camera
			_x=-9.7f; _y=1.25f; _z=-5.5f; _rx=0; _ry=-70; _rz=0;
			break;
		case 2: //scene3_2: gazing
			setGaze( 0, 1, 0, 3 );
			setGaze( 1, 0, 0, 3 );
			break;
		case 3: //scene3_3: female gesture1
			GameEngine::AgentAnim_setExtenti(getAgent(0)->entity_id, 0, false);
			GameEngine::AgentAnim_setSpeedf(getAgent(0)->entity_id, 1);
			GameEngine::AgentAnim_loadAnimByName( getAgent(0)->entity_id, "Gesture_1", Agent_AnimType::AAT_GESTURE, 0, 0 );
			break;
		case 4: //scene3_4: female gesture1 with changed speed and SE
			GameEngine::AgentAnim_setExtenti(getAgent(0)->entity_id, 7, false);
			GameEngine::AgentAnim_setSpeedf(getAgent(0)->entity_id, 1);
			GameEngine::AgentAnim_loadAnimByName( getAgent(0)->entity_id, "Gesture_1", Agent_AnimType::AAT_GESTURE, 0, 0 );
			break;
		}
		break;

	case 4: //interaction
		switch(act_id)
		{
		case 1: //scene4_1: init
			GameEngine::Agent_goToEntity( getAgent(1)->entity_id, getAgent(0)->entity_id, 1 );
			GameEngine::Agent_goToEntity( getAgent(4)->entity_id, getAgent(0)->entity_id, 1 );
			GameEngine::Agent_goToPosition( getAgent(2)->entity_id, -8, 0,0, 1 );
			
			//INIT		
			for(int i=0; i<NR_OF_AGENTS; i++)
			{
				getAgent(i)->setVisibility(false);
				GameEngine::IK_setParamI( getAgent(i)->entity_id, IK_Param::UseDofr_I, 0 );
				GameEngine::AgentAnim_setSpeedf( getAgent(i)->entity_id, 1.0 );
				GameEngine::AgentAnim_setExtenti( getAgent(i)->entity_id, 0, false );
			}
			getAgent(0)->setVisibility(true);
			getAgent(1)->setVisibility(true);
			getAgent(2)->setVisibility(true);
			getAgent(4)->setVisibility(true);
			//remove PC status from PC
			getPersonalChar()->makeNPC();
			//set the camera
			_x=-10; _y=3.5f; _z=-2; _rx=-30; _ry=-22; _rz=0;
			break;
		case 2: //scene4_2: agent 4 goes to agent 0	
			GameEngine::Agent_goToEntity( getAgent(4)->entity_id, getAgent(1)->entity_id, 1 );
			setGaze( 1, 4, 0, 3 );
			setGaze( 0, 4, 0, 3 );
			setGaze( 4, 0, 0, 3 );			
			break;
		case 3: //scene4_3: agent 4 gesticulates, other gaze at it
			GameEngine::AgentAnim_loadAnimByName( getAgent(4)->entity_id, "Gesture_4", Agent_AnimType::AAT_GESTURE, 0, 0 );
			setGaze( 1, 4, 0, 3 );
			setGaze( 0, 4, 0, 3 );
			setGaze( 4, 1, 0, 3 );

			GameEngine::speak( getAgent(4)->entity_id, "Ben, I heared you got back together with Crystal." );
			break;
		case 4: //scene4_4: agent 1 gesticulates
			GameEngine::AgentAnim_loadAnimByName( getAgent(1)->entity_id, "Me", Agent_AnimType::AAT_GESTURE, 0, 0 );
			setGaze( 4, 1, 0, 3 );
			setGaze( 0, 1, 0, 3 );
			
			GameEngine::speak( getAgent(1)->entity_id, "What? Me? No way!" );
			break;	
		case 5: //scene4_5: agent 0 gesticulates
			GameEngine::AgentAnim_loadAnimByName( getAgent(0)->entity_id, "Gesture_1", Agent_AnimType::AAT_GESTURE, 0, 0 );
			setGaze( 1, 0, 0, 3 );
			setGaze( 4, 0, 0, 3 );

			GameEngine::speak( getAgent(0)->entity_id, "Stop pretending, she told us." );
			break;
		case 6: //scene4_6: agent 2 goes to agent 4	(newcommer)
			GameEngine::Agent_goToEntity( getAgent(2)->entity_id, getAgent(4)->entity_id, 1 );
			break;
		case 7: //scene4_7: agent 2 gesticulates
			GameEngine::AgentAnim_loadAnimByName( getAgent(2)->entity_id, "Becking_1", Agent_AnimType::AAT_GESTURE, 0, 0 );
			GameEngine::speak( getAgent(2)->entity_id, "Hello guys, what are you talking about?" );
			break;
		case 8: //scene4_8: agents welcome newcommer
			GameEngine::speak( getAgent(0)->entity_id, "Hi Crystal!" );
			GameEngine::speak( getAgent(1)->entity_id, "Hi Crystal!" );
			GameEngine::speak( getAgent(4)->entity_id, "Uh, Hello!" );
			break;
		}
		break;

	case 5: //Final scene
		switch(act_id)
		{
		case 1: //scene5_1: init
			//movement
			GameEngine::Agent_goToEntity( getAgent(0)->entity_id, getAgent(2)->entity_id, 1 );
			GameEngine::Agent_goToEntity( getAgent(1)->entity_id, getAgent(4)->entity_id, 1 );

			//barman gesticulates
			GameEngine::AgentAnim_loadAnimByName( getAgent(12)->entity_id, "Gesture_2", Agent_AnimType::AAT_IDLE, 0, 0 );
			
			//INIT	
			m_scenario_counter = 0;
			for(int i=0; i<NR_OF_AGENTS; i++)
			{
				getAgent(i)->setVisibility(true);
				GameEngine::IK_setParamI( getAgent(i)->entity_id, IK_Param::UseDofr_I, 1 );
				GameEngine::AgentAnim_setSpeedf( getAgent(i)->entity_id, 0.8f + (rand() % 40)/100.0f );
				GameEngine::AgentAnim_setExtenti( getAgent(i)->entity_id, 0, false );
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
	
	std::stringstream msg_ss("");
	if(strcmp(nodeName,"berg")==0)
	{
		int agent_id = getPersonalChar()->id;

		GameEngine::Agent_goToPosition(getPersonalChar()->entity_id, x,y,z, 1.3f);
		getAgent(agent_id)->gazeNodes.top()->active = false;
		getAgent(agent_id)->movement = 1;

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

		GameEngine::Agent_goToEntity( getPersonalChar()->entity_id, dest->entity_id, 1.3f);
		getAgent(agent_id)->gazeNodes.top()->active = false;
		getAgent(agent_id)->movement = 1;

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

void Application::setGaze( unsigned int agent_id, unsigned int target_id, int head_pitch, float speed )
{
	if(m_agents.size() <= agent_id)
		return;

	GazeNode* new_gaze = new GazeNode( getAgent(agent_id), getAgent(agent_id)->gazeNodes.top()->morph_curValue, getAgent(target_id), speed );

	getAgent(agent_id)->gazeNodes.push( new_gaze );
	getAgent(agent_id)->gazeNodes.top()->head_pitch = head_pitch;
}


void Application::setGaze( unsigned int agent_id, float targetX, float targetY, float targetZ, int head_pitch, float speed )
{
	if(m_agents.size() <= agent_id)
		return;

	GazeNode* new_gaze = new GazeNode( getAgent(agent_id), getAgent(agent_id)->gazeNodes.top()->morph_curValue, Vec3f(targetX,targetY,targetZ), speed );

	getAgent(agent_id)->gazeNodes.push( new_gaze );
	getAgent(agent_id)->gazeNodes.top()->head_pitch = head_pitch;
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
