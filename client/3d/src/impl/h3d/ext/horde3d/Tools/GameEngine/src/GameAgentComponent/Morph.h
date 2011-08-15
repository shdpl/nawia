
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

#ifndef MORPH_H_
#define MORPH_H_

#include "GameEngine/utmath.h"

using namespace Horde3D;

class Morph
{
public:
	Morph(float start, float target);
	///sets the duration (speed) of the morphing process
	void setDuration(float duration);

	///updates the process (if ext_t is provided, it will overwrite the internal t-variable)
	float update(float ext_t = -1);

	///returns current morph value
	float getValue();
	///returns whether the morphing process has finished
	bool hasFinished();

	///returns the t-varaible. It represents how far through the process is (values range from 0 to 1)
	float getT();
	float getDuration();
	float getTarget();

private:
	///t-variable of current morphing process
	float m_t;
	///start position of the morphing process
	float m_start;
	///target position of the morphing process
	float m_target;
	///current position in the morphing process
	float m_current;
	///speed of the morphing process
	float m_duration;

	bool m_isFinished;
};

class Morph3
{
public:
	Morph3(Vec3f start, Vec3f target);
	///sets the duration (speed) of the morphing process
	void setDuration(float duration);

	///updates the process (if ext_t is provided, it will overwrite the internal t-variable)
	Vec3f update(float ext_t = -1);

	///returns current morph value
	Vec3f getValue();
	///returns whether the morphing process has finished
	bool hasFinished();

	///returns the t-varaible. It represents how far through the process is (values range from 0 to 1)
	float getT();
	float getDuration();
	Vec3f getTarget();

private:
	Morph* m_x;
	Morph* m_y;
	Morph* m_z;

	float m_duration;
};

#endif