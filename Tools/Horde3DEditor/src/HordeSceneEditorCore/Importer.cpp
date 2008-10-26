// ****************************************************************************************
//
// Horde3D Scene Editor 
// --------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// This file is part of the Horde3D Scene Editor.
//
// The Horde3D Scene Editor is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation version 3 of the License 
//
// The Horde3D Scene Editor is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// ****************************************************************************************

#include "Importer.h"
#include "OverwriteFilesDialog.h"
#include "QHordeSceneEditorSettings.h"

#include <QtXml/qdom.h>
#include <QtGui/QMessageBox>

#include <Horde3D/Horde3DUtils.h>

Importer::Importer()
{
	QHordeSceneEditorSettings settings;
	settings.beginGroup("Repository");
	m_sourceResourcePaths[ResourceTypes::SceneGraph] = settings.value("sceneGraphDir", QApplication::applicationDirPath()+QDir::separator()+"Repository"+QDir::separator()+"models").toString();
	m_sourceResourcePaths[ResourceTypes::Geometry]   = settings.value("sceneGraphDir", QApplication::applicationDirPath()+QDir::separator()+"Repository"+QDir::separator()+"models").toString();
	m_sourceResourcePaths[ResourceTypes::Material]   = settings.value("materialDir", QApplication::applicationDirPath()+QDir::separator()+"Repository"+QDir::separator()+"materials").toString();		
	m_sourceResourcePaths[ResourceTypes::Texture2D]  = settings.value("textureDir", QApplication::applicationDirPath()+QDir::separator()+"Repository"+QDir::separator()+"textures").toString();		
	m_sourceResourcePaths[ResourceTypes::TextureCube]= settings.value("textureDir", QApplication::applicationDirPath()+QDir::separator()+"Repository"+QDir::separator()+"textures").toString();		
	m_sourceResourcePaths[ResourceTypes::Shader]     = settings.value("shaderDir", QApplication::applicationDirPath()+QDir::separator()+"Repository"+QDir::separator()+"shaders").toString();		
	m_sourceResourcePaths[ResourceTypes::Effect]     = settings.value("effectsDir", QApplication::applicationDirPath()+QDir::separator()+"Repository"+QDir::separator()+"effects").toString();		
	m_sourceResourcePaths[ResourceTypes::Code]       = settings.value("shaderDir", QApplication::applicationDirPath()+QDir::separator()+"Repository"+QDir::separator()+"shaders").toString();		
	m_sourceResourcePaths[ResourceTypes::Animation]  = settings.value("animationDir", QApplication::applicationDirPath()+QDir::separator()+"Repository"+QDir::separator()+"animations").toString();		
	m_sourceResourcePaths[ResourceTypes::Pipeline]   = settings.value("pipelineDir", QApplication::applicationDirPath()+QDir::separator()+"Repository"+QDir::separator()+"pipelines").toString();		
	settings.endGroup();

}

void Importer::setTargetPath(ResourceTypes::List type, const QDir& path)
{
	m_targetResourcePaths[type] = path;
	if (!m_targetResourcePaths[type].exists())
		m_targetResourcePaths[type].mkpath(m_targetResourcePaths[type].absolutePath());

}


void Importer::setSourcePath(ResourceTypes::List type, const QDir& path)
{
	m_sourceResourcePaths[type] = path;
	if (!m_sourceResourcePaths[type].exists())
		m_sourceResourcePaths[type].mkpath(m_sourceResourcePaths[type].absolutePath());

}

void Importer::importScene(const QFileInfo& file, const QString& targetFileName)
{
	m_alreadyCopied.clear();
	m_filesToOverwrite.clear();

	importSceneFile(file, targetFileName);	
	if (!m_filesToOverwrite.isEmpty())
	{
		OverwriteFilesDialog dlg(m_filesToOverwrite);
		dlg.exec();
	}
}

