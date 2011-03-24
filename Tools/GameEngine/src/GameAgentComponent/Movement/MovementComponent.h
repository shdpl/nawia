
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
    
#ifndef AGENTMOVEMENTCOMPONENT_H_
#define AGENTMOVEMENTCOMPONENT_H_

#include <GameEngine/Config.h>
#include <GameEngine/GameComponent.h>

#include "Movement.h"
#include "Locomotion.h"
#include "Orientation.h"
#include "Idle.h"

#include <list>

class MovementComponent : public GameComponent
{
public:
	static GameComponent*  createComponent( GameEntity* owner );

	MovementComponent(GameEntity* owner);
	virtual ~MovementComponent();

	bool checkEvent(GameEvent* event) { return true; }

	void executeEvent(GameEvent* event);

	void loadFromXml(const XMLNode* description);

	void update();

	///starts a movement action to the give target composed of an orientation and a subsequent locomotion towards the target
	int goTo(int target_eID, float speed, bool putInQueue, const char* orientAnimName, const char* walkAnimName);
	///starts a movement action to the give target composed of an orientation and a subsequent locomotion towards the target
	int goTo(float targetX, float targetY, float targetZ, float speed, bool putInQueue, const char* orientAnimName, const char* walkAnimName);
	///starts an orientation towards the target
	int turnTowards(float targetPosX, float targetPosY, float targetPosZ, float speed, bool putInQueue, const char* animName);	
	///starts a locomotion action to the give target
	int move(float targetX, float targetY, float targetZ, float speed, bool putInQueue, const char* animName);
	///starts a rotation which will stop when teh agent reaches the target euler rotation
	int rotate(float targetX, float targetY, float targetZ, float speed, bool putInQueue, const char* animName);
	
	///removes all movement objects
	void clear();

	int getStatus(int movementID);

	///returns local horde ID
	int getHordeID();
	///returns local entity ID
	int getEntityID();


private:
	///local agent horde ID
	int m_hID;
	///local agent entity ID
	int m_eID;

	std::list<Movement*> m_movementNodes;
	Idle* m_idle;

	char m_idleAnimName[c_MaxAnimFileSize];
	char m_walkAnimName[c_MaxAnimFileSize];
	char m_orientAnimName[c_MaxAnimFileSize];
};

#endif
        