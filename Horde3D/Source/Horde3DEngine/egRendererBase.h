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

#ifndef _egRendererBase_H_
#define _egRendererBase_H_

#include "egPrerequisites.h"
#include "utMath.h"
#include "utOpenGL.h"
#include <string>
#include <vector>
#include <map>


// =================================================================================================
// GPUTimer
// =================================================================================================

class GPUTimer
{
private:
	std::vector < uint32 >  _queryPool;
	uint32                  _numQueries;
	uint32                  _queryFrame;
	float                   _time;
	bool                    _activeQuery;

public:
	GPUTimer();
	~GPUTimer();
	
	void beginQuery( uint32 frameID );
	void endQuery();
	bool updateResults();
	
	void reset();
	float getTimeMS() { return _time; }
};


// =================================================================================================
// Base Renderer
// =================================================================================================

// General
// =========================================================

template< class T > class RBObjects
{
private:
	std::vector< T >       _objects;
	std::vector< uint32 >  _freeList;

public:

	uint32 add( T &obj )
	{
		if( !_freeList.empty() )
		{
			uint32 index = _freeList.back();
			_freeList.pop_back();
			_objects[index] = obj;
			return index + 1;
		}
		else
		{
			_objects.push_back( obj );
			return (uint32)_objects.size();
		}
	}

	void remove( uint32 handle )
	{
		ASSERT( handle > 0 && handle <= _objects.size() );
		
		_objects[handle - 1] = T();  // Destruct and replace with default object
		_freeList.push_back( handle - 1 );
	}

	T &getRef( uint32 handle )
	{
		ASSERT( handle > 0 && handle <= _objects.size() );
		
		return _objects[handle - 1];
	}

	friend class RendererBase;
};


struct RenderCaps
{
	static const int ListSize = 3;
	enum List
	{
		Tex_Float,
		Tex_NPOT,
		RT_Multisampling
	};
};


// Buffers
// =========================================================

struct RBBuffer
{
	uint32  type;
	uint32  glObj;
	uint32  size;
};

struct RBVertBufSlot
{
	uint32  vbObj;
	uint32  offset;
	uint32  stride;

	RBVertBufSlot() : vbObj( 0 ), offset( 0 ), stride( 0 ) {}
};


// Textures
// =========================================================

struct TextureTypes
{
	enum List
	{
		Tex2D = GL_TEXTURE_2D,
		TexCube = GL_TEXTURE_CUBE_MAP
	};
};

struct TextureFormats
{
	enum List
	{
		Unknown,
		BGRA8,
		DXT1,
		DXT3,
		DXT5,
		RGBA16F,
		RGBA32F,
		DEPTH
	};
};

struct RBTexture
{
	uint32                glObj;
	uint32                glFmt;
	int                   type;
	TextureFormats::List  format;
	int                   width, height;
	int                   memSize;
	bool                  sRGB;
};

struct RBTexSlot
{
	uint32  texObj;

	RBTexSlot() : texObj( 0 ) {}
};


// Render buffers
// =========================================================

struct RBRenderBuffer
{
	static const uint32 MaxColorAttachmentCount = 4;

	uint32  fbo, fboMS;  // fboMS: Multisampled FBO used when samples > 0
	uint32  width, height;
	uint32  samples;

	uint32  depthTex, colTexs[MaxColorAttachmentCount];
	uint32  depthBuf, colBufs[MaxColorAttachmentCount];  // Used for multisampling

	RBRenderBuffer() : fbo( 0 ), fboMS( 0 ), width( 0 ), height( 0 ), depthTex( 0 ), depthBuf( 0 )
	{
		for( uint32 i = 0; i < MaxColorAttachmentCount; ++i ) colTexs[i] = colBufs[i] = 0;
	}
};


// Vertex layout
// =========================================================

struct RBVertLayoutElem
{
	std::string  semanticName;
	uint32       vbSlot;
	uint32       size;
	uint32       offset;
};

struct RBVertexLayout
{
	struct ShaderData
	{
		std::vector< char >  elemAttribIndices;
	};
	
	std::vector< RBVertLayoutElem >  elems;
	std::map< uint32, ShaderData >   shaderData;
};


// =================================================================================================

