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
#       define FACSCONTROLAPI __declspec( dllexport )
#	 else
#       define FACSCONTROLAPI __declspec( dllimport )
#    endif
#else
#	 define FACSCONTROLAPI
#endif

#include <string>
#include <vector>

namespace GameEngine
{

	/************************************************************************************
	 * TODO
	*/

	//FACSCONTROLAPI int getSocketData( unsigned int entityWorldID, const char **data );
	FACSCONTROLAPI void setFacialExpression( unsigned int entityWorldID, const std::string expression, const float intensity = 1.0f );
	FACSCONTROLAPI void setFacialExpressionPAD( unsigned int entityWorldID, float p, float a, float d );
	FACSCONTROLAPI void getAvailableExpressions( unsigned int entityWorldID, std::vector<std::string> &availableExpressions );
}

#endif