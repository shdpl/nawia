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

#ifndef _egRendererBase_H_
#define _egRendererBase_H_

#include "egPrerequisites.h"
#include "utMath.h"
#include <cstdlib>
#include <cstring>
#include <string>


// =================================================================================================
// Base Renderer
// =================================================================================================

struct RenderBufferFormats
{
	enum List
	{
		RGBA8,
		RGBA16F,
		RGBA32F
	};
};

struct RenderBuffer
{
	static const uint32 MaxColorAttachmentCount = 4;

	uint32  fbo;
	uint32  width, height;
	uint32  samples;

	// If samples == 0 buffers are texture objects, otherwise multisampled renderbuffers
	uint32  depthBuf;
	uint32  colBufs[MaxColorAttachmentCount];

	RenderBuffer()
	{
		fbo = 0;
		width = 0; height = 0;
		depthBuf = 0;
		for( uint32 i = 0; i < MaxColorAttachmentCount; ++i ) colBufs[i] = 0;
	}
};

struct TextureFormats
{
	enum List
	{
		RGB8,
		BGR8,
		RGBX8,
		BGRX8,
		RGBA8,
		BGRA8,
		DXT1,
		DXT3,
		DXT5,
		RGBA16F,
		RGBA32F
	};
};

struct TextureTypes
{
	enum List
	{
		Tex2D,
		TexCube
	};
};

// =================================================================================================

class RendererBase
{
protected:

	int           _vpX, _vpY, _vpWidth, _vpHeight;
	int           _fbWidth, _fbHeight;
	std::string   _shaderLog;
	RenderBuffer  *_curRendBuf;
	int           _outputBufferIndex;  // Left and right eye for stereo rendering


	void myPerspective( float fovy, float aspect, float zNear, float zFar );
	
	uint32 loadShader( const char *vertexShader, const char *fragmentShader );
	bool linkShader( uint32 shaderId );

public:
	
	RendererBase();
	virtual ~RendererBase();
	
	// Rendering functions
	virtual bool init();
	virtual void resize( int x, int y, int width, int height );
	
	// Vertex buffer functions
	uint32 uploadVertices( void *data, uint32 size, uint32 bufId = 0 );
	void updateVertices( void *data, uint32 offset, uint32 size, uint32 bufId );
	uint32 uploadIndices( void *indices, uint32 size, uint32 bufId = 0 );
	void unloadBuffers( uint32 vertBufId, uint32 idxBufId );
	uint32 cloneVertexBuffer( uint32 vertBufId );
	uint32 cloneIndexBuffer( uint32 idxBufId );

	// Texture map functions
	uint32 calcTexSize( TextureFormats::List format, int width, int height );
	uint32 uploadTexture( TextureTypes::List type, void *pixels, int width, int height, TextureFormats::List format,
	                      int slice, int mipLevel, bool genMips, bool compress, uint32 texId = 0 );
	void updateTexture2D( unsigned char *pixels, int width, int height, int comps, uint32 texId );
	void unloadTexture( uint32 texId, TextureTypes::List type );
	float *downloadTexture2DData( uint32 texId, int *width, int *height );

	// Shader functions
	virtual uint32 uploadShader( const char *vertexShader, const char *fragmentShader );
	void unloadShader( uint32 shaderId );
	int getShaderVar( uint32 shaderId, const char *var );
	bool setShaderVar1i( uint32 shaderId, const char *var, int value );
	std::string &getShaderLog() { return _shaderLog; }

	// Render buffer functions
	RenderBuffer createRenderBuffer( uint32 width, uint32 height, RenderBufferFormats::List format,
	                                 bool depth, uint32 numColBufs, uint32 samples );
	void destroyRenderBuffer( RenderBuffer &rb );
	void setRenderBuffer( RenderBuffer *rb );
	bool getBufferData( RenderBuffer *rb, int bufIndex, int *width, int *height,
	                    int *compCount, float *dataBuffer, int bufferSize );
	void blitRenderBuffer( RenderBuffer &sourceBuf, RenderBuffer &destBuf );

	// Occlusion queries
	uint32 createOccQuery();
	void destroyOccQuery( uint32 queryId );
	void beginOccQuery( uint32 queryId );
	void endOccQuery( uint32 queryId );
	uint32 getOccQueryResult( uint32 queryId );
};

#endif // _egRendererBase_H_
