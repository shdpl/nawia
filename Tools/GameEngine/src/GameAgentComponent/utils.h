
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

#ifndef AGENT_UTILS_H_
#define AGENT_UTILS_H_

#include "GameEngine_Agent.h"
#include "GameEngine/utmath.h"

using namespace Horde3D;

/*
 * Utility functions for the AgentComponent
 */
namespace utils
{
	struct Axis
	{
		enum List
		{
			X = 0,
			Y,
			Z
		};
	};

	///char array compare function for the map
	struct mapstrcmp
	{
		bool operator()(const char* a, const char* b) const;
	};

	///copies the characters form src to dst. Stops either when it gets to src's end or when it reaches dstSize
	void strcpy(const char* src, char* dst, unsigned int dstSize);
	///copies the characters form str1 and str2 to dst. Stops either when it gets to str2's end or when it reaches dstSize
	void concat(const char* str1, const char* str2, char* dst, unsigned int dstSize);

	///converst str to lower case
	void toLowerCase( char* str );
	///converst str to upper case
	void toUpperCase( char* str );

	///converts str to a culture value
	Agent_Culture::List str2culture(const char* str);
	///converts in_culture to a culture string and places it in out_str
	unsigned int culture2str(Agent_Culture::List in_culture, char* out_str);

	///converts str to a gender value
	Agent_Gender::List str2gender(const char* str);
	///converts in_gender to a gender string and places it in out_str
	unsigned int gender2str(Agent_Gender::List in_gender, char* out_str);

	///converts str to a formation type value
	Agent_FormationType::List str2formation(const char* str);
	///converts in_formation to a character representing the formation type
	char formation2str(Agent_FormationType::List in_formation);

	///returns the current position in the scenegraph of the given entity
	Vec3f getEntityPosition(int eID);
	///returns the current rotation in the scenegraph of the given entity
	Vec3f getEntityRotation(int eID);
	///sets the given position in the scenegraph
	void setEntityRotation(int eID, Vec3f newRot);
	///sets the given rotation in the scenegraph
	void setEntityPosition(int eID, Vec3f newPos);

	///computes and returns the distance between a and b
	float getDistance(Vec3f a, Vec3f b);

	///converst v from radians to degrees
	void radToDegV(Vec3f* v);
	///converst v from degrees to radians
	void degToRadV(Vec3f* v);

	///computes whether (x,y) lies inside the circle of center (a,b) and radius rad
	bool inCircle(float x, float y, float a, float b, float rad);
	///x*x
	float sqr(float x);

	///returns the up axis as specified in the configs
	Axis::List getUpAxis();
}

#endif