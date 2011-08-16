
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
    
#include "FormationComponent.h"
#include "../AgentManager.h"
#include <GameEngine/GameLog.h>
#include <GameEngine/GameEntity.h>
#include <GameEngine/GameEvent.h>
#include <GameEngine/GameEngine_Scenegraph.h>
#include <XMLParser/utXMLParser.h>
#include "GameEngine/utmath.h"

#include "../utils.h"

using namespace Horde3D;

GameComponent* FormationComponent::createComponent( GameEntity* owner )
{
	return new FormationComponent( owner );
}

FormationComponent::FormationComponent(GameEntity* owner) : GameComponent(owner, "AgentComponent/Formation")
{
	AgentManager::instance()->addComponent(this);

	owner->addListener(GameEvent::AG_FORMATION_ADD, this);
	owner->addListener(GameEvent::AG_FORMATION_DEL, this);
	owner->addListener(GameEvent::AG_FORMATION_EVENT, this);
	owner->addListener(GameEvent::AG_FORMATION_GET_AGENTS, this);
	owner->addListener(GameEvent::AG_FORMATION_GET_ENTRY, this);
	owner->addListener(GameEvent::AG_FORMATION_GET_TYPE, this);
	owner->addListener(GameEvent::AG_FORMATION_REACT, this);
	
	owner->addListener(GameEvent::AG_GET_ORIENTCUST, this);
	owner->addListener(GameEvent::AG_GET_IPDIST, this);
	owner->addListener(GameEvent::AG_GET_REPOSANIM, this);
	owner->addListener(GameEvent::AG_SET_ORIENTCUST, this);
	owner->addListener(GameEvent::AG_SET_IPDIST, this);
	owner->addListener(GameEvent::AG_SET_REPOSANIM, this);
	
	m_eID = owner->worldId();
	m_hID = GameEngine::entitySceneGraphID(m_eID);
	
	m_reposAnimName[0] = '\0';

	m_movement_ID = -1;
	m_dest_eID = -1;
	this->m_memberAgentsI = 0;
	m_orientation = 0;
	m_location = 0;
		
	m_gender = Agent_Gender::MALE;
	m_culture = Agent_Culture::GERMANY;

	m_type = Agent_FormationType::UNKNOWN;
	m_preferredType = Agent_FormationType::UNKNOWN;

	//populate members list with local agent
	m_memberAgents.push_back(new Agent(m_eID));

	//set default body orientaiton and location
	m_minIPDistance = 0;
	m_maxIPDistance = 0;
	m_deviation = 0;
	m_willpower = 1;

	m_formationCenter = utils::getEntityPosition(m_eID);
	m_oSpaceRad = -1;
	m_pSpaceRad = -1;

	m_reposCnt = 0;
}

FormationComponent::~FormationComponent()
{
	AgentManager::instance()->removeComponent(this);
}

