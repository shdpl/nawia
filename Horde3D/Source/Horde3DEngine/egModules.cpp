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

#include "egModules.h"
#include "utDebug.h"

const char *versionString = "Horde3D 1.0.0 Beta4";

bool              Modules::_errorFlag = false;
EngineConfig      *Modules::_engineConfig = 0x0;
EngineLog         *Modules::_engineLog = 0x0;
StatManager       *Modules::_statManager = 0x0;
SceneManager      *Modules::_sceneManager = 0x0;
ResourceManager   *Modules::_resourceManager = 0x0;
Renderer          *Modules::_renderer = 0x0;
ExtensionManager  *Modules::_extensionManager = 0x0;


void Modules::init()
{
	if( _extensionManager == 0x0 ) _extensionManager = new ExtensionManager();
	if( _engineLog == 0x0 ) _engineLog = new EngineLog();
	if( _engineConfig == 0x0 ) _engineConfig = new EngineConfig();
	if( _sceneManager == 0x0 ) _sceneManager = new SceneManager();
	if( _statManager == 0x0 ) _statManager = new StatManager();
	if( _resourceManager == 0x0 ) _resourceManager = new ResourceManager();
	if( _renderer == 0x0 ) _renderer = new Renderer();
}


void Modules::release()
{
	// Remove overlays since they reference resources and resource manager is removed before renderer
	if( _renderer ) _renderer->clearOverlays();
	
	// Order of destruction is important
	delete _extensionManager; _extensionManager = 0x0;
	delete _sceneManager; _sceneManager = 0x0;
	delete _resourceManager; _resourceManager = 0x0;
	delete _renderer; _renderer = 0x0;
	delete _statManager; _statManager = 0x0;
	delete _engineLog; _engineLog = 0x0;
	delete _engineConfig; _engineConfig = 0x0;
}


void Modules::setError( const char *error )
{
	_errorFlag = true;
	_engineLog->writeDebugInfo( error );
}

bool Modules::getError()
{
	if( _errorFlag )
	{
		_errorFlag = false;
		return true;
	}
	else
		return false;
}
