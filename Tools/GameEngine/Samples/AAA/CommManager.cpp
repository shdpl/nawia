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
#include "CommManager.h"
#include "GameEngine\GameEngine_Socket.h"
#include "GameEngine\GameEngine_AgentAnim.h"
#include "GameEngine\GameEngine_AgentAction.h"
#include "GameEngine\GameEngine_Sapi.h"
#include "GameEngine\GameEvent.h"
#include "GameEngine\GameEngine.h"

CommManager::CommManager(void* AAA)
{
	app = (Application *)AAA;
	
	//Start Bayesnet
	bn = new Bayesnet();

	context = NULL;
}

void CommManager::processMessages()
{
	const char *c_buffer_recv = new char[256];
	socketEntityID = app->getAgent(0)->entity_id;

	////////////////////////////////////////////////////
	//				Client Feedback					  //
	////////////////////////////////////////////////////
	generateClientFeedback();
		
	int trans_length = GameEngine::getSocketData(socketEntityID, &c_buffer_recv);
	if(trans_length == 0 || trans_length > 255)
		return;
	
	//Computing the information	
	memcpy(buffer_recv, c_buffer_recv, trans_length);
	buffer_recv[trans_length] = '\0';
	//printf("Client sent following string: %s\n",buffer_recv);
	
	
	////////////////////////////////////////////////////
	//					Custom input				  //
	////////////////////////////////////////////////////
	char* ptr;
	char temp[256]; //we need a temp copy of buffer to give to the tokanizer as input
	strcpy_s( temp, buffer_recv );
	ptr = strtok_s( temp, " ", &context );
	if(ptr == NULL) 
		return;
	
	/*Custom animation request
	*Format:
	*				anim MODEL ANIM_FILE_NAME MASK [ idle | posture ]
	*/
	if(strcmp(ptr, "anim") == 0)
	{
		processAnim(ptr);
	}

	/*Custom TTSV request
	*Format:
	*				speak MODEL 'SPEAK_TEXT'
	*/
	else if(strcmp(ptr, "speak") == 0)
	{
		processSpeak(ptr);
	}

	/*Set future behaviour of character(s)
	*Format:
	*				set MODEL BAYES_CULTURE ANIM_CULTURE 
	*/
	else if(strcmp(ptr, "set") == 0)
	{
		processSet(ptr);
	}

	/*Set sound volume
	*Format:
	*				setvolume MODEL VALUE 
	*/
	else if(strcmp(ptr, "setvolume") == 0)
	{
		processSetVolume(ptr);
	}

	/*Set future behaviour of character(s)
	*Format:
	*				setspeed MODEL VALUE 
	*/
	else if(strcmp(ptr, "setspeed") == 0)
	{
		processSetSpeed(ptr);
	}

	/*Set future behaviour of character(s)
	*Format:
	*				setextent MODEL VALUE 
	*/
	else if(strcmp(ptr, "setextent") == 0)
	{
		processSetExtent(ptr);
	}

	/*Set future behaviour of character(s)
	*Format:
	*				setextentnow MODEL VALUE 
	*/
	else if(strcmp(ptr, "setextentnow") == 0)
	{
		processSetExtentNow(ptr);	
	}

	/*Renders an agent visible or invisible
	*Format:
	*				setvisibility MODEL VALUE 
	*/
	else if(strcmp(ptr, "setvisibility") == 0)
	{
		processSetVisibility(ptr);
	}

	/*Execute commands (TTSV or Animation) [with behaviour options]
	*Format:
	*				do MODEL ['SPEAK_TEXT'] [anim NAME [MASK_START] [CULTURE]] 
	*/
	else if(strcmp(ptr, "do") == 0)
	{
		processDo(ptr);
	}

	/*Execute gaze action
	*Format:
	*				lookat MODEL TARGETagent->entity_id [speed SPEED] [hp HEAD_PITCH] 
	*/
	else if(strcmp(ptr, "lookat") == 0)
	{
		processLookat(ptr);
	}

	/*Execute gaze action
	*Format:
	*				gaze MODEL TARGET_X TARGET_Y TARGET_Z [speed SPEED] [hp HEAD_PITCH] 
	*/
	else if(strcmp(ptr, "gaze") == 0)
	{
		processGaze(ptr);
	}

	/*Execute movement action
	*Format:
	*				gotopos MODEL DEST_X DEST_Y DEST_Z [speed SPEED] 
	*/
	else if(strcmp(ptr, "gotopos") == 0)
	{
		processGotopos(ptr);
	}

	/*Execute movement action
	*Format:
	*				goto MODEL MODEL_DEST [speed SPEED] 
	*/
	else if(strcmp(ptr, "goto") == 0)
	{
		processGoto(ptr);
	}

	/*Clear stages (Delete all animations)
	*Format:
	*				clr
	*/
	else if(strcmp(ptr, "clr") == 0)
	{
		for(int i=0; i<app->NR_OF_AGENTS; i++)
			GameEngine::AgentAnim_clearStages( app->getAgent(i)->entity_id );
	}
	return;
}

/**
 * Generates feedback messages for client and sends the via the SocketComponent
 */