void FormationComponent::executeEvent(GameEvent *event)
{
	switch(event->id())
	{
		case GameEvent::AG_FORMATION_ADD:
		{
			// Get event data
			int* data = static_cast<int*>(event->data());
			addNewMemberE(*data);
			break;
		}
		case GameEvent::AG_FORMATION_DEL:
		{
			// Get event data
			int* data = static_cast<int*>(event->data());
			removeMember(*data);
			break;
		}
		case GameEvent::AG_FORMATION_EVENT:
		{
			// Get event data
			int* data = static_cast<int*>(event->data());
			fireEvent((Agent_Event::List)*data);
			break;
		}
		case GameEvent::AG_FORMATION_GET_AGENTS:
		{
			// Get event data
			AgentFormationData* data = static_cast<AgentFormationData*>(event->data());
			data->m_returnI = getMembers(data->m_members);
			break;
		}
		case GameEvent::AG_FORMATION_GET_ENTRY:
		{
			// Get event data
			AgentFormationData* data = static_cast<AgentFormationData*>(event->data());
			float *v = new float[3];
			getEntryPoint(data->m_entityID, &v);
			data->m_returnV = Vec3f(v[0], v[1], v[2]);
			break;
		}		
		case GameEvent::AG_FORMATION_GET_TYPE:
		{
			// Get event data
			AgentFormationData* data = static_cast<AgentFormationData*>(event->data());
			data->m_returnI = (int)getType();
			break;
		}
		case GameEvent::AG_FORMATION_REACT:
		{
			// Get event data
			AgentFormationData* data = static_cast<AgentFormationData*>(event->data());
			reactOnEvent(data->m_entityID, (Agent_Event::List)data->m_event);
			break;
		}
		case GameEvent::AG_GET_ORIENTCUST:
		{
			// Get event data
			AgentFormationData* data = static_cast<AgentFormationData*>(event->data());
			data->m_returnF1 = getDeviation();
			break;
		}
		case GameEvent::AG_GET_IPDIST:
		{
			// Get event data
			AgentFormationData* data = static_cast<AgentFormationData*>(event->data());
			getIPDistance(&data->m_returnF1, &data->m_returnF2);
			break;
		}
		case GameEvent::AG_GET_REPOSANIM:
		{
			// Get event data
			AgentFormationData* data = static_cast<AgentFormationData*>(event->data());
			//data->m_resultS = getReposAnimName();
			data->m_returnS = new char[c_MaxAnimNameSize];
			utils::strcpy(getReposAnimName(), data->m_returnS, c_MaxAnimNameSize);
			break;
		}
		case GameEvent::AG_SET_ORIENTCUST:
		{
			// Get event data
			float *data = static_cast<float*>(event->data());
			setDeviation(*data);
		}
		case GameEvent::AG_SET_IPDIST:
		{
			// Get event data
			AgentFormationData* data = static_cast<AgentFormationData*>(event->data());
			setIPDistance(data->m_min, data->m_max);
			break;
		}
		case GameEvent::AG_SET_REPOSANIM:
		{
			// Get event data
			const char *data = static_cast<const char*>(event->data());
			setReposAnimName(data);
		}
	}
}

void FormationComponent::loadFromXml(const XMLNode* node)
{
	/*
	 * Agent parameters
	 */
	if( (node->getAttribute("gender") != 0) 
	 && (strcmp(node->getAttribute("gender"), "") != 0)
	 && (strcmp(node->getAttribute("gender"), "male") == 0 || strcmp(node->getAttribute("gender"), "female") == 0 ))
	{
		m_gender = utils::str2gender(node->getAttribute("gender"));
	}

	if( (node->getAttribute("culture") != 0) 
	 && (strcmp(node->getAttribute("culture"), "") != 0))
	{
		m_culture = utils::str2culture(node->getAttribute("culture"));
	}

	if(node->getAttribute("minIPDistance") != 0)
		m_minIPDistance = (float)atof(node->getAttribute("minIPDistance"));

	if(node->getAttribute("maxIPDistance") != 0)
		m_maxIPDistance = (float)atof(node->getAttribute("maxIPDistance"));

	if(node->getAttribute("orientationDev") != 0)
		m_deviation = (float)atof(node->getAttribute("orientationDev"));

	if(node->getAttribute("willpower") != 0)
		m_willpower = (float)atof(node->getAttribute("willpower"));

	/*
	 * Formation parameters
	 */
	XMLNode* formation = &node->getChildNode( "Formation", 0 );
	if(!formation->isEmpty())
	{
		if(formation->getAttribute("type") != 0)
		{
			m_preferredType = utils::str2formation(formation->getAttribute("type"));
			m_type = m_preferredType;
		}
	}

	/*
	 * Animation parameters
	 */
	XMLNode* animation = &node->getChildNode( "Animation", 0 );
	if(!animation->isEmpty())
	{
		if((animation->getAttribute("reposAnimName") != 0) && (strcmp(animation->getAttribute("reposAnimName"), "") != 0))
			utils::strcpy((char *)animation->getAttribute("reposAnimName"), m_reposAnimName, c_MaxAnimFileSize);
	}
}

