
// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2008
//
// This file is part of the GameEngine of the University of Augsburg
//
// You are not allowed to redistribute the code, if not explicitly authorized by the author
//
// ****************************************************************************************

// ****************************************************************************************
//
// GameEngine Agent Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2011 Ionut Damian
// 
// ****************************************************************************************
    
#include "GazeComponent.h"

#include "../AgentManager.h"

#include <GameEngine/GameLog.h>
#include <GameEngine/GameEntity.h>
#include <GameEngine/GameEvent.h>

#include <GameEngine/GameEngine.h>
#include <GameEngine/GameEngine_Scenegraph.h>
#include <GameEngine/GameEngine_IK.h>
#include "GameEngine/utmath.h"
#include <XMLParser/utXMLParser.h>
#include "Horde3D/Horde3D.h"

#include "../Config.h"
#include "../utils.h"

GameComponent* GazeComponent::createComponent( GameEntity* owner )
{
	return new GazeComponent( owner );
}

GazeComponent::GazeComponent(GameEntity* owner) : GameComponent(owner, "AgentComponent/Gaze")
{
	AgentManager::instance()->addComponent(this);
	
	owner->addListener(GameEvent::AG_GAZE, this);
	owner->addListener(GameEvent::AG_GAZE_GET_STATUS, this);
	owner->addListener(GameEvent::AG_GAZE_GET_SPEED, this);
	owner->addListener(GameEvent::AG_GAZE_SET_SPEED, this);

	m_eID = owner->worldId();
	m_hID = GameEngine::entitySceneGraphID(m_eID);

	m_dfltRelGaze.x = Config::getParamF(Agent_Param::FwdViewX_F) * 100.0f;
	m_dfltRelGaze.y = Config::getParamF(Agent_Param::FwdViewY_F) * 100.0f;
	m_dfltRelGaze.z = Config::getParamF(Agent_Param::FwdViewZ_F) * 100.0f;

	//we must load a "base" gaze node, which will be the default gaze
	m_gazeNodes.push( new Gaze(this) );
}

GazeComponent::~GazeComponent()
{
	AgentManager::instance()->removeComponent(this);
}

void GazeComponent::executeEvent(GameEvent *event)
{
	switch(event->id())
	{

		case GameEvent::AG_GAZE:
		{
			// Get event data
			AgentGazeData* data = static_cast<AgentGazeData*>(event->data());
			switch(data->m_type)
			{
				case AgentGazeData::GazeToPoint:
					data->m_returnI = gaze(data->m_targetV.x, data->m_targetV.y, data->m_targetV.z, (data->m_speed >= 0)? data->m_speed : m_speed, data->m_duration);
					break;
				case AgentGazeData::GazeToEntity:
					data->m_returnI = gaze(data->m_targetI, (data->m_speed >= 0)? data->m_speed : m_speed, data->m_duration);
					break;
			}		
			break;
		}
		case GameEvent::AG_GAZE_GET_STATUS:
		{
			// Get event data
			AgentGazeData* data = static_cast<AgentGazeData*>(event->data());
			data->m_returnI = getStatus(data->m_gazeID);	
			break;
		}
		case GameEvent::AG_GAZE_GET_SPEED:
		{
			// Get event data
			AgentGazeData* data = static_cast<AgentGazeData*>(event->data());
			data->m_returnF = getGazeSpeed();	
			break;
		}
		case GameEvent::AG_GAZE_SET_SPEED:
		{
			// Get event data
			float* data = static_cast<float*>(event->data());
			setGazeSpeed(*data);	
			break;
		}
	}
}

void GazeComponent::loadFromXml(const XMLNode* node)
{
	//overwrite default gaze if specified in agent xml node
	XMLNode gaze_xml = node->getChildNode( "Gaze", 0 );
	if(!gaze_xml.isEmpty())
	{
		if(gaze_xml.getAttribute("frontOfHeadX") != 0)
			m_dfltRelGaze.x = (float)atof(gaze_xml.getAttribute("frontOfHeadX"));
		if(gaze_xml.getAttribute("frontOfHeadY") != 0)
			m_dfltRelGaze.y = (float)atof(gaze_xml.getAttribute("frontOfHeadY"));
		if(gaze_xml.getAttribute("frontOfHeadZ") != 0)
			m_dfltRelGaze.z = (float)atof(gaze_xml.getAttribute("frontOfHeadZ"));

		if(gaze_xml.getAttribute("speed") != 0)
			m_speed = (float)atof(gaze_xml.getAttribute("speed"));
		else
			m_speed = Config::getParamF(Agent_Param::DfltGazeSpeed_F);
	}
}