void CommManager::generateClientFeedback()
{
	char* agentid_spacer;
	char* objid_spacer;
	
	/**
	 * Animations
	 */
	Agent_AnimStatus::List anim_status = Agent_AnimStatus::AAS_UNKNOWN;

	//loop through the current animations and check their status
	for(int i=0; i< app->NR_OF_AGENTS; i++)
	{
		if(app->getAgent(i)->animation_id < 0)
			continue;

		msg_ss.str("");
		//check status of animation with id: animations_id
		anim_status = GameEngine::AgentAnim_getAnimStatus( app->getAgent(i)->entity_id, app->getAgent(i)->animation_id );

		if(i < 10) agentid_spacer = "0";
		else  agentid_spacer = "";
		if(app->getAgent(i)->animation_id < 10) objid_spacer = "0";
		else objid_spacer = "";

		//compute the status
		//send feedback to client
		switch(anim_status)
		{
		case Agent_AnimStatus::AAS_ANIM_NOT_FOUND:
			//can't find animation, anim dead
			
			//generate message
			msg_ss << agentid_spacer << i << objid_spacer << app->getAgent(i)->animation_id << "100";
			msg_ss << " agent #" << i << " animation #" << app->getAgent(i)->animation_id << " finished (cannot be found)";
			
			//send message
			GameEngine::sendSocketData( socketEntityID, msg_ss.str().c_str() );

			app->getAgent(i)->animation_id = -1;
			break;
		case Agent_AnimStatus::AAS_FINISHED:
			//animation finished

			//generate message
			msg_ss << agentid_spacer << i << objid_spacer << app->getAgent(i)->animation_id << "101";
			msg_ss << " agent #" << i << " animation #" << app->getAgent(i)->animation_id << " finished";
			
			//send message
			GameEngine::sendSocketData( socketEntityID, msg_ss.str().c_str() );

			app->getAgent(i)->animation_id = -1;
			break;
		case Agent_AnimStatus::AAS_ASLEEP:
			//animation asleep

			//generate message
			msg_ss << agentid_spacer << i << objid_spacer << app->getAgent(i)->animation_id << "110";
			msg_ss << " agent #" << i << " animation #" << app->getAgent(i)->animation_id << " asleep (no longer active, might have finished)";
			
			//send message
			GameEngine::sendSocketData( socketEntityID, msg_ss.str().c_str() );

			app->getAgent(i)->animation_id = -1;
			break;
		case Agent_AnimStatus::AAS_ASLEEP_AT_LASTFRAME:
			//posture

			//generate message
			msg_ss << agentid_spacer << i << objid_spacer << app->getAgent(i)->animation_id << "111";
			msg_ss << " agent #" << i << " animation #" << app->getAgent(i)->animation_id << " asleep (has reached the last frame and froze (posture))";
			
			//send message
			GameEngine::sendSocketData( socketEntityID, msg_ss.str().c_str() );

			app->getAgent(i)->animation_id = -1;
			break;
		case Agent_AnimStatus::AAS_ACTIVE:
			//animation running

			//do nothing
			break;
		default:
			//error, unrecognised value

			//do nothing
			break;
		}
	}

	/**
	 * Speach
	 */
	//loop through the agent nodes and check their status
	for(int i=0; i< app->NR_OF_AGENTS; i++)
	{
		if(!app->getAgent(i)->speaks)
			continue;

		if(i < 10) agentid_spacer = "0";
		else  agentid_spacer = "";

		msg_ss.str("");
		if(!GameEngine::isSpeaking(app->getAgent(i)->entity_id))
		{
			//agent stopped speaking

			//generate message
			msg_ss << agentid_spacer << i << "00" << "200";
			msg_ss << " agent #" << i << " speaking stopped";
			
			//send message
			GameEngine::sendSocketData( socketEntityID, msg_ss.str().c_str() );

			app->getAgent(i)->speaks = false;
		}
	}

	/**
	 * Movement
	 */
	Agent_Status::List agent_status = Agent_Status::AS_UNKNOWN;

	//loop through the current animations and check their status
	for(int i=0; i< app->NR_OF_AGENTS; i++)
	{
		if(app->getAgent(i)->movement < 0)
			continue;

		if(i < 10) agentid_spacer = "0";
		else  agentid_spacer = "";

		msg_ss.str("");
		//check status of animation with id: animations_id
		agent_status = GameEngine::Agent_getAgentStatus( app->getAgent(i)->entity_id );

		//compute the status
		//send feedback to client
		switch(agent_status)
		{
		case Agent_Status::AS_FADING_STOPWALK:
			//agent will come to a halt soon
			//do nothing
			break;
		case Agent_Status::AS_IDLE_OR_UNKNOWN:
			//movement finished

			//generate message
			msg_ss << agentid_spacer << i << "00" << "300";
			msg_ss << " agent #" << i << " movement finsihed (agent might be idle)";
			
			//send message
			GameEngine::sendSocketData( socketEntityID, msg_ss.str().c_str() );

			app->getAgent(i)->movement = -1;
			break;
		case Agent_Status::AS_INTERACTING_WITH_AGENT:
			//interaction started

			//generate message
			msg_ss << agentid_spacer << i << "00" << "301";
			msg_ss << " agent #" << i << " movement finsihed (agent is interacting with other agents)";
			
			//send message
			GameEngine::sendSocketData( socketEntityID, msg_ss.str().c_str() );

			app->getAgent(i)->movement = -1;
			break;
		case Agent_Status::AS_ROTATING:
			//rotation started
			//do nothing
			break;
		case Agent_Status::AS_WALKING:
			//do nothing
			break;
		default:
			//error, unrecognised value

			//do nothing
			break;
		}
	}
}

