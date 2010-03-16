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

#include "egRendererBase.h"
#include "egModules.h"
#include "egCom.h"
#include "utOpenGL.h"

#include "utDebug.h"


RendererBase::RendererBase()
{
	_vpWidth = 320; _vpHeight = 240;
	_curShaderObj = 0;
	_curRendBuf = 0; _outputBufferIndex = 0;
	_textureMem = 0; _bufferMem = 0;
}


RendererBase::~RendererBase()
{
}


void RendererBase::initStates()
{
	glPixelStorei( GL_UNPACK_ALIGNMENT, 1 );
	glDisable( GL_MULTISAMPLE );
}


bool RendererBase::init()
{
	bool failed = false;

	char *vendor = (char *)glGetString( GL_VENDOR );
	char *renderer = (char *)glGetString( GL_RENDERER );
	char *version = (char *)glGetString( GL_VERSION );
	
	Modules::log().writeInfo( "Initializing GL2 backend using OpenGL driver '%s' by '%s' on '%s'",
	                          version, vendor, renderer );
	
	// Init extensions
	if( !initOpenGLExtensions() )
	{	
		Modules::log().writeError( "Could not find all required OpenGL function entry points" );
		failed = true;
	}

	// Check that OpenGL 2.0 is available
	if( glExt::majorVersion < 2 || glExt::minorVersion < 0 )
	{
		Modules::log().writeError( "OpenGL 2.0 not available" );
		failed = true;
	}
	
	// Check that required extensions are supported
	if( !glExt::EXT_framebuffer_object )
	{
		Modules::log().writeError( "Extension EXT_framebuffer_object not supported" );
		failed = true;
	}
	if( !glExt::EXT_texture_filter_anisotropic )
	{
		Modules::log().writeError( "Extension EXT_texture_filter_anisotropic not supported" );
		failed = true;
	}
	if( !glExt::EXT_texture_compression_s3tc )
	{
		Modules::log().writeError( "Extension EXT_texture_compression_s3tc not supported" );
		failed = true;
	}
	if( !glExt::EXT_texture_sRGB )
	{
		Modules::log().writeError( "Extension EXT_texture_sRGB not supported" );
		failed = true;
	}
	
	if( failed )
	{
		Modules::log().writeError( "Failed to init renderer backend, debug info following" );
		char *exts = (char *)glGetString( GL_EXTENSIONS );
		Modules::log().writeInfo( "Supported extensions: '%s'", exts );

		return false;
	}
	
	// Get capabilities
	_caps[RenderCaps::Tex_Float] = glExt::ARB_texture_float ? 1 : 0;
	_caps[RenderCaps::Tex_NPOT] = glExt::ARB_texture_non_power_of_two ? 1 : 0;
	_caps[RenderCaps::RT_Multisampling] = glExt::EXT_framebuffer_multisample ? 1 : 0;

	// Find supported depth format (some old ATI cards only support 16 bit depth for FBOs)
	_depthFormat = GL_DEPTH_COMPONENT24;
	uint32 testBuf = createRenderBuffer( 32, 32, RenderBufferFormats::RGBA8, true, 1, 0 ); 
	if( testBuf == 0 )
	{	
		_depthFormat = GL_DEPTH_COMPONENT16;
		Modules::log().writeWarning( "Render target depth precision limited to 16 bit" );
	}
	else
		releaseRenderBuffer( testBuf );
	
	initStates();

	return true;
}


void RendererBase::resize( int x, int y, int width, int height )
{
	_vpX = x; _vpY = y; _vpWidth = width; _vpHeight = height;
}


// =================================================================================================
// Buffers
// =================================================================================================

uint32 RendererBase::createVertexBuffer( uint32 size, void *data )
{
	RBBuffer buf;

	buf.type = GL_ARRAY_BUFFER;
	buf.size = size;
	glGenBuffers( 1, &buf.glObj );
	glBindBuffer( buf.type, buf.glObj );
	glBufferData( buf.type, size, data, GL_DYNAMIC_DRAW );
	
	_bufferMem += size;
	return _buffers.add( buf );
}


uint32 RendererBase::createIndexBuffer( uint32 size, void *data )
{
	RBBuffer buf;

	buf.type = GL_ELEMENT_ARRAY_BUFFER;
	buf.size = size;
	glGenBuffers( 1, &buf.glObj );
	glBindBuffer( buf.type, buf.glObj );
	glBufferData( buf.type, size, data, GL_DYNAMIC_DRAW );
	
	_bufferMem += size;
	return _buffers.add( buf );
}