void FormationComponent::update()
{
	if(m_movement_ID >= 0)
	{
		//check if the movement has finished
		if( GameEngine::Agent_getMovementStatus( m_eID, m_movement_ID ) < 0 )
		{
			//movement has finsihed, check if we arrived at our destination
			m_movement_ID = -1;

			if(utils::getDistance( utils::getEntityPosition(m_eID), m_destPoint) < 0.01f)
				//we've arrived
				joinFormation( m_dest_eID );

			m_dest_eID = 0;
		}
	}

	//monitor p-space for changes
	//TODO: this assumes the formation is cicrular
	if(m_memberAgents.size() > 1)
	{
		if(m_oSpaceRad >= 0 && m_pSpaceRad > 0)
		{
			std::list<Agent*>::iterator iter = m_memberAgents.begin();
			while(iter != m_memberAgents.end())
			{
				Vec3f pos( utils::getEntityPosition((*iter)->getEID()) );
				bool agentInOSpace = inCircle(pos, m_formationCenter, m_oSpaceRad);
				bool agentInPSpace = inCircle(pos, m_formationCenter, m_pSpaceRad) && !agentInOSpace;
				if(!agentInPSpace)
				{
					if((*iter)->getEID() == m_eID)
					{
						//this is the local agent so it means that he left the formation
						leaveFormation();
						break;
					}

					//an agent has left the formation
					reactOnEvent((*iter)->getEID(), Agent_Event::LEAVING_FORMATION);

					//remove entry
					delete *iter;
					iter = m_memberAgents.erase(iter);

					//formation has changed, recompute body location and orientation
					computeBodyLocation();
					computeBodyOrientation();
					computePSpace();
				}
				else ++iter;
			}
		}
	}

	//update other processes
	if(m_location != 0) m_location->update();
}

// ********************
// Interface functions
// ********************
int FormationComponent::gotoE(int target_eID, float speed, const char* orientAnimName, const char* walkAnimName)
{
	if(target_eID == m_eID)
		return -1;

	//get destination
	float *dest = new float[3];
	bool result = GameEngine::Agent_getFormationEntryPoint( target_eID, m_eID, &dest );
	if(!result)
		return -1;

	//start movement
	m_movement_ID = GameEngine::Agent_gotoP( m_eID, dest[0], dest[1], dest[2], speed, false, orientAnimName, walkAnimName );
	
	m_dest_eID = target_eID;
	m_destPoint = Vec3f(dest[0], dest[1], dest[2]);

	//leave the current formation
	//however, we will join the new formations only when the lcoal agent arrives at the formation entry point
	leaveFormation();

	delete dest;
	return m_movement_ID;
}


// ******************************
// Intercommunication functions
// ******************************
bool FormationComponent::getEntryPoint(int agent_eID, float** entryPoint)
{
	Vec3f myPos = utils::getEntityPosition(m_eID);
	Agent* a = new Agent(agent_eID);
	Vec3f foreignAgentPos = utils::getEntityPosition(a->getEID());

	//we need to determine where a new agent might find a place to join the formation
	//for this we'll use an optimization aproach. Our target is to find a place where 
	//there is enough room for the new agent to fit but not to far away from his
	//current position, preferably somewhere on the same side of the formation as his current position
	float minCost = -1;
	std::list<Agent*>::iterator iter_minCost = m_memberAgents.begin();
	Vec3f minCostPos;

	if(m_memberAgents.size() <= 1)
	{
		//we will initialize the target position with a point just in front of our target agent
		Vec3f towardsTarget = myPos - foreignAgentPos;
		towardsTarget.normalize();
		towardsTarget = towardsTarget * ((m_minIPDistance + m_maxIPDistance)/2.0f);
		minCostPos = myPos - towardsTarget;
	}
	else
	{
		float freespace, distance, cost;
		std::list<Agent*>::iterator iter = m_memberAgents.begin();
		std::list<Agent*>::iterator succ;
		while(iter != m_memberAgents.end())
		{
			succ = iter;
			++succ;
			if(succ == m_memberAgents.end())
				succ = m_memberAgents.begin();

			freespace = computeDistance(*iter, *succ);	

			//compute the middle of the line between the two members
			Vec3f pos = (utils::getEntityPosition((*iter)->getEID()) + utils::getEntityPosition((*succ)->getEID())) /2;
			distance = utils::getDistance( pos, foreignAgentPos );

			//compute cost forumla
			//cost = (float)utils::sqr(distance)/freespace;
			cost = (2.0f * distance) - freespace;
			if(cost < 0) cost = 0;

			if(minCost < 0 || cost < minCost)
			{
				minCost = cost;
				iter_minCost = iter;
				minCostPos = pos;
			}
			++iter;
		}
	}

	//after finding the ideal entry point, we now must move this point on the p-space
	Vec3f p;
	if(m_oSpaceRad < 0 || m_pSpaceRad <= 0)
	{
		p = minCostPos;
	}
	else
	{
		Vec3f adjustment = (m_formationCenter - minCostPos);
		if(adjustment.length() == 0) //all values are 0
		{
			//if the found entry point coincides with the center of the formation, 
			//we'll have to take the agent's position as reference for the adjustment
			//adjustment = (m_formationCenter - foreignAgentPos);

			Vec3f A = utils::getEntityPosition((*iter_minCost)->getEID());
			Vec3f M = minCostPos;
			//compute normal = (-dy, dx) = (-(yb-ya), xb-xa)
			Vec3f normal;
			switch(utils::getUpAxis())
			{
			case utils::Axis::X:
				normal.x = 0;
				normal.y = (-1)* (A.z - M.z);
				normal.z = A.y - M.y;
				break;
			case utils::Axis::Y:
				normal.x = (-1)* (A.z - M.z);
				normal.y = 0;
				normal.z = A.x - M.x;
				break;
			case utils::Axis::Z:
				normal.x = (-1)* (A.y - M.y);
				normal.y = A.x - M.x;
				normal.z = 0;
				break;
			}
			adjustment = normal;
		}

		adjustment.normalize();
		//apply repulsion magnitude
		adjustment = adjustment * ((m_oSpaceRad + m_pSpaceRad)/2.0f);
		//invert sign so we'll move the point away not towards the center position
		adjustment = adjustment * (-1);

		p = minCostPos + adjustment;
	}

	(*entryPoint)[0] = p.x;
	(*entryPoint)[1] = p.y;
	(*entryPoint)[2] = p.z; 

	return true;
}