void Importer::importShader(const QFileInfo& file, const QString& targetFileName, const QString& customData /*= QString()*/)
{
	m_alreadyCopied.clear();
	m_filesToOverwrite.clear();
	importShaderFile(file, targetFileName, customData);
	if (!m_filesToOverwrite.isEmpty())
	{
		OverwriteFilesDialog dlg(m_filesToOverwrite);
		dlg.exec();
	}
}

void Importer::importTexture(const QFileInfo& texture, const QString& targetFileName, ResourceTypes::List type)
{
	m_filesToOverwrite.clear();
	m_alreadyCopied.clear();
	importTextureFile(texture, targetFileName, type);
	if (!m_filesToOverwrite.isEmpty())
	{
		OverwriteFilesDialog dlg(m_filesToOverwrite);
		dlg.exec();
	}
}

void Importer::importMaterial(const QFileInfo& materialFile, const QString& targetFileName, const QString& customData /*= QString()*/)
{
	m_alreadyCopied.clear();
	m_filesToOverwrite.clear();
	importMaterialFile(materialFile, targetFileName, customData);
	if (!m_filesToOverwrite.isEmpty())
	{
		OverwriteFilesDialog dlg(m_filesToOverwrite);
		dlg.exec();
	}
}

void Importer::importEffect(const QFileInfo& effect, const QString& targetFileName, const QString& customData /*= QString()*/)
{
	m_filesToOverwrite.clear();
	m_alreadyCopied.clear();
	importEffectFile(effect, targetFileName, customData);
	if (!m_filesToOverwrite.isEmpty())
	{
		OverwriteFilesDialog dlg(m_filesToOverwrite);
		dlg.exec();
	}
}

void Importer::importPipeline(const QFileInfo& pipeline, const QString& targetFileName, const QString& customData /*= QString()*/)
{
	m_filesToOverwrite.clear();
	m_alreadyCopied.clear();
	QFileInfo target(m_targetResourcePaths[ResourceTypes::Pipeline], targetFileName);
	if (!target.absoluteDir().exists())
		m_targetResourcePaths[ResourceTypes::Pipeline].mkpath(target.absolutePath());		
	const CopyJob job(pipeline, target);

	QFile file(pipeline.absoluteFilePath());
	if (!file.copy(target.absoluteFilePath()))
	{
		if (!customData.isEmpty())
		{
			if (QMessageBox::question(0, QObject::tr("Overwrite file?"), QObject::tr("Do you want to overwrite the existing pipeline\n%1").arg(target.absoluteFilePath()), QMessageBox::Yes | QMessageBox::Default, QMessageBox::No, QMessageBox::Cancel | QMessageBox::Escape) != QMessageBox::Yes)
				return;
		}
		else if (!m_filesToOverwrite.contains(job) && !m_alreadyCopied.contains(job))
			m_filesToOverwrite.append(job);	
	}
	else
		m_alreadyCopied.append(job);

	if ( !customData.isEmpty() )
		file.setFileName(target.absoluteFilePath());

	if (!file.open(QIODevice::ReadWrite))
	{
		m_errorLog.push_back(QObject::tr("Couldn't open pipeline file %1: %2").arg(file.fileName()).arg(file.errorString()));
		return;
	}
	if ( !customData.isEmpty() )
	{		
		file.resize(customData.toLocal8Bit().size());
		file.write(customData.toLocal8Bit());
		file.seek(0);
	}
	QDomDocument root;
	root.setContent(&file);
	file.close();
	QDomNodeList materialNodes = root.documentElement().elementsByTagName("Stage");
	for( int i=0; i<materialNodes.size(); ++i )
		if( materialNodes.at(i).toElement().hasAttribute("link") )
			importMaterialFile(
				QFileInfo(m_sourceResourcePaths[ResourceTypes::Material], materialNodes.at(i).toElement().attribute("link")),
				materialNodes.at(i).toElement().attribute("link"),
				QString());

	materialNodes = root.documentElement().elementsByTagName("DrawQuad");
	for (int i=0; i<materialNodes.size(); ++i)
		if (materialNodes.at(i).toElement().hasAttribute("material"))
			importMaterialFile(
				QFileInfo(m_sourceResourcePaths[ResourceTypes::Material], materialNodes.at(i).toElement().attribute("material")),
				materialNodes.at(i).toElement().attribute("material"),
				QString());
	materialNodes = root.documentElement().elementsByTagName("SetUniform");
	for (int i=0; i<materialNodes.size(); ++i)
		if (materialNodes.at(i).toElement().hasAttribute("material"))
			importMaterialFile(
				QFileInfo(m_sourceResourcePaths[ResourceTypes::Material], materialNodes.at(i).toElement().attribute("material")),
				materialNodes.at(i).toElement().attribute("material"),
				QString());

	if (!m_filesToOverwrite.isEmpty())
	{
		OverwriteFilesDialog dlg(m_filesToOverwrite);
		dlg.exec();
	}
}

