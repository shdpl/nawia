// *************************************************************************************************
//
// Horde3D
//   Next-Generation Graphics Engine
// --------------------------------------
// Copyright (C) 2006-2009 Nicolas Schulz
//
// This software is distributed under the terms of the Eclipse Public License v1.0.
// A copy of the license may be obtained at: http://www.eclipse.org/legal/epl-v10.html
//
// *************************************************************************************************

#ifndef _egExtensions_H_
#define _egExtensions_H_

#include "egPrerequisites.h"
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>


typedef const char *(*ExtensionNameFunc)();
typedef bool (*ExtensionInitFunc)();
typedef void (*ExtensionReleaseFunc)();


// =================================================================================================
// Extension Manager
// =================================================================================================

struct Extension
{
	std::string           name;
	ExtensionInitFunc     initFunc;
	ExtensionReleaseFunc  releaseFunc;
};

// =================================================================================================

class ExtensionManager
{
protected:

	std::vector< Extension >  _extensions;

	void installExtension( ExtensionNameFunc nameFunc, ExtensionInitFunc initFunc,
	                       ExtensionReleaseFunc releaseFunc )
	{
		Extension ext;
		ext.name = (*nameFunc)();
		ext.initFunc = initFunc;
		ext.releaseFunc = releaseFunc;
		_extensions.push_back( ext );
	}

public:

	~ExtensionManager()
	{
		for( uint32 i = 0; i < _extensions.size(); ++i )
		{	
			(*_extensions[i].releaseFunc)();
		}
	}
	
	bool init()
	{
		installExtensions();
		for( uint32 i = 0; i < _extensions.size(); ++i )
		{
			if( !(*_extensions[i].initFunc)() ) return false;
		}
		return true;
	}

	bool checkExtension( const std::string &name )
	{
		for( uint32 i = 0; i < _extensions.size(); ++i )
		{
			if( _extensions[i].name == name ) return true;
		}
		return false;
	}

	bool installExtensions();
};

#endif // _egExtensions_H_
