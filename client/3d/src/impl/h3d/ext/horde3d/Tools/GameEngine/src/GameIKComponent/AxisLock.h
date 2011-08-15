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

/**
 * Class describes the state of the x,y,z axis regarding possible locks
 * If an axis is locked, it will always snap to the lock value and the DOFR will not flag a rotation dirty because of it
 *
 * Examples: 
 * - the z-axis is usually locked on 0 during a head rotation for enhanced realism
 * - the x-axis is usually locked on 0 during a eye rotations for enhanced realism
 *
 * @author Ionut Damian
 */
class AxisLock
{
public:
	AxisLock();
	///locks x and/or y and/or z with value = 0
	AxisLock(bool x, bool y, bool z);

	void lockX(float value);
	void lockY(float value);
	void lockZ(float value);
	bool getXLock();
	bool getYLock();
	bool getZLock();
	float getXValue();
	float getYValue();
	float getZValue();
private:
	bool lock_x, lock_y, lock_z;
	float x,y,z;	
};