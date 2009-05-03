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

	bool operator==(const ShaderFlag& flag ) const { return Flag == flag.Flag; }
};

class ShaderData : public QObject
{
public:
	ShaderData( QObject* parent = 0) : QObject(parent), m_valid( false ) {}
	ShaderData( const QByteArray& data, QObject* parent = 0 );
	
	~ShaderData();

	bool isValid() const { return m_valid; }
	QString lastError() const { return m_lastError; }

	const QStringList& includeFiles() { return m_includedFiles; }
	
	const QList<ShaderFlag>& flags() { return m_flags; }
	const QList<QUniform*>& uniforms() { return m_uniforms; }
	const QList<ShaderSampler>& samplers() { return m_samplers; }

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