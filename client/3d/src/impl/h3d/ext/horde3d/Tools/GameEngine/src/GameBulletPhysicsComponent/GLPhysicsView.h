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
// *************************************************************************************************
//



// ****************************************************************************************
//
// GameEngine Bullet Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#ifndef GLPHYSICSVIEW_H_
#define GLPHYSICSVIEW_H_

class btDynamicsWorld;

namespace BulletPhysicsComponent
{
	/// Renders the collision objects
	/// Projection and modelview matrix have to be set before  calling this function
	void drawCollisionObjects(btDynamicsWorld* world);
}
#endif