/*Custom animation request
*Format:
*				anim MODEL ANIM_FILE_NAME MASK SYNC [ idle | posture ]
*/
void CommManager::processAnim(char* cmd)
{
	bool loop = false;
	bool doNotDie = false;
	AgentNode* agent;
	int agent_id;
	char _file[256];
	char _mask[64] = "";	
	char _syncWord[64] = "";
	Agent_AnimType::List type = Agent_AnimType::AAT_UNKNOWN;

	//Model
	cmd = strtok_s( NULL, " ", &context );
	if(cmd == NULL) return;
	agent_id = (int)atof( cmd );
	agent = app->getAgent(agent_id);
	if(agent <= 0)
		return;
	
	//Filename
	cmd = strtok_s( NULL, " ", &context );
	if(cmd == NULL) return;
	strcpy_s(_file, cmd);
	//memcpy(_file, cmd, sizeof(cmd));
	
	//Mask (area of effect) - starting node
	cmd = strtok_s( NULL, " ", &context );
	if(cmd == NULL) return;
	strcpy_s(_mask, cmd);

	//Sync (speach synchronisation) - starting node
	cmd = strtok_s( NULL, " ", &context );
	if(cmd == NULL) return;
	strcpy_s(_syncWord, cmd);

	//other options (loop)
	cmd = strtok_s( NULL, " ", &context );
	if(cmd != NULL)
	{
		if(strcmp( cmd, "idle" ) == 0) loop = true;
		if(strcmp( cmd, "posture" ) == 0) doNotDie = true;
	}

	if( strcmp(_mask, "null") != 0 && strcmp(_mask, "") != 0 ) 
		type = Agent_AnimType::AAT_GESTURE_ADDITIVE;
	else
	{
		_mask[0] = '\0';
		if( doNotDie ) 
			type = Agent_AnimType::AAT_POSTURE;

		else if( loop ) 
			type = Agent_AnimType::AAT_IDLE;

		else 
			type = Agent_AnimType::AAT_GESTURE;
	}
	
	//Add the animation
	agent->animation_id = GameEngine::AgentAnim_loadAnim( agent->entity_id, _file, type, 
			( strcmp(_mask, "null") == 0 || strcmp(_mask, "") == 0 ) ? 0 : _mask,
			( strcmp(_syncWord, "null") == 0 || strcmp(_syncWord, "") == 0 ) ? 0 : _syncWord );
	//send feedback
	//generate message
	char* agentid_spacer;
	char* objid_spacer;
	if(agent_id < 10) agentid_spacer = "0";
	else  agentid_spacer = "";
	if(agent->animation_id < 10) objid_spacer = "0";
	else  objid_spacer = "";

	msg_ss.str("");
	if(agent->animation_id < 0)
	{
		msg_ss << agentid_spacer << agent_id << "00" << "190";
		msg_ss << " agent #" << agent_id << " ERROR (animation '" << _file << "' failed to start)";
	}
	else
	{
		msg_ss << agentid_spacer << agent_id << objid_spacer << agent->animation_id << "150";
		msg_ss << " agent #" << agent_id << " animation #" << agent->animation_id << " started";
	}
	//send message
	GameEngine::sendSocketData( socketEntityID, msg_ss.str().c_str() );
}

/*Custom TTSV request
*Format:
*				speak MODEL 'SPEAK_TEXT'
*/
void CommManager::processSpeak(char* cmd)
{
	char text[256];
	unsigned int agent_id;
	AgentNode* agent;
	
	//Model
	cmd = strtok_s( NULL, " ", &context );
	if(cmd == NULL) return;
	//If not numerical, return
	str.assign( cmd );
	if(str.find_first_not_of("1234567890") != string::npos) return;
	agent_id = (int)atof( cmd );
	agent = app->getAgent(agent_id);
	if(agent <= 0)
		return;

	//Text
	cmd = strtok_s( NULL, "'", &context );
	if(cmd == NULL) return;
	strcpy_s(text, cmd);
	
	//Start the ttsv
	GameEngine::speak( agent->entity_id, text );
	agent->speaks = true;
	//send feedback
	//generate message
	char* agentid_spacer;
	if(agent_id < 10) agentid_spacer = "0";
	else  agentid_spacer = "";

	msg_ss.str("");
	msg_ss << agentid_spacer << agent_id << "00" << "250";
	msg_ss << " agent #" << agent_id << " speaking started";
	//send message
	GameEngine::sendSocketData( socketEntityID, msg_ss.str().c_str() );
}