class RendererBase
{
protected:

	int           _caps[RenderCaps::ListSize];
	uint32        _depthFormat;
	int           _vpX, _vpY, _vpWidth, _vpHeight;
	int           _fbWidth, _fbHeight;
	uint32        _curShaderObj;
	std::string   _shaderLog;
	uint32        _curRendBuf;
	int           _outputBufferIndex;  // Left and right eye for stereo rendering
	uint32        _textureMem, _bufferMem;

	RBVertBufSlot                _vertBufSlots[16];
	RBTexSlot                    _texSlots[16];
	RBObjects< RBBuffer >        _buffers;
	RBObjects< RBTexture >       _textures;
	RBObjects< RBRenderBuffer >  _rendBufs;
	RBObjects< RBVertexLayout >  _vertexLayouts;
	
	uint32 loadShader( const char *vertexShader, const char *fragmentShader );
	bool linkShader( uint32 shaderId );
	void resolveRenderBuffer( uint32 rbObj );

public:
	
	RendererBase();
	virtual ~RendererBase();
	
	// Rendering functions
	void initStates();
	virtual bool init();
	virtual void resize( int x, int y, int width, int height );
	
	// Buffers
	uint32 createVertexBuffer( uint32 size, void *data );
	uint32 createIndexBuffer( uint32 size, void *data );
	void releaseBuffer( uint32 bufObj );
	void updateBufferData( uint32 bufObj, uint32 offset, uint32 size, void *data );
	uint32 cloneBuffer( uint32 bufObj );
	void bindVertexBuffer( uint32 slot, uint32 vbObj, uint32 offset, uint32 stride );
	void bindIndexBuffer( uint32 bufObj );
	uint32 getBufferMem() { return _bufferMem; }

	// Textures
	uint32 calcTextureSize( TextureFormats::List format, int width, int height );
	uint32 createTexture( TextureTypes::List type, int width, int height, TextureFormats::List format,
	                      bool hasMips, bool genMips, bool compress, bool sRGB );
	void uploadTextureData( uint32 texObj, int slice, int mipLevel, const void *pixels );
	void releaseTexture( uint32 texObj );
	void updateTextureData( uint32 texObj, int slice, int mipLevel, const void *pixels );
	bool getTextureData( uint32 texObj, int slice, int mipLevel, void *buffer );
	void bindTexture( uint32 unit, uint32 texObj );
	uint32 getTextureMem() { return _textureMem; }

	// Shaders
	uint32 createShader( const char *vertexShader, const char *fragmentShader );
	void releaseShader( uint32 shdObj );
	void bindShader( uint32 shdObj );
	int getShaderVar( uint32 shdObj, const char *var );
	bool setShaderVar1i( uint32 shdObj, const char *var, int value );
	std::string &getShaderLog() { return _shaderLog; }

	// Renderbuffers
	uint32 createRenderBuffer( uint32 width, uint32 height, TextureFormats::List format,
	                           bool depth, uint32 numColBufs, uint32 samples );
	void releaseRenderBuffer( uint32 rbObj );
	uint32 getRenderBufferTex( uint32 rbObj, uint32 bufIndex );
	void setRenderBuffer( uint32 rbObj );
	bool getRenderBufferData( uint32 rbObj, int bufIndex, int *width, int *height,
	                          int *compCount, float *dataBuffer, int bufferSize );

	// Queries
	uint32 createOcclusionQuery();
	void releaseQuery( uint32 queryObj );
	void beginQuery( uint32 queryObj );
	void endQuery( uint32 queryObj );
	uint32 getQueryResult( uint32 queryObj );

	// Vertex declarations
	uint32 createVertexLayout( uint32 elemCount );
	void setVertexLayoutElem( uint32 vlObj, uint32 slot, const char *semanticName,
	                          uint32 vbSlot, uint32 size, uint32 offset );
	void releaseVertexLayout( uint32 vlObj );
	bool applyVertexLayout( uint32 vlObj );


	int getViewportX() { return _vpX; }
	int getViewportY() { return _vpY; }
	int getViewportWidth() { return _vpWidth; }
	int getViewportHeight() { return _vpHeight; }
};

#endif // _egRendererBase_H_
