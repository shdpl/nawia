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

#ifndef GAMEENGINE_CONFIG_H_
#define GAMEENGINE_CONFIG_H_

#if defined ( WIN32 ) || defined( _WINDOWS )
#	 define PLATFORM_WIN
#    include <windows.h>
#	 ifdef GAMEENGINE_EXPORTS
#       define DLLEXP __declspec( dllexport )
#		define GAMEENGINE_API __declspec(dllexport)
#	 else
#       define DLLEXP __declspec( dllimport )
#		define GAMEENGINE_API __declspec(dllimport)
#    endif
#elif defined( __APPLE__ ) || defined( __APPLE_CC__ )
#    define PLATFORM_MAC
#	 define DLLEXP
#else
#    define PLATFORM_LINUX
#	 define DLLEXP
#endif

#endif