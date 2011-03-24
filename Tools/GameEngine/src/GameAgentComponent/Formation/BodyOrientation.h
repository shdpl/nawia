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
#ifndef ORIENTATIONNODE_H_
#define ORIENTATIONNODE_H_

class FormationComponent;

/*
 * defines the current orientation the agent has in the formation
 */
class BodyOrientation
{
public:
	BodyOrientation(FormationComponent* component);
	~BodyOrientation();

	void execute();

	///sets the orientation target in form of a deviation from the normal orientation
	void setDeviation(float dev);
	///sets the orientation target in form of a absoulte euler rotation
	void setTargetRotation(float rot);

private:		
	FormationComponent* m_formation;

	///Angle deviation from facing the formation center (o-space) expressed in degrees
	float m_deviation;
	///absolute euler rotation target
	float m_targetRotation;

	///flag stating the target represents a deviation
	bool m_hasDeviation;
	///flag stating the target represents an euler rotation
	bool m_hasTargetRot;
};

#endif