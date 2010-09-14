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

#include "egShader.h"
#include "egModules.h"
#include "egCom.h"
#include "egRenderer.h"
#include "utPlatform.h"
#include <fstream>

#include "utDebug.h"


namespace Horde3D {

using namespace std;

// =================================================================================================
// Code Resource
// =================================================================================================

CodeResource::CodeResource( const string &name, int flags ) :
	Resource( ResourceTypes::Code, name, flags )
{
	initDefault();
}


CodeResource::~CodeResource()
{
	release();
}


Resource *CodeResource::clone()
{
	CodeResource *res = new CodeResource( "", _flags );

	*res = *this;
	
	return res;
}


void CodeResource::initDefault()
{
	_flagMask = 0;
	_code.clear();
}


void CodeResource::release()
{
	for( uint32 i = 0; i < _includes.size(); ++i )
	{
		_includes[i].first = 0x0;
	}
	_includes.clear();
}


bool CodeResource::raiseError( const std::string &msg )
{
	// Reset
	release();
	initDefault();
	
	Modules::log().writeError( "Code resource '%s': %s", _name.c_str(), msg.c_str() );

	return false;
}


bool CodeResource::load( const char *data, int size )
{
	if( !Resource::load( data, size ) ) return false;

	char *code = new char[size+1];
	char *pCode = code;
	const char *pData = data;
	const char *eof = data + size;
	
	bool lineComment = false, blockComment = false;
	
	// Parse code
	while( pData < eof )
	{
		// Check for begin of comment
		if( pData < eof - 1 && !lineComment && !blockComment )
		{
			if( *pData == '/' && *(pData+1) == '/' )
				lineComment = true;
			else if( *pData == '/' &&  *(pData+1) == '*' )
				blockComment = true;
		}

		// Check for end of comment
		if( lineComment && (*pData == '\n' || *pData == '\r') )
			lineComment = false;
		else if( blockComment && pData < eof - 1 && *pData == '*' && *(pData+1) == '/' )
			blockComment = false;

		// Check for includes
		if( !lineComment && !blockComment && pData < eof - 7 )
		{
			if( *pData == '#' && *(pData+1) == 'i' && *(pData+2) == 'n' && *(pData+3) == 'c' &&
			    *(pData+4) == 'l' && *(pData+5) == 'u' && *(pData+6) == 'd' && *(pData+7) == 'e' )
			{
				pData += 6;
				
				// Parse resource name
				const char *nameBegin = 0x0, *nameEnd = 0x0;
				
				while( ++pData < eof )
				{
					if( *pData == '"' )
					{
						if( nameBegin == 0x0 )
							nameBegin = pData+1;
						else
							nameEnd = pData;
					}
					else if( *pData == '\n' || *pData == '\r' ) break;
				}

				if( nameBegin != 0x0 && nameEnd != 0x0 )
				{
					std::string resName( nameBegin, nameEnd );
					
					ResHandle res =  Modules::resMan().addResource(
						ResourceTypes::Code, resName, 0, false );
					CodeResource *codeRes = (CodeResource *)Modules::resMan().resolveResHandle( res );
					_includes.push_back( std::pair< PCodeResource, size_t >( codeRes, pCode - code ) );
				}
				else
				{
					delete[] code;
					return raiseError( "Invalid #include syntax" );
				}
			}
		}

		// Check for flags
		if( !lineComment && !blockComment && pData < eof - 4 )
		{
			if( *pData == '_' && *(pData+1) == 'F' && *(pData+4) == '_' &&
			    *(pData+2) >= 48 && *(pData+2) <= 57 && *(pData+3) >= 48 && *(pData+3) <= 57 )
			{
				// Set flag
				uint32 num = (*(pData+2) - 48) * 10 + (*(pData+3) - 48);
				_flagMask |= 1 << (num - 1);
				
				for( uint32 i = 0; i < 5; ++i ) *pCode++ = *pData++;
				
				// Ignore rest of name
				while( pData < eof && *pData != ' ' && *pData != '\t' && *pData != '\n' && *pData != '\r' )
					++pData;
			}
		}

		*pCode++ = *pData++;
	}

	*pCode = '\0';
	_code = code;
	delete[] code;

	// Compile shaders that require this code block
	updateShaders();

	return true;
}


bool CodeResource::hasDependency( CodeResource *codeRes )
{
	// Note: There is no check for cycles
	
	if( codeRes == this ) return true;
	
	for( uint32 i = 0; i < _includes.size(); ++i )
	{
		if( _includes[i].first->hasDependency( codeRes ) ) return true;
	}
	
	return false;
}


bool CodeResource::tryLinking( uint32 *flagMask )
{
	if( !_loaded ) return false;
	if( flagMask != 0x0 ) *flagMask |= _flagMask;
	
	for( uint32 i = 0; i < _includes.size(); ++i )
	{
		if( !_includes[i].first->tryLinking( flagMask ) ) return false;
	}

	return true;
}


std::string CodeResource::assembleCode()
{
	if( !_loaded ) return "";

	std::string finalCode = _code;
	uint32 offset = 0;
	
	for( uint32 i = 0; i < _includes.size(); ++i )
	{
		std::string depCode = _includes[i].first->assembleCode();
		finalCode.insert( _includes[i].second + offset, depCode );
		offset += (uint32)depCode.length();
	}

	return finalCode;
}


void CodeResource::updateShaders()
{
	for( uint32 i = 0; i < Modules::resMan().getResources().size(); ++i )
	{
		Resource *res = Modules::resMan().getResources()[i];

		if( res != 0x0 && res->getType() == ResourceTypes::Shader )
		{
			ShaderResource *shaderRes = (ShaderResource *)res;
			
			// Mark shaders using this code as uncompiled
			for( uint32 j = 0; j < shaderRes->getContexts().size(); ++j )
			{
				ShaderContext &context = shaderRes->getContexts()[j];
				
				if( shaderRes->getCode( context.vertCodeIdx )->hasDependency( this ) ||
				    shaderRes->getCode( context.fragCodeIdx )->hasDependency( this ) )
				{
					context.compiled = false;
				}
			}
			
			// Recompile shaders
			shaderRes->compileContexts();
		}
	}
}


// =================================================================================================
// Shader Resource
// =================================================================================================

class Tokenizer
{
protected:	
	
