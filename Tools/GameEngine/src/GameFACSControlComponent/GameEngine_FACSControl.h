// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2008
// Programmers: Nikolaus Bee
//
// This file is part of the GameEngine of the University of Augsburg
// 
// You are not allowed to redistribute the code, if not explicitly authorized by the author
//
// ****************************************************************************************
#ifndef GAMEENGINE_FACSCONTROL_H_
#define GAMEENGINE_FACSCONTROL_H_

#include <GameEngine/config.h>

#ifdef PLATFORM_WIN
#	 ifdef FACSCONTROLCOMPONENT_EXPORTS
#       define FACSCONTROLPLUGINEXP extern "C" __declspec( dllexport )
#	 else
#       define FACSCONTROLPLUGINEXP extern "C" __declspec( dllimport )
#    endif
#else
#	 define FACSCONTROLPLUGINEXP extern "C" 
#endif

#include <string>
#include <vector>

namespace GameEngine
{

	/************************************************************************************
	 * TODO
	*/

	//FACSCONTROLPLUGINEXP int getSocketData( unsigned int entityWorldID, const char **data );
	FACSCONTROLPLUGINEXP void setFacialExpression( unsigned int entityWorldID, const std::string expression, const float intensity = 1.0f );
	FACSCONTROLPLUGINEXP void setFacialExpressionPAD( unsigned int entityWorldID, float p, float a, float d );
	FACSCONTROLPLUGINEXP void getAvailableExpressions( unsigned int entityWorldID, std::vector<std::string> &availableExpressions );
}

#endif