void RendererBase::releaseBuffer( uint32 bufObj )
{
	if( bufObj == 0 ) return;
	
	RBBuffer &buf = _buffers.getRef( bufObj );
	
	glBindBuffer( buf.type, buf.glObj );
	glBufferData( buf.type, 0, 0x0, GL_STATIC_DRAW );
	glBindBuffer( buf.type, 0 );
	glDeleteBuffers( 1, &buf.glObj );

	_bufferMem -= buf.size;
	_buffers.remove( bufObj );
}


void RendererBase::updateBufferData( uint32 bufObj, uint32 offset, uint32 size, void *data )
{
	const RBBuffer &buf = _buffers.getRef( bufObj );
	ASSERT( offset + size <= buf.size );
	
	glBindBuffer( buf.type, buf.glObj );
	
	if( offset == 0 &&  size == buf.size )
	{
		// Replacing the whole buffer can help the driver to avoid pipeline stalls
		glBufferData( buf.type, size, data, GL_DYNAMIC_DRAW );
		return;
	}

	glBufferSubData( buf.type, offset, size, data );
}


uint32 RendererBase::cloneBuffer( uint32 bufObj )
{
	const RBBuffer &buf = _buffers.getRef( bufObj );
	int size;
	
	glBindBuffer( buf.type, buf.glObj );
	glGetBufferParameteriv( buf.type, GL_BUFFER_SIZE, &size );
	char *data = new char[size];
	glGetBufferSubData( buf.type, 0, size, data );
	
	uint32 newBufObj = 0;
	if( buf.type == GL_ARRAY_BUFFER ) newBufObj = createVertexBuffer( size, data );
	else if( buf.type == GL_ELEMENT_ARRAY_BUFFER ) newBufObj = createIndexBuffer( size, data );
	
	delete[] data;
	return newBufObj;
}


void RendererBase::bindVertexBuffer( uint32 slot, uint32 vbObj, uint32 offset, uint32 stride )
{
	_vertBufSlots[slot].vbObj = vbObj;
	_vertBufSlots[slot].offset = offset;
	_vertBufSlots[slot].stride = stride;
}


void RendererBase::bindIndexBuffer( uint32 bufObj )
{
	if( bufObj == 0 )
	{
		glBindBuffer( GL_ELEMENT_ARRAY_BUFFER, 0 );
	}
	else
	{
		const RBBuffer &buf = _buffers.getRef( bufObj );
		glBindBuffer( GL_ELEMENT_ARRAY_BUFFER, buf.glObj );
	}
}


// =================================================================================================
// Textures
// =================================================================================================

uint32 RendererBase::calcTextureSize( TextureFormats::List format, int width, int height )
{
	switch( format )
	{
	case TextureFormats::BGRA8:
		return width * height * 4;
	case TextureFormats::DXT1:
		return std::max( width / 4, 1 ) * std::max( height / 4, 1 ) * 8;
	case TextureFormats::DXT3:
		return std::max( width / 4, 1 ) * std::max( height / 4, 1 ) * 16;
	case TextureFormats::DXT5:
		return std::max( width / 4, 1 ) * std::max( height / 4, 1 ) * 16;
	case TextureFormats::RGBA16F:
		return width * height * 8;
	case TextureFormats::RGBA32F:
		return width * height * 16;
	default:
		return 0;
	}
}


uint32 RendererBase::createTexture( TextureTypes::List type, int width, int height, TextureFormats::List format,
	                                bool hasMips, bool genMips, bool compress, bool sRGB )
{
	if( !_caps[RenderCaps::Tex_NPOT] )
	{
		// Check if texture is NPOT
		if( (width & (width-1)) != 0 || (height & (height-1)) != 0 )
			Modules::log().writeWarning( "Texture has non-power-of-two dimensions although NPOT is not supported by GPU" );
	}
	
	RBTexture tex;
	tex.type = type;
	tex.format = format;
	tex.width = width;
	tex.height = height;
	tex.sRGB = sRGB && Modules::config().sRGBLinearization;
	glGenTextures( 1, &tex.glObj );
	glBindTexture( tex.type, tex.glObj );
	
	if( genMips )
		glTexParameteri( tex.type, GL_GENERATE_MIPMAP, GL_TRUE );
	if( hasMips || genMips )
		glTexParameteri( tex.type, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR );
	else
		glTexParameteri( tex.type, GL_TEXTURE_MIN_FILTER, GL_LINEAR );

	// Calculate memory requirements
	tex.memSize = calcTextureSize( format, width, height );
	if( hasMips || genMips ) tex.memSize += ftoi_r( tex.memSize * 1.0f / 3.0f );
	if( type == TextureTypes::TexCube ) tex.memSize *= 6;
	_textureMem += tex.memSize;
	
	return _textures.add( tex );
}


