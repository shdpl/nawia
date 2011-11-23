
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
    
#ifndef AGENTCOMPONENT_H_
#define AGENTCOMPONENT_H_

#include <GameEngine/Config.h>
#include <GameEngine/GameComponent.h>

#include "Animation/AnimationComponent.h"
#include "Movement/MovementComponent.h"
#include "Gaze/GazeComponent.h"
#include "Comm/CommComponent.h"
#include "Formation/FormationComponent.h"

#include "Icon.h"

class AgentComponent : public GameComponent
{
public:
	static GameComponent*  createComponent( GameEntity* owner );

	AgentComponent(GameEntity* owner);
	virtual ~AgentComponent();

	bool checkEvent(GameEvent* event) { return true; }

	void executeEvent(GameEvent* event);

	void loadFromXml(const XMLNode* description);

	void update();

	AnimationComponent* getAnimationComponent();
	MovementComponent* getMovementComponent();
	GazeComponent* getGazeComponent();
	FormationComponent* getFormationComponent();
	CommComponent* getCommComponent();

	///sets the visibility of the agent
	void setVisible(bool value);

	///sets the icon
	void setIcon(Icon* icon);
	///sets the icon entity name
	void setIcon(const char* iconName);
	///sets the icon's visibility
	void setIconVisible(bool value);

	///gets the visibility of the agent
	bool getVisible();
	///returns horde ID
	int getHordeID();
	///returns entity ID
	int getEntityID();

private:
	///agent's horde ID
	int m_hID;
	///agent'S entity ID
	int m_eID;

	//sub-components
	AnimationComponent* comp_animation;
	MovementComponent* comp_movement;
	GazeComponent* comp_gaze;
	FormationComponent* comp_formation;
	CommComponent* comp_comm;

	/*
	 * Agent speicfic parameters 
	 */
	bool m_isVisible;
	Icon* m_icon;
};

#endif
        