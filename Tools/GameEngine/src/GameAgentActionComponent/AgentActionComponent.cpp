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
// GameEngine Agent Action Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010 Ionut Damian
// 
// ****************************************************************************************    
#include "AgentActionComponent.h"

#include "AgentActionManager.h"

#include <GameEngine/GameEntity.h>
#include <GameEngine/GameLog.h>
#include <GameEngine/GameEngine.h>
#include <GameEngine/GameEngine_AgentAnim.h>
#include <GameEngine/GameEngine_SceneGraph.h>

#include "GameEngine_AgentAction.h"
#include "config.h"

#include <Horde3D/Horde3D.h>
#include <XMLParser/utXMLParser.h>


GameComponent* AgentActionComponent::createComponent( GameEntity* owner )
{
	return new AgentActionComponent( owner );
}

AgentActionComponent::AgentActionComponent(GameEntity* owner) : GameComponent(owner, "AgentActionComponent")
{
	m_destination = Vec3f(-1,-1,-1);
	m_distance = 0;
	m_movementSpeed = 0.0f;	
	m_entityID = m_owner->worldId();
	m_walk = false;
	m_destEntityID = -1;

	fade_stopWalk = false;
	t_stopWalk = 0;

	m_rotate = false;
	m_reqRotation = Vec3f(0,0,0);
	m_rotationSpeed = 0.0f;
	m_rotationSpeedScale = 1.0f;

	m_currentOrientation = 0;	
	m_init = false;
	
	m_idleAnim_ID = -1;

	AgentActionManager::instance()->addComponent(this);
}

AgentActionComponent::~AgentActionComponent()
{
	//delete known orientations vector
	for(unsigned int i=0; i< m_knownOrientations.size(); i++)
		delete m_knownOrientations[i];
	m_knownOrientations.clear();

	//delete rivals vector
	for(unsigned int i=0; i< m_rivalEntities.size(); i++)
		delete m_rivalEntities[i];
	m_rivalEntities.clear();

	AgentActionManager::instance()->removeComponent(this);
}

void AgentActionComponent::loadFromXml(const XMLNode *node)
{
	bool ok = true;
	int n = 0;

	//parse zone data
	n = node->nChildNode( "BufferZone" );
	for(int i = 0; i<n; i++)
	{
		XMLNode child_node = node->getChildNode( "BufferZone", i );

		if( (child_node.getAttribute("radius") != 0) && (strcmp(child_node.getAttribute("radius"), "") != 0) )
			m_bufferZones.push_back((float)atof(child_node.getAttribute("radius")));
	}
	if(m_bufferZones.empty())
		ok = false;

	//parse orientation data
	n = node->nChildNode( "Orientation" );
	for(int i = 0; i<n; i++)
	{
		XMLNode child_node = node->getChildNode( "Orientation", i );

		if( (child_node.getAttribute("name") != 0) && (strcmp(child_node.getAttribute("name"), "") != 0) )
			m_knownOrientations.push_back( createOrientation((char *)child_node.getAttribute("name")) );
	}
	if(m_knownOrientations.empty())
		ok = false;


	if( (node->getAttribute("IDleAnimFile") != 0) && (strcmp(node->getAttribute("IDleAnimFile"), "") != 0) )
		strcpy_s(m_idleFile, (char *)node->getAttribute("IDleAnimFile"));
	else
		ok = false;

	if( (node->getAttribute("WalkAnimFile") != 0) && (strcmp(node->getAttribute("WalkAnimFile"), "") != 0) )
		strcpy_s(m_walkFile, (char *)node->getAttribute("WalkAnimFile"));
	else
		ok = false;

	if(!ok)
		GameLog::errorMessage( "AgentAction - error parsing xml, incomplete or missing data for entity %d", m_entityID );
}

void AgentActionComponent::initialize()
{	
	//init
	GameEngine::AgentAnim_loadAnim( m_entityID, m_idleFile, Agent_AnimType::AAT_IDLE, 0, 0 );

	m_init = true;
}

