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
#include "IKComponent.h"
#include "IKManager.h"
#include "Config.h"
#include "CCD.h"

#include <GameEngine/GameEngine.h>
#include <GameEngine/GameEntity.h>
#include <GameEngine/GameLog.h>
#include <GameEngine/GameEvent.h>
#include <GameEngine/GameEngine_SceneGraph.h>
#include "GameEngine/utmath.h"

using namespace std;


GameComponent* IKComponent::createComponent( GameEntity* owner )
{
	return new IKComponent( owner );
}

IKComponent::IKComponent(GameEntity* owner) : GameComponent(owner, "IK")
{
	gameID = owner->worldId();
	hordeID = GameEngine::entitySceneGraphID( gameID );

	//gaze
	m_gaze = 0;
	//anim
	m_anim = 0;

	owner->addListener(GameEvent::IK_SOLVE, this);
	owner->addListener(GameEvent::IK_CREATEIKANIM, this);
	owner->addListener(GameEvent::IK_PLAYIKANIM, this);
	owner->addListener(GameEvent::IK_GAZE, this);
	owner->addListener(GameEvent::IK_SETPARAMI, this);
	owner->addListener(GameEvent::IK_SETPARAMF, this);
	owner->addListener(GameEvent::IK_GETPARAMI, this);
	owner->addListener(GameEvent::IK_GETPARAMF, this);

	//initialize configurations
	Config::useDefault();

	IKManager::instance()->addComponent(this);
}

IKComponent::~IKComponent()
{
	release();
	IKManager::instance()->removeComponent(this);
}

void IKComponent::executeEvent(GameEvent *event)
{
	switch (event->id())
	{
	case GameEvent::IK_SOLVE:
		{
			IKData* data = static_cast<IKData*>(event->data());
			//check data
			if( data->endEffectorName == 0 || data->stopName == 0 )
				data->result = -1;
			else
				data->result = useIK( hordeID, data->endEffectorName, data->stopName, data->targetX, data->targetY, data->targetZ );
		}
		break;
	case GameEvent::IK_CREATEIKANIM:
		{
			IKData* data = static_cast<IKData*>(event->data());
			//check data
			if( data->endEffectorName == 0 || data->stopName == 0 )
				data->result = -1;
			else
			{
				m_anim = new IKAnim( Joint::getInstance(hordeID, data->endEffectorName), Joint::getInstance(hordeID, data->stopName), Horde3D::Vec3f(data->targetX, data->targetY, data->targetZ) );
				data->result = m_anim->getResource();
			}
		}
		break;
	case GameEvent::IK_PLAYIKANIM:
		{
			IKData* data = static_cast<IKData*>(event->data());
			if(m_anim <= 0 || data->animStage < 0 || data->animWeight < 0 || data->animSpeed < 0)
				data->result = -1;
			else
				data->result = m_anim->play( hordeID, data->animStage, data->animWeight, data->animSpeed );
		}
		break;
	case GameEvent::IK_GAZE:
		{
			IKData* data = static_cast<IKData*>(event->data());
			data->result = gaze( hordeID, data->targetX, data->targetY, data->targetZ, data->moveLEye, data->moveREye, data->moveHead, data->head_pitch, data->simulate );
		}
		break;
	case GameEvent::IK_SETPARAMI:
		{
			IKData* data = static_cast<IKData*>(event->data());
			Config::setParamI((IK_Param::List)data->ikparam, data->ikparam_valuei);
		}
		break;
	case GameEvent::IK_SETPARAMF:
		{
			IKData* data = static_cast<IKData*>(event->data());
			Config::setParamF((IK_Param::List)data->ikparam, data->ikparam_valuef);
		}
		break;
	case GameEvent::IK_GETPARAMI:
		{
			IKData* data = static_cast<IKData*>(event->data());
			data->ikparam_valuei = Config::getParamI((IK_Param::List)data->ikparam);
		}
		break;
	case GameEvent::IK_GETPARAMF:
		{
			IKData* data = static_cast<IKData*>(event->data());
			data->ikparam_valuef = Config::getParamF((IK_Param::List)data->ikparam);
		}

		break;
	}
}

