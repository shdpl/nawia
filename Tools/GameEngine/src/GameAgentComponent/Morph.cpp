
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

#include "Morph.h"
#include "Math.h"
#include "Config.h"

/***************************************/
/*************** MORPH *****************/
/***************************************/
Morph::Morph(float start, float target) : m_start(start), m_target(target), m_duration((float)Config::getParamI(Agent_Param::DfltMorphDuration_I)),
m_t(0), m_current(start), m_isFinished(false)
{}

float Morph::getValue()
{
	return m_current;
}

void Morph::setDuration(float duration)
{
	if(duration < 0)
		return;

	m_duration = duration;
}

float Morph::update(float ext_t)
{
	//check for finish
	if(m_t >= 1 || ext_t >= 1 || m_duration == 0)
	{
		m_isFinished = true;
		m_current = m_target;
		return m_target;
	}

	//update t
	if(ext_t != -1)
		m_t = ext_t;
	else
		//m_t += (abs(m_target - m_start))/m_duration;
		m_t += 1.0f/m_duration;

	//snap to end
	if(m_t > 1.0f)
		m_t = 1.0f;
	
	m_current = m_start * (1 - m_t) + m_target * m_t;

	return m_current;
}

bool Morph::hasFinished()
{
	return m_isFinished;
}

float Morph::getT()
{
	return m_t;
}

float Morph::getDuration()
{
	return m_duration;
}

float Morph::getTarget()
{
	return m_target;
}

/***************************************/
/*************** MORPH3 ****************/
/***************************************/
Morph3::Morph3(Vec3f start, Vec3f target) : m_x(0), m_y(0), m_z(0), m_duration(0)
{
	////compute the distances
	//float distX = abs(target.x - start.x);
	//float distY = abs(target.y - start.y);
	//float distZ = abs(target.z - start.z);

	//if(distX > 0.001f) m_x = new Morph(start.x, target.x);
	//if(distY > 0.001f) m_y = new Morph(start.y, target.y);
	//if(distZ > 0.001f) m_z = new Morph(start.z, target.z);

	m_x = new Morph(start.x, target.x);
	m_y = new Morph(start.y, target.y);
	m_z = new Morph(start.z, target.z);

	////determine the longest morph
	//float max = abs(target.x - start.x);
	//m_longest = m_x;

	//if(abs(target.y - start.y) > max)
	//{
	//	max = abs(target.y - start.y);
	//	m_longest = m_y;
	//}
	//if(abs(target.z - start.z) > max)
	//{
	//	m_longest = m_z;
	//}
	
}

Vec3f Morph3::update(float ext_t)
{
	Vec3f r;
	if(m_x != 0) r.x = m_x->update(ext_t);
	if(m_y != 0) r.y = m_y->update(ext_t);
	if(m_z != 0) r.z = m_z->update(ext_t);

	return r;
}

Vec3f Morph3::getValue()
{
	Vec3f r;
	if(m_x != 0) r.x = m_x->getValue();
	if(m_y != 0) r.y = m_y->getValue();
	if(m_z != 0) r.z = m_z->getValue();

	return r;
}

bool Morph3::hasFinished()
{
	bool r = true;
	if(m_x != 0) r = r && m_x->hasFinished();
	if(m_y != 0) r = r && m_y->hasFinished();
	if(m_z != 0) r = r && m_z->hasFinished();

	return r;
}

float Morph3::getT()
{
	//all t's are identical
	if(m_x != 0) return m_x->getT();
	if(m_y != 0) return m_y->getT();
	if(m_z != 0) return m_z->getT();

	return 0;
}

float Morph3::getDuration()
{
	return m_duration;
}

void Morph3::setDuration(float duration)
{
	m_duration = duration;
	if(m_x != 0) m_x->setDuration(m_duration);
	if(m_y != 0) m_y->setDuration(m_duration);
	if(m_z != 0) m_z->setDuration(m_duration);
}

Vec3f Morph3::getTarget()
{
	Vec3f r;
	if(m_x != 0) r.x = m_x->getTarget();
	if(m_y != 0) r.y = m_y->getTarget();
	if(m_z != 0) r.z = m_z->getTarget();

	return r;
}