/*Set future behaviour of character(s)
*Format:
*				set MODEL BAYES_CULTURE ANIM_CULTURE 
*/
void CommManager::processSet(char* cmd)
{
	AgentNode* agent;
	unsigned int agent_id;

	//** Model
	cmd = strtok_s( NULL, " ", &context );
	if(cmd == NULL) return;
	//If not numerical, return
	str.assign( cmd );
	if(str.find_first_not_of("1234567890") != string::npos) return;
	agent_id = (int)atof( cmd );
	agent = app->getAgent(agent_id);
	if(agent <= 0)
		return;

	//** Bayesnet Culture
	cmd = strtok_s( NULL, " ", &context );
	if(cmd == NULL) return;

	bn->processBayesNet( (int)atof( cmd ) ); // 2 = Germany, 4 = Japan
	printf( "Bayesnet processed [ %s, %s, %s ]\n", bn->cur_se, bn->cur_speed, bn->cur_sound);

	//Set Spatial Extent
	GameEngine::AgentAnim_setExtents( agent->entity_id, bn->cur_se, false);
	//Set Speed
	GameEngine::AgentAnim_setSpeeds( agent->entity_id, bn->cur_speed);
	//Set Sound
	if(strcmp(bn->cur_sound, "low") == 0)
	{
		//TODO set TTS volume
	}
	else if(strcmp(bn->cur_sound, "medium") == 0)
	{
		//TODO set TTS volume
	}
	else if(strcmp(bn->cur_sound, "high") == 0)
	{
		//TODO set TTS volume
	}
	

	//** Animation Culture
	cmd = strtok_s( NULL, " ", &context );
	if(cmd == NULL) return;
	agent->culture = (int)atof( cmd ); // 2 = Germany, 4 = Japan
}

/*Set sound volume
*Format:
*				setvolume MODEL VALUE 
*/
void CommManager::processSetVolume(char* cmd)
{
	AgentNode* agent;
	unsigned int agent_id;
	float _value;

	//** Model
	cmd = strtok_s( NULL, " ", &context );
	if(cmd == NULL) return;
	//If not numerical, return
	str.assign( cmd );
	if(str.find_first_not_of("1234567890") != string::npos) return;
	agent_id = (int)atof( cmd );
	agent = app->getAgent(agent_id);
	if(agent <= 0)
		return;

	//** Value
	cmd = strtok_s( NULL, "'", &context );
	if(cmd == NULL) return;
	//If not numerical, return
	str.assign( cmd );
	if(str.find_first_not_of("1234567890.") == string::npos)
	{
		_value = (float)atof( cmd );

		//TODO set TTS volume
	}
}

/*Set future behaviour of character(s)
*Format:
*				setspeed MODEL VALUE 
*/
void CommManager::processSetSpeed(char* cmd)
{
	AgentNode* agent;
	unsigned int agent_id;
	float _value;
	char _value_c[16];

	//** Model
	cmd = strtok_s( NULL, " ", &context );
	if(cmd == NULL) return;
	//If not numerical, return
	str.assign( cmd );
	if(str.find_first_not_of("1234567890") != string::npos) return;
	agent_id = (int)atof( cmd );
	agent = app->getAgent(agent_id);
	if(agent <= 0)
		return;

	//** Value
	cmd = strtok_s( NULL, "'", &context );
	if(cmd == NULL) return;
	//If not numerical, return
	str.assign( cmd );
	if(str.find_first_not_of("1234567890.") == string::npos)
	{
		_value = (float)atof( cmd );

		//Set Speed
		GameEngine::AgentAnim_setSpeedf( agent->entity_id, _value);
	}
	else
	{
		strcpy_s(_value_c, cmd);

		//Set Speed
		GameEngine::AgentAnim_setSpeeds( agent->entity_id, _value_c);
	}
}

/*Set future behaviour of character(s)
*Format:
*				setextent MODEL VALUE 
*/
void CommManager::processSetExtent(char* cmd)
{
	AgentNode* agent;
	unsigned int agent_id;
	unsigned int _value;
	char _value_c[16];

	//** Model
	cmd = strtok_s( NULL, " ", &context );
	if(cmd == NULL) return;
	//If not numerical, return
	str.assign( cmd );
	if(str.find_first_not_of("1234567890") != string::npos) return;
	agent_id = (int)atof( cmd );
	agent = app->getAgent(agent_id);
	if(agent <= 0)
		return;

	//** Value
	cmd = strtok_s( NULL, "'", &context );
	if(cmd == NULL) return;
	//If not numerical, return
	str.assign( cmd );
	if(str.find_first_not_of("1234567890") == string::npos)
	{
		_value = (int)atof( cmd );

		//Set Extent
		GameEngine::AgentAnim_setExtenti( agent->entity_id, _value, false);
	}
	else
	{
		strcpy_s(_value_c, cmd);

		//Set Extent
		GameEngine::AgentAnim_setExtents( agent->entity_id, _value_c, false);
	}
}

/*Set future behaviour of character(s)
*Format:
*				setextentnow MODEL VALUE 
*/
void CommManager::processSetExtentNow(char* cmd)
{
	AgentNode* agent;
	unsigned int agent_id;
	unsigned int _value;
	char _value_c[16];

	//** Model
	cmd = strtok_s( NULL, " ", &context );
	if(cmd == NULL) return;
	//If not numerical, return
	str.assign( cmd );
	if(str.find_first_not_of("1234567890") != string::npos) return;
	agent_id = (int)atof( cmd );
	agent = app->getAgent(agent_id);
	if(agent <= 0)
		return;

	//** Value
	cmd = strtok_s( NULL, "'", &context );
	if(cmd == NULL) return;
	//If not numerical, return
	str.assign( cmd );
	if(str.find_first_not_of("1234567890") == string::npos)
	{
		_value = (int)atof( cmd );

		//Set Extent
		GameEngine::AgentAnim_setExtenti( agent->entity_id, _value, true);
	}
	else
	{
		strcpy_s(_value_c, cmd);

		//Set Extent
		GameEngine::AgentAnim_setExtents( agent->entity_id, _value_c, true);
	}
}