void AgentActionComponent::goToPosition(Vec3f position, float speed, bool posAdjustment)
{
	m_destEntityID = -1;
	m_destination = position;
	m_distance = calculateVectorTo(position).length() +1;
	m_movementSpeed = speed * MoveAnimSpeedScale; //scaling the movement speed to match the animation speed
	
	//if posAdjustment is true, we don't use orientation or turnTowardsDest
	m_posAdjustment = posAdjustment;
	
	//Buffer zones
	dest_bufferZones.clear();
	dest_bufferZones.push_back(0.05f);

	if(!posAdjustment)
	{
		//orientation
		if(m_currentOrientation != 0) 
			delete m_currentOrientation;
		m_currentOrientation = 0;
	}
	
	int walkID = GameEngine::AgentAnim_loadAnim( m_entityID, m_walkFile, Agent_AnimType::AAT_IDLE, 0, 0 );
	GameEngine::AgentAnim_setSpeedOnAnimf( m_entityID, walkID, speed );

	m_idleAnim_ID = -1;
	m_walk = true;
	fade_stopWalk = false;
	t_stopWalk = 0;

	if(AGENTACTIONDEBUG)
		printf("-> %d: new movement (goToPos %.2f, %.2f, %.2f)\n", m_entityID, position.x, position.y, position.z);
}

void AgentActionComponent::goToEntity(int entityID, float speed)
{
	if(strcmp(GameEngine::entityName(entityID),"") == 0)
		return;

	m_destEntityID = entityID;
	m_destination = getEntityPosition(entityID);
	m_distance = calculateVectorTo(entityID).length() +1;
	m_movementSpeed = speed * MoveAnimSpeedScale; //scaling the movement speed to match the animation speed
	m_posAdjustment = false;

	//Buffer zones
	dest_bufferZones.clear();
	int size = GameEngine::Agent_getBufferZonesCount(m_destEntityID);
	for(int i=0; i< size; i++)
		dest_bufferZones.push_back( GameEngine::Agent_getBufferZone(m_destEntityID, i) );

	//orientation
	if(m_currentOrientation != 0) delete m_currentOrientation;
	m_currentOrientation = createOrientation( GameEngine::Agent_getPreferedOrientation(m_destEntityID, m_entityID) );
	
	int walkID = GameEngine::AgentAnim_loadAnim( m_entityID, m_walkFile, Agent_AnimType::AAT_IDLE, 0, 0 );
	GameEngine::AgentAnim_setSpeedOnAnimf( m_entityID, walkID, speed );

	m_idleAnim_ID = -1;
	m_walk = true;
	fade_stopWalk = false;
	t_stopWalk = 0;

	if(AGENTACTIONDEBUG)
		printf("-> %d: new movement (goToEntity %d)\n", m_entityID, m_destEntityID);
}

void AgentActionComponent::rotate(Vec3f rot, float speed)
{
	Vec3f current_rot = getEntityRotation(m_entityID);

	//check if rotation is nexessary
	if(rot == current_rot || rot == m_reqRotation)
		return;

	//optimize rotation
	if(abs(rot.y - current_rot.y) > 180.0f)
	{
		if(rot.y > 0)
			rot.y = (-1)* (360.0f - rot.y);
		else
			rot.y = 360.0f + rot.y;
	}

	//check again if rotation is necessary
	if((rot - current_rot).length() <= 0.1f || (rot - m_reqRotation).length() <= 0.1f)
		return;

	m_initRotation = current_rot;
	m_reqRotation = rot;
	m_curRotation = m_initRotation;
	t_rot = 0;
	m_rotationSpeed = speed;

	m_rotationSpeedScale = 180.0f/(m_reqRotation - m_initRotation).length(); 

	m_rotate = true;

	if(AGENTACTIONDEBUG)
		printf("-> %d: new rotation_s%.1f /from(%.2f %.2f %.2f) to(%.2f %.2f %.2f)\n", m_entityID, m_rotationSpeedScale, m_initRotation.x,m_initRotation.y,m_initRotation.z, rot.x, rot.y, rot.z);
}