	static const ptrdiff_t tokenSize = 128;
	
	char        _token[tokenSize], _prevToken[tokenSize];
	const char  *_p;
	int         _line;


	void checkLineChange()
	{
		if( *_p == '\r' && *(_p+1) == '\n' )
		{
			++_p;
			++_line;
		}
		else if( *_p == '\r' || *_p == '\n' ) ++_line;
	}

	void skip( const char *chars )
	{
		while( *_p )
		{
			if( !strchr( chars, *_p ) ) break;
			checkLineChange();
			++_p;
		}
	}
	
	bool seekChar( const char *chars )
	{
		while( *_p )
		{
			if( strchr( chars, *_p ) ) break;
			checkLineChange();
			++_p;
		}
		return *_p != '\0';
	}
	
	void getNextToken()
	{
		// Skip whitespace
		skip( " \t\n\r" );

		// Parse token
		const char *p0 = _p, *p1 = _p;
		if( *_p == '"' )  // Handle string
		{
			++_p; ++p0;
			if( seekChar( "\"\n\r" ) ) p1 = _p++;
		}
		else
		{
			seekChar( " \t\n\r{}()<>=,;" );  // Advance until whitespace or special char found
			if( _p == p0 && *_p != '\0' ) ++_p;  // Handle special char
			p1 = _p;
		}
		memcpy( _token, p0, std::min( (ptrdiff_t)(p1 - p0), tokenSize-1 ) );
		_token[std::min( (ptrdiff_t)(p1 - p0), tokenSize-1 )] = '\0';
	}

public:
	
	Tokenizer( const char *data ) : _p( data ), _line( 1 ) { getNextToken(); }

	int getLine() { return _line; }

	bool hasToken() { return _token[0] != '\0'; }
	
	bool checkToken( const char *token, bool peekOnly = false )
	{
		if( _stricmp( _token, token ) == 0 )
		{
			if( !peekOnly ) getNextToken();
			return true;
		}
		return false;
	}

	const char *getToken( const char *charset )
	{
		if( charset )
		{
			// Validate token
			const char *p = _token;
			while( *p )
			{
				if( strchr( charset, *p++ ) == 0x0 )
				{
					_prevToken[0] = '\0';
					return _prevToken;
				}
			}
		}
		
		memcpy( _prevToken, _token, tokenSize );
		getNextToken();
		return _prevToken;
	}