void GazeComponent::update()
{
	if(m_gazeNodes.size() == 0)
	{
		//this means this is the first frame
		return;
	}

	m_gazeNodes.top()->update();

	if(!m_gazeNodes.top()->isActive())
	{
		//if the top node is not active, we'll go back to the previous node
		//however, this node doesn't know that we've moved the head since it was last updated
		//so we must inform it of the new gaze (currentGaze)
		while(!m_gazeNodes.top()->isActive() && m_gazeNodes.size() > 1)
		{
			delete m_gazeNodes.top();
			m_gazeNodes.pop();
		}
		m_gazeNodes.top()->reset(getGazeCoord());
		m_gazeNodes.top()->update();
	}
}      

int GazeComponent::gaze(int target_eID, float speed, float duration)
{
	//try to avoid dupplicate gaze nodes
	if(m_gazeNodes.top()->getTargetEID() == target_eID)
		return m_gazeNodes.top()->getID();

	Gaze* g = new Gaze(this, getGazeCoord(), target_eID, (speed >= 0)? speed : m_speed, duration);
	m_gazeNodes.push( g );

	//force immediate update
	m_gazeNodes.top()->update();

	return g->getID();
}

int GazeComponent::gaze(float targetX, float targetY, float targetZ, float speed, float duration)
{
	//try to avoid dupplicate gaze nodes
	if(m_gazeNodes.top()->getTarget() == Vec3f(targetX, targetY, targetZ))
		return m_gazeNodes.top()->getID();

	Gaze* g = new Gaze(this, getGazeCoord(), Vec3f(targetX, targetY, targetZ), (speed >= 0)? speed : m_speed, duration);
	m_gazeNodes.push( g );

	//force immediate update	
	m_gazeNodes.top()->update();

	return g->getID();
}

void GazeComponent::nod(float extent, float speed, float duration)
{
	//get head position
	h3dFindNodes( m_hID, Config::getParamS( Agent_Param::HeadName_S ), H3DNodeTypes::Joint );
	int head_hID = h3dGetNodeFindResult(0);
	if(head_hID <= 0)
		return;

	const float *head_absArray;
	h3dGetNodeTransMats( head_hID, 0, &head_absArray );
	Vec3f head_pos(head_absArray[12], head_absArray[13], head_absArray[14]);

	//compute gaze deviation for nod based on extent
	Vec3f deviation(0,0,0);
	switch(utils::getUpAxis())
	{
	case utils::Axis::X:
		deviation.x = head_pos.x - extent;
		break;
	case utils::Axis::Y:
		deviation.y = head_pos.y - extent;
		break;
	case utils::Axis::Z:
		deviation.z = head_pos.z - extent;
		break;
	}

	//compute target
	const float *agent_relArray;
	h3dGetNodeTransMats( GameEngine::entitySceneGraphID( m_eID ), &agent_relArray, 0 );
	Matrix4f agent_relMat(agent_relArray);

	Vec3f currentGaze = getGazeCoord();
	Vec3f fwdView = getDfltRelGaze();
	Vec3f targetGaze = agent_relMat * Vec3f(currentGaze.x + deviation.x,
											currentGaze.y + deviation.y, 
											currentGaze.z + deviation.z);

	//apply gaze
	gaze(targetGaze.x, targetGaze.y, targetGaze.z, speed, duration);
}

int GazeComponent::getStatus(int gazeID)
{
	if(m_gazeNodes.top()->getID() == gazeID)
		return 1;
	else
		return -2;
}

int GazeComponent::getEntityID()
{
	return m_eID;
}

int GazeComponent::getHordeID()
{
	return m_hID;
}  

void GazeComponent::clearGazeStack()
{
	while(m_gazeNodes.size() > 0)
	{
		delete m_gazeNodes.top();
		m_gazeNodes.pop();
	}
}

Vec3f GazeComponent::getGazeCoord()
{
	return m_gazeCoord;
}

Vec3f GazeComponent::getDfltRelGaze()
{
	return m_dfltRelGaze;
}

int GazeComponent::setGazeCoord(Vec3f gaze)
{	
	m_gazeCoord = gaze;
	return GameEngine::IK_gaze( m_eID, m_gazeCoord.x, m_gazeCoord.y, m_gazeCoord.z, true, true, true, 0 );
}

float GazeComponent::getGazeSpeed()
{
	return m_speed;
}

void GazeComponent::setGazeSpeed(float speed)
{
	m_speed = speed;
}