void FormationComponent::addNewMemberE(int member_eID)
{	
	Agent* a = new Agent( member_eID );
	//we need to insert the new member into the members vector by preserving a positional order
	//for example if the new agent is situated between agent A and B, then he will have to be
	//inserted after A and before B
	insertAgent(a);
	reactOnEvent( a->getEID(), Agent_Event::JOINING_FORMATION );

	//formation has changed, recompute position and orientation
	computeBodyLocation();
	computeBodyOrientation();
	computePSpace();
}

void FormationComponent::addNewMemberA(int member_aID)
{
	Agent* a = new Agent( AgentManager::instance()->getEntityID(member_aID) );
	//we need to insert the new member into the members vector by preserving a positional order
	//for example if the new agent is situated between agent A and B, then he will have to be
	//inserted after A and before B
	insertAgent(a);
	reactOnEvent( a->getEID(), Agent_Event::JOINING_FORMATION );

	//formation has changed, recompute position and orientation
	computeBodyLocation();
	computeBodyOrientation();
	computePSpace();
}

void FormationComponent::removeMember(int member_eID)
{
	std::list<Agent*>::iterator iter = m_memberAgents.begin();
	while(iter != m_memberAgents.end())
	{
		if( (*iter)->getEID() == member_eID )
		{	
			reactOnEvent(member_eID, Agent_Event::LEAVING_FORMATION);

			//remove entry
			delete *iter;
			m_memberAgents.erase(iter);

			//formation has changed, recompute position and orientation
			computeBodyLocation();
			computeBodyOrientation();
			computePSpace();
			break;
		}
		++iter;
	}
}

int FormationComponent::getMembers(int** members)
{
	if(m_memberAgentsI != 0)
		delete m_memberAgentsI;

	m_memberAgentsI = new int[m_memberAgents.size()];
	
	int i = 0;
	std::list<Agent*>::iterator iter = m_memberAgents.begin();
	while(iter != m_memberAgents.end())
	{
		m_memberAgentsI[i++] = (*iter)->getEID();
		++iter;
	}

	*members = m_memberAgentsI;
	return (int)m_memberAgents.size();
}

std::list<Agent*>* FormationComponent::getMembersList()
{
	return &m_memberAgents;
}

