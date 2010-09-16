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
#include "AnimationFile.h"
#include <vector>

class AnimationData
{
public:
	AnimationData(int _id, const char* name, int _type );
	~AnimationData();

	void setForm(float _stroke_start, float _stroke_end, int _stroke_reps);
	void addFile(AnimationFile* file);
	const char* getFilename(const char* gender, const char* culture);
	
	int id;
	char name[32];
	int type;
	float stroke_start;
	float stroke_end;
	int stroke_reps;
	bool noCustomization;

private:
	std::vector<AnimationFile*> m_files;
};