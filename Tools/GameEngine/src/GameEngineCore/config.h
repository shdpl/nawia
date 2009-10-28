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
// *************************************************************************************************
//


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