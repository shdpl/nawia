
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

#include "utils.h"
#include "GameEngine/GameEvent.h"
#include "GameEngine/GameEngine.h"
#include "GameEngine/GameEngine_Scenegraph.h"
#include "Horde3D/Horde3D.h"
#include "Config.h"
#include <string>

void utils::strcpy(const char* src, char* dst, unsigned int dstSize)
{
	unsigned int i;
	for(i=0; i< dstSize-1 && i< strlen(src); i++) //we go up to dstSize-1 because we need the last byte for '\0'
		dst[i] = src[i];

	dst[i] = '\0';
}

void utils::concat(const char* str1, const char* str2, char* dst, unsigned int dstSize)
{
	unsigned int i;

	//copy first string
	for(i=0; i< dstSize-1, i< strlen(str1); i++) //we go untill dstSize-1 because we need the last byte for '\0'
		dst[i] = str1[i];

	//copy second string
	for(i; i< dstSize-1, i< strlen(str1) + strlen(str2); i++) //we go untill dstSize-1 because we need the last byte for '\0'
		dst[i] = str2[i];

	dst[i] = '\0';
}

void utils::toLowerCase( char* str )
{
	for(unsigned int i=0; i< strlen(str); i++)
		str[i] = tolower(str[i]);
}

void utils::toUpperCase( char* str )
{
	for(unsigned int i=0; i< strlen(str); i++)
		str[i] = toupper(str[i]);
}

Agent_Culture::List utils::str2culture(const char* str)
{
	//convert input to upper case
	char ustr[16];
	strcpy(str, ustr, 16);
	toUpperCase(ustr);

	if(strcmp(ustr, "GERMANY") == 0 || strcmp(ustr, "GERMAN") == 0)
		return Agent_Culture::GERMANY;

	if(strcmp(ustr, "JAPAN") == 0)
		return Agent_Culture::JAPAN;

	//default value
	return Agent_Culture::GERMANY;
}

unsigned int utils::culture2str(Agent_Culture::List in_culture, char* out_str)
{
	switch(in_culture)
	{
	case Agent_Culture::GERMANY:
		strcpy("GERMANY", out_str, 8);
		return 8;
	case Agent_Culture::JAPAN:
		strcpy("JAPAN", out_str, 6);
		return 8;

	default:
		strcpy("GERMANY", out_str, 8);
		return 8;
	}

	return 0;
}


Agent_Gender::List utils::str2gender(const char* str)
{
	//convert input to upper case
	char ustr[16];
	strcpy(str, ustr, 16);
	toUpperCase(ustr);

	if(strcmp(ustr, "MALE") == 0)
		return Agent_Gender::MALE;

	if(strcmp(ustr, "FEMALE") == 0)
		return Agent_Gender::FEMALE;

	//default value
	return Agent_Gender::MALE;
}

unsigned int utils::gender2str(Agent_Gender::List in_gender, char* out_str)
{
	switch(in_gender)
	{
	case Agent_Gender::MALE:
		strcpy("MALE", out_str, 5);
		return 8;
	case Agent_Gender::FEMALE:
		strcpy("FEMALE", out_str, 7);
		return 8;

	default:
		strcpy("MALE", out_str, 5);
		return 8;
	}

	return 0;
}

Agent_FormationType::List utils::str2formation(const char* str)
{
	//convert input to upper case
	char ustr[16];
	strcpy(str, ustr, 16);
	toUpperCase(ustr);

	if(strcmp(ustr, "N") == 0)
		return Agent_FormationType::N;
	if(strcmp(ustr, "H") == 0)
		return Agent_FormationType::H;
	if(strcmp(ustr, "V") == 0)
		return Agent_FormationType::V;
	if(strcmp(ustr, "L") == 0)
		return Agent_FormationType::L;
	if(strcmp(ustr, "C") == 0)
		return Agent_FormationType::C;
	if(strcmp(ustr, "I") == 0)
		return Agent_FormationType::I;
	if(strcmp(ustr, "F") == 0)
		return Agent_FormationType::F;

	//default value
	return Agent_FormationType::F;
}