void AgentActionComponent::updatePosition()
{
	Vec3f direction = calculateVectorTo(m_destination);
	direction.y = 0;
	float new_distance = direction.length();

	//if we reached the last buffer zone
	//stop walking animation, change to idle but let the character slide a bit more
	if((!fade_stopWalk)&&(new_distance <= dest_bufferZones.at(dest_bufferZones.size() -1) +0.1f))
	{
		stopWalking();
	}
	
	//stop the movement
	if(new_distance <= dest_bufferZones.at(dest_bufferZones.size() -1)
	|| new_distance >= m_distance
	|| new_distance < 0.01f )
	{
		movementFinished();		
		return;
	}

	if(!m_posAdjustment)
		turnTowards(m_destination);
	
	Vec3f delta = direction.normalized() * m_movementSpeed * (30.0f / GameEngine::FPS());
	GameEvent translate(GameEvent::E_TRANSLATE_GLOBAL, &delta, this);
	if (m_owner->checkEvent(&translate))
		m_owner->executeEvent(&translate);

	//printf("db dist: %.5f\n", new_distance);

	m_distance = new_distance;
}

void AgentActionComponent::updateRotation()
{
	m_curRotation = m_initRotation * (1.0f - t_rot) + m_reqRotation * t_rot;
	setEntityRotation( m_entityID, m_curRotation );

	t_rot += (2.0f * m_rotationSpeed * m_rotationSpeedScale) / GameEngine::FPS();
	if(t_rot >= 1.0f)
	{
		m_rotate = false;
		t_rot = 0.0f;
		m_rotationSpeed = 0.0f;

		//snap to requested rotation
		setEntityRotation( m_entityID, m_reqRotation );

		if(AGENTACTIONDEBUG)
			printf("-> %d: rotation finished\n", m_entityID);
	}	
}


Vec3f AgentActionComponent::calculateVectorTo(unsigned int otherEntityID)
{
	Vec3f otherPosition = getEntityPosition(otherEntityID);
	
	return calculateVectorTo(otherPosition);	
}

Vec3f AgentActionComponent::calculateVectorTo(Vec3f position)
{
	Vec3f ownPosition = getEntityPosition(m_entityID);

	return position - ownPosition;
}


void AgentActionComponent::update()
{
	if(!m_init)
		initialize();

	if(m_walk || fade_stopWalk)
	{
		updatePosition();

		//proces movement fading
		if(fade_stopWalk)
		{
			m_movementSpeed *= t_stopWalk;
			t_stopWalk -= 1.0f / GameEngine::FPS();
			
			if(t_stopWalk <= 0 || m_movementSpeed <= 0.1f)
			{
				movementFinished();
			}
		}
	}

	if(m_rotate)
		updateRotation();

	//check for animation consistency
	if(!m_walk && !fade_stopWalk && m_idleAnim_ID < 0)
	{
		movementFinished();
	}

	//check for intruders
	processMyZone();
}

void AgentActionComponent::turnTowards(unsigned int otherEntityID)
{
	Vec3f otherEntityPosition = getEntityPosition(otherEntityID);
	turnTowards(otherEntityPosition);

	//gaze at the target's head
	const float *absArray;
	h3dFindNodes( otherEntityID, AgentHeadNodeName, H3DNodeTypes::Joint );
	int head = h3dGetNodeFindResult(0);
	if(head > 0)
	{
		h3dGetNodeTransMats( head, 0, &absArray );
		Vec3f target = Matrix4f(absArray) * Vec3f(0,0,0);

		IKData data( target.x, target.y, target.z, true, true, true, 0 );
		GameEvent gaze(GameEvent::IK_GAZE, &data, this );
		if (m_owner->checkEvent(&gaze))
			m_owner->executeEvent(&gaze);
	}
}

void AgentActionComponent::turnTowards(Vec3f position)
{
	Vec3f direction = calculateVectorTo(position);
	direction.y = 0;

	float correction = 0.0f;
	
	Vec3f rotation = direction.toRotation();
	rotation.x = radToDeg(rotation.x);
	rotation.y = radToDeg(rotation.y) + 180.0f + correction;
	rotation.z = radToDeg(rotation.z);

	rotate( rotation, 1.0f );
}

