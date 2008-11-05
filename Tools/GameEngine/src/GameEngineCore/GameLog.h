// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// This file is part of the GameEngine developed at the 
// Lab for Multimedia Concepts and Applications of the University of Augsburg
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
//
// *************************************************************************************************



// ****************************************************************************************
//
// GameEngine Core Library of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#ifndef GAMELOG_H_
#define GAMELOG_H_

#include <GameEngine/config.h>

/** \addtogroup GameEngineCore
 * @{
 */

/**
 * \brief The global log mechanism for the GameEngine
 * 
 * The GameLog module creates a file called GameEnginLog.html in the directory of the GameEngineCore.dll
 * You can add messages to this log file using the GameLog messages
 * 
 * @author Volker Wiendl
 * @date May 2008
 */ 
namespace GameLog
{
	/**
	 * \brief Get path of the GameEngineCore library
	 * 
	 * Using this function you can get the path where the GameEngineLog.html is placed
	 * @param buffer preallocated memory block to save the path into
	 * @param len length of the provided memory block
	 * @return length of the path stored in buffer variable
	 */ 
	GAMEENGINE_API int GetExecutablePath (char* buffer, unsigned int len);

	/**
	 * \brief Add log message
	 * 
	 * Call this function to add a standard log message. You can use the printf syntax to include numbers or variable data. <br>
	 * Example: logMessage("Message %s with a number %d ", someString, someNumber);
	 * @param message the message to put into the log file 
	 * @param ... optional additional parameters representing data referenced in the message	 
	 */ 
	GAMEENGINE_API void logMessage(const char* message, ...);

	/**
	 * \brief Add a warning message
	 * 
	 * Call this function to add a warning log message. You can use the printf syntax to include numbers or variable data. <br>
	 * Example: warnMessage("Message %s with a number %d ", someString, someNumber);	 * @param message 
	 * @param message the message to put into the log file 
	 * @return  optional additional parameters representing data referenced in the message	 
	 */ 
	GAMEENGINE_API void warnMessage(const char* message, ...);

	/**
	 * \brief Add an error message
	 * 
	 * Call this function to add an error log message. You can use the printf syntax to include numbers or variable data. <br>
	 * Example: errorMessage("Message %s with a number %d ", someString, someNumber);	 * @param message 
	 * @param message the message to put into the log file 
	 * @return  optional additional parameters representing data referenced in the message	 
	 */ 
	GAMEENGINE_API void errorMessage(const char* message, ...);

	/**
	 * \brief Closes the logfile
	 * 
	 * Called when releasing the GameEngine
	 */ 
	void close();
}

/*! @}*/
#endif