	bool seekToken( const char *token )
	{
		while( _stricmp( getToken( 0x0 ), token ) != 0 )
		{
			if( !hasToken() ) return false;
		}
		return true;
	}
};

// =================================================================================================

string ShaderResource::_vertPreamble = "";
string ShaderResource::_fragPreamble = "";
string ShaderResource::_tmpCode0 = "";
string ShaderResource::_tmpCode1 = "";


ShaderResource::ShaderResource( const string &name, int flags ) :
	Resource( ResourceTypes::Shader, name, flags )
{
	initDefault();
}


ShaderResource::~ShaderResource()
{
	release();
}


void ShaderResource::initDefault()
{
}


void ShaderResource::release()
{
	for( uint32 i = 0; i < _contexts.size(); ++i )
	{
		for( uint32 j = 0; j < _contexts[i].shaderCombs.size(); ++j )
		{
			Modules::renderer().releaseShader( _contexts[i].shaderCombs[j].shaderObj );
		}
	}

	_contexts.clear();
	_samplers.clear();
	_uniforms.clear();
	//_preLoadList.clear();
	_codeSections.clear();
}


bool ShaderResource::raiseError( const string &msg, int line )
{
	// Reset
	release();
	initDefault();

	if( line < 0 )
		Modules::log().writeError( "Shader resource '%s': %s", _name.c_str(), msg.c_str() );
	else
		Modules::log().writeError( "Shader resource '%s': %s (line %i)", _name.c_str(), msg.c_str(), line );
	
	return false;
}


bool ShaderResource::parseFXSection( char *data )
{
	// Preprocessing: Replace comments with whitespace
	char *p = data;
	while( *p )
	{
		if( *p == '/' && *(p+1) == '/' )
		{
			while( *p && *p != '\n' && *p != '\r' )
				*p++ = ' ';
			if( *p == '\0' ) break;
		}
		else if( *p == '/' && *(p+1) == '*' )
		{
			*p++ = ' '; *p++ = ' ';
			while( *p && (*p != '*' || *(p+1) != '/') )
				*p++ = ' ';
			if( *p == '\0' ) return raiseError( "FX: Expected */" );
			*p++ = ' '; *p++ = ' ';
		}
		++p;
	}
	
	// Parsing
	const char *identifier = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_";
	const char *intnum = "+-0123456789";
	const char *floatnum = "+-0123456789.eE";
	
	bool unitFree[12] = {true, true, true, true, true, true, true, true, true, true, true, true}; 
	Tokenizer tok( data );

	while( tok.hasToken() )
	{
		if( tok.checkToken( "float" ) )
		{
			ShaderUniform uniform;
			uniform.size = 1;
			uniform.id = tok.getToken( identifier );
			if( uniform.id == "" ) return raiseError( "FX: Invalid identifier", tok.getLine() );
			uniform.defValues[0] = uniform.defValues[1] = uniform.defValues[2] = uniform.defValues[3] = 0.0f;
			
			// Skip annotations
			if( tok.checkToken( "<" ) )
				if( !tok.seekToken( ">" ) ) return raiseError( "FX: expected '>'", tok.getLine() );
			
			if( tok.checkToken( "=" ) )
				uniform.defValues[0] = (float)atof( tok.getToken( floatnum ) );
			if( !tok.checkToken( ";" ) ) return raiseError( "FX: expected ';'", tok.getLine() );

			_uniforms.push_back( uniform );
		}
		else if( tok.checkToken( "float4" ) )
		{
			ShaderUniform uniform;
			uniform.size = 4;
			uniform.id = tok.getToken( identifier );
			if( uniform.id == "" ) return raiseError( "FX: Invalid identifier", tok.getLine() );
			uniform.defValues[0] = uniform.defValues[1] = uniform.defValues[2] = uniform.defValues[3] = 0.0f;
			
			// Skip annotations
			if( tok.checkToken( "<" ) )
				if( !tok.seekToken( ">" ) ) return raiseError( "FX: expected '>'", tok.getLine() );
			
			if( tok.checkToken( "=" ) )
			{
				if( !tok.checkToken( "{" ) ) return raiseError( "FX: expected '{'", tok.getLine() );
				uniform.defValues[0] = (float)atof( tok.getToken( floatnum ) );
				if( tok.checkToken( "," ) ) uniform.defValues[1] = (float)atof( tok.getToken( floatnum ) );
				if( tok.checkToken( "," ) ) uniform.defValues[2] = (float)atof( tok.getToken( floatnum ) );
				if( tok.checkToken( "," ) ) uniform.defValues[3] = (float)atof( tok.getToken( floatnum ) );
				if( !tok.checkToken( "}" ) ) return raiseError( "FX: expected '}'", tok.getLine() );
			}
			if( !tok.checkToken( ";" ) ) return raiseError( "FX: expected ';'", tok.getLine() );

			_uniforms.push_back( uniform );
		}
		else if( tok.checkToken( "sampler2D", true ) || tok.checkToken( "samplerCube", true ) )
		{
			ShaderSampler sampler;
			if( tok.checkToken( "sampler2D" ) )
			{	
				sampler.type = TextureTypes::Tex2D;
				sampler.defTex = (TextureResource *)Modules::resMan().findResource( ResourceTypes::Texture, "$Tex2D" );
			}
			else if( tok.checkToken( "samplerCube" ) )
			{
				sampler.type = TextureTypes::TexCube;
				sampler.defTex = (TextureResource *)Modules::resMan().findResource( ResourceTypes::Texture, "$TexCube" );
			}
			sampler.id = tok.getToken( identifier );
			if( sampler.id == "" ) return raiseError( "FX: Invalid identifier", tok.getLine() );

			// Skip annotations
			if( tok.checkToken( "<" ) )
				if( !tok.seekToken( ">" ) ) return raiseError( "FX: expected '>'", tok.getLine() );
			
			if( tok.checkToken( "=" ) )
			{
				if( !tok.checkToken( "sampler_state" ) ) return raiseError( "FX: expected 'sampler_state'", tok.getLine() );
				if( !tok.checkToken( "{" ) ) return raiseError( "FX: expected '{'", tok.getLine() );
				while( true )
				{
					if( !tok.hasToken() )
						return raiseError( "FX: expected '}'", tok.getLine() );
					else if( tok.checkToken( "}" ) )
						break;
					else if( tok.checkToken( "Texture" ) )
					{
						if( !tok.checkToken( "=" ) ) return raiseError( "FX: expected '='", tok.getLine() );
						ResHandle texMap =  Modules::resMan().addResource(
							ResourceTypes::Texture, tok.getToken( 0x0 ), 0, false );
						sampler.defTex = (TextureResource *)Modules::resMan().resolveResHandle( texMap );
					}
					else if( tok.checkToken( "TexUnit" ) )
					{
						if( !tok.checkToken( "=" ) ) return raiseError( "FX: expected '='", tok.getLine() );
						sampler.texUnit = (int)atoi( tok.getToken( intnum ) );
						if( sampler.texUnit > 11 ) return raiseError( "FX: texUnit exceeds limit", tok.getLine() );
						if( sampler.texUnit >= 0 ) unitFree[sampler.texUnit] = false;
					}
					else if( tok.checkToken( "Address" ) )
					{
						if( !tok.checkToken( "=" ) ) return raiseError( "FX: expected '='", tok.getLine() );
						if( tok.checkToken( "Wrap" ) ) sampler.addressMode = TexAddressModes::Wrap;
						else if( tok.checkToken( "Clamp" ) ) sampler.addressMode = TexAddressModes::Clamp;
						else return raiseError( "FX: invalid enum value", tok.getLine() );
					}
					else if( tok.checkToken( "Filter" ) )
					{
						if( !tok.checkToken( "=" ) ) return raiseError( "FX: expected '='", tok.getLine() );
						if( tok.checkToken( "Trilinear" ) ) sampler.filterMode = TexFilterModes::Trilinear;
						else if( tok.checkToken( "Bilinear" ) ) sampler.filterMode = TexFilterModes::Bilinear;
						else if( tok.checkToken( "None" ) ) sampler.filterMode = TexFilterModes::None;
						else return raiseError( "FX: invalid enum value", tok.getLine() );
					}
					else if( tok.checkToken( "MaxAnisotropy" ) )
					{
						if( !tok.checkToken( "=" ) ) return raiseError( "FX: expected '='", tok.getLine() );
						sampler.maxAnisotropy = (int)atoi( tok.getToken( intnum ) );
					}
					else
						return raiseError( "FX: unexpected token", tok.getLine() );
					if( !tok.checkToken( ";" ) ) return raiseError( "FX: expected ';'", tok.getLine() );
				}
			}
			if( !tok.checkToken( ";" ) ) return raiseError( "FX: expected ';'", tok.getLine() );

			_samplers.push_back( sampler );
		}
		else if( tok.checkToken( "context" ) )
		{
			ShaderContext context;
			_tmpCode0 = _tmpCode1 = "";
			context.id = tok.getToken( identifier );
			if( context.id == "" ) return raiseError( "FX: Invalid identifier", tok.getLine() );

			// Skip annotations
			if( tok.checkToken( "<" ) )
				if( !tok.seekToken( ">" ) ) return raiseError( "FX: expected '>'", tok.getLine() );
			
			if( !tok.checkToken( "{" ) ) return raiseError( "FX: expected '{'", tok.getLine() );
			while( true )
			{
				if( !tok.hasToken() )
					return raiseError( "FX: expected '}'", tok.getLine() );
				else if( tok.checkToken( "}" ) )
					break;
				else if( tok.checkToken( "ZWriteEnable" ) )
				{
					if( !tok.checkToken( "=" ) ) return raiseError( "FX: expected '='", tok.getLine() );
					if( tok.checkToken( "true" ) ) context.writeDepth = true;
					else if( tok.checkToken( "false" ) ) context.writeDepth = false;
					else return raiseError( "FX: invalid bool value", tok.getLine() );
				}
				else if( tok.checkToken( "ZEnable" ) )
				{
					if( !tok.checkToken( "=" ) ) return raiseError( "FX: expected '='", tok.getLine() );
					if( tok.checkToken( "true" ) ) context.depthTest = true;
					else if( tok.checkToken( "false" ) ) context.depthTest = false;
					else return raiseError( "FX: invalid bool value", tok.getLine() );
				}
				else if( tok.checkToken( "ZFunc" ) )
				{
					if( !tok.checkToken( "=" ) ) return raiseError( "FX: expected '='", tok.getLine() );
					if( tok.checkToken( "LessEqual" ) ) context.depthFunc = TestModes::LessEqual;
					else if( tok.checkToken( "Always" ) ) context.depthFunc = TestModes::Always;
					else if( tok.checkToken( "Equal" ) ) context.depthFunc = TestModes::Equal;
					else if( tok.checkToken( "Less" ) ) context.depthFunc = TestModes::Less;
					else if( tok.checkToken( "Greater" ) ) context.depthFunc = TestModes::Greater;
					else if( tok.checkToken( "GreaterEqual" ) ) context.depthFunc = TestModes::GreaterEqual;
					else return raiseError( "FX: invalid enum value", tok.getLine() );
				}
				else if( tok.checkToken( "BlendMode" ) )
				{
					if( !tok.checkToken( "=" ) ) return raiseError( "FX: expected '='", tok.getLine() );
					if( tok.checkToken( "Replace" ) ) context.blendMode = BlendModes::Replace;
					else if( tok.checkToken( "Blend" ) ) context.blendMode = BlendModes::Blend;
					else if( tok.checkToken( "Add" ) ) context.blendMode = BlendModes::Add;
					else if( tok.checkToken( "AddBlended" ) ) context.blendMode = BlendModes::AddBlended;
					else if( tok.checkToken( "Mult" ) ) context.blendMode = BlendModes::Mult;
					else return raiseError( "FX: invalid enum value", tok.getLine() );
				}
				else if( tok.checkToken( "CullMode" ) )
				{
					if( !tok.checkToken( "=" ) ) return raiseError( "FX: expected '='", tok.getLine() );
					if( tok.checkToken( "Back" ) ) context.cullMode = CullModes::Back;
					else if( tok.checkToken( "Front" ) ) context.cullMode = CullModes::Front;
					else if( tok.checkToken( "None" ) ) context.cullMode = CullModes::None;
					else return raiseError( "FX: invalid enum value", tok.getLine() );
				}
				else if( tok.checkToken( "AlphaToCoverage" ) )
				{
					if( !tok.checkToken( "=" ) ) return raiseError( "FX: expected '='", tok.getLine() );
					if( tok.checkToken( "true" ) || tok.checkToken( "1" ) ) context.alphaToCoverage = true;
					else if( tok.checkToken( "false" ) || tok.checkToken( "1" ) ) context.alphaToCoverage = false;
					else return raiseError( "FX: invalid bool value", tok.getLine() );
				}
				else if( tok.checkToken( "VertexShader" ) )
				{
					if( !tok.checkToken( "=" ) || !tok.checkToken( "compile" ) || !tok.checkToken( "GLSL" ) )
						return raiseError( "FX: expected '= compile GLSL'", tok.getLine() );
					_tmpCode0 = tok.getToken( identifier );
					if( _tmpCode0 == "" ) return raiseError( "FX: Invalid name", tok.getLine() );
				}
				else if( tok.checkToken( "PixelShader" ) )
				{
					if( !tok.checkToken( "=" ) || !tok.checkToken( "compile" ) || !tok.checkToken( "GLSL" ) )
						return raiseError( "FX: expected '= compile GLSL'", tok.getLine() );
					_tmpCode1 = tok.getToken( identifier );
					if( _tmpCode1 == "" ) return raiseError( "FX: Invalid name", tok.getLine() );
				}
				else
					return raiseError( "FX: unexpected token", tok.getLine() );
				if( !tok.checkToken( ";" ) ) return raiseError( "FX: expected ';'", tok.getLine() );
			}

			// Handle shaders
			for( uint32 i = 0; i < _codeSections.size(); ++i )
			{
				if( _codeSections[i].getName() == _tmpCode0 ) context.vertCodeIdx = i;
				if( _codeSections[i].getName() == _tmpCode1 ) context.fragCodeIdx = i;
			}
			if( context.vertCodeIdx < 0 )
				return raiseError( "FX: Vertex shader referenced by context '" + context.id + "' not found" );
			if( context.fragCodeIdx < 0 )
				return raiseError( "FX: Pixel shader referenced by context '" + context.id + "' not found" );

			_contexts.push_back( context );
		}
		else
		{
			return raiseError( "FX: unexpected token", tok.getLine() );
		}
	}

	// Automatic texture unit assignment
	for( uint32 i = 0; i < _samplers.size(); ++i )
	{
		if( _samplers[i].texUnit < 0 )
		{	
			for( uint32 j = 0; j < 12; ++j )
			{
				if( unitFree[j] )
				{
					_samplers[i].texUnit = j;
					unitFree[j] = false;
					break;
				}
			}
			if( _samplers[i].texUnit < 0 )
				return raiseError( "FX: Too many samplers (not enough texture units available)" );
		}
	}
	
	return true;
}


bool ShaderResource::load( const char *data, int size )
{
	if( !Resource::load( data, size ) ) return false;
	if( data[size - 1] != '\0' )
	{	
		return raiseError( "Data block not NULL-terminated" );
	}
	
	// Parse sections
	const char *pData = data;
	char *fxCode = 0x0;
	
	while( *pData != '\0' )
	{
		if( *pData++ == '[' && *pData++ == '[' )
		{
			// Parse section name
			const char *sectionNameStart = pData;
			while( *pData != ']' && *pData != '\n' && *pData != '\r' ) ++pData;
			const char *sectionNameEnd = pData++;

			// Check for correct closing of name
			if( *pData++ != ']' ) return raiseError( "Error in section name" );
			
			// Parse content
			const char *sectionContentStart = pData;
			while( *pData != '\0' && !(*pData == '[' && *(pData+1) == '[') ) ++pData;
			const char *sectionContentEnd = pData;
			

			if( sectionNameEnd - sectionNameStart == 2 &&
			    *sectionNameStart == 'F' && *(sectionNameStart+1) == 'X' )
			{
				// FX section
				if( fxCode != 0x0 ) return raiseError( "More than one FX section" );
				fxCode = new char[sectionContentEnd - sectionContentStart + 1];
				memcpy( fxCode, sectionContentStart, sectionContentEnd - sectionContentStart );
				fxCode[sectionContentEnd - sectionContentStart] = '\0';
			}
			else
			{
				// Add section as private code resource which is not managed by resource manager
				_tmpCode0.assign( sectionNameStart, sectionNameEnd );
				_codeSections.push_back( CodeResource( _tmpCode0, 0 ) );
				_tmpCode0.assign( sectionContentStart, sectionContentEnd );
				_codeSections.back().load( _tmpCode0.c_str(), (uint32)_tmpCode0.length() );
			}
		}
	}

	if( fxCode == 0x0 ) return raiseError( "Missing FX section" );
	bool result = parseFXSection( fxCode );
	delete[] fxCode; fxCode = 0x0;
	if( !result ) return false;

	compileContexts();
	
	return true;
}


void ShaderResource::preLoadCombination( uint32 combMask )
{
	if( !_loaded )
	{
		_preLoadList.insert( combMask );
	}
	else
	{
		for( uint32 i = 0; i < _contexts.size(); ++i )
		{
			if( getCombination( _contexts[i], combMask ) == 0x0 )
				_preLoadList.insert( combMask );
		}
	}
}


void ShaderResource::compileCombination( ShaderContext &context, ShaderCombination &sc )
{
	uint32 combMask = sc.combMask;
	
	// Add preamble
	_tmpCode0 = _vertPreamble;
	_tmpCode1 = _fragPreamble;

	// Insert defines for flags
	if( combMask != 0 )
	{
		_tmpCode0 += "\r\n// ---- Flags ----\r\n";
		_tmpCode1 += "\r\n// ---- Flags ----\r\n";
		for( uint32 i = 1; i <= 32; ++i )
		{
			if( combMask & (1 << (i-1)) )
			{
				_tmpCode0 += "#define _F";
				_tmpCode0 += (char)(48 + i / 10);
				_tmpCode0 += (char)(48 + i % 10);
				_tmpCode0 += "_\r\n";
				
				_tmpCode1 += "#define _F";
				_tmpCode1 += (char)(48 + i / 10);
				_tmpCode1 += (char)(48 + i % 10);
				_tmpCode1 += "_\r\n";
			}
		}
		_tmpCode0 += "// ---------------\r\n";
		_tmpCode1 += "// ---------------\r\n";
	}

	// Add actual shader code
	_tmpCode0 += getCode( context.vertCodeIdx )->assembleCode();
	_tmpCode1 += getCode( context.fragCodeIdx )->assembleCode();

	
	Modules::log().writeInfo( "---- C O M P I L I N G  . S H A D E R . %s@%s[%i] ----",
		_name.c_str(), context.id.c_str(), sc.combMask );
	
	// Unload shader if necessary
	if( sc.shaderObj != 0 )
	{
		Modules::renderer().releaseShader( sc.shaderObj );
		sc.shaderObj = 0;
	}
	
	// Compile shader
	if( !Modules::renderer().createShaderComb( _tmpCode0.c_str(), _tmpCode1.c_str(), sc ) )
	{
		Modules::log().writeError( "Shader resource '%s': Failed to compile shader context '%s' (comb %i)",
			_name.c_str(), context.id.c_str(), sc.combMask );

		if( Modules::config().dumpFailedShaders )
		{
			std::ofstream out0( "shdDumpVS.txt", ios::binary ), out1( "shdDumpFS.txt", ios::binary );
			if( out0.good() ) out0 << _tmpCode0;
			if( out1.good() ) out1 << _tmpCode1;
			out0.close();
			out1.close();
		}
	}

	// Find samplers in compiled shader
	sc.customSamplers.reserve( _samplers.size() );
	for( uint32 i = 0; i < _samplers.size(); ++i )
	{
		sc.customSamplers.push_back(
			Modules::renderer().getShaderVar( sc.shaderObj, _samplers[i].id.c_str() ) );
		
		// Set texture unit
		Modules::renderer().setShaderVar1i( sc.shaderObj, _samplers[i].id.c_str(), _samplers[i].texUnit );
	}
	
	// Find uniforms in compiled shader
	sc.customUniforms.reserve( _uniforms.size() );
	for( uint32 i = 0; i < _uniforms.size(); ++i )
	{
		sc.customUniforms.push_back(
			Modules::renderer().getShaderVar( sc.shaderObj, _uniforms[i].id.c_str() ) );
	}

	// Output shader log
	if( Modules::renderer().getShaderLog() != "" )
		Modules::log().writeInfo( "Shader resource '%s': ShaderLog: %s", _name.c_str(), Modules::renderer().getShaderLog().c_str() );
}


void ShaderResource::compileContexts()
{
	for( uint32 i = 0; i < _contexts.size(); ++i )
	{
		ShaderContext &context = _contexts[i];

		if( !context.compiled )
		{
			context.flagMask = 0;
			if( !getCode( context.vertCodeIdx )->tryLinking( &context.flagMask ) ||
			    !getCode( context.fragCodeIdx )->tryLinking( &context.flagMask ) )
			{
				continue;
			}
			
			// Add preloaded combinations
			for( std::set< uint32 >::iterator itr = _preLoadList.begin(); itr != _preLoadList.end(); ++itr )
			{
				uint32 combMask = *itr & context.flagMask;
				
				// Check if combination already exists
				bool found = false;
				for( size_t j = 0; j < context.shaderCombs.size(); ++j )
				{
					if( context.shaderCombs[j].combMask == combMask )
					{
						found = true;
						break;
					}
				}

				if( !found )
				{	
					context.shaderCombs.push_back( ShaderCombination() );
					context.shaderCombs.back().combMask = combMask;
				}
			}
			
			for( size_t j = 0; j < context.shaderCombs.size(); ++j )
			{
				compileCombination( context, context.shaderCombs[j] );
			}

			context.compiled = true;
		}
	}
}


ShaderCombination *ShaderResource::getCombination( ShaderContext &context, uint32 combMask )
{
	if( !context.compiled ) return 0x0;
	
	// Kill combination bits that are not used by the context
	combMask &= context.flagMask;
	
	// Try to find combination
	std::vector< ShaderCombination > &combs = context.shaderCombs;
	for( size_t i = 0, s = combs.size(); i < s; ++i )
	{
		if( combs[i].combMask == combMask ) return &combs[i];
	}

	// Add combination
	combs.push_back( ShaderCombination() );
	combs.back().combMask = combMask;
	compileCombination( context, combs.back() );

	return &combs.back();
}


uint32 ShaderResource::calcCombMask( const std::vector< std::string > &flags )
{	
	uint32 combMask = 0;
	
	for( size_t i = 0, s = flags.size(); i < s; ++i )
	{
		const string &flag = flags[i];
		
		// Check format: _F<digit><digit>_
		if( flag.length() < 5 ) continue;
		if( flag[0] != '_' || flag[1] != 'F' || flag[4] != '_' ||
		    flag[2] < 48 || flag[2] > 57 || flag[3] < 48 || flag[3] > 57 ) continue;
		
		uint32 num = (flag[2] - 48) * 10 + (flag[3] - 48);
		combMask |= 1 << (num - 1);
	}
	
	return combMask;
}


int ShaderResource::getElemCount( int elem )
{
	switch( elem )
	{
	case ShaderResData::ContextElem:
		return (int)_contexts.size();
	case ShaderResData::SamplerElem:
		return (int)_samplers.size();
	case ShaderResData::UniformElem:
		return (int)_uniforms.size();
	default:
		return Resource::getElemCount( elem );
	}
}


int ShaderResource::getElemParamI( int elem, int elemIdx, int param )
{
	switch( elem )
	{
	case ShaderResData::UniformElem:
		if( (unsigned)elemIdx < _uniforms.size() )
		{
			switch( param )
			{
			case ShaderResData::UnifSizeI:
				return _uniforms[elemIdx].size;
			}
		}
		break;
	}
	
	return Resource::getElemParamI( elem, elemIdx, param );
}


float ShaderResource::getElemParamF( int elem, int elemIdx, int param, int compIdx )
{
	switch( elem )
	{
	case ShaderResData::UniformElem:
		if( (unsigned)elemIdx < _uniforms.size() )
		{
			switch( param )
			{
			case ShaderResData::UnifDefValueF4:
				if( (unsigned)compIdx < 4 ) return _uniforms[elemIdx].defValues[compIdx];
				break;
			}
		}
		break;
	}
	
	return Resource::getElemParamF( elem, elemIdx, param, compIdx );
}


void ShaderResource::setElemParamF( int elem, int elemIdx, int param, int compIdx, float value )
{
	switch( elem )
	{
	case ShaderResData::UniformElem:
		if( (unsigned)elemIdx < _uniforms.size() )
		{	
			switch( param )
			{
			case ShaderResData::UnifDefValueF4:
				if( (unsigned)compIdx < 4 )
				{	
					_uniforms[elemIdx].defValues[compIdx] = value;
					return;
				}
				break;
			}
		}
		break;
	}
	
	Resource::setElemParamF( elem, elemIdx, param, compIdx, value );
}


const char *ShaderResource::getElemParamStr( int elem, int elemIdx, int param )
{
	switch( elem )
	{
	case ShaderResData::ContextElem:
		if( (unsigned)elemIdx < _contexts.size() )
		{
			switch( param )
			{
			case ShaderResData::ContNameStr:
				return _contexts[elemIdx].id.c_str();
			}
		}
		break;
	case ShaderResData::SamplerElem:
		if( (unsigned)elemIdx < _samplers.size() )
		{
			switch( param )
			{
			case ShaderResData::SampNameStr:
				return _samplers[elemIdx].id.c_str();
			}
		}
		break;
	case ShaderResData::UniformElem:
		if( (unsigned)elemIdx < _uniforms.size() )
		{
			switch( param )
			{
			case ShaderResData::UnifNameStr:
				return _uniforms[elemIdx].id.c_str();
			}
		}
		break;
	}
	
	return Resource::getElemParamStr( elem, elemIdx, param );
}

}  // namespace
