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
#ifndef AGENTCOMPONENT_FORMATION_H_
#define AGENTCOMPONENT_FORMATION_H_

#include <GameEngine/Config.h>
#include <GameEngine/GameComponent.h>
#include "../GameEngine_Agent.h"

#include "Agent.h"
#include "BodyLocation.h"
#include "BodyOrientation.h"
#include "../Config.h"

#include <list>

/**
 * A Formation is an object which uniquely defines an interaction
 * It stores following information:
 * - member agents (by ID)
 * - local agent's position and orientation
 *
 * In conclusion, a formation is ultimately defined by its members.
 */
class FormationComponent : public GameComponent
{
public:
	static GameComponent* createComponent( GameEntity* owner );

	FormationComponent(GameEntity* owner);
	virtual ~FormationComponent();

	bool checkEvent(GameEvent* event) { return true; }

	void executeEvent(GameEvent* event);

	void loadFromXml(const XMLNode* description);

	void update();

	// ********************
	// Interface functions
	// ********************
	///performs a movement towards the formation of the specified entity
	int gotoE(int target_eID, float speed, const char* orientAnimName, const char* walkAnimName);

	void setIPDistance(float min, float max);
	void setDeviation(float deviation);
	void setReposAnimName(const char* name);

	void getIPDistance(float *min, float *max);
	float getDeviation();	
	const char* getReposAnimName();
	
	///signals an event to the formation members demanding a reaction
	void fireEvent(Agent_Event::List e);
	///reacts on another member's event
	void reactOnEvent(int sender_eID, Agent_Event::List e);

	// ******************************
	// Intercommunication functions
	// ******************************
	///returns an array with the members of the current formation the local agent is part of
	int getMembers(int** members);
	///returns a pointer to the member list of the current formation the local agent is part of
	std::list<Agent*>* getMembersList();

	///returns formation type
	Agent_FormationType::List getType();

	///computes and returns the most favorable entry position based on member world positions
	///and the entree's relative position to the formation
	bool getEntryPoint(int agent_eID, float** entryPoint);

	///requests the addition of a new agent to the formation
	void addNewMemberE(int member_eID);
	///requests the addition of a new agent to the formation
	void addNewMemberA(int member_eID);
	///removes a member from the formation
	void removeMember(int member_eID);


	///returns local horde ID
	int getHordeID();
	///returns local entity ID
	int getEntityID();

	float computeDistance(Agent* a, Agent* b);
	///computes and returns the center of the o-space, as described by Kendon
	///representing the center of the formation
	Vec3f computeOSpace();
	///computes and returns the center and the innerRadius/outerRadius of the p-space, as described by Kendon
	///representing the space of the formation where its members are positioned
	Vec3f computePSpace(float* innerRadius = 0, float* outerRadius = 0);

	///returns true if the formaiton type is circular
	bool isCircular();
	///returns true if the formaiton type is open (as defined by Rehm et al)
	bool isOpen();

private:
	///local agent's horde ID
	int m_hID;
	///local agent's entity ID
	int m_eID;
	///local agent's gender
	Agent_Gender::List m_gender;
	///local agent's culture
	Agent_Culture::List m_culture;

	//Formation varibles
	Agent_FormationType::List m_type;	
	Agent_FormationType::List m_preferredType;

	///a formation knows all agents that are part of it and their position and orientation
	///this information must be synched within the formation
	std::list<Agent*> m_memberAgents;
	///we will store the agent id's in a separate array for easier cummunication with external components.
	int* m_memberAgentsI;

	///the position within the formation of the local agent
	BodyLocation* m_location;
	///the orientation within the formation of the local agent
	BodyOrientation* m_orientation;

	///the preferred minimal interpersonal distance
	float m_minIPDistance;
	///the preferred maximal interpersonal distance
	float m_maxIPDistance;
	///the preferred deviation from the default orientation
	float m_deviation;
	///the determination to which the agent imposes his preferrences over those of other agents
	float m_willpower;

	int m_movement_ID;
	int m_dest_eID;
	Vec3f m_destPoint;

	///cooridnates of the center of the formation
	Vec3f m_formationCenter;
	///radius of the o-space (p-space's inner radius)
	float m_oSpaceRad;
	///radius of the p-space (p-space's outer radius)
	float m_pSpaceRad;
	
	///name of the animaiton to be played during repositioning
	char m_reposAnimName[c_MaxAnimFileSize];
	///counter of seqientially applied repositionings
	int m_reposCnt;

	/*
	 * Functions
	 */	
	///Enters the formation of an entity. This will result in storing the foreign formation information (thus overwriting the local one)
	///and then sending a message to all formation members requesting to add the local agent to the formation
	void joinFormation(int formation_eID);

	///leaves the current formation and notifies the members
	void leaveFormation();

	///computes the position the local agent will take within the formation
	void computeBodyLocation(float handicap = 1);
	///computes the orientaion the local agent will take within the formation
	void computeBodyOrientation();

	///computes and returns a handicap value that simulates a decrease in this agent's will to impose his preferred interpersonal distance
	float computeHandicap(float strength, int iteration);

	///inserts a into the agents list at the correct posiiton
	void insertAgent(Agent* a);

	///returns true if point is within the circle defined by circleCentre and circleRadius
	bool inCircle(Vec3f point, Vec3f circleCentre, float circleRadius);
};

#endif
  