// *************************************************************************************************
//
// Horde3D
//   Next-Generation Graphics Engine
// --------------------------------------
// Copyright (C) 2006-2011 Nicolas Schulz
//
// This software is distributed under the terms of the Eclipse Public License v1.0.
// A copy of the license may be obtained at: http://www.eclipse.org/legal/epl-v10.html
//
// *************************************************************************************************

#ifndef _egPipeline_H_
#define _egPipeline_H_

#include "egPrerequisites.h"
#include "egMaterial.h"
#include <string>
#include <vector>


namespace Horde3D {

class XMLNode;


// =================================================================================================
// Pipeline Resource
// =================================================================================================

struct PipelineResData
{
	enum List
	{
		StageElem = 900,
		StageNameStr,
		StageActivationI
	};
};

// =================================================================================================

struct PipelineCommands
{
	enum List
	{
		SwitchTarget,
		BindBuffer,
		UnbindBuffers,
		ClearTarget,
		DrawGeometry,
		DrawOverlays,
		DrawQuad,
		DoForwardLightLoop,
		DoDeferredLightLoop,
		SetUniform
	};
};

struct RenderingOrder
{
	enum List
	{
		None = 0,
		FrontToBack,
		BackToFront,
		StateChanges
	};
};


class PCParam
{
public:
	virtual ~PCParam() { }
};

class PCBoolParam : public PCParam
{
protected:
	bool  _value;
public:
	PCBoolParam( bool value ) { _value = value; }
	bool get() { return _value; }
	void set( bool value ) { _value = value; }
};

class PCIntParam : public PCParam
{
protected:
	int  _value;
public:
	PCIntParam( int value ) { _value = value; }
	int get() { return _value; }
	void set( int value ) { _value = value; }
};

class PCFloatParam : public PCParam
{
protected:
	float  _value;
public:
	PCFloatParam( float value ) { _value = value; }
	float get() { return _value; }
	void set( float value ) { _value = value; }
};

class PCStringParam : public PCParam
{
protected:
	std::string  _value;
public:
	PCStringParam( const std::string &value ) { _value = value; }
	const std::string &get() { return _value; }
	void set( const std::string &value ) { _value = value; }
};


struct PipelineCommand
{
	PipelineCommands::List    command;
	std::vector< void * >     refParams;  // Pointer to object
	std::vector< PCParam * >  valParams;  // Newly created object
	std::vector< PResource >  resParams;  // Pointers to used resources


	PipelineCommand( PipelineCommands::List	command )
	{
		this->command = command;
	}
};


struct PipelineStage
{
	std::string                     id;
	PMaterialResource               matLink;
	std::vector< PipelineCommand >  commands;
	bool                            enabled;

	PipelineStage() : matLink( 0x0 ) {}
};


struct RenderTarget
{
	std::string           id;
	uint32                numColBufs;
	TextureFormats::List  format;
	uint32                width, height;
	uint32                samples;
	float                 scale;  // Scale factor for FB width and height
	bool                  hasDepthBuf;
	uint32                rendBuf;

	RenderTarget()
	{
		hasDepthBuf = false;
		numColBufs = 0;
		rendBuf = 0;
	}
};

// =================================================================================================

class PipelineResource : public Resource
{
private:

	std::vector< RenderTarget >   _renderTargets;
	std::vector< PipelineStage >  _stages;
	
	bool raiseError( const std::string &msg, int line = -1 );
	const std::string parseStage( XMLNode &node, PipelineStage &stage );

	void addRenderTarget( const std::string &id, bool depthBuffer, uint32 numBuffers,
	                      TextureFormats::List format, uint32 samples,
	                      uint32 width, uint32 height, float scale );
	RenderTarget *findRenderTarget( const std::string &id );
	bool createRenderTargets();
	void releaseRenderTargets();

public:

	static Resource *factoryFunc( const std::string &name, int flags )
		{ return new PipelineResource( name, flags ); }
	
	PipelineResource( const std::string &name, int flags );
	~PipelineResource();
	
	void initDefault();
	void release();
	bool load( const char *data, int size );
	void resize();

	int getElemCount( int elem );
	int getElemParamI( int elem, int elemIdx, int param );
	void setElemParamI( int elem, int elemIdx, int param, int value );
	const char *getElemParamStr( int elem, int elemIdx, int param );

	bool getRenderTargetData( const std::string &target, int bufIndex, int *width, int *height,
	                          int *compCount, void *dataBuffer, int bufferSize );

	friend class ResourceManager;
	friend class Renderer;
};

typedef SmartResPtr< PipelineResource > PPipelineResource;

}
#endif // _egPipeline_H_
