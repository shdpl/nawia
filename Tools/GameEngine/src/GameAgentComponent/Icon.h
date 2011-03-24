
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
#ifndef AGENT_ICON_H
#define AGENT_ICON_H

#include "Horde3D/Horde3D.h"
#include "Horde3D/Horde3DUtils.h"
#include "GameEngine/utmath.h"
#include <vector>

using namespace Horde3D;

/**
 * Class for agent icons (objects that float above their heads in the scene)
 * - is also a icon factory and container class
 */
class Icon
{
public:
	//**factory methods
	///returns an existing icon object or if no match is found, creates one and returns the pointer to it
	static Icon* getInstance( const char* name );
	///clears the container
	static void deleteAll();

	///sets the visibility of the icon
	void setVisible(bool value);
	///sets the H3D parent of the icon (usually some agent's head or root node)
	void setParent(int horde_id);
	///sets the distance to the agent's head or root ndoe
	void setDistanceFromAgent(float dist);
	///returns the distance to the agent's head or root ndoe
	float getDistanceFromAgent();

private:
	///constructor (private)
	Icon( const char* name );
	///searches the container for the specified icon
	static Icon* find( const char* name );

	///container for all instanced icons
	static std::vector<Icon*> s_icons;

	///name of the local icon
	char m_name[16];
	///size scale of the local icon
	Vec3f m_scale;
	///distance from the agent's head or root ndoe
	float m_distance;
	///flag stating visibility of the icon
	bool m_isVisible;

	///h3d node id of the icon
	int m_hID;	
	///GameEngine entity id of the icon
	int m_eID;
};

#endif AGENT_SYMBOL_H