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
// GameEngine Animation Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Nikolaus Bee
// 
// ****************************************************************************************
#ifndef MORPHTARGETANIMCOMPONENT_H_
#define MORPHTARGETANIMCOMPONENT_H_

#include <GameEngine/GameComponent.h>
#include <GameEngine/GameEvent.h>

#include <map>
#include <string>
#include <vector>
using namespace std;

/**
 * \brief Automatic animation control for morph targets
 * 
 * @author Nikolaus Bee
 * @date Aug 2008
 */ 

struct MorphTargetAnimationStruct {
	//unsigned int ownerID; //somehow all Entities use the same morphTargetAnimations...
	string name;
	float fromWeight;
	float toWeight;
	float startTime;
	float endTime;
	//MorphTargetAnimationStruct ( unsigned int _ownerID, string _name, float _fromWeight, float _toWeight, float _startTime, float _endTime )
	//	: ownerID(_ownerID), name(_name), fromWeight(_fromWeight), toWeight(_toWeight), startTime(_startTime), endTime(_endTime) { }
	MorphTargetAnimationStruct ( string _name, float _fromWeight, float _toWeight, float _startTime, float _endTime )
		: name(_name), fromWeight(_fromWeight), toWeight(_toWeight), startTime(_startTime), endTime(_endTime) { }
};


class MorphtargetAnimComponent : public GameComponent
{

public:
	/**
	 * \brief Factory method for MorphtargetAnimComponent
	 * 
	 * To register the component in the GameEngineCore a static factory method has to be provided,
	 * that will create a new instance of this component.
	 * 
	 * @param owner the GameEntity that will contain the newly created compoment ( must not be Null )
	 * @return a new MorphtargetAnimComponent instance (casted to the parent class)
	 */ 
	static GameComponent* createComponent( GameEntity* owner );

	/**
	 * \brief Constructor
	 * 
	 * Creates a new MorphtargetAnimComponent that will be a part of the given entity
	 * @param owner the GameEntity that will contain the newly created component (must not be Null)
	 */ 
	MorphtargetAnimComponent(GameEntity *owner);

	/**
	 * \brief Destructor
	 */ 
	~MorphtargetAnimComponent();


	/**
	 * \brief Check if event can be executed 
	 * 
	 * Returns false if the provided event should be not executed.
	 * @param event pointer to the event to test
	 * @return true if all components accept the event, false if one of the component has catched it and 
	 * don't want it to be executed
	 */
	bool checkEvent(GameEvent* event);
	
	/**
	 * \brief Executes the provided event
	 * @param event pointer to the event to execute
	 */
	void executeEvent(GameEvent* event);

	/**
	 * \brief Load component from XML description
	 * 
 	 * Initializes the component from the given XML data. The XML node has to be of the following structure
	 * \code <MorphtargetAnimation /> \endcode <br>
	 * @param description a XML Node representing the data for the component ( must not be null)
	 */ 
	void loadFromXml(const XMLNode* description);

	/**
	 * \brief Plays the next frame of the animation 
	 * 
	 * @param fps the current frames per second
	 */ 
	void update(float timeStamp);

private:
	std::map<std::string, float> m_currentMorphtargetWeights;
	std::vector<MorphTargetAnimationStruct> morphTargetAnimations;
};


#endif