void IKComponent::loadFromXml(const XMLNode* node)
{
	const char* leye_name;
	const char* reye_name;
	const char* neck_name;
	
	//Initializing the IK Plugin
	
	//Parsing the model xml file for DOFRs
	const char* filename = node->getAttribute( "file" );
	if( filename == 0 || strcmp ( "", filename ) == 0 )
		GameLog::errorMessage( "IKComponent: file name empty or not defined" );
	else
		//parse xml file recursively looking for IK Attachments
		processXmlNode( XMLNode::openFileHelper( filename, "Model" ) );

	//Getting extra gaze information from scene file
	leye_name = node->getAttribute( "leye" );
	reye_name = node->getAttribute( "reye" );
	neck_name = (node->getAttribute( "neck" ) != 0) ? node->getAttribute( "neck" ) : node->getAttribute( "head" );
	
	if( leye_name == 0 || strcmp ( "", leye_name ) == 0 
		|| reye_name == 0 || strcmp ( "", reye_name ) == 0 
		|| neck_name == 0 || strcmp ( "", neck_name ) == 0 )
	 GameLog::errorMessage( "IKComponent: information for gaze initialization missing" );
	else
		m_gaze = new Gaze( Joint::getInstance(hordeID, neck_name), Joint::getInstance(hordeID, leye_name), Joint::getInstance(hordeID, reye_name) );
}

void IKComponent::processXmlNode(XMLNode node)
{
	if(node.isEmpty())
		return;

	const char* joint_name;
	int n = node.nChildNode( "Joint" );
	for(int i = 0; i<n; i++)
	{
		XMLNode _xmlJoint = node.getChildNode("Joint", i);
		joint_name = _xmlJoint.getAttribute( "Name" );

		//find attachment node
		for(int k=0; k< _xmlJoint.nChildNode("Attachment"); k++ )
		{
			if(!_xmlJoint.getChildNode("Attachment", k).isEmpty() 
			   && strcmp(_xmlJoint.getChildNode("Attachment", k).getAttribute("type"), "IK") == 0
			   && !_xmlJoint.getChildNode("Attachment", k).getChildNode("DOFR").isEmpty() )
			{
				Joint *j = Joint::getInstance(hordeID, joint_name);
				j->setDOFR(&_xmlJoint.getChildNode("Attachment", k).getChildNode("DOFR"));
				break;
			}
		}
		processXmlNode(_xmlJoint);
	}
}

void IKComponent::update()
{
	if(m_anim != 0)
		m_anim->update();
}

int IKComponent::animIK(unsigned int modelHandle, const char* endEffectorName, const char* stopName, float targetX, float targetY, float targetZ, int stage, float weight, float speed)
{
	m_anim = new IKAnim( Joint::getInstance(modelHandle, endEffectorName), Joint::getInstance(modelHandle, stopName), Horde3D::Vec3f(targetX, targetY, targetZ) );
	return m_anim->play(hordeID, stage, weight, speed);
}

int IKComponent::useIK(unsigned int modelHandle, const char* endEffectorName, const char* stopName, float targetX, float targetY, float targetZ)
{
	CCD aCCD( Joint::getInstance(modelHandle, endEffectorName), Joint::getInstance(modelHandle, stopName), Horde3D::Vec3f(targetX, targetY, targetZ) );
	return aCCD.execute();
}

int IKComponent::gaze(unsigned int modelHandle, float targetX, float targetY, float targetZ, bool moveLEye, bool moveREye, bool moveNeck, int head_pitch, bool isTest )
{
	m_gaze->setTarget(Horde3D::Vec3f(targetX, targetY, targetZ));
	m_gaze->setHeadpitch(head_pitch);
	
	return (int)m_gaze->execute(moveNeck, moveLEye, moveREye, isTest);
}

void IKComponent::release() 
{
	delete m_gaze;
	m_gaze = 0;
	delete m_anim;
	m_anim = 0;
	Joint::deleteAll(hordeID);
}
