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
#ifndef _SYMBOL_H
#define _SYMBOL_H

#include "Horde3D/Horde3D.h"
#include "Horde3D/Horde3DUtils.h"
#include "GameEngine/utmath.h"
#include <vector>

using namespace Horde3D;

/**
 * Class for agent symbols (objects that float above their heads in the scene)
 * - is also a symbol factory and container class
 */
class Symbol
{
private:
	///constructor (private)
	Symbol( char* name );
	///searches the container for the specified symbol
	static Symbol* find( char* name );

	///container for all instanced symbols
	static std::vector<Symbol*> m_symbols;

	///name of the local symbol
	char m_name[16];
	///size scale of the local symbol
	Vec3f m_scale;
	///distance from the agent's head or root ndoe
	float m_distance;
	///flag stating visibility of the symbol
	bool m_visible;
	///h3d node id of the symbol
	H3DNode m_horde_id;

public:
	//**factory methods
	///returns an existing symbol object or if no match is found, creates one and returns the pointer to it
	static Symbol* getInstance( char* name );
	///clears the container
	static void deleteAll();

	///sets the visibility of the symbol
	void setVisible(bool value);
	///sets the H3D parent of the symbol (usually some agent's head or root node)
	void setParent(int horde_id);
	///sets the distance to the agent's head or root ndoe
	void setDistanceFromAgent(float dist);
	///returns the distance to the agent's head or root ndoe
	float getDistanceFromAgent();
};

#endif _SYMBOL_H