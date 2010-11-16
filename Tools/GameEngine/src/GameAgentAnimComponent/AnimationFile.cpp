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
#include <string>

void AnimationFile::_stringcopy(char* dst, unsigned int dstSize, const char* src)
{
	unsigned int i;
	for(i=0; i< dstSize-1, i< strlen(src); i++) //we go till dstSize-1 because we need the last byte for '\0'
		dst[i] = src[i];

	dst[i] = '\0';
}

AnimationFile::AnimationFile(const char *gender, const char *filename)
{
	//memcpy_s(m_filename, 128, filename, 128);
	//memcpy_s(m_gender, 8, gender, 128);
	//memcpy_s(m_culture, 16, culture, 128);

	_stringcopy((char *)m_filename, 128, filename);
	_stringcopy((char *)m_gender, 8, gender);
	m_culture[0] = '\0';
}

AnimationFile::AnimationFile(const char *gender, const char* culture, const char *filename)
{
	//memcpy_s(m_filename, 128, filename, 128);
	//memcpy_s(m_gender, 8, gender, 128);
	//memcpy_s(m_culture, 16, culture, 128);

	_stringcopy((char *)m_filename, 128, filename);
	_stringcopy((char *)m_gender, 8, gender);
	_stringcopy((char *)m_culture, 16, culture);
}

const char* AnimationFile::getFilename()
{
	return (const char*)m_filename;
}

bool AnimationFile::isCulture(const char *c)
{
	//return strcmp(m_culture, c) == 0;
	return true;
}

bool AnimationFile::isGender(const char *g)
{
	return strcmp(m_gender, g) == 0;
}