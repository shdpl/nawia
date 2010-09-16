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
#ifndef ACTIONENTITY_H_
#define ACTIONENTITY_H_

class ActionEntity
{
public:
	unsigned int entityID;
	int lastKnownZone;

	ActionEntity(unsigned int _entityID, int _lastKnownZone): 
			entityID(_entityID), lastKnownZone(_lastKnownZone) {};
};

#endif