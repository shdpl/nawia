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

#include "egTexture.h"
#include "egModules.h"
#include "egCom.h"
#include "egRenderer.h"
#include "utImage.h"

#include "utDebug.h"


namespace Horde3D {

using namespace std;

// *************************************************************************************************
// Class TextureResource
// *************************************************************************************************

#define FOURCC( c0, c1, c2, c3 ) ((c0) | (c1<<8) | (c2<<16) | (c3<<24))

#define DDSD_MIPMAPCOUNT      0x00020000

#define DDPF_ALPHAPIXELS      0x00000001
#define DDPF_FOURCC           0x00000004
#define DDPF_RGB              0x00000040

#define DDSCAPS2_CUBEMAP      0x00000200
#define DDSCAPS2_CM_COMPLETE  ( 0x00000400 | 0x00000800 | 0x00001000 | 0x00002000 | 0x00004000 | 0x00008000 )

#define D3DFMT_A16B16G16R16F  113
#define D3DFMT_A32B32G32R32F  116


struct DDSHeader
{
	uint32  dwMagic;
	uint32  dwSize;
	uint32  dwFlags;
	uint32  dwHeight, dwWidth;
	uint32  dwPitchOrLinearSize;
	uint32  dwDepth;
	uint32  dwMipMapCount;
	uint32  dwReserved1[11];

	struct {
		uint32  dwSize;
		uint32  dwFlags;
		uint32  dwFourCC;
		uint32  dwRGBBitCount;
		uint32  dwRBitMask, dwGBitMask, dwBBitMask, dwABitMask;
	} pixFormat;

	struct {
		uint32  dwCaps, dwCaps2, dwCaps3, dwCaps4;
	} caps;