void RendererBase::uploadTextureData( uint32 texObj, int slice, int mipLevel, const void *pixels )
{
	const RBTexture &tex = _textures.getRef( texObj );
	TextureFormats::List format = tex.format;

	glBindTexture( tex.type, tex.glObj );
	
	int internalFormat = 0, inputFormat = 0, inputType = GL_UNSIGNED_BYTE;
	int target = tex.type == TextureTypes::TexCube ? GL_TEXTURE_CUBE_MAP : GL_TEXTURE_2D;
	if( target == GL_TEXTURE_CUBE_MAP ) target = GL_TEXTURE_CUBE_MAP_POSITIVE_X + slice;

	switch( format )
	{
	case TextureFormats::BGRA8:
		internalFormat = tex.sRGB ? GL_SRGB8_ALPHA8_EXT : GL_RGBA8;
		inputFormat = GL_BGRA;
		break;
	case TextureFormats::DXT1:
		internalFormat = tex.sRGB ? GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT : GL_COMPRESSED_RGBA_S3TC_DXT1_EXT;
		break;
	case TextureFormats::DXT3:
		internalFormat = tex.sRGB ? GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT : GL_COMPRESSED_RGBA_S3TC_DXT3_EXT;
		break;
	case TextureFormats::DXT5:
		internalFormat = tex.sRGB ? GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT : GL_COMPRESSED_RGBA_S3TC_DXT5_EXT;
		break;
	case TextureFormats::RGBA16F:
		internalFormat = GL_RGBA16F_ARB;
		inputFormat = GL_RGBA;
		inputType = GL_FLOAT;
		break;
	case TextureFormats::RGBA32F:
		internalFormat = GL_RGBA32F_ARB;
		inputFormat = GL_RGBA;
		inputType = GL_FLOAT;
		break;
	case TextureFormats::DEPTH:
		internalFormat = _depthFormat;
		inputFormat = GL_DEPTH_COMPONENT;
		inputType = GL_FLOAT;
	default:
		break;
	};
	
	// Calculate size of next mipmap using "floor" convention
	int width = std::max( tex.width >> mipLevel, 1 ), height = std::max( tex.height >> mipLevel, 1 );
	
	if( format == TextureFormats::DXT1 || format == TextureFormats::DXT3 || format == TextureFormats::DXT5 )
		glCompressedTexImage2D( target, mipLevel, internalFormat, width, height, 0,
		                        calcTextureSize( format, width, height ), pixels );	
	else
		glTexImage2D( target, mipLevel, internalFormat, width, height, 0, inputFormat, inputType, pixels );
}


void RendererBase::releaseTexture( uint32 texObj )
{
	if( texObj == 0 ) return;
	
	const RBTexture &tex = _textures.getRef( texObj );
	
	glBindTexture( tex.type, tex.glObj );

	int target = tex.type == TextureTypes::TexCube ? GL_TEXTURE_CUBE_MAP_POSITIVE_X : GL_TEXTURE_2D;
	for( int i = 0; i < (target == GL_TEXTURE_2D ? 1 : 6); ++i )
		glTexImage2D( target + i, 0, GL_RGB8, 0, 0, 0, GL_RGB, GL_UNSIGNED_BYTE, 0x0 );

	glBindTexture( tex.type, 0 );
	glDeleteTextures( 1, &tex.glObj );

	_textureMem -= tex.memSize;
	_textures.remove( texObj );
}


void RendererBase::updateTextureData( uint32 texObj, int slice, int mipLevel, const void *pixels )
{
	const RBTexture &tex = _textures.getRef( texObj );
	
	glBindTexture( tex.type, tex.glObj );
	glTexParameteri( tex.type, GL_GENERATE_MIPMAP, GL_FALSE );
	
	uploadTextureData( texObj, slice, mipLevel, pixels );
}


bool RendererBase::getTextureData( uint32 texObj, int slice, int mipLevel, void *buffer )
{
	const RBTexture &tex = _textures.getRef( texObj );
	
	int target = tex.type == TextureTypes::TexCube ? GL_TEXTURE_CUBE_MAP : GL_TEXTURE_2D;
	if( target == GL_TEXTURE_CUBE_MAP ) target = GL_TEXTURE_CUBE_MAP_POSITIVE_X + slice;
	
	int fmt, type, compressed = 0;
	glBindTexture( tex.type, tex.glObj );

	switch( tex.format )
	{
	case TextureFormats::BGRA8:
		fmt = GL_BGRA;
		type = GL_UNSIGNED_BYTE;
		break;
	case TextureFormats::DXT1:
	case TextureFormats::DXT3:
	case TextureFormats::DXT5:
		compressed = 1;
		break;
	case TextureFormats::RGBA16F:
	case TextureFormats::RGBA32F:
		fmt = GL_RGBA;
		type = GL_FLOAT;
		break;
	default:
		return false;
	};

	if( compressed )
		glGetCompressedTexImage( target, mipLevel, buffer );
	else
		glGetTexImage( target, mipLevel, fmt, type, buffer );

	return true;
}


