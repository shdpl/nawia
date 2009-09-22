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

#ifndef _egModules_H_
#define _egModules_H_

#include "egPrerequisites.h"
#include "egCom.h"
#include "egScene.h"
#include "egResource.h"
#include "egRenderer.h"
#include "egPipeline.h"
#include "egExtensions.h"


extern const char *versionString;


// =================================================================================================
// Modules
// =================================================================================================

class Modules
{
private:

	static bool              _errorFlag;

	static EngineConfig      *_engineConfig;
	static EngineLog         *_engineLog;
	static StatManager       *_statManager;
	static SceneManager      *_sceneManager;
	static ResourceManager   *_resourceManager;
	static Renderer          *_renderer;
	static ExtensionManager  *_extensionManager;

public:

	static void init();
	static void release();

	static void setError( const char *error );
	static bool getError();
	
	static EngineConfig &config() { return *_engineConfig; }
	static EngineLog &log() { return *_engineLog; }
	static StatManager &stats() { return *_statManager; }
	static SceneManager &sceneMan() { return *_sceneManager; }
	static ResourceManager &resMan() { return *_resourceManager; }
	static Renderer &renderer() { return *_renderer; }
	static ExtensionManager &extMan() { return *_extensionManager; }
};

#endif // _egModules_H_
