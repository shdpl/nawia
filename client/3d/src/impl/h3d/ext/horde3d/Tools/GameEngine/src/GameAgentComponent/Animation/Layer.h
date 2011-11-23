
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

#ifndef LAYER_H_
#define LAYER_H_

#include "Animation.h"
#include "Stage.h"

#include "../Morph.h"

#include <vector>

struct LayerStatus
{
	enum List
	{
		INACTIVE = 0,
		BLENDIN,
		MAIN,
		BLENDOUT,
		UNDEFINED
	};
};

/*
 * The Animation Layer is the top level of the animation management system. It is responsible for the blending and transitions between animations.
 */
class Layer
{
public:
	Layer(int agent_hID, int id);
	~Layer();

	void update();

	///Sets up the layer with the specified stage and calls the stage setup function with the specified animation. Also sets up the Horde3D animation stage.
	void setup(Animation* a, Stage* s);
	///releases the resources related to the layer's stage
	void releaseStage();

	///starts the layer blend in process
	void blendIn();
	///starts the layer blend out process
	void blendOut();

	///returns whether the layer is active
	bool isActive();
	int getID();
	///returns the current status of the layer
	LayerStatus::List getStatus();
	///returns the status to which the layer most recently switched to
	LayerStatus::List getLastStatusChange();
	Stage* getStage();
	
	///starts a blending process that will reach the desired weight within the default duration
	void setWeight(float weight);
	///starts a blending process that will reach the desired weight within the specified duration
	void setWeight(float weight, float duration);
	///this should be used whenever the layer relative position changes (e.g. if a lower layer gets deleted)
	void setID(int id);

private:
	int m_ID;
	float m_weight;
	float m_targetWeight;

	int m_agent_hID;
	int m_agent_eID;

	Stage* m_stage;

	Morph* m_morph;

	///layer's status
	LayerStatus::List m_status;
	///the status to which the layer most recently switched to
	LayerStatus::List m_lastStatusChange;

	///Sets the status of a layer
	void setStatus(LayerStatus::List s);
};

#endif