void RendererBase::bindTexture( uint32 unit, uint32 texObj )
{
	glActiveTexture( GL_TEXTURE0 + unit );
	
	if( texObj == 0 )
	{
		glBindTexture( GL_TEXTURE_CUBE_MAP, 0 );
		glBindTexture( GL_TEXTURE_2D, 0 );
	}
	else
	{
		const RBTexture &tex = _textures.getRef( texObj );
		glBindTexture( GL_TEXTURE_CUBE_MAP, 0 );
		glBindTexture( tex.type, tex.glObj );
	}
}


// =================================================================================================
// Shaders
// =================================================================================================

uint32 RendererBase::loadShader( const char *vertexShader, const char *fragmentShader )
{
	int infologLength = 0;
	int charsWritten = 0;
	char *infoLog = 0x0;
	int status;

	_shaderLog = "";

	// Vertex shader
	uint32 vs = glCreateShader( GL_VERTEX_SHADER );
	glShaderSource( vs, 1, &vertexShader, 0x0 );
	glCompileShader( vs );
	glGetShaderiv( vs, GL_COMPILE_STATUS, &status );
	if( !status )
	{	
		// Get info
		glGetShaderiv( vs, GL_INFO_LOG_LENGTH, &infologLength );
		if( infologLength > 1 )
		{
			infoLog = new char[infologLength];
			glGetShaderInfoLog( vs, infologLength, &charsWritten, infoLog );
			_shaderLog = _shaderLog + "[Vertex Shader]\n" + infoLog;
			delete[] infoLog; infoLog = 0x0;
		}

		glDeleteShader( vs );
		return 0;
	}

	// Fragment shader
	uint32 fs = glCreateShader( GL_FRAGMENT_SHADER );
	glShaderSource( fs, 1, &fragmentShader, 0x0 );
	glCompileShader( fs );
	glGetShaderiv( fs, GL_COMPILE_STATUS, &status );
	if( !status )
	{	
		glGetShaderiv( fs, GL_INFO_LOG_LENGTH, &infologLength );
		if( infologLength > 1 )
		{
			infoLog = new char[infologLength];
			glGetShaderInfoLog( fs, infologLength, &charsWritten, infoLog );
			_shaderLog = _shaderLog + "[Fragment Shader]\n" + infoLog;
			delete[] infoLog; infoLog = 0x0;
		}

		glDeleteShader( vs );
		glDeleteShader( fs );
		return 0;
	}

	// Shader program
	uint32 program = glCreateProgram();
	glAttachShader( program, vs );
	glAttachShader( program, fs );
	glDeleteShader( vs );
	glDeleteShader( fs );

	return program;
}


bool RendererBase::linkShader( uint32 shaderId )
{
	int infologLength = 0;
	int charsWritten = 0;
	char *infoLog = 0x0;
	int status;

	_shaderLog = "";
	
	glLinkProgram( shaderId );
	glGetProgramiv( shaderId, GL_INFO_LOG_LENGTH, &infologLength );
	if( infologLength > 1 )
	{
		infoLog = new char[infologLength];
		glGetProgramInfoLog( shaderId, infologLength, &charsWritten, infoLog );
		_shaderLog = _shaderLog + "[Linking] " + "<pre>\n" + infoLog + "</pre>";
		delete[] infoLog; infoLog = 0x0;
	}
	
	glGetProgramiv( shaderId, GL_LINK_STATUS, &status );
	if( !status ) return false;

	return true;
}


uint32 RendererBase::createShader( const char *vertexShader, const char *fragmentShader )
{
	// Compile and link shader
	uint32 shdObj = RendererBase::loadShader( vertexShader, fragmentShader );
	if( shdObj == 0 ) return 0;
	if( !linkShader( shdObj ) ) return 0;

	int attribCount;
	glGetProgramiv( shdObj, GL_ACTIVE_ATTRIBUTES, &attribCount );
	
	// Find vertex layouts that have the same input signature as the shader
	for( uint32 i = 0; i < _vertexLayouts._objects.size(); ++i )
	{
		RBVertexLayout &vl = _vertexLayouts._objects[i];

		RBVertexLayout::ShaderData shdData;
		shdData.elemAttribIndices.resize( vl.elems.size(), -1 );

		bool matching = true;
		for( int j = 0; j < attribCount; ++j )
		{
			uint32 size, type;
			char name[32];
			glGetActiveAttrib( shdObj, j, 32, 0x0, (int *)&size, &type, name );

			bool found = false;
			for( uint32 k = 0; k < vl.elems.size(); ++k )
			{
				if( vl.elems[k].semanticName == name )
				{	
					shdData.elemAttribIndices[k] = glGetAttribLocation( shdObj, name );
					found = true;
					break;
				}
			}

			if( !found )
			{	
				matching = false;
				break;
			}
		}

		// Store shader attribute bindings
		if( matching ) vl.shaderData[shdObj] = shdData;
	}

	return shdObj;
}