void Importer::importSceneFile(const QFileInfo& file, const QString& targetFileName)
{
	QFile sceneFile(file.absoluteFilePath());
	if (!sceneFile.open(QIODevice::ReadOnly))
	{
		m_errorLog << QObject::tr("Error opening file %1").arg(sceneFile.fileName());
		return;
	}
	QDomDocument root;
	root.setContent(&sceneFile);
	sceneFile.close();
	QFileInfo target(m_targetResourcePaths[ResourceTypes::SceneGraph], targetFileName);
	if (!target.absoluteDir().exists())
		m_targetResourcePaths[ResourceTypes::SceneGraph].mkpath(target.absolutePath());

	if (!sceneFile.copy(target.absoluteFilePath()))
	{
		CopyJob job(file, target);
		if (!m_filesToOverwrite.contains(job) && !m_alreadyCopied.contains(job))
			m_filesToOverwrite.append(job);	
	}
	else
		m_alreadyCopied.append(CopyJob(file, target));
	importEffectElement(root.documentElement());
	importMaterialElement(root.documentElement());
	importGeometrieElement(root.documentElement());	
	importSceneElement(root.documentElement());
}

void Importer::importSceneElement(const QDomElement& element)
{
	if (element.hasAttribute("sceneGraph"))
		importSceneFile(QFileInfo(m_sourceResourcePaths[ResourceTypes::SceneGraph], element.attribute("sceneGraph")), element.attribute("sceneGraph"));
	QDomNodeList childs = element.childNodes();
	for (int i=0; i<childs.count(); ++i)
		importSceneElement(childs.at(i).toElement());
}


void Importer::importMaterialFile(const QFileInfo& materialFile, const QString& targetFileName, const QString& customData )
{
	if ( !materialFile.exists() )
	{
		m_errorLog << QObject::tr("The material file %1 couldn't be found!").arg(materialFile.absoluteFilePath());		
		return;
	}

	QFileInfo target(m_targetResourcePaths[ResourceTypes::Material], targetFileName);
	if (!target.absoluteDir().exists())
		m_targetResourcePaths[ResourceTypes::Material].mkpath(target.absolutePath());


	QDomDocument material;
	const CopyJob job(materialFile, target);
		
	QFile file(materialFile.absoluteFilePath());
	if (!file.copy(target.absoluteFilePath()))
	{				
		if (!customData.isEmpty())
		{
			if (QMessageBox::question(0, QObject::tr("Overwrite file?"), QObject::tr("Do you want to overwrite the existing material\n%1").arg(target.absoluteFilePath()), QMessageBox::Yes | QMessageBox::Default, QMessageBox::No, QMessageBox::Cancel | QMessageBox::Escape) != QMessageBox::Yes)
				return;
		}
		else if ( !m_filesToOverwrite.contains(job) && !m_alreadyCopied.contains(job) )
			m_filesToOverwrite.append(job);	
	}
	else
		m_alreadyCopied.append(job);

	if ( !customData.isEmpty() )
		file.setFileName(target.absoluteFilePath());	
	
	// Linux problem?
	if( file.isOpen() ) file.close();

	if (!file.open(QIODevice::ReadWrite))
	{
		m_errorLog << QObject::tr("Couldn't open material file %1: %2").arg(file.fileName()).arg(file.errorString());
		return;
	}
	if ( !customData.isEmpty() )
	{		
		file.resize(customData.toLocal8Bit().size());
		file.write(customData.toLocal8Bit());
		file.seek(0);
	}
	material.setContent(&file);
	file.close();

	QString linkedMaterial = material.documentElement().attribute("link");
	if( !linkedMaterial.isEmpty() )
		importMaterialFile( QFileInfo(m_sourceResourcePaths[ResourceTypes::Material], linkedMaterial), linkedMaterial, QString() );

	QDomNodeList shaders = material.documentElement().elementsByTagName("Shader");
	for (int j=0; j<shaders.count(); ++j)
		importShaderFile(
			QFileInfo(m_sourceResourcePaths[ResourceTypes::Shader], shaders.at(j).toElement().attribute("source")),
			shaders.at(j).toElement().attribute("source"),
			QString());
	QDomNodeList textures = material.documentElement().elementsByTagName("TexUnit");
	for (int j=0; j<textures.count(); ++j)
	{
		if (textures.at(j).toElement().attribute("type")=="CUBE")
			importTextureFile(
				QFileInfo(m_sourceResourcePaths[ResourceTypes::TextureCube], textures.at(j).toElement().attribute("map")), 
				textures.at(j).toElement().attribute("map"), ResourceTypes::TextureCube);
		else
			importTextureFile(
				QFileInfo(m_sourceResourcePaths[ResourceTypes::Texture2D], textures.at(j).toElement().attribute("map")),
				textures.at(j).toElement().attribute("map"), ResourceTypes::Texture2D);		
	}
}

