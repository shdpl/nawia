// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2008
// Programmers: Nikolaus Bee
//
// This software is distributed under the terms of the Eclipse Public License v1.0.
// A copy of the license may be obtained at: http://www.eclipse.org/legal/epl-v10.html
//
// *************************************************************************************************
//
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