	uint32  dwReserved2;
} ddsHeader;


unsigned char *TextureResource::mappedData = 0x0;
int TextureResource::mappedWriteImage = -1;
uint32 TextureResource::defTex2DObject = 0;
uint32 TextureResource::defTexCubeObject = 0;


void TextureResource::initializationFunc()
{
	unsigned char texData[] = 
		{ 128,192,255,255, 128,192,255,255, 128,192,255,255, 128,192,255,255,
		  128,192,255,255, 128,192,255,255, 128,192,255,255, 128,192,255,255,
		  128,192,255,255, 128,192,255,255, 128,192,255,255, 128,192,255,255,
		  128,192,255,255, 128,192,255,255, 128,192,255,255, 128,192,255,255 };

	// Upload default textures
	defTex2DObject = Modules::renderer().createTexture( TextureTypes::Tex2D, 4, 4,
	                                                    TextureFormats::BGRA8, true, true, false, false );
	Modules::renderer().uploadTextureData( defTex2DObject, 0, 0, texData );
	
	defTexCubeObject = Modules::renderer().createTexture( TextureTypes::TexCube, 4, 4,
	                                                      TextureFormats::BGRA8, true, true, false, false );
	for( uint32 i = 0; i < 6; ++i ) 
	{
		Modules::renderer().uploadTextureData( defTexCubeObject, i, 0, texData );
	}
}


void TextureResource::releaseFunc()
{
	Modules::renderer().releaseTexture( defTex2DObject );
	Modules::renderer().releaseTexture( defTexCubeObject );
}


TextureResource::TextureResource( const string &name, int flags ) :
	Resource( ResourceTypes::Texture, name, flags )
{
	_texType = TextureTypes::Tex2D;
	initDefault();
}


TextureResource::TextureResource( const string &name, uint32 width, uint32 height,
                                  TextureFormats::List fmt, int flags ) :
	Resource( ResourceTypes::Texture, name, flags ), _width( width ), _height( height ), _rbObj( 0 )
{	
	_loaded = true;
	_texFormat = fmt;
	
	if( flags & ResourceFlags::TexRenderable )
	{
		_flags &= ~ResourceFlags::TexCubemap;
		_flags &= ~ResourceFlags::TexSRGB;
		_flags &= ResourceFlags::NoTexCompression;
		_flags &= ResourceFlags::NoTexMipmaps;

		_texType = TextureTypes::Tex2D;
		_sRGB = false;
		_hasMipMaps= false;
		_rbObj = Modules::renderer().createRenderBuffer( width, height, fmt, false, 1, 0 ); 
		_texObject = Modules::renderer().getRenderBufferTex( _rbObj, 0 );
	}
	else
	{
		uint32 size = Modules::renderer().calcTextureSize( _texFormat, width, height );
		unsigned char *pixels = new unsigned char[size];
		memset( pixels, 0, size );
		
		_texType = flags & ResourceFlags::TexCubemap ? TextureTypes::TexCube : TextureTypes::Tex2D;
		_sRGB = (_flags & ResourceFlags::TexSRGB) != 0;
		_hasMipMaps = !(_flags & ResourceFlags::NoTexMipmaps);
		_texObject = Modules::renderer().createTexture( _texType, _width, _height, _texFormat,
		                                                _hasMipMaps, _hasMipMaps, false, _sRGB );
		Modules::renderer().uploadTextureData( _texObject, 0, 0, pixels );
		
		delete[] pixels;
		if( _texObject == 0 ) initDefault();
	}
}


TextureResource::~TextureResource()
{
	release();
}


void TextureResource::initDefault()
{
	_rbObj = 0;
	_texFormat = TextureFormats::BGRA8;
	_width = 0; _height = 0;
	_sRGB = false;
	_hasMipMaps = true;
	
	if( _texType == TextureTypes::TexCube )
		_texObject = defTexCubeObject;
	else
		_texObject = defTex2DObject;
}


void TextureResource::release()
{
	if( _rbObj != 0 )
	{
		// In this case _texObject is just points to the render buffer
		Modules::renderer().releaseRenderBuffer( _rbObj );
	}
	else if( _texObject != 0 && _texObject != defTex2DObject && _texObject != defTexCubeObject )
	{
		Modules::renderer().releaseTexture( _texObject );
	}

	_texObject = 0;
}


bool TextureResource::raiseError( const string &msg )
{
	// Reset
	release();
	initDefault();

	Modules::log().writeError( "Texture resource '%s': %s", _name.c_str(), msg.c_str() );
	
	return false;
}


bool TextureResource::load( const char *data, int size )
{
	if( !Resource::load( data, size ) ) return false;

	// Check if image is a dds
	if( size > 128 && *((uint32 *)data) == FOURCC( 'D', 'D', 'S', ' ' ) )
	{
		// Load dds
		ASSERT_STATIC( sizeof( DDSHeader ) == 128 );

		memcpy( &ddsHeader, data, 128 );
		
		// Check header
		// There are some flags that are required to be set for every dds but we don't check them
		if( ddsHeader.dwSize != 124 )
		{
			return raiseError( "Invalid DDS header" );
		}

		// Store properties
		_width = ddsHeader.dwWidth;
		_height = ddsHeader.dwHeight;
		_texFormat = TextureFormats::Unknown;
		_texObject = 0;
		_sRGB = (_flags & ResourceFlags::TexSRGB) != 0;
		int mipCount = ddsHeader.dwFlags & DDSD_MIPMAPCOUNT ? ddsHeader.dwMipMapCount : 1;
		_hasMipMaps = mipCount > 1 ? true : false;

		// Get texture type
		if( ddsHeader.caps.dwCaps2 == 0 )
		{
			_texType = TextureTypes::Tex2D;
		}
		else if( ddsHeader.caps.dwCaps2 & DDSCAPS2_CUBEMAP )
		{
			if( !(ddsHeader.caps.dwCaps2 & DDSCAPS2_CM_COMPLETE) )
				raiseError( "DDS cubemap does not contain all cube sides" );
			_texType = TextureTypes::TexCube;
		}
		else
		{
			return raiseError( "Unsupported DDS texture type" );
		}
		
		// Get pixel format
		enum { pfBGRA, pfBGR, pfBGRX, pfRGB, pfRGBX, pfRGBA } pixFmt = pfBGRA;
		
		if( ddsHeader.pixFormat.dwFlags & DDPF_FOURCC )
		{
			switch( ddsHeader.pixFormat.dwFourCC )
			{
			case FOURCC( 'D', 'X', 'T', '1' ):
				_texFormat = TextureFormats::DXT1;
				break;
			case FOURCC( 'D', 'X', 'T', '3' ):
				_texFormat = TextureFormats::DXT3;
				break;
			case FOURCC( 'D', 'X', 'T', '5' ):
				_texFormat = TextureFormats::DXT5;
				break;
			case D3DFMT_A16B16G16R16F: 
				_texFormat = TextureFormats::RGBA16F;
				break;
			case D3DFMT_A32B32G32R32F: 
				_texFormat = TextureFormats::RGBA32F;
				break;
			}
		}
		else if( ddsHeader.pixFormat.dwFlags & DDPF_RGB )
		{
			if( ddsHeader.pixFormat.dwRBitMask == 0x00ff0000 &&
			    ddsHeader.pixFormat.dwGBitMask == 0x0000ff00 &&
			    ddsHeader.pixFormat.dwBBitMask == 0x000000ff ) pixFmt = pfBGR;
			else
			if( ddsHeader.pixFormat.dwRBitMask == 0x00ff0000 &&
			    ddsHeader.pixFormat.dwGBitMask == 0x0000ff00 &&
			    ddsHeader.pixFormat.dwBBitMask == 0x000000ff ) pixFmt = pfRGB;

			if( pixFmt == pfBGR || pixFmt == pfRGB )
			{
				if( ddsHeader.pixFormat.dwRGBBitCount == 24 )
				{
					_texFormat = TextureFormats::BGRA8;
				}
				else if( ddsHeader.pixFormat.dwRGBBitCount == 32 )
				{
					if( !(ddsHeader.pixFormat.dwFlags & DDPF_ALPHAPIXELS) ||
					    ddsHeader.pixFormat.dwABitMask == 0x00000000 )
					{
						_texFormat = TextureFormats::BGRA8;
						pixFmt = pixFmt == pfBGR ? pfBGRX : pfRGBX;
					}
					else
					{	
						_texFormat = TextureFormats::BGRA8;
						pixFmt = pixFmt == pfBGR ? pfBGRA : pfRGBA;
					}
				}
			}
		}

		if( _texFormat == TextureFormats::Unknown )
			return raiseError( "Unsupported DDS pixel format" );

		// Create texture
		_texObject = Modules::renderer().createTexture(
			_texType, _width, _height, _texFormat, mipCount > 1, false, false, _sRGB );
		
		// Upload texture subresources
		int numSlices = _texType == TextureTypes::TexCube ? 6 : 1;
		unsigned char *pixels = (unsigned char *)(data + 128);

		for( int i = 0; i < numSlices; ++i )
		{
			int width = _width, height = _height;
			uint32 *dstBuf = 0x0;

			for( int j = 0; j < mipCount; ++j )
			{
				size_t mipSize =  Modules::renderer().calcTextureSize( _texFormat, width, height );
				if( pixels + mipSize > (unsigned char *)data + size )
					return raiseError( "Corrupt DDS" );

				if( _texFormat == TextureFormats::BGRA8 && pixFmt != pfBGRA )
				{
					// Convert 8 bit DDS formats to BGRA
					uint32 pixCount = width * height;
					if( dstBuf == 0x0 ) dstBuf = new uint32[pixCount * 4];
					uint32 *p = dstBuf;
	
					if( pixFmt == pfBGR )
						for( uint32 k = 0; k < pixCount * 3; k += 3 )
							*p++ = pixels[k+0] | pixels[k+1]<<8 | pixels[k+2]<<16 | 0xFF000000;
					else if( pixFmt == pfBGRX )
						for( uint32 k = 0; k < pixCount * 4; k += 4 )
							*p++ = pixels[k+0] | pixels[k+1]<<8 | pixels[k+2]<<16 | 0xFF000000;
					else if( pixFmt == pfRGB )
						for( uint32 k = 0; k < pixCount * 3; k += 3 )
							*p++ = pixels[k+2] | pixels[k+1]<<8 | pixels[k+0]<<16 | 0xFF000000;
					else if( pixFmt == pfRGBX )
						for( uint32 k = 0; k < pixCount * 4; k += 4 )
							*p++ = pixels[k+2] | pixels[k+1]<<8 | pixels[k+0]<<16 | 0xFF000000;
					else if( pixFmt == pfRGBA )
						for( uint32 k = 0; k < pixCount * 4; k += 4 )
							*p++ = pixels[k+2] | pixels[k+1]<<8 | pixels[k+0]<<16 | pixels[k+3]<<24;
					
					Modules::renderer().uploadTextureData( _texObject, i, j, dstBuf );
				}
				else
				{
					// Upload DDS data directly
					Modules::renderer().uploadTextureData( _texObject, i, j, pixels );
				}

				pixels += mipSize;
				if( width > 1 ) width >>= 1;
				if( height > 1 ) height >>= 1;
			}

			if( dstBuf != 0x0 ) delete[] dstBuf;
		}

		ASSERT( pixels == (unsigned char *)data + (size - 1) );
	}
	else
	{
		// Load image using stbi
		bool hdr = false;
		if( stbi_is_hdr_from_memory( (unsigned char *)data, size ) > 0 ) hdr = true;
		
		int comps;
		void *pixels = 0x0;
		if( hdr )
			pixels = stbi_loadf_from_memory( (unsigned char *)data, size, &_width, &_height, &comps, 4 );
		else
			pixels = stbi_load_from_memory( (unsigned char *)data, size, &_width, &_height, &comps, 4 );

		if( pixels == 0x0 )
			return raiseError( "Invalid image format (" + string( stbi_failure_reason() ) + ")" );
		
		_texType = TextureTypes::Tex2D;
		_texFormat = hdr ? TextureFormats::RGBA16F : TextureFormats::BGRA8;
		_sRGB = (_flags & ResourceFlags::TexSRGB) != 0;
		_hasMipMaps = !(_flags & ResourceFlags::NoTexMipmaps);
		
		// Create and upload texture
		_texObject = Modules::renderer().createTexture( _texType, _width, _height, _texFormat,
			_hasMipMaps, _hasMipMaps, !(_flags & ResourceFlags::NoTexCompression), _sRGB );
		Modules::renderer().uploadTextureData( _texObject, 0, 0, pixels );

		stbi_image_free( pixels );
	}

	if( _texObject == 0 ) return raiseError( "Failed to upload texture map" );

	return true;
}


int TextureResource::getMipCount()
{
	if( _hasMipMaps )
		return ftoi_t( log( (float)std::max( _width, _height ) ) / log( 2.0f ) );
	else
		return 0;
}


int TextureResource::getElemCount( int elem )
{
	switch( elem )
	{
	case TextureResData::TextureElem:
		return 1;
	case TextureResData::ImageElem:
		return _texType == TextureTypes::TexCube ? 6 * (getMipCount() + 1) : getMipCount() + 1;
	default:
		return Resource::getElemCount( elem );
	}
}


int TextureResource::getElemParamI( int elem, int elemIdx, int param )
{
	switch( elem )
	{
	case TextureResData::TextureElem:
		switch( param )
		{
		case TextureResData::TexFormatI:
			return _texFormat;
		case TextureResData::TexSliceCountI:
			return _texType == TextureTypes::TexCube ? 6 : 1;
		}
		break;
	case TextureResData::ImageElem:
		switch( param )
		{
		case TextureResData::ImgWidthI:
			if( elemIdx < getElemCount( elem ) )
			{
				int mipLevel = elemIdx % (getMipCount() + 1);
				return std::max( 1, _width >> mipLevel );
			}
			break;
		case TextureResData::ImgHeightI:
			if( elemIdx < getElemCount( elem ) )
			{
				int mipLevel = elemIdx % (getMipCount() + 1);
				return std::max( 1, _height >> mipLevel );
			}
			break;
		}
		break;
	}
	
	return Resource::getElemParamI( elem, elemIdx, param );
}


void *TextureResource::mapStream( int elem, int elemIdx, int stream, bool read, bool write )
{
	if( (read || write) && mappedData == 0x0 )
	{
		if( elem == TextureResData::ImageElem && stream == TextureResData::ImgPixelStream &&
		    elemIdx < getElemCount( elem ) )
		{
			mappedData = Modules::renderer().useScratchBuf(
				Modules::renderer().calcTextureSize( _texFormat, _width, _height ) );
			
			if( read )
			{	
				int slice = elemIdx / (getMipCount() + 1);
				int mipLevel = elemIdx % (getMipCount() + 1);
				Modules::renderer().getTextureData( _texObject, slice, mipLevel, mappedData );
			}

			if( write )
				mappedWriteImage = elemIdx;
			else
				mappedWriteImage = -1;

			return mappedData;
		}
	}

	return Resource::mapStream( elem, elemIdx, stream, read, write );
}


void TextureResource::unmapStream()
{
	if( mappedData != 0x0 )
	{
		if( mappedWriteImage >= 0 )
		{
			int slice = mappedWriteImage / (getMipCount() + 1);
			int mipLevel = mappedWriteImage % (getMipCount() + 1);
			Modules::renderer().updateTextureData( _texObject, slice, mipLevel, mappedData );
			mappedWriteImage = -1;
		}
		
		mappedData = 0x0;
		return;
	}

	Resource::unmapStream();
}

}  // namespace
