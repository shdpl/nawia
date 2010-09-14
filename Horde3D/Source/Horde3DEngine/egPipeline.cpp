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

#include "egPipeline.h"
#include "egMaterial.h"
#include "egModules.h"
#include "egCom.h"
#include "egRenderer.h"
#include "utXML.h"
#include "utPlatform.h"
#include <fstream>

#include "utDebug.h"


namespace Horde3D {

using namespace std;


PipelineResource::PipelineResource( const string &name, int flags ) :
	Resource( ResourceTypes::Pipeline, name, flags )
{
	initDefault();	
}


PipelineResource::~PipelineResource()
{
	release();
}


void PipelineResource::initDefault()
{
}


void PipelineResource::release()
{
	releaseRenderTargets();

	for( uint32 i = 0; i < _stages.size(); ++i )
	{
		for( uint32 j = 0; j < _stages[i].commands.size(); ++j )
		{
			for( uint32 k = 0; k < _stages[i].commands[j].valParams.size(); ++k )
			{
				delete _stages[i].commands[j].valParams[k];
			}

			for( uint32 k = 0; k < _stages[i].commands[j].resParams.size(); ++k )
			{
				if( _stages[i].commands[j].resParams[k] != 0x0 )
					Modules::resMan().removeResource( *_stages[i].commands[j].resParams[k], false );
			}
		}
	}

	_renderTargets.clear();
	_stages.clear();
}


bool PipelineResource::raiseError( const string &msg, int line )
{
	// Reset
	release();
	initDefault();

	if( line < 0 )
		Modules::log().writeError( "Pipeline resource '%s': %s", _name.c_str(), msg.c_str() );
	else
		Modules::log().writeError( "Pipeline resource '%s' in line %i: %s", _name.c_str(), line, msg.c_str() );
	
	return false;
}


const string PipelineResource::parseStage( XMLNode &node, PipelineStage &stage )
{
	stage.id = node.getAttribute( "id", "" );
	
	if( _stricmp( node.getAttribute( "enabled", "true" ), "false" ) == 0 ||
		_stricmp( node.getAttribute( "enabled", "1" ), "0" ) == 0 )
		stage.enabled = false;
	else
		stage.enabled = true;

	if( strcmp( node.getAttribute( "link", "" ), "" ) != 0 )
	{
		uint32 mat = Modules::resMan().addResource(
			ResourceTypes::Material, node.getAttribute( "link" ), 0, false );
		stage.matLink = (MaterialResource *)Modules::resMan().resolveResHandle( mat );
	}
	
	XMLNode node1 = node.getFirstChild();
	while( !node1.isEmpty() && node1.getName() != 0x0 )
	{
		if( strcmp( node1.getName(), "SwitchTarget" ) == 0 )
		{
			if( node1.getAttribute( "target" ) == 0x0 ) return "Missing SwitchTarget attribute 'target'";
			
			if( strcmp( node1.getAttribute( "target" ), "" ) == 0 )
			{
				stage.commands.push_back( PipelineCommand( PipelineCommands::SwitchTarget ) );
				stage.commands.back().refParams.push_back( 0x0 );
			}
			else
			{
				if( findRenderTarget( node1.getAttribute( "target" ) ) == 0x0 ) return "Reference to undefined render target in SwitchTarget";
				stage.commands.push_back( PipelineCommand( PipelineCommands::SwitchTarget ) );
				stage.commands.back().refParams.push_back( findRenderTarget( node1.getAttribute( "target" ) ) );
			}
		}
		else if( strcmp( node1.getName(), "BindBuffer" ) == 0 )
		{
			if( node1.getAttribute( "sampler" ) == 0x0 || node1.getAttribute( "sourceRT" ) == 0x0 ||
				node1.getAttribute( "bufIndex" ) == 0x0 ) return "Missing BindBuffer attribute";
			if( findRenderTarget( node1.getAttribute( "sourceRT" ) ) == 0x0 ) return "Reference to undefined render target in BindBuffer";
			stage.commands.push_back( PipelineCommand( PipelineCommands::BindBuffer ) );
			stage.commands.back().refParams.push_back( findRenderTarget( node1.getAttribute( "sourceRT" ) ) );
			vector< PCParam * > &valParams = stage.commands.back().valParams;
			valParams.resize( 2 );
			valParams[0] = new PCStringParam( node1.getAttribute( "sampler" ) );
			valParams[1] = new PCIntParam( atoi( node1.getAttribute( "bufIndex" ) ) );
		}
		else if( strcmp( node1.getName(), "UnbindBuffers" ) == 0 )
		{
			stage.commands.push_back( PipelineCommand( PipelineCommands::UnbindBuffers ) );
		}
		else if( strcmp( node1.getName(), "ClearTarget" ) == 0 )
		{
			stage.commands.push_back( PipelineCommand( PipelineCommands::ClearTarget ) );
			
			vector< PCParam * > &valParams = stage.commands.back().valParams;
			valParams.resize( 9 );
			valParams[0] = new PCBoolParam( false );
			valParams[1] = new PCBoolParam( false );
			valParams[2] = new PCBoolParam( false );
			valParams[3] = new PCBoolParam( false );
			valParams[4] = new PCBoolParam( false );
			valParams[5] = new PCFloatParam( (float)atof( node1.getAttribute( "col_R", "0" ) ) );
			valParams[6] = new PCFloatParam( (float)atof( node1.getAttribute( "col_G", "0" ) ) );
			valParams[7] = new PCFloatParam( (float)atof( node1.getAttribute( "col_B", "0" ) ) );
			valParams[8] = new PCFloatParam( (float)atof( node1.getAttribute( "col_A", "0" ) ) );
			
			if( _stricmp( node1.getAttribute( "depthBuf", "false" ), "true" ) == 0 ||
				_stricmp( node1.getAttribute( "depthBuf", "0" ), "1" ) == 0 )
				((PCBoolParam *)valParams[0])->set( true );
			
			if( _stricmp( node1.getAttribute( "colBuf0", "false" ), "true" ) == 0 ||
				_stricmp( node1.getAttribute( "colBuf0", "0" ), "1" ) == 0 )
				((PCBoolParam *)valParams[1])->set( true );

			if( _stricmp( node1.getAttribute( "colBuf1", "false" ), "true" ) == 0 ||
				_stricmp( node1.getAttribute( "colBuf1", "0" ), "1" ) == 0 )
				((PCBoolParam *)valParams[2])->set( true );

			if( _stricmp( node1.getAttribute( "colBuf2", "false" ), "true" ) == 0 ||
				_stricmp( node1.getAttribute( "colBuf2", "0" ), "1" ) == 0 )
				((PCBoolParam *)valParams[3])->set( true );

			if( _stricmp( node1.getAttribute( "colBuf3", "false" ), "true" ) == 0 ||
				_stricmp( node1.getAttribute( "colBuf3", "0" ), "1" ) == 0 )
				((PCBoolParam *)valParams[4])->set( true );
		}
		else if( strcmp( node1.getName(), "DrawGeometry" ) == 0 )
		{
			if( node1.getAttribute( "context" ) == 0x0 ) return "Missing DrawGeometry attribute 'context'";
			stage.commands.push_back( PipelineCommand( PipelineCommands::DrawGeometry ) );
			stage.commands.back().valParams.push_back( new PCStringParam( node1.getAttribute( "context" ) ) );
			stage.commands.back().valParams.push_back( new PCStringParam( node1.getAttribute( "class", "" ) ) );
			
			string orderString = node1.getAttribute( "order", "" );
			int order = RenderingOrder::StateChanges;
			if( orderString == "FRONT_TO_BACK" ) order = RenderingOrder::FrontToBack;
			else if( orderString == "BACK_TO_FRONT" ) order = RenderingOrder::BackToFront;
			else if( orderString == "NONE" ) order = RenderingOrder::None;
			stage.commands.back().valParams.push_back( new PCIntParam( order ) );
		}
		else if( strcmp( node1.getName(), "DrawOverlays" ) == 0 )
		{
			if( node1.getAttribute( "context" ) == 0x0 ) return "Missing DrawOverlays attribute 'context'";
			stage.commands.push_back( PipelineCommand( PipelineCommands::DrawOverlays ) );
			stage.commands.back().valParams.push_back( new PCStringParam( node1.getAttribute( "context" ) ) );
		}
		else if( strcmp( node1.getName(), "DrawQuad" ) == 0 )
		{
			if( node1.getAttribute( "material" ) == 0x0 ) return "Missing DrawQuad attribute 'material'";
			if( node1.getAttribute( "context" ) == 0x0 ) return "Missing DrawQuad attribute 'context'";
			stage.commands.push_back( PipelineCommand( PipelineCommands::DrawQuad ) );
			uint32 matRes = Modules::resMan().addResource(
				ResourceTypes::Material, node1.getAttribute( "material" ), 0, false );
			stage.commands.back().resParams.push_back( Modules::resMan().resolveResHandle( matRes ) );
			stage.commands.back().valParams.push_back( new PCStringParam( node1.getAttribute( "context" ) ) );
		}
		else if( strcmp( node1.getName(), "DoForwardLightLoop" ) == 0 )
		{
		    stage.commands.push_back( PipelineCommand( PipelineCommands::DoForwardLightLoop ) );
		    stage.commands.back().valParams.push_back( new PCStringParam( node1.getAttribute( "context", "" ) ) );
			stage.commands.back().valParams.push_back( new PCStringParam( node1.getAttribute( "class", "" ) ) );
			stage.commands.back().valParams.push_back( new PCBoolParam(
				_stricmp( node1.getAttribute( "noShadows", "false" ), "true" ) == 0 ) );

			string orderString = node1.getAttribute( "order", "" );
			int order = RenderingOrder::StateChanges;
			if( orderString == "FRONT_TO_BACK" ) order = RenderingOrder::FrontToBack;
			else if( orderString == "BACK_TO_FRONT" ) order = RenderingOrder::BackToFront;
			else if( orderString == "NONE" ) order = RenderingOrder::None;
			stage.commands.back().valParams.push_back( new PCIntParam( order ) );
		}
		else if( strcmp( node1.getName(), "DoDeferredLightLoop" ) == 0 )
		{
			stage.commands.push_back( PipelineCommand( PipelineCommands::DoDeferredLightLoop ) );
			stage.commands.back().valParams.push_back( new PCStringParam( node1.getAttribute( "context", "" ) ) );
			stage.commands.back().valParams.push_back( new PCBoolParam(
				_stricmp( node1.getAttribute( "noShadows", "false" ), "true" ) == 0 ) );
		}
		else if( strcmp( node1.getName(), "SetUniform" ) == 0 )
		{
			if( node1.getAttribute( "material" ) == 0x0 ) return "Missing SetUniform attribute 'material'";
			if( node1.getAttribute( "uniform" ) == 0x0 ) return "Missing SetUniform attribute 'uniform'";
			stage.commands.push_back( PipelineCommand( PipelineCommands::SetUniform ) );
			uint32 matRes = Modules::resMan().addResource(
				ResourceTypes::Material, node1.getAttribute( "material" ), 0, false );
			stage.commands.back().resParams.push_back( Modules::resMan().resolveResHandle( matRes ) );

			vector< PCParam * > &valParams = stage.commands.back().valParams;
			valParams.resize( 5 );
			valParams[0] = new PCStringParam( node1.getAttribute( "uniform" ) );
			valParams[1] = new PCFloatParam( (float)atof( node1.getAttribute( "a", "0" ) ) );
			valParams[2] = new PCFloatParam( (float)atof( node1.getAttribute( "b", "0" ) ) );
			valParams[3] = new PCFloatParam( (float)atof( node1.getAttribute( "c", "0" ) ) );
			valParams[4] = new PCFloatParam( (float)atof( node1.getAttribute( "d", "0" ) ) );
		}

		node1 = node1.getNextSibling();
	}

	return "";
}


void PipelineResource::addRenderTarget( const string &id, bool depthBuf, uint32 numColBufs,
										TextureFormats::List format, uint32 samples,
										uint32 width, uint32 height, float scale )
{
	RenderTarget rt;
	
	rt.id = id;
	rt.hasDepthBuf = depthBuf;
	rt.numColBufs = numColBufs;
	rt.format = format;
	rt.samples = samples;
	rt.width = width;
	rt.height = height;
	rt.scale = scale;

	_renderTargets.push_back( rt );
}


RenderTarget *PipelineResource::findRenderTarget( const string &id )
{
	if( id == "" ) return 0x0;
	
	for( uint32 i = 0; i < _renderTargets.size(); ++i )
	{
		if( _renderTargets[i].id == id )
		{
			return &_renderTargets[i];
		}
	}
	
	return 0x0;
}


bool PipelineResource::createRenderTargets()
{
	for( uint32 i = 0; i < _renderTargets.size(); ++i )
	{
		RenderTarget &rt = _renderTargets[i];
	
		uint32 width = ftoi_r( rt.width * rt.scale ), height = ftoi_r( rt.height * rt.scale );
		if( width == 0 ) width = ftoi_r( Modules::renderer().getVPWidth() * rt.scale );
		if( height == 0 ) height = ftoi_r( Modules::renderer().getVPHeight() * rt.scale );
		
		rt.rendBuf = Modules::renderer().createRenderBuffer(
			width, height, rt.format, rt.hasDepthBuf, rt.numColBufs, rt.samples );
		if( rt.rendBuf == 0 ) return false;
	}
	
	return true;
}


void PipelineResource::releaseRenderTargets()
{
	for( uint32 i = 0; i < _renderTargets.size(); ++i )
	{
		RenderTarget &rt = _renderTargets[i];
		if( rt.rendBuf )
			Modules::renderer().releaseRenderBuffer( rt.rendBuf );
	}
}


bool PipelineResource::load( const char *data, int size )
{
	if( !Resource::load( data, size ) ) return false;

	XMLDoc doc;
	doc.parseBuffer( data, size );
	if( doc.hasError() )
		return raiseError( "XML parsing error" );

	XMLNode rootNode = doc.getRootNode();
	if( strcmp( rootNode.getName(), "Pipeline" ) != 0 )
		return raiseError( "Not a pipeline resource file" );

	// Parse setup
	XMLNode node1 = rootNode.getFirstChild( "Setup" );
	if( !node1.isEmpty() )
	{
		XMLNode node2 = node1.getFirstChild( "RenderTarget" );
		while( !node2.isEmpty() )
		{
			if( node2.getAttribute( "id" ) == 0x0 ) return raiseError( "Missing RenderTarget attribute 'id'" );
			string id = node2.getAttribute( "id" );
			
			if( node2.getAttribute( "depthBuf" ) == 0x0 ) return raiseError( "Missing RenderTarget attribute 'depthBuf'" );
			bool depth = false;
			if( _stricmp( node2.getAttribute( "depthBuf" ), "true" ) == 0 ) depth = true;
			
			if( node2.getAttribute( "numColBufs" ) == 0x0 ) return raiseError( "Missing RenderTarget attribute 'numColBufs'" );
			uint32 numBuffers = atoi( node2.getAttribute( "numColBufs" ) );
			
			TextureFormats::List format = TextureFormats::BGRA8;
			if( node2.getAttribute( "format" ) != 0x0 )
			{
				if( _stricmp( node2.getAttribute( "format" ), "RGBA8" ) == 0 )
					format = TextureFormats::BGRA8;
				else if( _stricmp( node2.getAttribute( "format" ), "RGBA16F" ) == 0 )
					format = TextureFormats::RGBA16F;
				else if( _stricmp( node2.getAttribute( "format" ), "RGBA32F" ) == 0 )
					format = TextureFormats::RGBA32F;
				else return raiseError( "Unknown RenderTarget format" );
			}

			int maxSamples = atoi( node2.getAttribute( "maxSamples", "0" ) );

			uint32 width = atoi( node2.getAttribute( "width", "0" ) );
			uint32 height = atoi( node2.getAttribute( "height", "0" ) );
			float scale = (float)atof( node2.getAttribute( "scale", "1" ) );

			addRenderTarget( id, depth, numBuffers, format,
				std::min( maxSamples, Modules::config().sampleCount ), width, height, scale );

			node2 = node2.getNextSibling( "RenderTarget" );
		}
	}

	// Parse commands
	node1 = rootNode.getFirstChild( "CommandQueue" );
	if( !node1.isEmpty() )
	{
		XMLNode node2 = node1.getFirstChild( "Stage" );
		while( !node2.isEmpty() )
		{
			_stages.push_back( PipelineStage() );
			string errorMsg = parseStage( node2, _stages.back() );
			if( errorMsg != "" ) 
				return raiseError( "Error in stage '" + _stages.back().id + "': " + errorMsg );
			
			node2 = node2.getNextSibling( "Stage" );
		}
	}

	// Create render targets
	if( !createRenderTargets() )
	{
		return raiseError( "Failed to create render target" );
	}

	return true;
}


void PipelineResource::resize()
{
	// Recreate render targets
	releaseRenderTargets();
	createRenderTargets();
}


int PipelineResource::getElemCount( int elem )
{
	switch( elem )
	{
	case PipelineResData::StageElem:
		return (int)_stages.size();
	default:
		return Resource::getElemCount( elem );
	}
}


int PipelineResource::getElemParamI( int elem, int elemIdx, int param )
{
	switch( elem )
	{
	case PipelineResData::StageElem:
		if( (unsigned)elemIdx < _stages.size() )
		{
			switch( param )
			{
			case PipelineResData::StageActivationI:
				return _stages[elemIdx].enabled ? 1 : 0;
			}
		}
		break;
	}

	return Resource::getElemParamI( elem, elemIdx, param );
}


void PipelineResource::setElemParamI( int elem, int elemIdx, int param, int value )
{
	switch( elem )
	{
	case PipelineResData::StageElem:
		if( (unsigned)elemIdx < _stages.size() )
		{
			switch( param )
			{
			case PipelineResData::StageActivationI:
				_stages[elemIdx].enabled = (value == 0) ? 0 : 1;
				return;
			}
		}
		break;
	}

	Resource::setElemParamI( elem, elemIdx, param, value );
}


const char *PipelineResource::getElemParamStr( int elem, int elemIdx, int param )
{
	switch( elem )
	{
	case PipelineResData::StageElem:
		if( (unsigned)elemIdx < _stages.size() )
		{
			switch( param )
			{
			case PipelineResData::StageNameStr:
				return _stages[elemIdx].id.c_str();
			}
		}
		break;
	}

	return Resource::getElemParamStr( elem, elemIdx, param );
}


bool PipelineResource::getRenderTargetData( const string &target, int bufIndex, int *width, int *height,
                                            int *compCount, void *dataBuffer, int bufferSize )
{
	uint32 rbObj = 0;
	if( target != "" )
	{	
		RenderTarget *rt = findRenderTarget( target );
		if( rt == 0x0 ) return false;
		else rbObj = rt->rendBuf;
	}
	
	return Modules::renderer().getRenderBufferData(
		rbObj, bufIndex, width, height, compCount, dataBuffer, bufferSize );
}

}  // namespace
