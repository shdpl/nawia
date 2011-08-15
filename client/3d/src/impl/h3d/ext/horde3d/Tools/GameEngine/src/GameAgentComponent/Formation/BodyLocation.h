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
#ifndef POSITIONNODE_H_
#define POSITIONNODE_H_

#include "RepulseNode.h"
#include <list>

class FormationComponent;

/*
 * Defines the current relative position of the agent inside a formation
 */
class BodyLocation
{
public:
	/**
	 * Constructor
	 * @param comp formation component instance pointer
	 * @param minIPDistance minimal interpersonal distance in the formation
	 * @param maxIPDistance maximal interpersonal distance in the formation
	 */
	BodyLocation( FormationComponent* comp, float minIPDistance, float maxIPDistance, float handicap = 0 );
	~BodyLocation();

	void execute();

	void update();

private:
	///minimal interpersonal distance in the formation
	float m_minDistance;
	///maximal interpersonal distance in the formation
	float m_maxDistance;
	///defines the degree to which the IPs will be applied (1 = full, 0 = no effect)
	float m_handicap;

	FormationComponent* m_formation;

	///id of the current active repositioning movement
	int m_movement_ID;

	///applies the specified rupulse actions to the scenegraph
	void applyRepulsion(std::list<RepulseNode*>* repulseNodes);
};

#endif