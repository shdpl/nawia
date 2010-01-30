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

#include "egResource.h"
#include "egScene.h"
#include "egSceneGraphRes.h"
#include "egModules.h"
#include "egCom.h"
#include "egScene.h"
#include "egLight.h"
#include "egCamera.h"
#include "egResource.h"
#include "egRenderer.h"
#include "egPipeline.h"
#include "egExtensions.h"

// Extensions
#ifdef CMAKE
	#include "egExtensions_auto_include.h"
#else
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	#include "Terrain/Source/extension.h"
	#pragma comment( lib, "Extension_Terrain.lib" )
	#include "Sound/Source/sound_extension.h"
	#pragma comment( lib, "Extension_Sound.lib" )
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#endif

#include "utDebug.h"


const char *Modules::versionString = "Horde3D 1.0.0 Beta4";

bool              Modules::_errorFlag = false;
EngineConfig      *Modules::_engineConfig = 0x0;
EngineLog         *Modules::_engineLog = 0x0;
StatManager       *Modules::_statManager = 0x0;
SceneManager      *Modules::_sceneManager = 0x0;
ResourceManager   *Modules::_resourceManager = 0x0;
Renderer          *Modules::_renderer = 0x0;
ExtensionManager  *Modules::_extensionManager = 0x0;


void Modules::installExtensions()
{
#ifdef CMAKE
	#include "egExtensions_auto_install.h"
#else
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++	
	extMan().installExtension( new Horde3DTerrain::ExtTerrain() );
	extMan().installExtension( new Horde3DSound::ExtSound() );
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#endif
}


bool Modules::init()
{
	// Create modules
	if( _extensionManager == 0x0 ) _extensionManager = new ExtensionManager();
	if( _engineLog == 0x0 ) _engineLog = new EngineLog();
	if( _engineConfig == 0x0 ) _engineConfig = new EngineConfig();
	if( _sceneManager == 0x0 ) _sceneManager = new SceneManager();
	if( _statManager == 0x0 ) _statManager = new StatManager();
	if( _resourceManager == 0x0 ) _resourceManager = new ResourceManager();
	if( _renderer == 0x0 ) _renderer = new Renderer();

	// Init modules
	if( !renderer().init() ) return false;

	// Register resource types
	resMan().registerType( ResourceTypes::SceneGraph, "SceneGraph", 0x0, 0x0,
		SceneGraphResource::factoryFunc );
	resMan().registerType( ResourceTypes::Geometry, "Geometry", GeometryResource::initializationFunc,
		GeometryResource::releaseFunc, GeometryResource::factoryFunc );
	resMan().registerType( ResourceTypes::Animation, "Animation", 0x0, 0x0,
		AnimationResource::factoryFunc );
	resMan().registerType( ResourceTypes::Material, "Material", 0x0, 0x0,
		MaterialResource::factoryFunc );
	resMan().registerType( ResourceTypes::Code, "Code", 0x0, 0x0,
		CodeResource::factoryFunc );
	resMan().registerType( ResourceTypes::Shader, "Shader", 0x0, 0x0,
		ShaderResource::factoryFunc );
	resMan().registerType( ResourceTypes::Texture, "Texture", TextureResource::initializationFunc,
		TextureResource::releaseFunc, TextureResource::factoryFunc );
	resMan().registerType( ResourceTypes::ParticleEffect, "ParticleEffect", 0x0, 0x0,
		ParticleEffectResource::factoryFunc );
	resMan().registerType( ResourceTypes::Pipeline, "Pipeline", 0x0, 0x0,
		PipelineResource::factoryFunc );

	// Register node types
	sceneMan().registerType( SceneNodeTypes::Group, "Group",
		GroupNode::parsingFunc, GroupNode::factoryFunc, 0x0 );
	sceneMan().registerType( SceneNodeTypes::Model, "Model",
		ModelNode::parsingFunc, ModelNode::factoryFunc, Renderer::drawModels );
	sceneMan().registerType( SceneNodeTypes::Mesh, "Mesh",
		MeshNode::parsingFunc, MeshNode::factoryFunc, 0x0 );
	sceneMan().registerType( SceneNodeTypes::Joint, "Joint",
		JointNode::parsingFunc, JointNode::factoryFunc, 0x0 );
	sceneMan().registerType( SceneNodeTypes::Light, "Light",
		LightNode::parsingFunc, LightNode::factoryFunc, 0x0 );
	sceneMan().registerType( SceneNodeTypes::Camera, "Camera",
		CameraNode::parsingFunc, CameraNode::factoryFunc, 0x0 );
	sceneMan().registerType( SceneNodeTypes::Emitter, "Emitter",
		EmitterNode::parsingFunc, EmitterNode::factoryFunc, Renderer::drawParticles );
	
	// Install extensions
	installExtensions();

	// Create default resources
	TextureResource *tex2DRes = new TextureResource(
		"$Tex2D", 32, 32, TextureFormats::BGRA8, ResourceFlags::NoTexMipmaps );
	void *image = tex2DRes->mapStream( TextureResData::ImageElem, 0, TextureResData::ImgPixelStream, false, true );
	ASSERT( image != 0x0 );
	for( int i = 0; i < 32*32; ++i ) ((int *)image)[i] = 0xffffffff;
	tex2DRes->unmapStream();
	tex2DRes->addRef();
	resMan().addNonExistingResource( *tex2DRes, false );

	TextureResource *texCubeRes = new TextureResource(
		"$TexCube", 32, 32, TextureFormats::BGRA8, ResourceFlags::TexCubemap | ResourceFlags::NoTexMipmaps );
	for( uint32 i = 0; i < 6; ++i )
	{
		void *image = texCubeRes->mapStream( TextureResData::ImageElem, i, TextureResData::ImgPixelStream, false, true );
		ASSERT( image != 0x0 );
		for( int i = 0; i < 32*32; ++i ) ((int *)image)[i] = 0xff000000;
		texCubeRes->unmapStream();
	}
	texCubeRes->addRef();
	resMan().addNonExistingResource( *texCubeRes, false );
	
	return true;
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