void Importer::importMaterialElement(const QDomElement& element)
{
	if (element.hasAttribute("material"))		
		importMaterialFile(
			QFileInfo(m_sourceResourcePaths[ResourceTypes::Material], element.attribute("material")), 
			element.attribute("material"), 
			QString());		
	QDomNodeList childs = element.childNodes();
	for (int i=0; i<childs.count(); ++i)
		importMaterialElement(childs.at(i).toElement());		
}

void Importer::importShaderFile(const QFileInfo& shader, const QString& targetFileName, const QString& customData)
{			
	if ( !shader.exists() )
	{
		m_errorLog << QObject::tr("The shader file %1 couldn't be found!").arg(shader.absoluteFilePath());
		return;
	}

	QFileInfo target(m_targetResourcePaths[ResourceTypes::Shader], targetFileName);
	if (!target.absoluteDir().exists())
		m_targetResourcePaths[ResourceTypes::Shader].mkpath(target.absolutePath());

	QDomDocument shaderXml;
	const CopyJob job(shader, target);
	QFile file(shader.absoluteFilePath());
	if (!file.copy(target.absoluteFilePath()) && !m_filesToOverwrite.contains(job) && !m_alreadyCopied.contains(job) )
	{			
		if (!customData.isEmpty())
		{
			if (QMessageBox::question(0, QObject::tr("Overwrite file?"), QObject::tr("Do you want to overwrite the existing shader\n%1").arg(shader.absoluteFilePath()), QMessageBox::Yes | QMessageBox::Default, QMessageBox::No, QMessageBox::Cancel | QMessageBox::Escape) != QMessageBox::Yes)
				return;
		}
		else
			m_filesToOverwrite.append(job);
	}
	else
		m_alreadyCopied.append(job);

	file.setFileName(target.absoluteFilePath());	
	if (!file.open(QIODevice::ReadWrite))
	{
		m_errorLog.push_back(QObject::tr("Couldn't open shader file %1").arg(file.fileName()));
		return;
	}
	if ( !customData.isEmpty() )
	{		
		file.resize(customData.toLocal8Bit().size());
		file.write(customData.toLocal8Bit());
		file.seek(0);
	}
	shaderXml.setContent(&file);
	file.close();
	QDomNodeList codes = shaderXml.elementsByTagName("InsCode");
	for (int i=0; i<codes.count(); ++i)
	{		
		target = QFileInfo(m_targetResourcePaths[ResourceTypes::Code], codes.at(i).toElement().attribute("code"));
		if (!target.absoluteDir().exists())
			m_targetResourcePaths[ResourceTypes::Code].mkpath(target.absolutePath());
		QFileInfo source(m_sourceResourcePaths[ResourceTypes::Code], codes.at(i).toElement().attribute("code"));
		CopyJob job(source, target);
		if (!job.exec() && !m_filesToOverwrite.contains(job) && !m_alreadyCopied.contains(job))
			m_filesToOverwrite.append(job);
		else
			m_alreadyCopied.append(job);
	}
}