/*Renders an agent visible or invisible
*Format:
*				setvisibility MODEL VALUE 
*/
void CommManager::processSetVisibility(char* cmd)
{
	AgentNode* agent;
	unsigned int agent_id;
	unsigned int _value;

	//** Model
	cmd = strtok_s( NULL, " ", &context );
	if(cmd == NULL) return;
	//If not numerical, return
	str.assign( cmd );
	if(str.find_first_not_of("1234567890") != string::npos) return;
	agent_id = (int)atof( cmd );
	agent = app->getAgent(agent_id);
	if(agent <= 0)
		return;

	//** Value
	cmd = strtok_s( NULL, "'", &context );
	if(cmd == NULL) return;
	//If not numerical, return
	str.assign( cmd );
	if(str.find_first_not_of("1234567890") == string::npos)
	{
		_value = atoi( cmd );
		agent->setVisibility( (_value <= 0) ? false : true );
	}
}

/*Execute commands (TTSV or Animation) [with behaviour options]
*Format:
*				do MODEL ['SPEAK_TEXT'] [anim FILENAME [MASK_START] [CULTURE] [-sync SYNC_WORD]] 
*				do MODEL ['SPEAK_TEXT'] [animid ID [MASK_START] [CULTURE] [-sync SYNC_WORD]] 
*				do MODEL ['SPEAK_TEXT'] [animname NAME [MASK_START] [CULTURE] [-sync SYNC_WORD]] 
*/
void CommManager::processDo(char* cmd)
{
	AgentNode* agent;
	unsigned int agent_id;
	char text[256];
	bool loop = false;
	bool doNotDie = false;
	char _file[256];
	char _name[64];
	char _mask[64] = "";
	char* mask = 0;
	char _syncWord[64] = "";
	Agent_AnimType::List type = Agent_AnimType::AAT_UNKNOWN;

	//** Model
	cmd = strtok_s( NULL, " ", &context );
	if(cmd == NULL) return;
	//If not numerical, return
	str.assign( cmd );
	if(str.find_first_not_of("1234567890") != string::npos) return;
	agent_id = (int)atof( cmd );
	agent = app->getAgent(agent_id);
	if(agent <= 0)
		return;

	//** TTSV (text to speach and viseme)
	//text to be spoken
	if( strstr( buffer_recv, "'" ) != NULL )
	{
		cmd = strtok_s( NULL, "'", &context );
		if(cmd != NULL)
		{
			strcpy_s(text, cmd);
			GameEngine::speak( agent->entity_id, text );
			agent->speaks = true;
			//send feedback
			//generate message
			char* agentid_spacer;
			if(agent_id < 10) agentid_spacer = "0";
			else  agentid_spacer = "";

			msg_ss.str("");
			msg_ss << agentid_spacer << agent_id << "00" << "250";
			msg_ss << " agent #" << agent_id << " speaking started";
			//send message
			GameEngine::sendSocketData( socketEntityID, msg_ss.str().c_str() );
		}
	}


	//** Animation
	/*
	 * Load by file
	 */
	cmd = strtok_s( NULL, " ", &context );
	if(cmd != NULL && (strcmp(cmd, "anim")==0))
	{
		//Name
		cmd = strtok_s( NULL, " ", &context );
		if(cmd == NULL) return;
		strcpy_s(_name, cmd);
		
		//Additional animation options
		// - Area of Effect
		// - Animation Culture
		cmd = strtok_s( NULL, " ", &context );
		while(cmd != NULL)
		{
			str.assign( cmd );
			//starting node
			if(strstr( cmd, "Bip01" ) != 0)
				strcpy_s(_mask, cmd );

			//Animation Culture
			else if(str.find_first_not_of("1234567890") == string::npos)
				agent->culture = (int)atof( cmd ); // 2 = Germany, 4 = Japan

			//speach synchronization
			else if(strcmp(cmd, "-sync") == 0)
			{
				cmd = strtok_s( NULL, " ", &context );
				strcpy_s(_syncWord, cmd );
			}

			cmd = strtok_s( NULL, " ", &context );
		}

		//Determining the animation file
		if( agent->culture == 2 )
		{
			if( agent_id % 2 != 0 ) 
			{
				strcpy_s( _file, "male_german_" );
				strcat_s( _file, _name );
				strcat_s( _file, ".anim");
			}
			else
			{
				strcpy_s( _file, "female_german_" );
				strcat_s( _file, _name );
				strcat_s( _file, ".anim");
			}
		}
		if( agent->culture == 4 )
		{
			if( agent_id % 2 != 0 ) 
			{
				strcpy_s( _file, "male_japan_" );
				strcat_s( _file, _name );
				strcat_s( _file, ".anim");
			}
			else
			{
				strcpy_s( _file, "female_japan_" );
				strcat_s( _file, _name );
				strcat_s( _file, ".anim");
			}
		}
		
		if( strcmp(_mask, "null") != 0 && strcmp(_mask, "") != 0 ) 
			type = Agent_AnimType::AAT_GESTURE_ADDITIVE;

		else if( strstr( _name, "posture" ) != 0 ) 
			type = Agent_AnimType::AAT_POSTURE;

		else if( strstr( _name, "idle" ) != 0 ) 
			type = Agent_AnimType::AAT_IDLE;

		else 
			type = Agent_AnimType::AAT_GESTURE;
		
		//Add the animation			
		agent->animation_id = GameEngine::AgentAnim_loadAnim( agent->entity_id, _file, type,
			( strcmp(_mask, "null") == 0 || strcmp(_mask, "") == 0 ) ? 0 : _mask,
			( strcmp(_syncWord, "null") == 0 || strcmp(_syncWord, "") == 0 ) ? 0 : _syncWord );
		//send feedback
		//generate message
		char* agentid_spacer;
		char* objid_spacer;
		if(agent_id < 10) agentid_spacer = "0";
		else  agentid_spacer = "";
		if(agent->animation_id < 10) objid_spacer = "0";
		else  objid_spacer = "";

		msg_ss.str("");
		if(agent->animation_id < 0)
		{
			msg_ss << agentid_spacer << agent_id << "00" << "190";
			msg_ss << " agent #" << agent_id << " ERROR (animation '" << _file << "' failed to start)";
		}
		else
		{
			msg_ss << agentid_spacer << agent_id << objid_spacer << agent->animation_id << "150";
			msg_ss << " agent #" << agent_id << " animation #" << agent->animation_id << " started";
		}
		//send message
		GameEngine::sendSocketData( socketEntityID, msg_ss.str().c_str() );
	}

	/*
	 * Load by name
	 */
	else if(cmd != NULL && (strcmp(cmd, "animname")==0))
	{
		//Name
		cmd = strtok_s( NULL, " ", &context );
		if(cmd == NULL) return;
		strcpy_s(_name, cmd);
		
		//Additional animation options
		// - Area of Effect
		// - Animation Culture
		cmd = strtok_s( NULL, " ", &context );
		while(cmd != NULL)
		{
			str.assign( cmd );
			//starting node
			if(strstr( cmd, "Bip01" ) != 0)
				strcpy_s(_mask, cmd );

			//Animation Culture
			else if(str.find_first_not_of("1234567890") == string::npos)
				agent->culture = (int)atof( cmd ); // 2 = Germany, 4 = Japan

			//speach synchronization
			else if(strcmp(cmd, "-sync") == 0)
			{
				cmd = strtok_s( NULL, " ", &context );
				strcpy_s(_syncWord, cmd );
			}

			cmd = strtok_s( NULL, " ", &context );
		}

		if( strcmp(_mask, "null") != 0 && strcmp(_mask, "") != 0 ) 
			type = Agent_AnimType::AAT_GESTURE_ADDITIVE;
		else
		{
			_mask[0] = '\0';
			if( doNotDie ) 
				type = Agent_AnimType::AAT_POSTURE;

			else if( loop ) 
				type = Agent_AnimType::AAT_IDLE;

			else 
				type = Agent_AnimType::AAT_GESTURE;
		}
		
		//Add the animation			
		agent->animation_id = GameEngine::AgentAnim_loadAnimByName( agent->entity_id, _name, type,
			( strcmp(_mask, "null") == 0 || strcmp(_mask, "") == 0 ) ? 0 : _mask,
			( strcmp(_syncWord, "null") == 0 || strcmp(_syncWord, "") == 0 ) ? 0 : _syncWord );
		//send feedback
		//generate message
		char* agentid_spacer;
		char* objid_spacer;
		if(agent_id < 10) agentid_spacer = "0";
		else  agentid_spacer = "";
		if(agent->animation_id < 10) objid_spacer = "0";
		else  objid_spacer = "";

		msg_ss.str("");
		if(agent->animation_id < 0)
		{
			msg_ss << agentid_spacer << agent_id << "00" << "190";
			msg_ss << " agent #" << agent_id << " ERROR (animation '" << _name << "' failed to start)";
		}
		else
		{
			msg_ss << agentid_spacer << agent_id << objid_spacer << agent->animation_id << "150";
			msg_ss << " agent #" << agent_id << " animation #" << agent->animation_id << " started";
		}
		//send message
		GameEngine::sendSocketData( socketEntityID, msg_ss.str().c_str() );
	}

	/*
	 * Load by id
	 */
	else if(cmd != NULL && (strcmp(cmd, "animid")==0))
	{
		//ID
		int _id;
		cmd = strtok_s( NULL, " ", &context );
		str.assign(cmd);
		if(str.find_first_not_of("1234567890") == string::npos)
			 _id = (int)atof( cmd );
		
		//Additional animation options
		// - Area of Effect
		// - Animation Culture
		cmd = strtok_s( NULL, " ", &context );
		while(cmd != NULL)
		{
			str.assign( cmd );
			//starting node
			if(strstr( cmd, "Bip01" ) != 0)
				strcpy_s(_mask, cmd );

			//Animation Culture
			else if(str.find_first_not_of("1234567890") == string::npos)
				agent->culture = (int)atof( cmd ); // 2 = Germany, 4 = Japan

			//speach synchronization
			else if(strcmp(cmd, "-sync") == 0)
			{
				cmd = strtok_s( NULL, " ", &context );
				strcpy_s(_syncWord, cmd );
			}

			cmd = strtok_s( NULL, " ", &context );
		}

		if( strcmp(_mask, "null") != 0 && strcmp(_mask, "") != 0 ) 
			type = Agent_AnimType::AAT_GESTURE_ADDITIVE;

		else if( strstr( _name, "posture" ) != 0 ) 
			type = Agent_AnimType::AAT_POSTURE;

		else if( strstr( _name, "idle" ) != 0 ) 
			type = Agent_AnimType::AAT_IDLE;

		else 
			type = Agent_AnimType::AAT_GESTURE;
		
		//Add the animation			
		agent->animation_id = GameEngine::AgentAnim_loadAnimByID( agent->entity_id, _id, type,
			( strcmp(_mask, "null") == 0 || strcmp(_mask, "") == 0 ) ? 0 : _mask,
			( strcmp(_syncWord, "null") == 0 || strcmp(_syncWord, "") == 0 ) ? 0 : _syncWord );
		//send feedback
		//generate message
		char* agentid_spacer;
		char* objid_spacer;
		if(agent_id < 10) agentid_spacer = "0";
		else  agentid_spacer = "";
		if(agent->animation_id < 10) objid_spacer = "0";
		else  objid_spacer = "";

		msg_ss.str("");
		if(agent->animation_id < 0)
		{
			msg_ss << agentid_spacer << agent_id << "00" << "190";
			msg_ss << " agent #" << agent_id << " ERROR (animation '" << _id << "' failed to start)";
		}
		else
		{
			msg_ss << agentid_spacer << agent_id << objid_spacer << agent->animation_id << "150";
			msg_ss << " agent #" << agent_id << " animation #" << agent->animation_id << " started";
		}
		//send message
		GameEngine::sendSocketData( socketEntityID, msg_ss.str().c_str() );
	}
}