char utils::formation2str(Agent_FormationType::List in_formation)
{
	switch(in_formation)
	{
	case Agent_FormationType::N:
		return 'N';
	case Agent_FormationType::H:
		return 'H';
	case Agent_FormationType::V:
		return 'V';
	case Agent_FormationType::L:
		return 'L';
	case Agent_FormationType::C:
		return 'C';
	case Agent_FormationType::I:
		return 'I';
	case Agent_FormationType::F:
		return 'F';

	default:
		return 'F';
	}

	return 0;
}

bool utils::mapstrcmp::operator ()(const char *a, const char *b) const
{
	return (strcmp(a,b) < 0);
}

Vec3f utils::getEntityPosition(int eID)
{
	float x[16];
	GameEvent getTransformation(GameEvent::E_TRANSFORMATION, x, 0);
	GameEngine::sendEvent(eID, &getTransformation);
	
	return Vec3f(x[12],x[13],x[14]);
}

Vec3f utils::getEntityRotation(int eID)
{
	float x[16];
	GameEvent getTransformation(GameEvent::E_TRANSFORMATION, x, 0);
	GameEngine::sendEvent(eID, &getTransformation);

	Matrix4f mat(x);
	Vec3f p,r,s;
	mat.decompose(p,r,s);
	
	return r;
}

void utils::setEntityRotation(int eID, Vec3f newRot)
{
	//unsigned int hiD = GameEngine::entitySceneGraphID(entityID);
	//Vec3f p,r,s;

	//h3dGetNodeTransform( (H3DNode)hiD, &p.x,&p.y,&p.z, &r.x,&r.y,&r.z, &s.x,&s.y,&s.z );
	//h3dSetNodeTransform( (H3DNode)hiD, p.x,p.y,p.z, reqRot.x, reqRot.y, reqRot.z, s.x,s.y,s.z );

	GameEvent rotate(GameEvent::E_SET_ROTATION, &newRot, 0);
	GameEngine::sendEvent(eID, &rotate);
};

void utils::setEntityPosition(int eID, Vec3f newPos)
{
	//GameEvent translate(GameEvent::E_TRANSLATE_GLOBAL, &newPos, 0);
	//GameEngine::sendEvent(eID, &translate);

	unsigned int hiD = GameEngine::entitySceneGraphID(eID);
	Vec3f p,r,s;

	h3dGetNodeTransform( (H3DNode)hiD, &p.x,&p.y,&p.z, &r.x,&r.y,&r.z, &s.x,&s.y,&s.z );
	h3dSetNodeTransform( (H3DNode)hiD, newPos.x,newPos.y,newPos.z, r.x,r.y,r.z, s.x,s.y,s.z );
};

float utils::getDistance(Vec3f a, Vec3f b)
{
	return (a-b).length();
	//return sqrtf( abs((float)(b.x - a.x)) * abs((float)(b.y - a.y)) * abs((float)(b.z - a.z)) );
}

void utils::radToDegV(Vec3f* v)
{
	v->x = radToDeg(v->x);
	v->y = radToDeg(v->y);
	v->z = radToDeg(v->z);
}

void utils::degToRadV(Vec3f* v)
{
	v->x = degToRad(v->x);
	v->y = degToRad(v->y);
	v->z = degToRad(v->z);
}

bool utils::inCircle(float x, float y, float a, float b, float rad)
{
	return ( sqr(x - a) + sqr(y - b) <= sqr(rad) );
}

float utils::sqr(float x)
{
	return x*x;
}

utils::Axis::List utils::getUpAxis()
{
	const char* upAxis_str = Config::getParamS(Agent_Param::UpAxis_S);
	char upAxis = toupper(upAxis_str[0]);

	if(upAxis == 'X')
		return Axis::X;
	else if(upAxis == 'Y')
		return Axis::Y;
	else if(upAxis == 'Z')
		return Axis::Z;

	return Axis::Y;
}