void Importer::importTextureFile(const QFileInfo& textureFile, const QString& targetFileName, ResourceTypes::List type)
{
	QFileInfo target = QFileInfo(m_targetResourcePaths[type], targetFileName);
	if (!target.absoluteDir().exists())
		m_targetResourcePaths[type].mkpath(target.absolutePath());

	const CopyJob job(textureFile, target);
	if (!job.exec() && !m_filesToOverwrite.contains(job) && !m_alreadyCopied.contains(job))
		m_filesToOverwrite.append(job);		
	else
		m_alreadyCopied.append(job);
}




void Importer::importGeometrieElement(const QDomElement& element)
{
	if (element.hasAttribute("geometry"))
	{
		QFileInfo source = QFileInfo(m_sourceResourcePaths[ResourceTypes::Geometry], element.attribute("geometry"));
		QFile geometryFile(source.absoluteFilePath());
		QFileInfo target(m_targetResourcePaths[ResourceTypes::Geometry], element.attribute("geometry"));
		if (!target.absoluteDir().exists())
			QDir(Horde3DUtils::getResourcePath(ResourceTypes::Geometry)).mkpath(target.absolutePath());
		if (!geometryFile.copy(target.absoluteFilePath()))
		{
			CopyJob job(source, target);
			if (!m_filesToOverwrite.contains(job) && !m_alreadyCopied.contains(job))
				m_filesToOverwrite.append(job);	
		}
		else
			m_alreadyCopied.append(CopyJob(source, target));
	}
	QDomNodeList childs = element.childNodes();
	for (int i=0; i<childs.count(); ++i)
		importGeometrieElement(childs.at(i).toElement());
}

void Importer::importEffectFile(const QFileInfo& effectFile, const QString& targetFileName, const QString& customData)
{
	QFileInfo target(m_targetResourcePaths[ResourceTypes::Effect], targetFileName);
	if (!target.absoluteDir().exists())
		m_targetResourcePaths[ResourceTypes::Effect].mkpath(target.absolutePath());		
	const CopyJob job(effectFile, target);
	if (!job.exec() && !m_filesToOverwrite.contains(job) && !m_alreadyCopied.contains(job))
	{
		if (!customData.isEmpty())
		{
			if (QMessageBox::question(0, QObject::tr("Overwrite file?"), QObject::tr("Do you want to overwrite the existing effect\n%1").arg(effectFile.absoluteFilePath()), QMessageBox::Yes | QMessageBox::Default, QMessageBox::No, QMessageBox::Cancel | QMessageBox::Escape) != QMessageBox::Yes)
				return;
			QFile targetFile(target.absoluteFilePath());
			if (!targetFile.open(QIODevice::WriteOnly | QIODevice::Truncate))
				m_errorLog.push_back(QObject::tr("Error opening %1 for writing!").arg(target.absoluteFilePath()));
			else
				targetFile.write(customData.toLocal8Bit());
			targetFile.close();
		}
		else
			m_filesToOverwrite.append(job);		
	}
	else
		m_alreadyCopied.append(job);
}

void Importer::importEffectElement(const QDomElement& element)
{
	if (element.hasAttribute("effect"))
	{
		QFileInfo effectFile(m_sourceResourcePaths[ResourceTypes::Effect], element.attribute("effect"));
		importEffectFile(effectFile, element.attribute("effect"), QString());
	}
	QDomNodeList childs = element.childNodes();
	for (int i=0; i<childs.count(); ++i)
		importEffectElement(childs.at(i).toElement());		
}


