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
#include "BodyLocation.h"
#include "FormationComponent.h"
#include "../utils.h"

BodyLocation::BodyLocation( FormationComponent* comp, float minIPDistance, float maxIPDistance, float handicap ): 
m_formation(comp), m_minDistance(minIPDistance), m_maxDistance(maxIPDistance), m_movement_ID(-1), m_handicap(handicap)
{}

BodyLocation::~BodyLocation()
{}

void BodyLocation::execute()
{
	std::list<RepulseNode*> repulseNodes;
	std::list<Agent*>* members = m_formation->getMembersList();
	Agent* localAgent = new Agent(m_formation->getEntityID());

	//** check distance to formation agents
	float dist;
	std::list<Agent*>::iterator iter = members->begin();
	while(iter != members->end())
	{
		if((*iter)->getEID() == m_formation->getEntityID())
		{
			//** check maximal distance to neighbours
			std::list<Agent*>::iterator succ = iter;
			++succ;
			if(succ == members->end())
				succ = members->begin();

			std::list<Agent*>::iterator pred;
			if(iter == members->begin())
			{
				pred = members->end();
				--pred;
			}
			else
			{
				pred = iter;
				--pred;
			}

			dist = m_formation->computeDistance(*pred, localAgent);
			if(dist * m_handicap > m_maxDistance )
			{
				//negative repulse, thus attraction (we only repulse by half the magnitude as all agents repulse thus, in the end, we should arrive to the desired position)
				repulseNodes.push_back( new RepulseNode(localAgent->getEID(), utils::getEntityPosition((*pred)->getEID()), (m_maxDistance - dist)/2.0f) );
			}
			dist = m_formation->computeDistance(localAgent, *succ);
			if(dist * m_handicap > m_maxDistance )
			{
				//negative repulse, thus attraction (we only repulse by half the magnitude as all agents repulse thus, in the end, we should arrive to the desired position)
				repulseNodes.push_back( new RepulseNode(localAgent->getEID(), utils::getEntityPosition((*succ)->getEID()), (m_maxDistance - dist)/2.0f) );
			}
			++iter;
			continue;
		}

		//** check minimal distance to other formation members
		dist = m_formation->computeDistance(*iter, localAgent);	
		if(dist < m_minDistance * m_handicap)
		{
			//repulse (we only repulse by half the magnitude as all agents repulse thus, in the end, we should arrive to the desired position)
			repulseNodes.push_back( new RepulseNode(localAgent->getEID(), utils::getEntityPosition((*iter)->getEID()), (m_minDistance - dist)/2.0f ) );
		}		
		++iter;
	}
	applyRepulsion(&repulseNodes);


	//clean up
	std::list<RepulseNode*>::iterator i = repulseNodes.begin();
	while(i != repulseNodes.end())
	{
		delete *i;
		i = repulseNodes.erase(i);
	}
	delete localAgent;
}

void BodyLocation::applyRepulsion(std::list<RepulseNode*> *repulseNodes)
{
	Vec3f repulse;
	if(repulseNodes->size() == 0)
		return;

	//we need to define a single repulse that accomplishes all needed repulsions
	if(repulseNodes->size() == 1)
	{
		repulse = repulseNodes->front()->getVector();
	}
	else
	{
		std::list<RepulseNode*>::iterator iter = repulseNodes->begin();
		while(iter != repulseNodes->end())
		{
			repulse = repulse + (*iter)->getVector();
			++iter;
		}		
	}
	//compute the final posiiton
	Vec3f myPos = utils::getEntityPosition(m_formation->getEntityID());
	Vec3f target = myPos + repulse;

	//now we apply it to the agent
	m_movement_ID = GameEngine::Agent_move(m_formation->getEntityID(), 
						target.x, target.y, target.z, Config::getParamF(Agent_Param::FormReposSpd_F), 
						false, (strcmp(m_formation->getReposAnimName(), "") == 0) ? 0 : m_formation->getReposAnimName());
}

void BodyLocation::update()
{
	if(m_movement_ID >= 0)
	{
		//check if the movement has finished
		int status = GameEngine::Agent_getMovementStatus( m_formation->getEntityID(), m_movement_ID );
		if( status == -3 ) //not found
		{
			//repositioning has finsihed, fire event so the other members can react to this new position
			m_movement_ID = -1;
			GameEngine::Agent_fireEvent(m_formation->getEntityID(), Agent_Event::REPOSITIONING_FINISHED);
		}
	}
}