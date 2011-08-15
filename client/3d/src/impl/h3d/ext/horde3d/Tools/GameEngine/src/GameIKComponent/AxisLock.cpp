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
#include "AxisLock.h"

AxisLock::AxisLock() : lock_x(false), lock_y(false), lock_z(false)
{}

AxisLock::AxisLock(bool x, bool y, bool z) : lock_x(false), lock_y(false), lock_z(false)
{
	if(x) lockX(0);
	if(y) lockY(0);
	if(z) lockZ(0);
}

void AxisLock::lockX(float value)
{
	x = value;
	lock_x = true;
}
void AxisLock::lockY(float value)
{
	y = value;
	lock_y = true;
}
void AxisLock::lockZ(float value)
{
	z = value;
	lock_z = true;
}

bool AxisLock::getXLock()
{
	return lock_x;
}
bool AxisLock::getYLock()
{
	return lock_y;
}
bool AxisLock::getZLock()
{
	return lock_z;
}

float AxisLock::getXValue()
{
	return x;
}
float AxisLock::getYValue()
{
	return y;
}
float AxisLock::getZValue()
{
	return z;
}