
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

#include "AnimationData.h"
#include "../utils.h"

#include <string>

std::vector<AnimationData*> AnimationData::s_animationData;
bool AnimationData::s_isLexiconLoaded = false;

AnimationData::AnimationData(int id, const char* name, Agent_AnimType::List type) : m_ID(id), m_type(type), 
m_fps(30), m_isCustomizable(true), m_extPreparation(0), m_extRetraction(0)
{
	utils::strcpy(name, m_name, 32);
}

AnimationData* AnimationData::getInstance(int id)
{
	AnimationData* a = find(id);
	if(a == 0)
	{
		char name[16];
		_itoa_s(id, name, 16, 10);

		a = new AnimationData(id, name, Agent_AnimType::UNKNOWN);
		s_animationData.push_back(a);
	}

	return a;
}
AnimationData* AnimationData::getInstance(const char* name)
{
	AnimationData* a = find(name);
	if(a == 0)
	{
		a = new AnimationData(-1, name, Agent_AnimType::UNKNOWN);
		s_animationData.push_back(a);
	}

	return a;
}

bool AnimationData::loadLexiconData(XMLNode* lexicon)
{
	if(s_isLexiconLoaded)
		return true;

	int numEntries = lexicon->nChildNode();
	for(int i = 0; i<numEntries; i++)
	{
		XMLNode *entry = &lexicon->getChildNode(i);

		//ID, Name
		XMLNode *id = &entry->getChildNode("ID", 0);
		XMLNode *name = &entry->getChildNode("Name", 0);

		if(id->isEmpty() || name->isEmpty())
			return false;

		//type
		Agent_AnimType::List type = Agent_AnimType::UNKNOWN;
		if( strcmp(entry->getName(), "Gesture") == 0 )
			type = Agent_AnimType::GESTURE;
		else if( strcmp(entry->getName(), "Posture") == 0 )
			type = Agent_AnimType::POSTURE;

		AnimationData* animdata = AnimationData::getInstance( (int)atoi(id->getText()) );
		animdata->setName( name->getText() );
		animdata->setType( type );
		
		//Filenames
		int numSuperFiles = entry->nChildNode("Files");
		if(numSuperFiles <= 0)
			return false;

		XMLNode *superFile, *file;

		for(int j=0; j< numSuperFiles; j++)
		{
			superFile = &entry->getChildNode("Files", j);
			//parse files
			int numFilesInSuperFile = superFile->nChildNode("File");
			for(int k = 0; k< numFilesInSuperFile; k++)
			{
				file = &superFile->getChildNode("File", k);

				//get file type
				const char* fileType = file->getAttribute("type");
								
				//STROKE
				//the "stroke" of the posture will be saved in the main data instance
				//it will have links to the prep and ret
				if((fileType == 0) || (strcmp(fileType, "stroke") == 0))
				{
					AnimationFile* animfile = new AnimationFile( utils::str2gender(superFile->getAttribute("gender")), file->getText() );
					if(file->getAttribute("strokeStart") != 0 && file->getAttribute("strokeEnd") != 0)
						animfile->setForm( atoi(file->getAttribute("strokeStart")), atoi(file->getAttribute("strokeEnd")) );

					animdata->addFile( animfile );
				}
				//PREP
				if((fileType != 0) && (strcmp(fileType, "preparation") == 0))
				{
					if(animdata->getExtPreparation() == 0)
					{						
						AnimationData* prep = AnimationData::getInstance( (std::string(name->getText()) + std::string("_prep")).c_str() );
						prep->setType(Agent_AnimType::PREPARATION);
						animdata->setExtPreparation( prep );
					}
					AnimationFile* animfile = new AnimationFile( utils::str2gender(superFile->getAttribute("gender")), file->getText() );
					if(file->getAttribute("strokeStart") != 0 && file->getAttribute("strokeEnd") != 0)
						animfile->setForm( atoi(file->getAttribute("strokeStart")), atoi(file->getAttribute("strokeEnd")) );
					
					animdata->getExtPreparation()->addFile( animfile );
				}
				//RET
				if((fileType != 0) && (strcmp(fileType, "retraction") == 0))
				{	
					if(animdata->getExtRetraction() == 0)
					{						
						AnimationData* ret = AnimationData::getInstance( (std::string(name->getText()) + std::string("_ret")).c_str() );
						ret->setType(Agent_AnimType::RETRACTION);
						animdata->setExtRetraction( ret );
					}
					AnimationFile* animfile = new AnimationFile( utils::str2gender(superFile->getAttribute("gender")), file->getText() );
					if(file->getAttribute("strokeStart") != 0 && file->getAttribute("strokeEnd") != 0)
						animfile->setForm( atoi(file->getAttribute("strokeStart")), atoi(file->getAttribute("strokeEnd")) );

					animdata->getExtRetraction()->addFile( animfile );
				}
			}
		}

		//restrictions
		XMLNode *restrict = &entry->getChildNode("Restriction", 0);
		
		bool customizable = true;
		std::string nocust("noCustomization"); 
		if(!restrict->isEmpty() && restrict->getText() != 0 )
			if (std::string( restrict->getText() ).find(nocust) != std::string::npos)
				customizable = false;

		animdata->setCustomizable(customizable);
		if(animdata->getExtPreparation() != 0) animdata->getExtPreparation()->setCustomizable(customizable);
		if(animdata->getExtRetraction() != 0) animdata->getExtRetraction()->setCustomizable(customizable);
	}

	s_isLexiconLoaded = true;
	return true;
}