void FormationComponent::joinFormation(int formation_eID)
{
	//get members
	int* members;
	int membersSize = GameEngine::Agent_getFormationMembers(formation_eID, &members);

	//save a copy of the member list locally and
	//send requests to members to add local agent
	for(int i=0; i< membersSize; i++)
	{
		m_memberAgents.push_back( new Agent(members[i]) );
		GameEngine::Agent_addMemberToFormation( members[i], m_eID );
	}

	//get the formation type
	m_type = GameEngine::Agent_getFormationType(formation_eID);

	//compute and apply orientation and position for local agent
	computeBodyLocation();
	computeBodyOrientation();
	computePSpace();
}

void FormationComponent::leaveFormation()
{
	//notify agents
	std::list<Agent*>::iterator iter = m_memberAgents.begin();
	while(iter != m_memberAgents.end())
	{
		if((*iter)->getEID() == m_eID)
		{
			++iter; //skip local agent
		}
		else
		{
			GameEngine::Agent_removeMemberFromFormation( (*iter)->getEID(), m_eID );
			
			//remove entry
			delete *iter;
			iter = m_memberAgents.erase(iter);
		}			
	}
	m_type = m_preferredType;
	computePSpace();
}

void FormationComponent::insertAgent(Agent* a)
{
	if(m_memberAgents.size() <= 1)
	{
		m_memberAgents.push_back(a);
		return;
	}

	float minDist = 0;
	std::list<Agent*>::iterator iter_minDist = m_memberAgents.begin();

	//find closest agent to A
	float dist;
	std::list<Agent*>::iterator iter = m_memberAgents.begin();
	while(iter != m_memberAgents.end())
	{
		dist = computeDistance( a, *iter);
		if(dist < minDist)
		{
			minDist = dist;
			iter_minDist = iter;
		}
		++iter;
	}

	//decide if A is after or before iter_minDist
	std::list<Agent*>::iterator succ_iter_minDist = iter_minDist;
	++succ_iter_minDist;
	if(succ_iter_minDist == m_memberAgents.end())
		succ_iter_minDist = m_memberAgents.begin();

	std::list<Agent*>::iterator pred_iter_minDist;
	if(iter_minDist == m_memberAgents.begin())
	{
		pred_iter_minDist = m_memberAgents.end();
		--pred_iter_minDist;
	}
	else
	{
		pred_iter_minDist = iter_minDist;
		--pred_iter_minDist;
	}

	float succDist = computeDistance( a, *succ_iter_minDist);
	float predDist = computeDistance( a, *pred_iter_minDist);

	if(succDist < predDist)
		//agent is after iter_minDist (thus we insert him before his successor)
		m_memberAgents.insert( succ_iter_minDist, a );
	else
		//agent is before iter_minDist (thus we insert him before iter_minDist)
		m_memberAgents.insert( iter_minDist, a );

}

Vec3f FormationComponent::computeOSpace()
{
	if(m_memberAgents.size() <= 1)
	{		
		m_formationCenter = Vec3f(0,0,0);
		return m_formationCenter;
	}

	//** Coordinates
	//we'll compute the o-space coordinates by calculating the average of the plain coordinates of the agents
	//this won't be 100% exact, but it'll suffice for our purposes

	//but first we determine the up axiss, as we'll calculate the average of the axis != upAxis
	//const char* upAxis_str = Config::getParamS(Agent_Param::UpAxis_S);
	//char upAxis = toupper(upAxis_str[0]);

	//if(upAxis == 'X')
	//	currentAngle = rot.x;
	//else if(upAxis == 'Y')
	//	currentAngle = rot.y;
	//else if(upAxis == 'Z')
	//	currentAngle = rot.z;

	Vec3f coord(0,0,0);
	std::list<Agent*>::iterator iter = m_memberAgents.begin();
	while(iter != m_memberAgents.end())
	{
		Vec3f pos = utils::getEntityPosition((*iter)->getEID());
		coord = coord + pos;

		//if(upAxis == 'X')
		//{
		//	sum1 += pos.y;
		//	sum2 += pos.z;
		//}
		//else if(upAxis == 'Y')
		//{
		//	sum1 += pos.x;
		//	sum2 += pos.z;
		//}
		//else if(upAxis == 'Z')
		//{
		//	sum1 += pos.x;
		//	sum2 += pos.y;
		//}
		++iter;
	}
	//compute average
	coord = coord / (float)m_memberAgents.size();
		
	//save to member variable
	m_formationCenter = coord;
	return coord;
}

