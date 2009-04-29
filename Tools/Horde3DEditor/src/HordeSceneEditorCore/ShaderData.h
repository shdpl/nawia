#ifndef SHADERDATA_H_
#define SHADERDATA_H_

#include <QtCore/QStringList>
#include "QUniform.h"

struct ShaderSampler
{
	QString Id;
	int		TexUnit;
};

struct ShaderFlag
{
	int		Flag;
	QString	Name;
};

class ShaderData
{
public:
	ShaderData() : m_valid( false ) {}
	ShaderData( const QByteArray& data );
	~ShaderData();

	bool isValid() const { return m_valid; }
	QString lastError() const { return m_lastError; }

	enum BlendModes { Blend, Add, AddBlended, Mult, Replace };
	enum TestModes { Always, Equal, Less, Greater, GreaterEqual, LessEqual };

	const QStringList& includeFiles() { return m_includedFiles; }

private:
	bool loadShader( const QByteArray& data );
	bool loadCode( const QByteArray& data );
	bool parseFXSection( const QByteArray& data );


	bool raiseError( const QString& error );
	QList<ShaderSampler>		m_samplers;
	QList<QUniform*>			m_uniforms;
	QList<ShaderFlag>			m_flags;
	QStringList					m_includedFiles;
	QString						m_lastError;
	bool						m_valid;

	
};


#endif