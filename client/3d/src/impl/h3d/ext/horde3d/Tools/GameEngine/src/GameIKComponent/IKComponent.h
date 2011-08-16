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
// GameEngine IK Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010 Ionut Damian
// 
// ****************************************************************************************
#ifndef IK_COMPONENT_H_
#define IK_COMPONENT_H_

#include "Joint.h"
#include "Gaze.h"
#include "IKAnim.h"

#include <GameEngine/config.h>
#include <GameEngine/GameComponent.h>
#include <Horde3D/Horde3D.h>

#include "GameEngine/utmath.h"
#include <XmlParser/utXmlParser.h>


class IKComponent : public GameComponent
{
public:
	///delegates the request to a CCD instance
	int useIK(unsigned int modelHandle, const char* endEffectorName, const char* stopName, float reqX, float reqY, float reqZ);
	///delegates the request to a Gaze instance
	int gaze(unsigned int modelHandle, float targetX, float targetY, float targetZ, bool moveLEye = true, bool moveREye = true, bool moveNeck = true, int head_pitch = 0, bool isTest = false );
	
	///releases memory allocated by this component
	void release();
	
	///delegates the request to a IKAnim instance
	int animIK(unsigned int modelHandle, const char* endEffectorName, const char* stopName, float targetX, float targetY, float targetZ, int stage, float weight, float speed);
	
	static GameComponent*  createComponent( GameEntity* owner );

	IKComponent(GameEntity* owner);
	virtual ~IKComponent();

	bool checkEvent(GameEvent* event) { return true; }
	void executeEvent(GameEvent* event);
	///loads information from the xml configuration file
	void loadFromXml(const XMLNode* description);
	///parses attachment nodes of type IK and extracts DOFRestrictions information from them
	void processXmlNode(XMLNode node);
	void update();

	///Horde3D id of this entity/model
	unsigned int hordeID;
	///GameEngine entity id of this entity/model
	unsigned int gameID;

private:
	///current gaze instance
	Gaze* m_gaze;
	///current active animation
	IKAnim* m_anim;
};
#endif