void RendererBase::releaseShader( uint32 shdObj )
{
	if( shdObj == 0 ) return;
	
	// Remove shader data from vertex layouts
	for( uint32 i = 0; i < _vertexLayouts._objects.size(); ++i )
	{
		std::map< uint32, RBVertexLayout::ShaderData >::iterator itr =
			_vertexLayouts._objects[i].shaderData.find( shdObj );
		if( itr != _vertexLayouts._objects[i].shaderData.end() )
			_vertexLayouts._objects[i].shaderData.erase( itr );
	}

	glDeleteProgram( shdObj );
}


void RendererBase::bindShader( uint32 shdObj )
{
	_curShaderObj = shdObj;
	glUseProgram( shdObj );
} 


int RendererBase::getShaderVar( uint32 shdObj, const char *var )
{
	return glGetUniformLocation( shdObj, var );
}


bool RendererBase::setShaderVar1i( uint32 shdObj, const char *var, int value )
{
	int loc = glGetUniformLocation( shdObj, var );
	if( loc < 0 ) return false;

	glUniform1i( loc, value );
	return true;
}


// =================================================================================================
// Renderbuffers
// =================================================================================================

uint32 RendererBase::createRenderBuffer( uint32 width, uint32 height, RenderBufferFormats::List format,
                                         bool depth, uint32 numColBufs, uint32 samples )
{
	if( (format == RenderBufferFormats::RGBA16F || format == RenderBufferFormats::RGBA32F) &&
		!_caps[RenderCaps::Tex_Float] )
	{
		return 0;
	}

	if( numColBufs > RBRenderBuffer::MaxColorAttachmentCount ) return 0;

	uint32 maxSamples = 0;
	if( _caps[RenderCaps::RT_Multisampling] )
	{
		GLint value;
		glGetIntegerv( GL_MAX_SAMPLES_EXT, &value );
		maxSamples = (uint32)value;
	}
	if( samples > maxSamples )
	{
		samples = maxSamples;
		Modules::log().writeWarning( "GPU does not support desired multisampling quality for render target" );
	}

	RBRenderBuffer rb;
	rb.width = width;
	rb.height = height;
	rb.samples = samples;

	// Create framebuffers
	glGenFramebuffersEXT( 1, &rb.fbo );
	if( samples > 0 ) glGenFramebuffersEXT( 1, &rb.fboMS );

	if( numColBufs > 0 )
	{
		// Attach color buffers
		uint32 glFormat = 0;
		if( format == RenderBufferFormats::RGBA8 ) glFormat = GL_RGBA8;
		else if( format == RenderBufferFormats::RGBA16F ) glFormat = GL_RGBA16F_ARB;
		else if( format == RenderBufferFormats::RGBA32F ) glFormat = GL_RGBA32F_ARB;

		for( uint32 j = 0; j < numColBufs; ++j )
		{
			glBindFramebufferEXT( GL_FRAMEBUFFER_EXT, rb.fbo );
			// Create a color texture
			glGenTextures( 1, &rb.colTexs[j] );
			glBindTexture( GL_TEXTURE_2D, rb.colTexs[j] );
			glTexParameteri( GL_TEXTURE_2D, GL_GENERATE_MIPMAP, GL_FALSE );
			glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR );
			glTexImage2D( GL_TEXTURE_2D, 0, glFormat, rb.width, rb.height, 0, GL_RGBA, GL_FLOAT, 0x0 );
			// Attach the texture
			glFramebufferTexture2DEXT( GL_FRAMEBUFFER_EXT, GL_COLOR_ATTACHMENT0_EXT + j, GL_TEXTURE_2D, rb.colTexs[j], 0 );

			if( samples > 0 )
			{
				glBindFramebufferEXT( GL_FRAMEBUFFER_EXT, rb.fboMS );
				// Create a multisampled renderbuffer
				glGenRenderbuffersEXT( 1, &rb.colBufs[j] );
				glBindRenderbufferEXT( GL_RENDERBUFFER_EXT, rb.colBufs[j] );
				glRenderbufferStorageMultisampleEXT( GL_RENDERBUFFER_EXT, rb.samples,
				                                     glFormat, rb.width, rb.height );
				// Attach the renderbuffer
				glFramebufferRenderbufferEXT( GL_FRAMEBUFFER_EXT, GL_COLOR_ATTACHMENT0_EXT + j,
				                              GL_RENDERBUFFER_EXT, rb.colBufs[j] );
			}
		}

		uint32 buffers[] = { GL_COLOR_ATTACHMENT0_EXT, GL_COLOR_ATTACHMENT1_EXT,
		                     GL_COLOR_ATTACHMENT2_EXT, GL_COLOR_ATTACHMENT3_EXT };
		glBindFramebufferEXT( GL_FRAMEBUFFER_EXT, rb.fbo );
		glDrawBuffers( numColBufs, buffers );
		
		if( samples > 0 )
		{
			glBindFramebufferEXT( GL_FRAMEBUFFER_EXT, rb.fboMS );
			glDrawBuffers( numColBufs, buffers );
		}
	}
	else
	{	
		glBindFramebufferEXT( GL_FRAMEBUFFER_EXT, rb.fbo );
		glDrawBuffer( GL_NONE );
		glReadBuffer( GL_NONE );
		
		if( samples > 0 )
		{
			glBindFramebufferEXT( GL_FRAMEBUFFER_EXT, rb.fboMS );
			glDrawBuffer( GL_NONE );
			glReadBuffer( GL_NONE );
		}
	}

	// Attach depth buffer
	if( depth )
	{
		glBindFramebufferEXT( GL_FRAMEBUFFER_EXT, rb.fbo );
		// Create a depth texture
		glGenTextures( 1, &rb.depthTex );
		glBindTexture( GL_TEXTURE_2D, rb.depthTex );
		glTexParameteri( GL_TEXTURE_2D, GL_GENERATE_MIPMAP, GL_FALSE );
		glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR );
		glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_COMPARE_MODE, GL_NONE );
		glTexImage2D( GL_TEXTURE_2D, 0, _depthFormat, rb.width, rb.height, 0, GL_DEPTH_COMPONENT, GL_UNSIGNED_BYTE, 0x0 );
		// Attach the texture
		glFramebufferTexture2DEXT( GL_FRAMEBUFFER_EXT, GL_DEPTH_ATTACHMENT_EXT, GL_TEXTURE_2D, rb.depthTex, 0 );

		if( samples > 0 )
		{
			glBindFramebufferEXT( GL_FRAMEBUFFER_EXT, rb.fboMS );
			// Create a multisampled renderbuffer
			glGenRenderbuffersEXT( 1, &rb.depthBuf );
			glBindRenderbufferEXT( GL_RENDERBUFFER_EXT, rb.depthBuf );
			glRenderbufferStorageMultisampleEXT( GL_RENDERBUFFER_EXT, rb.samples,
			                                     _depthFormat, rb.width, rb.height );
			// Attach the renderbuffer
			glFramebufferRenderbufferEXT( GL_FRAMEBUFFER_EXT, GL_DEPTH_ATTACHMENT_EXT,
			                              GL_RENDERBUFFER_EXT, rb.depthBuf );
		}
	}

	uint32 rbObj = _rendBufs.add( rb );
	
	// Check if FBO is complete
	bool valid = true;
	glBindFramebufferEXT( GL_FRAMEBUFFER_EXT, rb.fbo );
	uint32 status = glCheckFramebufferStatusEXT( GL_FRAMEBUFFER_EXT );
	glBindFramebufferEXT( GL_FRAMEBUFFER_EXT, 0 );
	if( status != GL_FRAMEBUFFER_COMPLETE_EXT ) valid = false;
	
	if( samples > 0 )
	{
		glBindFramebufferEXT( GL_FRAMEBUFFER_EXT, rb.fboMS );
		status = glCheckFramebufferStatusEXT( GL_FRAMEBUFFER_EXT );
		glBindFramebufferEXT( GL_FRAMEBUFFER_EXT, 0 );
		if( status != GL_FRAMEBUFFER_COMPLETE_EXT ) valid = false;
	}

	if( !valid )
	{
		releaseRenderBuffer( rbObj );
		return 0;
	}
	
	return rbObj;
}