Vec3f FormationComponent::computePSpace(float* innerRadius, float* outerRadius)
{
	if(m_memberAgents.size() <= 1)
	{
		m_oSpaceRad = 0;
		m_pSpaceRad = 0;
		m_formationCenter = Vec3f(0,0,0);

		if(innerRadius != 0) *innerRadius = m_oSpaceRad;
		if(outerRadius != 0) *outerRadius = m_pSpaceRad;

		return m_formationCenter;
	}

	Vec3f coord = computeOSpace();

	//the p-space radius will be half of the minimal distance between two opposing members
	float minDist = -1;
	float dist;
	std::list<Agent*>::iterator iter = m_memberAgents.begin();
	std::list<Agent*>::iterator iter2 = m_memberAgents.begin();
	std::list<Agent*>::iterator opp;
	while(iter != m_memberAgents.end())
	{
		//find the opposing agent, this is the most distant agent
		float maxDist = 0;
		opp = m_memberAgents.begin();
		while(iter2 != m_memberAgents.end())
		{
			if(iter2 == iter)
				++iter2;

			dist = computeDistance( *iter, *iter2 );
			if(dist > maxDist)
			{
				maxDist = dist;
				opp = iter2;
			}
			++iter2;
		}

		//get the distance between thi sagent and its opposite
		dist = computeDistance( *iter, *opp );
		if(minDist < 0 || dist < minDist)
			minDist = dist;
		
		++iter;
	}	
	float radius = minDist / 2.0f;

	//we'll define the p-space so that it spreads on both sides of the circle defined by the radius
	float width = Config::getParamF(Agent_Param::PSpaceWidth_F);
	m_oSpaceRad = radius - width/2.0f;
	m_pSpaceRad = radius + width/2.0f;
	
	if(m_oSpaceRad < 0) m_oSpaceRad = 0;

	if(innerRadius != 0) *innerRadius = m_oSpaceRad;
	if(outerRadius != 0) *outerRadius = m_pSpaceRad;

	//save to member variables
	m_formationCenter = coord;
	return coord;
}

void FormationComponent::computeBodyOrientation()
{
	if(m_orientation != 0)
		delete m_orientation;

	if(m_memberAgents.size() <= 1)
	{
		m_orientation = 0;
		return;
	}
	float fDeviation = 0;

	//the special formation shapes are available only for formations of size 2
	if(m_memberAgents.size() == 2)
	{

		//determine which agent in a size 2 formation is the "left" agent
		bool left = true;
		std::list<Agent*>::iterator iter = m_memberAgents.begin();
		while(iter != m_memberAgents.end())
		{
			if((*iter)->getEID() > m_eID)
				left = false;
			++iter;
		}

		switch(m_type)
		{
		case Agent_FormationType::N:
			fDeviation = -45.0f;
			break;
		case Agent_FormationType::H:
			fDeviation = 0.0f;
			break;
		case Agent_FormationType::V:
			fDeviation = (left) ? 30.0f : -30.0f;
			break;
		case Agent_FormationType::L:
			fDeviation = (left) ? -45.0f : 45.0f;
			break;
		case Agent_FormationType::C:
			fDeviation = (left) ? -60.0f : 60.0f;
			break;
		case Agent_FormationType::I:			
			fDeviation = (left) ? -90.0f : 90.0f;
			break;
		}
	}
	else		
		m_type = Agent_FormationType::F;
	
	m_orientation = new BodyOrientation(this);
	m_orientation->setDeviation(fDeviation + m_deviation);
	m_orientation->execute();
}

void FormationComponent::computeBodyLocation(float handicap)
{
	if(m_location != 0)
		delete m_location;

	if(m_memberAgents.size() <= 1)
	{
		m_location = 0;
		return;
	}

	m_location = new BodyLocation( this, m_minIPDistance, m_maxIPDistance, handicap );
	m_location->execute();
}

float FormationComponent::computeDistance(Agent* a, Agent* b)
{
	Vec3f a_pos = utils::getEntityPosition(a->getEID());
	Vec3f b_pos = utils::getEntityPosition(b->getEID());
	float d = utils::getDistance(a_pos, b_pos);

	return d;
}

