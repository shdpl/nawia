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
class AnimationFile
{
public:
	AnimationFile( const char* gender, const char* filename );
	AnimationFile( const char* gender, const char* culture, const char* filename );

	bool isGender(const char* g);
	bool isCulture(const char* c);
	const char* getFilename();

	void _stringcopy(char* dst, unsigned int dstSize, const char* src);

private:
	char m_filename[128];
	char m_gender[8];
	char m_culture[16];
};