/*Execute gaze action
*Format:
*				lookat MODEL TARGETagent->entity_id [speed SPEED] [hp HEAD_PITCH] 
*/
void CommManager::processLookat(char* cmd)
{
	AgentNode* agent;
	unsigned int agent_id, target_model_nr;
	float speed = 1;
	int head_pitch = 0;

	//** Model
	cmd = strtok_s( NULL, " ", &context );
	if(cmd == NULL) return;
	//If not numerical, return
	str.assign( cmd );
	if(str.find_first_not_of("1234567890") != string::npos) return;
	agent_id = (int)atof( cmd );
	agent = app->getAgent(agent_id);
	if(agent <= 0)
		return;

	//** Target Model
	cmd = strtok_s( NULL, " ", &context );
	if(cmd == NULL) return;
	//If not numerical, return
	str.assign( cmd );
	if(str.find_first_not_of("1234567890") != string::npos) return;
	target_model_nr = (int)atof( cmd );

	cmd = strtok_s( NULL, " ", &context );
	//** Speed
	if(cmd != NULL && (strcmp(cmd, "speed")==0))
	{
		//If not numerical, return
		cmd = strtok_s( NULL, " ", &context );
		str.assign( cmd );
		if(str.find_first_not_of("1234567890.-") != string::npos) return;
		speed = (float)atof( cmd );
		cmd = strtok_s( NULL, " ", &context );
	}
	//** head pitch
	if(cmd != NULL && (strcmp(cmd, "hp")==0))
	{
		//If not numerical, return
		cmd = strtok_s( NULL, " ", &context );
		str.assign( cmd );
		if(str.find_first_not_of("1234567890-") != string::npos) return;
		head_pitch = atoi( cmd );
		cmd = strtok_s( NULL, " ", &context );
	}
	
	app->setGaze( agent_id, target_model_nr, head_pitch, speed );
}

