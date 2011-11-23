
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

#include "Layer.h"
#include "Horde3D/Horde3D.h"
#include "GameEngine/GameEngine.h"

Layer::Layer(int agent_hID, int id) : m_agent_hID(agent_hID), m_ID(id), m_weight(0), m_targetWeight(0), m_morph(0), m_stage(0), 
m_status(LayerStatus::INACTIVE), m_lastStatusChange(LayerStatus::INACTIVE)
{}

Layer::~Layer()
{
	releaseStage();
}

void Layer::setup(Animation *a, Stage *s)
{
	m_stage = s;

	//setup stage
	h3dSetupModelAnimStage( m_agent_hID, m_stage->getID(), a->getResource(), m_ID, a->getStartNode(), false );
	m_stage->setup(a);

	m_stage->activate();

	blendIn();
}

void Layer::update()
{	
	if((m_stage == 0) || m_stage->getAnimation() == 0)
		return;

	//update the weight
	if(m_morph != 0)
	{
		m_morph->update();
		m_weight = m_morph->getValue();
	}

	switch(m_status)
	{
	case LayerStatus::BLENDIN:
		//update the stage
		m_stage->update( m_weight );

		if(m_morph == 0)
		{
			setStatus(LayerStatus::MAIN);
		}
		else if(m_morph->hasFinished())
		{
			delete m_morph;
			m_morph = 0;
			setStatus(LayerStatus::MAIN);
		}
		break;

	case LayerStatus::MAIN:
		//update the stage
		m_stage->update( m_weight );

		//check for termination
		if( m_stage->getAnimation()->isFinishing() )
			blendOut();

		break;

	case LayerStatus::BLENDOUT:
		//update the stage
		m_stage->update( m_weight );

		if(m_morph == 0)
		{
			setStatus(LayerStatus::INACTIVE);
		}
		else if(m_morph->hasFinished())
		{
			delete m_morph;
			m_morph = 0;
			setStatus(LayerStatus::INACTIVE);
		}
		break;
	}
}

void Layer::releaseStage()
{
	if(m_stage == 0)
		return;

	h3dSetupModelAnimStage( m_agent_hID, m_stage->getID(), 0, m_ID, 0, false );
	m_stage->free();
	m_stage = 0;
}

void Layer::blendIn()
{	
	setStatus(LayerStatus::BLENDIN);
	
	//compute morphing duration based on preparation length
	Animation* a = m_stage->getAnimation();
	int prepLen = a->getFile()->getStrokeStart();	
	double animFPS = a->getData()->getFPS();
	if(a->getData()->isCustomizable())
		animFPS *= a->getSpeed();

	if(prepLen > 0)
		setWeight( 1.0f, (float)((double)prepLen * (double)(GameEngine::FPS()/animFPS)) );
	else
		setWeight( 1.0f );
}

void Layer::blendOut()
{	
	setStatus(LayerStatus::BLENDOUT);

	//compute morphing duration based on minimal retraction length	
	Animation* a = m_stage->getAnimation();
	int retLen = (a->getNumFrames(false) -1) - a->getFile()->getStrokeEnd();
	double animFPS = a->getData()->getFPS();
	if(a->getData()->isCustomizable())
		animFPS *= a->getSpeed();

	if(retLen > 0)
		setWeight( 0.0f, (float)((double)retLen * (double)(GameEngine::FPS()/animFPS)) );
	else
		setWeight( 0.0f );
}

int Layer::getID()
{
	return m_ID;
}

Stage* Layer::getStage()
{
	return m_stage;
}

LayerStatus::List Layer::getStatus()
{
	return m_status;
}

LayerStatus::List Layer::getLastStatusChange()
{
	LayerStatus::List s = m_lastStatusChange;
	m_lastStatusChange = LayerStatus::UNDEFINED;

	return s;
}

bool Layer::isActive()
{
	if((m_status == LayerStatus::BLENDIN) || (m_status == LayerStatus::MAIN) || (m_status == LayerStatus::BLENDOUT))
		return true;
	else
		return false;
}

void Layer::setID(int id)
{
	if(id == m_ID)
		return;

	m_ID = id;

	//we need to re-setup the h3d animation stage with the new layer id (could cause performance drop)
	h3dSetupModelAnimStage( m_agent_hID, m_stage->getID(), m_stage->getAnimation()->getResource(), m_ID, m_stage->getAnimation()->getStartNode(), false );
	//now we update the last frame again
	m_stage->reupdateLastFrame( m_weight );
}

void Layer::setWeight(float weight)
{
	setWeight(weight, (float)Config::getParamI(Agent_Param::DfltMorphDuration_I));
}

void Layer::setWeight(float weight, float duration)
{
	if(weight == m_weight || weight == m_targetWeight)
		return;

	m_targetWeight = weight;	

	if(m_morph != 0)
	{
		delete m_morph;
		m_morph = 0;
	}
	m_morph = new Morph( m_weight, m_targetWeight );
	m_morph->setDuration(duration);
}

void Layer::setStatus(LayerStatus::List s)
{
	m_status = s;
	m_lastStatusChange = m_status;
}