void AgentActionComponent::movementFinished()
{
	m_movementSpeed = -1;
	m_walk = false;

	fade_stopWalk = false;
	t_stopWalk = 0;


	//failsafe: if the idle still didn't load properly clear the stage and load it again
	if(m_idleAnim_ID < 0)
	{
		GameEngine::AgentAnim_clearStages( m_entityID );
		if(AGENTACTIONDEBUG)
			printf("-> %d: CLEAR STAGES\n", m_entityID);

		m_idleAnim_ID = GameEngine::AgentAnim_loadAnim( m_entityID, m_idleFile, Agent_AnimType::AAT_IDLE, 0, 0 );
	}

	//if this isn't just a postion adjusment
	//process final position and orientation during the following conversation
	if(!m_posAdjustment && m_currentOrientation != 0)
	{
		GameEngine::Agent_useOrientation( m_destEntityID, m_currentOrientation->getType(), m_entityID );
		
		//execute alpha action of the orientation, the other agents will then execute the beta action (reaction)
		m_currentOrientation->execute(m_entityID, m_destEntityID, Orientation::ALPHA);
	}

	if(AGENTACTIONDEBUG)
		printf("-> %d: movement finished /animID=%d\n", m_entityID, m_idleAnim_ID);
}

void AgentActionComponent::stopWalking()
{
	fade_stopWalk = true;
	t_stopWalk = 1.0f;

	m_idleAnim_ID = GameEngine::AgentAnim_loadAnim( m_entityID, m_idleFile, Agent_AnimType::AAT_IDLE, 0, 0 );

	//failsafe: if animation was unable to be loaded properly, delete all animations
	if(m_idleAnim_ID < 0)
	{
		GameEngine::AgentAnim_clearStages( m_entityID );
		if(AGENTACTIONDEBUG)
			printf("-> %d: CLEAR STAGES\n", m_entityID);

		m_idleAnim_ID = GameEngine::AgentAnim_loadAnim( m_entityID, m_idleFile, Agent_AnimType::AAT_IDLE, 0, 0 );
	}

	if(AGENTACTIONDEBUG)
		printf("-> %d: stopWalk fading started /animID=%d\n", m_entityID, m_idleAnim_ID);
}

/**
 * Forcefully refreshes the orientation
 */
void AgentActionComponent::refreshOrientation()
{
	//process final position and orientation during the following conversation
	if(m_currentOrientation != 0)
	{
		m_currentOrientation->refresh();				
	}
}

Vec3f AgentActionComponent::getEntityPosition(unsigned int entityID)
{
	float x[16];
	GameEvent getTransformation(GameEvent::E_TRANSFORMATION, x, this);
	GameEngine::sendEvent(entityID, &getTransformation);
	
	return Vec3f(x[12],x[13],x[14]);
}

Vec3f AgentActionComponent::getEntityRotation(unsigned int entityID)
{
	unsigned int hordeid = GameEngine::entitySceneGraphID(entityID);
	Vec3f r;

	h3dGetNodeTransform( (H3DNode)hordeid, 0,0,0, &r.x, &r.y, &r.z, 0,0,0 );
	
	return r;
};

void AgentActionComponent::setEntityRotation(unsigned int entityID, Vec3f reqRot)
{
	unsigned int hordeid = GameEngine::entitySceneGraphID(entityID);
	Vec3f p,r,s;

	h3dGetNodeTransform( (H3DNode)hordeid, &p.x,&p.y,&p.z, &r.x,&r.y,&r.z, &s.x,&s.y,&s.z );
	h3dSetNodeTransform( (H3DNode)hordeid, p.x,p.y,p.z, reqRot.x, reqRot.y, reqRot.z, s.x,s.y,s.z );
};


/*
 * Function gets called up when other entities enter the zone (with id = bufferZoneID) of this entity
 * - can be used to send out events to behavior managers
 */
void AgentActionComponent::otherEntityEnteredMyZone( int otherEntityID, int bufferZoneID )
{
	//proceed only if stationary
	if(m_walk)
		return;

	// << FUNCTION CAN BE CUSTOMIZED BY THE USER FOR USE IN LOCAL APPLICATIONS >>

	/*
	//Example: repulse action
	if(bufferZoneID == m_bufferZones.size()-1)
	{
		//intruder is too close, make a step backwards
		goToPosition( getEntityPosition(m_entityID) -calculateVectorTo(otherEntityID), 1, true);
	}
	turnTowards(otherEntityID);
	*/

	if(AGENTACTIONDEBUG)
		printf("%d: Agent %d entered my zone%d\n", m_entityID, otherEntityID, bufferZoneID);
}