/*Execute gaze action
*Format:
*				gaze MODEL TARGET_X TARGET_Y TARGET_Z [speed SPEED] [hp HEAD_PITCH] 
*/
void CommManager::processGaze(char* cmd)
{
	AgentNode* agent;
	unsigned int agent_id;
	float speed = 1;
	int head_pitch = 0;
	float target_x, target_y, target_z;

	//** Model
	cmd = strtok_s( NULL, " ", &context );
	if(cmd == NULL) return;
	//If not numerical, return
	str.assign( cmd );
	if(str.find_first_not_of("1234567890") != string::npos) return;
	agent_id = atoi( cmd );
	agent = app->getAgent(agent_id);
	if(agent <= 0)
		return;

	//** Target x
	cmd = strtok_s( NULL, " ", &context );
	if(cmd == NULL) return;
	//If not numerical, return
	str.assign( cmd );
	if(str.find_first_not_of("1234567890.-") != string::npos) return;
	target_x = (float)atof( cmd );

	//** Target y
	cmd = strtok_s( NULL, " ", &context );
	if(cmd == NULL) return;
	//If not numerical, return
	str.assign( cmd );
	if(str.find_first_not_of("1234567890.-") != string::npos) return;
	target_y = (float)atof( cmd );

	//** Target z
	cmd = strtok_s( NULL, " ", &context );
	if(cmd == NULL) return;
	//If not numerical, return
	str.assign( cmd );
	if(str.find_first_not_of("1234567890.-") != string::npos) return;
	target_z = (float)atof( cmd );

	cmd = strtok_s( NULL, " ", &context );
	//** Speed
	if(cmd != NULL && (strcmp(cmd, "speed")==0))
	{
		//If not numerical, return
		cmd = strtok_s( NULL, " ", &context );
		str.assign( cmd );
		if(str.find_first_not_of("1234567890.") != string::npos) return;
		speed = (float)atof( cmd );
		cmd = strtok_s( NULL, " ", &context );
	}
	//** head pitch
	if(cmd != NULL && (strcmp(cmd, "hp")==0))
	{
		//If not numerical, return
		cmd = strtok_s( NULL, " ", &context );
		str.assign( cmd );
		if(str.find_first_not_of("1234567890-") != string::npos) return;
		head_pitch = atoi( cmd );
		cmd = strtok_s( NULL, " ", &context );
	}
	
	app->setGaze( agent_id, target_x, target_y, target_z, head_pitch, speed );
}

