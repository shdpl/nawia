// *************************************************************************************************
//
// Horde3D
//   Next-Generation Graphics Engine
// --------------------------------------
// Copyright (C) 2006-2009 Nicolas Schulz
//
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
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