/*
 * Function gets called up when an entity left the outer zone of this entity
 * - can be used to send out events to behavior managers
 */
void AgentActionComponent::otherEntityLeftMyZones( int otherEntityID )
{
	//proceed only if stationary
	if(m_walk)
		return;

	// << FUNCTION CAN BE CUSTOMIZED BY THE USER FOR USE IN LOCAL APPLICATIONS >>

	if((m_currentOrientation != 0)
	&& (m_currentOrientation->getAlphaAgent() == otherEntityID || m_currentOrientation->getBetaAgent() == otherEntityID))
	{
		delete m_currentOrientation;
		m_currentOrientation = 0;
	}
}

/*
 * Processes the agent's zone
 * - get's called up once a frame
 */
void AgentActionComponent::processMyZone()
{
	int zone = -1;
	std::vector<ActionEntity*> new_rivalEntities;
	
	//Find all agentAction components and the models they are attached to
	std::vector<AgentActionComponent*>::iterator iter = AgentActionManager::instance()->m_agentActionListener.begin();
	const std::vector<AgentActionComponent*>::iterator end = AgentActionManager::instance()->m_agentActionListener.end();
	while ( iter != end )
	{
		//skip if this is the local entity or bad pointer
		if((*iter)->owner()->worldId() == m_entityID || *iter <= 0 )
		{
			++iter; continue;
		}

		//if this model is close to my position
		zone = checkProximity((*iter)->owner()->worldId());
		if(zone >= 0)
		{
			//save its entityID
			new_rivalEntities.push_back( new ActionEntity((*iter)->owner()->worldId(), zone) );

			//if this model just entered the zone, process it
			bool known = false;
			for(unsigned int i=0; i< m_rivalEntities.size(); i++)
				if(m_rivalEntities[i]->entityID == (*iter)->owner()->worldId()
				&& m_rivalEntities[i]->lastKnownZone == zone)
					known = true;

			if(!known)
				otherEntityEnteredMyZone( (*iter)->owner()->worldId(), zone );	
		}
		++iter;
	}

	//check for entites that left the zone
	bool exists;
	for(unsigned int i=0; i<m_rivalEntities.size(); i++)
	{
		if(m_rivalEntities[i] == 0) continue;

		exists = false;
		for(unsigned int j=0; j<new_rivalEntities.size(); j++)
		{
			if(m_rivalEntities[i]->entityID == new_rivalEntities[j]->entityID)
			{
				exists = true;
				break;
			}
		}
		if(!exists)
		{
			//this entity left the zone
			otherEntityLeftMyZones(m_rivalEntities[i]->entityID);		
		}
	}

	m_rivalEntities.clear();
	m_rivalEntities = new_rivalEntities;
}

/*
 * Other entities call up this function when starting a movement towards this entity
 * - returns the orientation type the caller should use when aproaching this entity
 */
unsigned int AgentActionComponent::getPreferedOrientationType(unsigned int entityID)
{
	//test foreign entity for match cirterias ...
	if(m_currentOrientation == 0 || m_currentOrientation->getType() == Orientation::UNKNOWN)
		return (unsigned int)m_knownOrientations[0]->getType();	

	else
		return (unsigned int)m_currentOrientation->getType();	
}


/*
 * Other entities call up this function to request an orientation
 * This funciton usually gets called up when the caller gets close to this entity
 * - returns positive value if orientation was accepted, negative if not
 *   if the orientation was accepted then this entity will execute a beta action,
 *   responding to the callers alpha action
 */
