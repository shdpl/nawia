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

#ifndef _egRendererBase_H_
#define _egRendererBase_H_

#include "egPrerequisites.h"
#include "utMath.h"
#include "utOpenGL.h"
#include <string>
#include <vector>
#include <map>


namespace Horde3D {

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
// Render Device Interface
// =================================================================================================

// ---------------------------------------------------------
// General
// ---------------------------------------------------------

template< class T > class RDIObjects
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

	friend class RenderDeviceInterface;
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


// ---------------------------------------------------------
// Buffers
// ---------------------------------------------------------

struct RDIBuffer
{
	uint32  type;
	uint32  glObj;
	uint32  size;
};

struct RDIVertBufSlot
{
	uint32  vbObj;
	uint32  offset;
	uint32  stride;

	RDIVertBufSlot() : vbObj( 0 ), offset( 0 ), stride( 0 ) {}
	RDIVertBufSlot( uint32 vbObj, uint32 offset, uint32 stride ) :
		vbObj( vbObj ), offset( offset ), stride( stride ) {}
};


// ---------------------------------------------------------
// Textures
// ---------------------------------------------------------

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

struct RDITexture
{
	uint32                glObj;
	uint32                glFmt;
	int                   type;
	TextureFormats::List  format;
	int                   width, height;
	int                   memSize;
	bool                  sRGB;
	bool                  genMips;
};

struct RDITexSlot
{
	uint32  texObj;

	RDITexSlot() : texObj( 0 ) {}
};


// ---------------------------------------------------------
// Render buffers
// ---------------------------------------------------------

struct RDIRenderBuffer
{
	static const uint32 MaxColorAttachmentCount = 4;

	uint32  fbo, fboMS;  // fboMS: Multisampled FBO used when samples > 0
	uint32  width, height;
	uint32  samples;

	uint32  depthTex, colTexs[MaxColorAttachmentCount];
	uint32  depthBuf, colBufs[MaxColorAttachmentCount];  // Used for multisampling

	RDIRenderBuffer() : fbo( 0 ), fboMS( 0 ), width( 0 ), height( 0 ), depthTex( 0 ), depthBuf( 0 )
	{
		for( uint32 i = 0; i < MaxColorAttachmentCount; ++i ) colTexs[i] = colBufs[i] = 0;
	}
};


// ---------------------------------------------------------
// Vertex layout
// ---------------------------------------------------------

struct RDIVertLayoutElem
{
	std::string  semanticName;
	uint32       vbSlot;
	uint32       size;
	uint32       offset;
};

struct RDIVertexLayout
{
	struct ShaderData
	{
		std::vector< char >  elemAttribIndices;
	};
	
	std::vector< RDIVertLayoutElem >  elems;
	std::map< uint32, ShaderData >   shaderData;
};


// ---------------------------------------------------------
// Draw calls
// ---------------------------------------------------------

enum RDIIndexFormat
{
	IDXFMT_16 = GL_UNSIGNED_SHORT,
	IDXFMT_32 = GL_UNSIGNED_INT
};

enum RDIPrimType
{
	PRIM_TRILIST = GL_TRIANGLES,
	PRIM_TRISTRIP = GL_TRIANGLE_STRIP
};

// =================================================================================================


class RenderDeviceInterface
{
protected:

	int           _caps[RenderCaps::ListSize];
	uint32        _depthFormat;
	int           _vpX, _vpY, _vpWidth, _vpHeight;
	int           _fbWidth, _fbHeight;
	std::string   _shaderLog;
	uint32        _curRendBuf;
	int           _outputBufferIndex;  // Left and right eye for stereo rendering
	uint32        _textureMem, _bufferMem;

	RDIObjects< RDIBuffer >        _buffers;
	RDIObjects< RDITexture >       _textures;
	RDIObjects< RDIRenderBuffer >  _rendBufs;
	RDIObjects< RDIVertexLayout >  _vertexLayouts;

	RDIVertBufSlot    _vertBufSlots[16];
	RDITexSlot        _texSlots[16];
	uint32            _curShaderObj;
	uint32            _curVertLayout, _newVertLayout;
	uint32            _curIndexBuf, _newIndexBuf;
	uint32            _indexFormat;
	bool              _vertLayoutDirty;
	
	uint32 loadShader( const char *vertexShader, const char *fragmentShader );
	bool linkShader( uint32 shaderId );
	void resolveRenderBuffer( uint32 rbObj );

	bool applyVertexLayout();

public:
	
	RenderDeviceInterface();
	virtual ~RenderDeviceInterface();
	
	// Rendering functions
	void initStates();
	virtual bool init();
	virtual void resize( int x, int y, int width, int height );
	
// -----------------------------------------------------------------------------
// Resources
// -----------------------------------------------------------------------------

	// Buffers
	uint32 createVertexBuffer( uint32 size, void *data );
	uint32 createIndexBuffer( uint32 size, void *data );
	void releaseBuffer( uint32 bufObj );
	void updateBufferData( uint32 bufObj, uint32 offset, uint32 size, void *data );
	uint32 cloneBuffer( uint32 bufObj );
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
	                          int *compCount, void *dataBuffer, int bufferSize );

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

// -----------------------------------------------------------------------------
// Commands
// -----------------------------------------------------------------------------
	
	void setIndexBuffer( uint32 bufObj, RDIIndexFormat idxFmt )
		{ _indexFormat = (uint32)idxFmt; _newIndexBuf = bufObj; }
	void setVertexBuffer( uint32 slot, uint32 vbObj, uint32 offset, uint32 stride )
		{ ASSERT( slot < 16 ); _vertBufSlots[slot] = RDIVertBufSlot( vbObj, offset, stride );
	      _vertLayoutDirty = true; }
	void setVertexLayout( uint32 vlObj )
		{ _newVertLayout = vlObj; }

	bool commitStates();
	void resetStates();
	
	// Draw calls
	void draw( RDIPrimType primType, uint32 firstVert, uint32 numVerts );
	void drawIndexed( RDIPrimType primType, uint32 firstIndex, uint32 numIndices,
	                  uint32 firstVert, uint32 numVerts );

// -----------------------------------------------------------------------------
// Misc
// -----------------------------------------------------------------------------

	int getViewportX() { return _vpX; }
	int getViewportY() { return _vpY; }
	int getViewportWidth() { return _vpWidth; }
	int getViewportHeight() { return _vpHeight; }
};

}
#endif // _egRendererBase_H_
