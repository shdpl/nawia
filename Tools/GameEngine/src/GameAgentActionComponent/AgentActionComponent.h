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
#ifndef AGENTACTIONCOMPONENT_H_
#define AGENTACTIONCOMPONENT_H_

#include <vector>

#include <GameEngine/GameComponent.h>
#include "ActionEntity.h"

#include "GameEngine_AgentAction.h"

#include "Orientation.h"
#include "Orientation_N.h"
#include "Orientation_H.h"
#include "Orientation_V.h"
#include "Orientation_L.h"
#include "Orientation_C.h"
#include "Orientation_I.h"

class AgentActionComponent : public GameComponent
{
public:
	static GameComponent*  createComponent( GameEntity* owner );

	///Component constructor and early initialization process
	AgentActionComponent(GameEntity* owner);
	virtual ~AgentActionComponent();

	bool checkEvent(GameEvent* event) { return true; }

	void executeEvent(GameEvent* event) {}
	
	///loads information from the xml configuration file
	void loadFromXml(const XMLNode* node);
	///Late initialization process. Gets called up in first rendered frame.
	void initialize();
	///Updates movement and rotation processes, gets called up every frame
	void update();

	///Forcefully refreshes the orientation
	void refreshOrientation();

	///returns current entity position form scene graph
	Vec3f getEntityPosition(unsigned int entityID);
	///returns current entity rotation form scene graph
	Vec3f getEntityRotation(unsigned int entityID);
	///sets new absolute entity rotation to scene graph
	void setEntityRotation(unsigned int entityID, Vec3f reqRot);
	///returns the number of known buffer zones
	int getBufferZonesCount();
	///returns the radius of the specified buffer zone
	float getBufferZone(int ID);

	///rotates agent so that it faces the specified entity
	void turnTowards(unsigned int otherEntityID);
	///rotates agent so that it faces the specified absolute position
	void turnTowards(Vec3f position);

	/**
	 * initiates walking process causing agent to move to the specified position
	 */
	void goToPosition(Vec3f position, float speed = 1.0f, bool posAdjustment = false);

	/**
	 * intiates walking process causing agent to move to the specified entity
	 */
	void goToEntity(int entityID, float speed = 1.0f);

	/**
	 * initiates termination of the previously loaded walking process
	 */
	void stopWalking();

	/**
	 * initiates rotation process
	 */
	void rotate(Vec3f rot, float speed = 1.0f);

	/**
	 * Function gets called up when other entities entera zone of this entity
	 * - can be used to send out events to behavior managers
	 */
	void otherEntityEnteredMyZone( int otherEntityID, int bufferZoneID = 0 );	

	/**
	 * Function gets called up when an entity left the outer zone of this entity
	 * - can be used to send out events to behavior managers
	 */
	void otherEntityLeftMyZones( int otherEntityID );

	/**
	 * Other entities call up this function to request an orientation
	 * This funciton usually gets called up when the caller gets close to this entity
	 * - returns positive value if orientation was accepted, negative if not
	 *   if the orientation was accepted then this entity will execute a beta action,
	 *   responding to the callers alpha action
	 */
	int useOrientation(unsigned int orientation_type, unsigned int caller_entityID);

	/**
	 * Other entities call up this function when starting a movement towards this entity
	 * - returns the orientation type the caller should use when aproaching this entity
	 */
	unsigned int getPreferedOrientationType(unsigned int entityID);

	/**
	 * returns the current status of the local agent
	 */
	Agent_Status::List getAgentStatus();

	/**
	 * Returns array with entity_ids of surrounding entities
	 * WARNING: allocates memory!! don't forget to free it up later
	 */
	int getSurroundingEntities(unsigned int** entityArray);

private:
	///calculates distance vector between the position of the local agent and the specified entity 
	Vec3f calculateVectorTo(unsigned int otherEntityID);
	///calculates distance vector between the position of the local agent and the specified position
	Vec3f calculateVectorTo(Vec3f position);
	///returns the id of the smallest buffer zone the specified entity is inside of or -1 if no trespassing occurs
	int checkProximity( unsigned int intruderID );
	///thoroughly clears the specified vector
	void clearVector( std::vector<ActionEntity*> x );
	void updatePosition();
	void updateRotation();
	///abruptly stops the walking process
	void movementFinished();

	/**
	 * Processes the agent's zone
	 * - get's called up once a frame
	 */
	void processMyZone();

	///creates a new instance of the specified orientation
	Orientation* createOrientation(char* name);
	///creates a new instance of the specified orientation
	Orientation* createOrientation(unsigned int type);
	
	//*********************************************************
	//** Parameters
	bool m_init;
	unsigned int m_entityID;
	
	///vector containing entities in the proximity (inside a buffer zone) of the local agent
	std::vector<ActionEntity*> m_rivalEntities;
	
	//**walking
	///current destination of the running process
	Vec3f m_destination;
	///current distance to the current destination
	float m_distance;
	///current ID of the destination entity
	int m_destEntityID;
	///current movement speed of the local agent
	float m_movementSpeed;
	///flag stating if the walking process is active
	bool m_walk;
	///flag stating if the agent is performing a position adjustment, not a walking process
	bool m_posAdjustment;

	//**rotating
	///requested rotation for the local agent
	Vec3f m_reqRotation;
	///initial rotation of the local agent
	Vec3f m_initRotation;
	///current rotation of the local agent
	Vec3f m_curRotation;
	///current rotation process speed
	float m_rotationSpeed;
	///current rotation process speed scaling. Used for keeping the speed of a rotation independent of its length
	float m_rotationSpeedScale;
	///flag stating if the rotation process is active
	bool m_rotate;
	///rotation process t-variable
	float t_rot;
	
	//**fading variables
	///flag stating if the termination of the walking process has been initialized (walking fade-out has started)
	bool fade_stopWalk;
	///t-variable of the termination of the walking process
	float t_stopWalk;

	///vector containing local agent's buffer zones
	std::vector<float> m_bufferZones;
	///vector containing destination agent's buffer zones
	std::vector<float> dest_bufferZones;

	///vector containing local agent's known orientations
	std::vector<Orientation*> m_knownOrientations;
	///current orientation of the local agent
	Orientation* m_currentOrientation;

	///walk animation file name
	char m_walkFile[128];
	///idle animation file name
	char m_idleFile[128];

	int m_idleAnim_ID;
};

#endif
        