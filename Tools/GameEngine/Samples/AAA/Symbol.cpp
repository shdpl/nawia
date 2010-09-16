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
// Advanced Agent Animation
//
// -------------------------
// Copyright (C) 2010 Ionut Damian
//
// ****************************************************************************************
//
// For information on how to use AAA, please read the readme.txt in the project folder 
// (ex: GameEngine\Samples\AAA\readme.txt) or check out the website at: 
// http://mm-werkstatt.informatik.uni-augsburg.de/projects/aaa/
//
// ****************************************************************************************
#include "Symbol.h"
#include "GameEngine\GameEngine.h"
#include "GameEngine\GameEngine_SceneGraph.h"
#include <string.h>

std::vector<Symbol*> Symbol::m_symbols;

Symbol* Symbol::getInstance(char *name)
{
	Symbol* aSymbol;

	//check if the symbol has already been created
	aSymbol = find(name);
	if( aSymbol == 0 )
	{
		//if not, we need to create it now
		aSymbol = new Symbol(name);
		m_symbols.push_back( aSymbol );
	}

	return aSymbol;
}

Symbol::Symbol(char *name) : m_distance(30)
{
	strcpy_s( m_name, name );

	m_horde_id = GameEngine::entitySceneGraphID( GameEngine::entityWorldID(name) );
	h3dGetNodeTransform( m_horde_id, 0,0,0, 0,0,0, &m_scale.x, &m_scale.y, &m_scale.z );
	h3dSetNodeTransform( m_horde_id, 0,m_distance,0, 0,0,0, m_scale.x, m_scale.y, m_scale.z );
	setVisible(false);
}

void Symbol::deleteAll()
{
	for(unsigned int i=0; i< m_symbols.size(); i++)
		delete m_symbols[i];

	m_symbols.clear();
}

Symbol* Symbol::find(char *name)
{
	for(unsigned int i=0; i< m_symbols.size(); i++)
		if( strcmp(m_symbols[i]->m_name, name) == 0 )
			return m_symbols[i];

	return 0;
}

void Symbol::setParent(int parent_horde_id)
{
	h3dSetNodeParent( m_horde_id, parent_horde_id );
	setVisible(true);
}

void Symbol::setVisible(bool value)
{
	h3dSetNodeActivation( m_horde_id, value );
}

void Symbol::setDistanceFromAgent(float dist)
{
	m_distance = dist;
	h3dSetNodeTransform( m_horde_id, 
		0, m_distance, 0, 
		0,0,0, 
		m_scale.x, m_scale.y, m_scale.z );
}

float Symbol::getDistanceFromAgent()
{
	return m_distance;
}