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

#include "egExtensions.h"

// Include files for extensions

#ifdef CMAKE

#include "egExtensions_auto_include.h"

#else

#include "Terrain/Source/extension.h"
#include "Sound/Source/extension.h"
// Lib files for extensions
#pragma comment( lib, "Extension_Terrain.lib" )
#pragma comment( lib, "Extension_Sound.lib" )

#endif


bool ExtensionManager::installExtensions()
{
	// Install desired extensions here

#ifdef CMAKE

	#include "egExtensions_auto_install.h"
	
#else
	
	installExtension( Horde3DTerrain::getExtensionName, Horde3DTerrain::initExtension, Horde3DTerrain::releaseExtension );
	installExtension( Horde3DSound::getExtensionName, Horde3DSound::initExtension, Horde3DSound::releaseExtension );

#endif

	return true;
}