AnimationData* AnimationData::find(int id)
{
	for(unsigned int i=0; i< s_animationData.size(); i++)
	{
		if(s_animationData[i]->getID() == id)
			return s_animationData[i];
	}
	return 0;
}

AnimationData* AnimationData::find(const char* name)
{
	for(unsigned int i=0; i< s_animationData.size(); i++)
	{
		if(strcmp(s_animationData[i]->getName(), name) == 0)
			return s_animationData[i];
	}
	return 0;
}

int AnimationData::findMaxID()
{
	int max = 0;
	for(unsigned int i=0; i< s_animationData.size(); i++)
	{
		if(s_animationData[i]->getID() > max)
			max = s_animationData[i]->getID();
	}
	return max;
}

void AnimationData::release()
{
	s_animationData.clear();
}

bool AnimationData::isValid()
{
	bool result = true;

	result = result && (m_extPreparation != 0) ? m_extPreparation->isValid() : true;
	result = result && (m_extRetraction != 0) ? m_extRetraction->isValid() : true;

	result = result && (m_files.size() != 0) && (m_name != 0) && (strcmp(m_name, "") != 0);

	return result;
}

void AnimationData::addFile(AnimationFile* f)
{
	m_files.push_back(f);
}

AnimationFile* AnimationData::getFile(Agent_Gender::List gender)
{
	for(unsigned int i=0; i< m_files.size(); i++)
		if(m_files[i]->getGender() == gender)
			return m_files[i];

	return 0;
}

int AnimationData::getID()
{
	return m_ID;
}

const char* AnimationData::getName()
{
	return m_name;
}

Agent_AnimType::List  AnimationData::getType()
{
	return m_type;
}

bool AnimationData::isCustomizable()
{
	return m_isCustomizable;
}

float AnimationData::getFPS()
{
	return m_fps;
}

AnimationData* AnimationData::getExtPreparation()
{
	return m_extPreparation;
}

AnimationData* AnimationData::getExtRetraction()
{
	return m_extRetraction;
}

void AnimationData::setExtPreparation(AnimationData* prep)
{
	m_extPreparation = prep;
	m_extPreparation->setType( Agent_AnimType::PREPARATION );
}

void AnimationData::setExtRetraction(AnimationData* ret)
{
	m_extRetraction = ret;
	m_extRetraction->setType( Agent_AnimType::RETRACTION );
}

void AnimationData::setID(int id)
{
	m_ID = id;
}

void AnimationData::setName(const char* name)
{
	utils::strcpy(name, m_name, 32);
}

void  AnimationData::setType(Agent_AnimType::List type)
{
	m_type = type;
}

void AnimationData::setCustomizable(bool value)
{
	m_isCustomizable = value;
}