/*Execute movement action
*Format:
*				gotopos MODEL DEST_X DEST_Y DEST_Z [speed SPEED] 
*/
void CommManager::processGotopos(char* cmd)
{
	unsigned int agent_id;
	AgentNode* agent;
	float speed = 1;
	float target_x, target_y, target_z;

	//** Model
	cmd = strtok_s( NULL, " ", &context );
	if(cmd == NULL) return;
	//If not numerical, return
	str.assign( cmd );
	if(str.find_first_not_of("1234567890") != string::npos) return;
	agent_id = atoi( cmd );
	agent = app->getAgent(agent_id);
	if(agent <= 0)
		return;

	//** Destination
	//** Target x
	cmd = strtok_s( NULL, " ", &context );
	if(cmd == NULL) return;
	//If not numerical, return
	str.assign( cmd );
	if(str.find_first_not_of("1234567890.-") != string::npos) return;
	target_x = (float)atof( cmd );

	//** Target y
	cmd = strtok_s( NULL, " ", &context );
	if(cmd == NULL) return;
	//If not numerical, return
	str.assign( cmd );
	if(str.find_first_not_of("1234567890.-") != string::npos) return;
	target_y = (float)atof( cmd );

	//** Target z
	cmd = strtok_s( NULL, " ", &context );
	if(cmd == NULL) return;
	//If not numerical, return
	str.assign( cmd );
	if(str.find_first_not_of("1234567890.-") != string::npos) return;
	target_z = (float)atof( cmd );

	cmd = strtok_s( NULL, " ", &context );
	//** Speed
	if(cmd != NULL && (strcmp(cmd, "speed")==0))
	{
		//If not numerical, return
		cmd = strtok_s( NULL, " ", &context );
		str.assign( cmd );
		if(str.find_first_not_of("1234567890.") != string::npos) return;
		speed = (float)atof( cmd );
	}

	GameEngine::Agent_goToPosition( agent->entity_id, target_x, target_y, target_z, speed );
	agent->gazeNodes.top()->active = false;	
	agent->movement = 1;

	//send feedback
	//generate message
	char* agentid_spacer;
	if(agent_id < 10) agentid_spacer = "0";
	else  agentid_spacer = "";

	msg_ss.str("");
	msg_ss << agentid_spacer << agent_id << "00" << "352";
	msg_ss << " agent #" << agent_id << " movement towards a world location started";
	//send message
	GameEngine::sendSocketData( socketEntityID, msg_ss.str().c_str() );
}

/*Execute movement action
*Format:
*				goto MODEL MODEL_DEST [speed SPEED] 
*/
void CommManager::processGoto(char* cmd)
{
	unsigned int agent_id, target_agent_id;
	AgentNode* agent;
	AgentNode* target_agent;
	float speed = 1;

	//** Model
	cmd = strtok_s( NULL, " ", &context );
	if(cmd == NULL) return;
	//If not numerical, return
	str.assign( cmd );
	if(str.find_first_not_of("1234567890") != string::npos) return;
	agent_id = atoi( cmd );
	agent = app->getAgent(agent_id);
	if(agent <= 0)
		return;

	//** Destination
	cmd = strtok_s( NULL, " ", &context );
	if(cmd == NULL) return;
	//If not numerical, return
	str.assign( cmd );
	if(str.find_first_not_of("1234567890") != string::npos) return;
	target_agent_id = atoi( cmd );
	target_agent = app->getAgent(target_agent_id);
	if(target_agent <= 0)
		return;

	cmd = strtok_s( NULL, " ", &context );
	//** Speed
	if(cmd != NULL && (strcmp(cmd, "speed")==0))
	{
		//If not numerical, return
		cmd = strtok_s( NULL, " ", &context );
		str.assign( cmd );
		if(str.find_first_not_of("1234567890.") != string::npos) return;
		speed = (float)atof( cmd );
	}

	GameEngine::Agent_goToEntity( agent->entity_id, target_agent->entity_id, speed );
	agent->gazeNodes.top()->active = false;
	agent->movement = 1;

	//send feedback
	//generate message
	char* agentid_spacer, *targetid_spacer;
	if(agent_id < 10) agentid_spacer = "0";
	else  agentid_spacer = "";
	if(target_agent_id < 10) targetid_spacer = "0";
	else  targetid_spacer = "";

	msg_ss.str("");
	msg_ss << agentid_spacer << agent_id << targetid_spacer << target_agent_id << "351";
	msg_ss << " agent #" << agent_id << " movement towards other entity started";
	//send message
	GameEngine::sendSocketData( socketEntityID, msg_ss.str().c_str() );
}