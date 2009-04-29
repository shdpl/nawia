#include "ShaderData.h"

#include <QtXml\QDomDocument>

typedef unsigned int uint32;

ShaderData::ShaderData( const QByteArray& data )
{	
	m_valid = loadShader( data );
}

ShaderData::~ShaderData()
{
	qDeleteAll( m_uniforms );
}

bool ShaderData::loadShader( const QByteArray& data )
{
	// Parse sections
	const char *pData = data.constData();
	QByteArray tmpCode;
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
				// Parse FX section
				tmpCode = "<Shader>";
				tmpCode.append( QByteArray( sectionContentStart, sectionContentEnd - sectionContentStart ) );
				tmpCode += "</Shader>";
			}
			else
			{				
				// Add section as private code resource which is not managed by resource manager
				QByteArray tmpCode0( sectionNameStart, sectionNameEnd - sectionNameStart );
								
				// Code section name currently not used 
				QByteArray tmpCode1( sectionContentStart, sectionContentEnd - sectionContentStart );
				loadCode( tmpCode1 );
			}
		}
	}

	if( tmpCode.isEmpty() ) return raiseError( "Missing FX section" );
	if( !parseFXSection( tmpCode ) ) return false;
	return true;
}

bool ShaderData::loadCode( const QByteArray& data )
{
	const char* pData = data.constData();
	bool lineComment = false, blockComment = false;		
	const char* eof = pData + data.size();	
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
					QString resName = QString::fromLocal8Bit( nameBegin, nameEnd - nameBegin );																	
					m_includedFiles.append( resName );
				}
			}
		}

			// Check for flags
		if( !lineComment && !blockComment && pData < eof - 4 )
		{
			if( *pData == '_' && *(pData+1) == 'F' && *(pData+4) == '_' &&
			    *(pData+2) >= 48 && *(pData+2) <= 57 && *(pData+3) >= 48 && *(pData+3) <= 57 )
			{
				ShaderFlag flag;
				// Set flag
				flag.Flag = (*(pData+2) - 48) * 10 + (*(pData+3) - 48);
							
				pData += 5;
				// Ignore rest of name
				while( pData < eof && *pData != ' ' && *pData != '\t' && *pData != '\n' && *pData != '\r' )
					flag.Name.append( *pData++ );
				m_flags.append( flag );
			}
		}

		++pData;
	}
	return true;
}

bool ShaderData::parseFXSection(const QByteArray &data)
{
	QString errorMsg;
	int errorLine, errorColumn;
	// Parse FX section
	QDomDocument doc;
	if( !doc.setContent( data, &errorMsg, &errorLine, &errorColumn ) )
		return raiseError( QObject::tr("Error (%1) in FX section, line %2, column %3").arg(errorMsg).arg(errorLine).arg(errorColumn) );		

	// Parse samplers
	bool unitFree[12] = {true, true, true, true, true, true, true, true, true, true, true, true}; 
		
	QDomElement node1 = doc.documentElement().firstChildElement( "Sampler" );
	while( !node1.isNull() )
	{
		if( node1.attribute( "id" ) == 0x0 ) return raiseError( "Missing Sampler attribute 'id'" );
		
		ShaderSampler sampler;

		sampler.Id = node1.attribute( "id" );
		sampler.TexUnit = node1.attribute( "texUnit", "-1" ).toInt();
		if( sampler.TexUnit > 11 ) return raiseError( "texUnit exceeds limit" );
		// Shouldn't unitFree checked before?
		if( sampler.TexUnit >= 0 ) unitFree[sampler.TexUnit] = false;

		m_samplers.push_back( sampler );

		node1 = node1.nextSiblingElement( "Sampler" );
	}

	// Parse uniforms
	node1 = doc.documentElement().firstChildElement( "Uniform" );
	while( !node1.isNull() )
	{
		if( !node1.hasAttribute( "id" ) ) return raiseError( "Missing Uniform attribute 'id'" );
		
		QUniform* uniform = new QUniform( node1 );
		m_uniforms.push_back( uniform );
		
		node1 = node1.nextSiblingElement( "Uniform" );
	}

	// Automatic texture unit assignment
	for( uint32 i = 0; i < m_samplers.size(); ++i )
	{
		if( m_samplers[i].TexUnit < 0 )
		{	
			for( uint32 j = 0; j < 12; ++j )
			{
				if( unitFree[j] )
				{
					m_samplers[i].TexUnit = j;
					unitFree[j] = false;
					break;
				}
			}
			if( m_samplers[i].TexUnit < 0 )
				return raiseError( "Automatic texture unit assignment: No free unit found" );
		}
	}

	return true;
}

bool ShaderData::raiseError( const QString& error )
{
	m_lastError = error;
	return false;
}