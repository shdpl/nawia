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
// GameEngine Agent Animation Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010 Ionut Damian
// 
// ****************************************************************************************  
#include "AnimationData.h"

AnimationData::AnimationData(int _id, const char* _name, int _type ) :
	id(_id), type(_type), stroke_end(-1), stroke_start(-1), noCustomization(false),
	posture_prep(0), posture_stroke(0), posture_ret(0), parent(0)
{
	memcpy_s( name, 32, _name, 32 );
}

AnimationData::~AnimationData()
{
	for(unsigned int i=0; i< m_files.size(); i++)
		delete m_files[i];

	if(posture_prep != 0) delete posture_prep;
	if(posture_stroke != 0) delete posture_stroke;
	if(posture_ret != 0) delete posture_ret;
}

void AnimationData::addFile(AnimationFile *file)
{
	m_files.push_back(file);
}

const char* AnimationData::getFilename(const char *gender, const char *culture)
{
	for(unsigned int i=0; i< m_files.size(); i++)
	{
		if(m_files[i]->isGender(gender) && m_files[i]->isCulture(culture))
			return m_files[i]->getFilename();
	}
	return 0;
}

void AnimationData::setForm(float _stroke_start, float _stroke_end, int _stroke_reps)
{
	stroke_start = _stroke_start;
	stroke_end = _stroke_end;
	stroke_reps = _stroke_reps;
}