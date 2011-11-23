
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
#include "Icon.h"
#include "GameEngine\GameEngine.h"
#include "GameEngine\GameEngine_SceneGraph.h"
#include <string.h>

std::vector<Icon*> Icon::s_icons;

Icon* Icon::getInstance(const char *name)
{
	Icon* aIcon;

	//check if the icon has already been created
	aIcon = find(name);
	if( aIcon == 0 )
	{
		//if not, we need to create it now
		aIcon = new Icon(name);
		s_icons.push_back( aIcon );
	}

	return aIcon;
}

Icon::Icon(const char *name) : m_distance(30)
{
	strcpy_s( m_name, name );

	m_eID = GameEngine::entityWorldID(name);
	m_hID = GameEngine::entitySceneGraphID(m_eID);

	h3dGetNodeTransform( m_hID, 0,0,0, 0,0,0, &m_scale.x, &m_scale.y, &m_scale.z );
	h3dSetNodeTransform( m_hID, 0,m_distance,0, 0,0,0, m_scale.x, m_scale.y, m_scale.z );

	setVisible(false);
}

void Icon::deleteAll()
{
	for(unsigned int i=0; i< s_icons.size(); i++)
		delete s_icons[i];

	s_icons.clear();
}

Icon* Icon::find(const char *name)
{
	for(unsigned int i=0; i< s_icons.size(); i++)
		if( strcmp(s_icons[i]->m_name, name) == 0 )
			return s_icons[i];

	return 0;
}

void Icon::setParent(int parent_horde_id)
{
	h3dSetNodeParent( m_hID, parent_horde_id );
	setVisible(true);
}

void Icon::setVisible(bool value)
{
	GameEngine::setVisible(m_eID, value);
}

void Icon::setDistanceFromAgent(float dist)
{
	m_distance = dist;
	h3dSetNodeTransform( m_hID, 
		0, m_distance, 0, 
		0,0,0, 
		m_scale.x, m_scale.y, m_scale.z );
}

float Icon::getDistanceFromAgent()
{
	return m_distance;
}