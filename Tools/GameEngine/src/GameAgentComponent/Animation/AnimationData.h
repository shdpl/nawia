
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

#ifndef ANIMATIONDATA_H_
#define ANIMATIONDATA_H_

#include "../GameEngine_Agent.h"

#include "../Config.h"
#include "AnimationFile.h"
#include <XMLParser/utXMLParser.h>
#include <vector>

/**
 * Contains animation data read from the AnimationLexicon, like filenames
 * - is also a factory and container for AnimationData instances
 */
class AnimationData
{
public:
	// ********************
	// factory variables and functions
	// ********************
	///returns a pointer to the object with the specified id. If no objects is found, a new one is created
	static AnimationData* getInstance(int id);
	static AnimationData* getInstance(const char* name);
	static void release();
	static bool loadLexiconData(XMLNode* lexicon);

	// ********************
	// instance variables and functions
	// ********************	
	void addFile(AnimationFile* f);
	AnimationFile* getFile(Agent_Gender::List gender);

	bool isValid();

	int getID();
	const char* getName();
	Agent_AnimType::List getType();
	bool isCustomizable();
	float getFPS();
	AnimationData* getExtPreparation();
	AnimationData* getExtRetraction();

	void setExtPreparation(AnimationData* prep);
	void setExtRetraction(AnimationData* ret);
	void setID(int id);
	void setName(const char* name);
	void setType(Agent_AnimType::List type);
	void setCustomizable(bool value);

private:
	// ********************
	// factory variables and functions
	// ********************
	static AnimationData* find(int id);
	static AnimationData* find(const char* name);
	static int findMaxID();

	///container for all anim data instances
	static std::vector<AnimationData*> s_animationData;
	static bool s_isLexiconLoaded;

	// ********************
	// instance variables and functions
	// ********************
	AnimationData(int id, const char* name, Agent_AnimType::List type);
	~AnimationData();

	int m_ID;
	char m_name[c_MaxAnimNameSize];
	Agent_AnimType::List m_type;

	float m_fps;

	bool m_isCustomizable;
	std::vector<AnimationFile*> m_files;

	AnimationData *m_extPreparation;
	AnimationData *m_extRetraction;
};

#endif