void RendererBase::releaseRenderBuffer( uint32 rbObj )
{
	RBRenderBuffer &rb = _rendBufs.getRef( rbObj );
	
	glBindFramebufferEXT( GL_FRAMEBUFFER_EXT, 0 );
	
	if( rb.depthTex != 0 ) glDeleteTextures( 1, &rb.depthTex );
	if( rb.depthBuf != 0 ) glDeleteRenderbuffersEXT( 1, &rb.depthBuf );
	rb.depthTex = rb.depthBuf = 0;
		
	for( uint32 i = 0; i < 4; ++i )
	{
		if( rb.colTexs[i] != 0 ) glDeleteTextures( 1, &rb.colTexs[i] );
		if( rb.colBufs[i] != 0 ) glDeleteRenderbuffersEXT( 1, &rb.colBufs[i] );
		rb.colTexs[i] = rb.colBufs[i] = 0;
	}

	if( rb.fbo != 0 ) glDeleteFramebuffersEXT( 1, &rb.fbo );
	if( rb.fboMS != 0 ) glDeleteFramebuffersEXT( 1, &rb.fboMS );
	rb.fbo = rb.fboMS = 0;

	_rendBufs.remove( rbObj );
}


uint32 RendererBase::getRenderBufferTex( uint32 rbObj, uint32 bufIndex )
{
	RBRenderBuffer &rb = _rendBufs.getRef( rbObj );
	
	if( bufIndex < 4 ) return rb.colTexs[bufIndex];
	else if( bufIndex == 32 ) return rb.depthTex;
	else return 0;
}