int AgentActionComponent::useOrientation(unsigned int orientation_type, unsigned int caller_entityID)
{
	//if this entity is currently idling
	if(m_currentOrientation == 0 || m_currentOrientation->getType() == Orientation::UNKNOWN)
	{
		if(m_currentOrientation != 0) delete m_currentOrientation;
		m_currentOrientation = createOrientation(orientation_type);	
		m_currentOrientation->execute(m_entityID, caller_entityID, Orientation::BETA);
		return 1;
	}

	//if the same caller wants a reorentation
	else if(caller_entityID == m_currentOrientation->getBetaAgent())
	{
		m_currentOrientation->execute_betaAction(m_entityID, caller_entityID);
		return 3;
	}

	//if this is an open orientation
	// - orientation 1,2,3 are closed orientations while 4,5,6 are open
	else if((unsigned int)m_currentOrientation->getType() > 3 && (unsigned int)m_currentOrientation->getType() == orientation_type)
	{
		//m_currentOrientation->m_actionType = Orientation::ALPHA;
		//m_currentOrientation->execute_betaAction(m_entityID, caller_entityID);
		return 2;
	}		

	return -1;
}


Orientation* AgentActionComponent::createOrientation(char* name)
{
	if(strcmp(name, "N") == 0)
		return new Orientation_N(this);
	else if(strcmp(name, "H") == 0)
		return new Orientation_H(this);
	else if(strcmp(name, "V") == 0)
		return new Orientation_V(this);
	else if(strcmp(name, "L") == 0)
		return new Orientation_L(this);
	else if(strcmp(name, "C") == 0)
		return new Orientation_C(this);
	else if(strcmp(name, "I") == 0)
		return new Orientation_I(this);
	else
		return new Orientation(this);	
}

Orientation* AgentActionComponent::createOrientation(unsigned int type)
{
	switch( (Orientation::type)type )
	{
	case Orientation::N:
		return (Orientation*)new Orientation_N(this);
	case Orientation::H:
		return (Orientation*)new Orientation_H(this);
	case Orientation::V:
		return (Orientation*)new Orientation_V(this);
	case Orientation::L:
		return (Orientation*)new Orientation_L(this);
	case Orientation::C:
		return (Orientation*)new Orientation_C(this);
	case Orientation::I:
		return (Orientation*)new Orientation_I(this);
	default:
		return (Orientation*)new Orientation(this);
	}	
	return 0;
}


int AgentActionComponent::getBufferZonesCount()
{
	return (int)m_bufferZones.size();
}


float AgentActionComponent::getBufferZone(int id)
{
	return m_bufferZones.at(id);
}


Agent_Status::List AgentActionComponent::getAgentStatus()
{
	if(m_walk)			return Agent_Status::AS_WALKING;

	if(m_rotate)		return Agent_Status::AS_ROTATING;

	if(fade_stopWalk)	return Agent_Status::AS_FADING_STOPWALK;

	if(m_currentOrientation != 0 && m_currentOrientation->getType() != Orientation::UNKNOWN)
		return Agent_Status::AS_INTERACTING_WITH_AGENT;

	return Agent_Status::AS_IDLE_OR_UNKNOWN;
}

/**
 * Returns array with entity_ids of surrounding entities
 * WARNING: allocates memory!! don't forget to free it up later
 */
int AgentActionComponent::getSurroundingEntities(unsigned int** entityArray)
{
	unsigned int size = (unsigned int)m_rivalEntities.size();
	if(size <= 0)
		return 0;
	
	*entityArray = (unsigned int*)malloc(size * sizeof(unsigned int));
	for(unsigned int i=0; i< size; i++)
		(*entityArray)[i] = m_rivalEntities[i]->entityID;

	return (int)size;
}


int AgentActionComponent::checkProximity( unsigned int IntruderID )
{
	Vec3f posA = getEntityPosition( IntruderID );
	Vec3f posB = getEntityPosition( m_entityID );
	float dist = (posA-posB).length();

	int i=-1;
	for(i=0; i< (int)m_bufferZones.size(); i++)
	{
		if((posA - posB).length() > m_bufferZones.at(i))
			break;
	}
	return i -1;
}


void AgentActionComponent::clearVector( std::vector<ActionEntity*> x )
{
	for(unsigned int i=0; i< x.size(); i++)
		if(x[i] != 0)
			delete x[i];

	x.clear();
}
        