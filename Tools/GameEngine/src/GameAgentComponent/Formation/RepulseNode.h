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
#ifndef REPULSENODE_H_
#define REPULSENODE_H_

#include "GameEngine/utmath.h"
using namespace Horde3D;

/*
 * Represents a physical repulsion action
 */
class RepulseNode
{
public:
	RepulseNode( int agent_eID, Vec3f from, float magnitude );
	~RepulseNode();

	Vec3f getVector();
	int getEntityID();

private:
	int m_eID;
	Vec3f m_vector;
};

#endif