Agent_FormationType::List FormationComponent::getType()
{
	return m_type;
}

int FormationComponent::getEntityID()
{
	return m_eID;
}

int FormationComponent::getHordeID()
{
	return m_hID;
}

void FormationComponent::reactOnEvent(int sender_eID, Agent_Event::List type)
{
	//update counter of the repositioning event
	if(type == Agent_Event::REPOSITIONING_FINISHED) ++m_reposCnt;
	else m_reposCnt = 0;

	switch(type)
	{
	case Agent_Event::JOINING_FORMATION:
		GameEngine::Agent_gazeE(m_eID, sender_eID, 1, 2);
		break;

	case Agent_Event::LEAVING_FORMATION:
		GameEngine::Agent_gazeE(m_eID, sender_eID, 1, 2);
		break;

	case Agent_Event::REPOSITIONING_FINISHED:
	{
		float handicap = computeHandicap( m_willpower, m_reposCnt ) ;
		computePSpace();
		computeBodyLocation(handicap);
		computeBodyOrientation();
		break;
	}

	default:
		GameEngine::Agent_gazeE(m_eID, sender_eID, 1, 2);
		break;
	}
}

void FormationComponent::fireEvent(Agent_Event::List e)
{
	std::list<Agent*>::iterator iter = m_memberAgents.begin();
	while(iter != m_memberAgents.end())
	{
		if((*iter)->getEID() == m_eID)
		{
			++iter;
			continue;
		}
		
		GameEngine::Agent_reactOnEvent((*iter)->getEID(), m_eID, e);
		++iter;
	}
}

float FormationComponent::computeHandicap(float strength, int iteration)
{
	//validate the strength
	if(strength > Config::getParamF(Agent_Param::HcMaxStr_F))
		strength = Config::getParamF(Agent_Param::HcMaxStr_F);
	if(strength <= 0.0f) strength = 0.1f;

	float t = iteration/(Config::getParamF(Agent_Param::HcSoftness_F) * strength);
	
	//validate t
	if(t > 1.0f) t = 1.0f;
	if(t < 0.0f) t = 0.0f;

	//we'll use a second degree bezier curve: A*(1-t)^2 + 2*B*(1-t)t + C*t2
	return 1.0f * utils::sqr(1.0f - t)
		 + 2 * Config::getParamF(Agent_Param::HcCurveAnchor_F) * (1.0f - t)*t
		 + 0.01f * utils::sqr(t);
}

bool FormationComponent::inCircle(Vec3f point, Vec3f spaceCentre, float spaceRadius)
{
	const char* upAxis_str = Config::getParamS(Agent_Param::UpAxis_S);
	char upAxis = toupper(upAxis_str[0]);

	if(upAxis == 'X')
		return utils::inCircle( point.y, point.z, spaceCentre.y, spaceCentre.z, spaceRadius );
	else if(upAxis == 'Y')
		return utils::inCircle( point.x, point.z, spaceCentre.x, spaceCentre.z, spaceRadius );
	else
		return utils::inCircle( point.x, point.y, spaceCentre.x, spaceCentre.y, spaceRadius );
}

bool FormationComponent::isCircular()
{
	return (m_type == Agent_FormationType::L || m_type == Agent_FormationType::C || m_type == Agent_FormationType::F);
}

bool FormationComponent::isOpen()
{
	return (m_type == Agent_FormationType::L || m_type == Agent_FormationType::C || m_type == Agent_FormationType::I || m_type == Agent_FormationType::F);
}

void FormationComponent::getIPDistance(float* min, float* max)
{
	if(min != 0) *min = m_minIPDistance;
	if(max != 0) *max = m_maxIPDistance;
}

float FormationComponent::getDeviation()
{
	return m_deviation;
}

const char* FormationComponent::getReposAnimName()
{
	return m_reposAnimName;
}

void FormationComponent::setIPDistance(float min, float max)
{
	m_minIPDistance = min;
	m_maxIPDistance = max;
}

void FormationComponent::setDeviation(float deviation)
{
	m_deviation = deviation;
}

void FormationComponent::setReposAnimName(const char* name)
{
	utils::strcpy(name, m_reposAnimName, c_MaxAnimFileSize);
}