void RendererBase::resolveRenderBuffer( uint32 rbObj )
{
	RBRenderBuffer &rb = _rendBufs.getRef( rbObj );
	
	if( rb.fboMS == 0 ) return;
	
	glBindFramebufferEXT( GL_READ_FRAMEBUFFER_EXT, rb.fboMS );
	glBindFramebufferEXT( GL_DRAW_FRAMEBUFFER_EXT, rb.fbo );
	glViewport( 0, 0, rb.width, rb.height );

	if( rb.depthBuf != 0 )
	{
		glReadBuffer( GL_NONE );
		glDrawBuffer( GL_NONE );
		glBlitFramebufferEXT( 0, 0, rb.width, rb.height, 0, 0, rb.width, rb.height,
							  GL_DEPTH_BUFFER_BIT, GL_NEAREST );
	}

	for( uint32 i = 0; i < RBRenderBuffer::MaxColorAttachmentCount; ++i )
	{
		if( rb.colBufs[i] != 0 )
		{
			glReadBuffer( GL_COLOR_ATTACHMENT0_EXT + i );
			glDrawBuffer( GL_COLOR_ATTACHMENT0_EXT + i );
			glBlitFramebufferEXT( 0, 0, rb.width, rb.height, 0, 0, rb.width, rb.height,
								  GL_COLOR_BUFFER_BIT, GL_NEAREST );
		}
	}
}


void RendererBase::setRenderBuffer( uint32 rbObj )
{
	// Resolve render buffer if necessary
	if( _curRendBuf != 0 ) resolveRenderBuffer( _curRendBuf );
	
	// Set new render buffer
	_curRendBuf = rbObj;
	
	if( rbObj == 0 )
	{
		glBindFramebufferEXT( GL_FRAMEBUFFER_EXT, 0 );
		glDrawBuffer( _outputBufferIndex == 1 ? GL_BACK_RIGHT : GL_BACK_LEFT );
		glViewport( _vpX, _vpY, _vpWidth, _vpHeight );
		_fbWidth = _vpWidth + _vpX;
		_fbHeight = _vpHeight + _vpY;
	}
	else
	{
		RBRenderBuffer &rb = _rendBufs.getRef( rbObj );

		glBindFramebufferEXT( GL_FRAMEBUFFER_EXT, rb.fboMS != 0 ? rb.fboMS : rb.fbo );
		ASSERT( glCheckFramebufferStatusEXT( GL_FRAMEBUFFER_EXT ) == GL_FRAMEBUFFER_COMPLETE_EXT );
		glViewport( 0, 0, rb.width, rb.height );
		_fbWidth = rb.width;
		_fbHeight = rb.height;
	}
}


bool RendererBase::getRenderBufferData( uint32 rbObj, int bufIndex, int *width, int *height,
                                        int *compCount, float *dataBuffer, int bufferSize )
{
	int x, y, w, h;
	
	if( rbObj == 0 )
	{
		if( bufIndex != 32 && bufIndex != 0 ) return false;
		if( width != 0x0 ) *width = _vpWidth;
		if( height != 0x0 ) *height = _vpHeight;
		
		x = _vpX; y = _vpY; w = _vpWidth; h = _vpHeight;

		glBindFramebufferEXT( GL_FRAMEBUFFER_EXT, 0 );
		if( bufIndex != 32 ) glReadBuffer( GL_BACK_LEFT );
	}
	else
	{
		resolveRenderBuffer( rbObj );
		RBRenderBuffer &rb = _rendBufs.getRef( rbObj );
		
		if( bufIndex == 32 && rb.depthBuf == 0 ) return false;
		if( bufIndex != 32 )
		{
			if( (unsigned)bufIndex > 3 || rb.colBufs[bufIndex] == 0 ) return false;
		}
		if( width != 0x0 ) *width = rb.width;
		if( height != 0x0 ) *height = rb.height;

		x = 0; y = 0; w = rb.width; h = rb.height;
		
		glBindFramebufferEXT( GL_FRAMEBUFFER_EXT, rb.fbo );
		if( bufIndex != 32 ) glReadBuffer( GL_COLOR_ATTACHMENT0_EXT + bufIndex );
	}
	
	int comps = (bufIndex == 32 ? 1 : 4);
	if( compCount != 0x0 ) *compCount = comps;
	
	if( dataBuffer == 0x0 ) return true;
	if( bufferSize < w * h * comps * (signed)sizeof( float ) ) return false;
	
	glFinish();
	int format = GL_RGBA;
	if( bufIndex == 32 ) format = GL_DEPTH_COMPONENT;
	glReadPixels( x, y, w, h, format, GL_FLOAT, dataBuffer );
	
	return true;
}


// =================================================================================================
// Queries
// =================================================================================================

uint32 RendererBase::createOcclusionQuery()
{
	uint32 queryObj;
	glGenQueries( 1, &queryObj );
	return queryObj;
}


void RendererBase::releaseQuery( uint32 queryObj )
{
	if( queryObj == 0 ) return;
	
	glDeleteQueries( 1, &queryObj );
}


void RendererBase::beginQuery( uint32 queryObj )
{
	glBeginQuery( GL_SAMPLES_PASSED, queryObj );
}


void RendererBase::endQuery( uint32 /*queryObj*/ )
{
	glEndQuery( GL_SAMPLES_PASSED );
}


uint32 RendererBase::getQueryResult( uint32 queryObj )
{
	uint32 samples = 0;
	glGetQueryObjectuiv( queryObj, GL_QUERY_RESULT, &samples );
	return samples;
}


uint32 RendererBase::createVertexLayout( uint32 elemCount )
{
	RBVertexLayout vl;
	
	uint32 vlObj = _vertexLayouts.add( vl );
	_vertexLayouts.getRef( vlObj ).elems.resize( elemCount );

	return vlObj;
}

void RendererBase::setVertexLayoutElem( uint32 vlObj, uint32 slot, const char *semanticName,
                                        uint32 vbSlot, uint32 size, uint32 offset )
{
	RBVertexLayout &vl = _vertexLayouts.getRef( vlObj );
	
	vl.elems[slot].semanticName = semanticName;
	vl.elems[slot].vbSlot = vbSlot;
	vl.elems[slot].size = size;
	vl.elems[slot].offset = offset;
}

void RendererBase::releaseVertexLayout( uint32 vlObj )
{
	if( vlObj == 0 ) return;
	
	_vertexLayouts.remove( vlObj );
}

bool RendererBase::applyVertexLayout( uint32 vlObj )
{
	// Notes:
	// Vertex layouts contain shader-specific data.
	// Vertex layouts need to be applied after the desired shader has been bound and all required
	// vertex buffers were bound!
	
	static int maxVertexAttribs = 0;
	if( maxVertexAttribs == 0 )
		glGetIntegerv( GL_MAX_VERTEX_ATTRIBS, &maxVertexAttribs );
	
	// Reset previous layout
	for( int i = 0; i < maxVertexAttribs; ++i )
		glDisableVertexAttribArray( i );
	
	if( vlObj == 0 ) return false;

	RBVertexLayout &vl = _vertexLayouts.getRef( vlObj );

	// Find data for the currently bound shader
	ASSERT( _curShaderObj != 0 );
	std::map< uint32, RBVertexLayout::ShaderData >::iterator itr = vl.shaderData.find( _curShaderObj );
	if( itr == vl.shaderData.end() ) return false;

	// Set vertex attrib pointers
	for( uint32 i = 0; i < vl.elems.size(); ++i )
	{
		RBVertLayoutElem &elem = vl.elems[i];
		const RBVertBufSlot &vbSlot = _vertBufSlots[elem.vbSlot];
		
		int attribIndex = itr->second.elemAttribIndices[i];
		if( attribIndex >= 0 )
		{
			ASSERT( _buffers.getRef( _vertBufSlots[elem.vbSlot].vbObj ).glObj != 0 &&
					_buffers.getRef( _vertBufSlots[elem.vbSlot].vbObj ).type == GL_ARRAY_BUFFER );
			
			glBindBuffer( GL_ARRAY_BUFFER, _buffers.getRef( _vertBufSlots[elem.vbSlot].vbObj ).glObj );
			glVertexAttribPointer( attribIndex, elem.size, GL_FLOAT, GL_FALSE,
								   vbSlot.stride, (char *)0 + vbSlot.offset + elem.offset );
			glEnableVertexAttribArray( attribIndex );
		}
	}

	return true;
}
