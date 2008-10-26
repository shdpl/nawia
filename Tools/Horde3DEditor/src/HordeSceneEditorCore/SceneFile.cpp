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

#include "SceneFile.h"

#include "PlugInManager.h"
#include "AttachmentPlugIn.h"

#include <QtGui/QMessageBox>
#include <QtGui/QApplication>
#include <QtCore/QFile>
#include <QtCore/QTextStream>
#include <QtGui/QUndoStack>

#include <Horde3D/Horde3D.h>
#include <Horde3D/Horde3DUtils.h>

SceneFile* SceneFile::load(const QString &sceneFileName)
{
	QFile config(sceneFileName);
	if (!config.open(QIODevice::ReadOnly))
	{
		QMessageBox::warning(0, "Error", "Error opening file: " + sceneFileName+ "!\n\n" + config.errorString());
		return 0;
	}
	SceneFile* scene = new SceneFile();
	// read xml files 
	QString errorMsg;
	int errorLine, errorColumn;
	// read story file
	if (!scene->m_sceneFileXml.setContent(&config, &errorMsg, &errorLine, &errorColumn))
	{
		QMessageBox::warning(
			0, 
			QString("Error"), 
			QString("Error when reading file %1:\n %2 in Line %3, Column %4").arg(sceneFileName).arg(errorMsg).arg(errorLine).arg(errorColumn));
		delete scene;
		return 0;
	}
	config.close();
	QDir::setCurrent(QFileInfo(sceneFileName).absolutePath());
	QDomElement pathes = scene->m_sceneFileXml.documentElement().firstChildElement("EnginePath");
	scene->m_sceneFile = QFileInfo(sceneFileName);
	scene->m_sceneGraph = QFileInfo(QDir(pathes.attribute("scenegraphpath", "models")), scene->m_sceneFileXml.documentElement().firstChildElement("SceneGraph").attribute("path", ""));
	return scene;
}


SceneFile::SceneFile() : m_pluginManager(0)
{
}

void SceneFile::init()
{
	QDir::setCurrent(m_sceneFile.absolutePath());
	QDomElement pathes = m_sceneFileXml.documentElement().firstChildElement("EnginePath");
	Horde3DUtils::setResourcePath(ResourceTypes::SceneGraph, qPrintable(pathes.attribute("scenegraphpath", "models")));
	if (pathes.hasAttribute("modelpath"))  // for compatibility reasons
	{
		pathes.setAttribute("geometrypath", pathes.attribute("modelpath"));
		pathes.removeAttribute("modelpath");
	}
	Horde3DUtils::setResourcePath(ResourceTypes::Geometry, qPrintable(pathes.attribute("geometrypath", "models")));
	Horde3DUtils::setResourcePath(ResourceTypes::Animation, qPrintable(pathes.attribute("animationpath", "animations")));
	Horde3DUtils::setResourcePath(ResourceTypes::Shader, qPrintable(pathes.attribute("shaderpath", "shaders")));
	Horde3DUtils::setResourcePath(ResourceTypes::Code, qPrintable(pathes.attribute("shaderpath", "shaders")));
	Horde3DUtils::setResourcePath(ResourceTypes::Texture2D, qPrintable(pathes.attribute("texturepath", "textures")));	
	Horde3DUtils::setResourcePath(ResourceTypes::TextureCube, qPrintable(pathes.attribute("texturepath", "textures")));	
	Horde3DUtils::setResourcePath(ResourceTypes::Material, qPrintable(pathes.attribute("materialpath", "materials")));	
	Horde3DUtils::setResourcePath(ResourceTypes::Effect, qPrintable(pathes.attribute("effectspath", "effects")));	
	if ( !pathes.hasAttribute("pipelinepath") ) // for compatibility reasons
		pathes.setAttribute("pipelinepath", "pipelines");
	Horde3DUtils::setResourcePath(ResourceTypes::Pipeline, qPrintable(pathes.attribute("pipelinepath")));
	QDomElement settings = m_sceneFileXml.documentElement().firstChildElement("EngineConfig");
	Horde3D::setOption(EngineOptions::FastAnimation, 
		(settings.attribute("fastAnimation", "true").compare("TRUE", Qt::CaseInsensitive) == 0 ||
		settings.attribute("fastAnimation", "1").compare("1", Qt::CaseInsensitive) == 0) ? 1.0f : 0.0f);
	Horde3D::setOption(EngineOptions::LoadTextures, 
		(settings.attribute("loadTextures", "true").compare("TRUE", Qt::CaseInsensitive) == 0 ||
		settings.attribute("loadTextures", "1").compare("1", Qt::CaseInsensitive) == 0) ? 1.0f : 0.0f);
	Horde3D::setOption(EngineOptions::TexCompression, 
		(settings.attribute("texCompression", "true").compare("TRUE", Qt::CaseInsensitive) == 0 ||
		settings.attribute("texCompression", "1").compare("1", Qt::CaseInsensitive) == 0) ? 1.0f : 0.0f);
	Horde3D::setOption(EngineOptions::AnisotropyFactor, settings.attribute("anisotropyFactor", "1").toFloat());
	Horde3D::setOption(EngineOptions::ShadowMapSize, settings.attribute("shadowMapSize", "1024").toFloat());
	Horde3D::setOption(EngineOptions::MaxNumMessages, settings.attribute("maxNumMessages", "1024").toInt());
}

bool SceneFile::save()
{
	QFile sceneFile(m_sceneFile.absoluteFilePath());
	if (!sceneFile.open(QIODevice::WriteOnly | QIODevice::Truncate))
		return false;
	QTextStream stream(&sceneFile);
	m_sceneFileXml.save(stream, 4);
	// Flush to avoid file changed signal afterwards
	sceneFile.flush();
	sceneFile.close();
	return true;
}

bool SceneFile::saveAs(const QFileInfo& fileName)
{
	if (fileName.absoluteDir() == m_sceneFile.absoluteDir())
	{
		m_sceneFile = fileName;
		return save();
	}

	QStringList alreadyCopied;
	QFileInfoList references = fileReferences();
	for (int i=0; i<references.size(); ++i)
	{
		QFileInfo& source(references[i]);
		if ( !fileName.absoluteDir().mkpath( m_sceneFile.absoluteDir().relativeFilePath(source.absolutePath())) )
			qWarning("Error creating path %s", qPrintable(m_sceneFile.absoluteDir().relativeFilePath(source.absolutePath())));		
		QString target = fileName.absoluteDir().absoluteFilePath(m_sceneFile.absoluteDir().relativeFilePath(source.absoluteFilePath()));
		if ( !alreadyCopied.contains( target ) )
		{
			if ( !QFile::copy(source.absoluteFilePath(), target) )
				qWarning("Error copying %s to %s", qPrintable(source.absoluteFilePath()), qPrintable(fileName.absoluteDir().absoluteFilePath(source.filePath())));
			else
				alreadyCopied << target;
		}
	}
	m_sceneFile = fileName;
	QDir::setCurrent(fileName.absolutePath());
	return save();
}

QString SceneFile::activeCam() const
{
	QString activeCam = m_sceneFileXml.documentElement().namedItem("ActiveCamera").toElement().attribute("name");
	if( activeCam.isEmpty() )
	{
		QFile file(m_sceneGraph.absoluteFilePath());
		if( file.open(QIODevice::ReadOnly) )
		{
			QDomDocument dom;
			if( dom.setContent(&file) )
			{
				QDomNodeList cameras = dom.documentElement().elementsByTagName("Camera");
				if( !cameras.isEmpty() )
					activeCam = cameras.at(0).toElement().attribute("name");
			}
		}
	}
	return activeCam;
}

void SceneFile::setActiveCam(const QString& cameraName)
{
	if (m_sceneFileXml.documentElement().namedItem("ActiveCamera").isNull())
		m_sceneFileXml.documentElement().appendChild(m_sceneFileXml.createElement("ActiveCamera"));
	m_sceneFileXml.documentElement().namedItem("ActiveCamera").toElement().setAttribute("name", cameraName);
}

void SceneFile::setMaterialDir(const QString& directory)
{
	QDomElement pathes = m_sceneFileXml.documentElement().firstChildElement("EnginePath");
	pathes.setAttribute("materialpath", directory);
}

void SceneFile::setTextureDir(const QString& directory)
{
	QDomElement pathes = m_sceneFileXml.documentElement().firstChildElement("EnginePath");
	pathes.setAttribute("texturepath", directory);
}

void SceneFile::setAnimationDir(const QString& directory)
{
	QDomElement pathes = m_sceneFileXml.documentElement().firstChildElement("EnginePath");
	pathes.setAttribute("animationpath", directory);
}

void SceneFile::setShaderDir(const QString& directory)
{
	QDomElement pathes = m_sceneFileXml.documentElement().firstChildElement("EnginePath");
	pathes.setAttribute("shaderpath", directory);
}

void SceneFile::setGeometryDir(const QString& directory)
{
	QDomElement pathes = m_sceneFileXml.documentElement().firstChildElement("EnginePath");
	pathes.setAttribute("geometrypath", directory);
}

void SceneFile::setSceneGraphDir(const QString& directory)
{
	QDomElement pathes = m_sceneFileXml.documentElement().firstChildElement("EnginePath");
	pathes.setAttribute("scenegraphpath", directory);
}

void SceneFile::setEffectDir(const QString& directory)
{
	QDomElement pathes = m_sceneFileXml.documentElement().firstChildElement("EnginePath");
	pathes.setAttribute("effectspath", directory);
}


void SceneFile::setPipelineDir(const QString& directory)
{
	QDomElement pathes = m_sceneFileXml.documentElement().firstChildElement("EnginePath");
	pathes.setAttribute("pipelinepath", directory);
}

QFileInfoList SceneFile::fileReferences() const
{
	QFileInfoList references;
	references.push_back(m_sceneGraph);
	references << findReferences(m_sceneGraph);
	return references;
}

QFileInfoList SceneFile::findReferences(const QFileInfo& fileName) const
{
	QDomDocument document;
	QFile file(fileName.absoluteFilePath());
	if ( !file.open(QIODevice::ReadOnly) || !document.setContent(&file) )
	{
		qWarning("Attention the file %s couldn't be parsed", qPrintable(fileName.absoluteFilePath()));
		return QFileInfoList();
	}
	return findReferences(document.documentElement());
}

QFileInfoList SceneFile::findReferences(const QDomElement& node) const
{
	QFileInfoList references;
	
	if (node.hasAttribute("sceneGraph"))
	{
		QFileInfo file(QDir(sceneGraphDir()), node.attribute("sceneGraph"));
		if( !references.contains(file) )
		{
			references.append(file);
			references << findReferences(file);
		}
	}
	if (node.hasAttribute("material"))
	{
		QFileInfo file(QDir(materialDir()), node.attribute("material"));
		if( !references.contains(file) )
		{
			references.append(file);
			references << findReferences(file);
		}
	}
	if( node.tagName() == "Material" && node.hasAttribute("link") )
	{
		QFileInfo file(QDir(materialDir()), node.attribute("link"));
		if( !references.contains(file) )
		{
			references.append(file);
			references << findReferences(file);
		}
	}
	if (node.tagName() == "Stage" && node.hasAttribute("link"))
	{
		QFileInfo file(QDir(materialDir()), node.attribute("link"));
		if( !references.contains(file) )
		{
			references.append(file);
			references << findReferences(file);
		}
	}
	if (node.tagName() == "Shader" && node.hasAttribute("source"))
	{
		QFileInfo file(QDir(shaderDir()), node.attribute("source"));
		if( !references.contains(file) )
		{
			references.append(file);
			references << findReferences(file);
		}
	}
	if (node.hasAttribute("code"))
	{
		QFileInfo file(QDir(shaderDir()), node.attribute("code"));
		references.append(file);
	}
	if (node.hasAttribute("geometry"))
	{
		QFileInfo file(QDir(geometryDir()), node.attribute("geometry"));
		references.append(file);		
	}
	if (node.hasAttribute("effect"))
	{
		QFileInfo file(QDir(effectDir()), node.attribute("effect"));
		if( !references.contains(file) )
		{
			references.append(file);
			references << findReferences(file);
		}
	}
	if (node.hasAttribute("pipeline"))
	{
		QFileInfo file(QDir(pipelineDir()), node.attribute("pipeline"));
		if( !references.contains(file) )
		{
			references.append(file);
			references << findReferences(file);
		}
	}
	if (node.hasAttribute("map"))
	{
		QFileInfo file(QDir(textureDir()), node.attribute("map"));
		references.append(file);
	}
	if (node.hasAttribute("heightmap"))
	{
		QFileInfo file(QDir(textureDir()), node.attribute("map"));
		references.append(file);
	}
	if( node.tagName() == "Attachment" && m_pluginManager->attachmentPlugIn() )
	{
		references << m_pluginManager->attachmentPlugIn()->findReferences(node);
	}
	QDomNodeList children = node.childNodes();
	for (int i=0; i<children.size(); ++i)
		references << findReferences(children.at(i).toElement());

	return references;
}

void SceneFile::cleanSceneDirectory()
{
	QApplication::setOverrideCursor(Qt::BusyCursor);
	QFileInfoList references = fileReferences();
	references << m_sceneFile;
	QDir sceneDir = m_sceneFile.absoluteDir();
	QFileInfoList files = filesInSceneDir(sceneDir);
	QStringList notRemoved;
	QStringList remove;
	for( int i = 0; i < files.size(); ++i )
	{
		if( !references.contains(files[i]) )
		{
			remove << files[i].absoluteFilePath();
		}
	}
	// TODO use dialog to confirm deleting
	foreach(QString file, remove)
		if ( !QFile::remove(file) )
			notRemoved << file;

	QApplication::restoreOverrideCursor();
}

QFileInfoList SceneFile::filesInSceneDir(const QDir& directory) const
{
	QFileInfoList subDir;
	QFileInfoList list = directory.entryInfoList( QDir::Dirs | QDir::Files | QDir::NoDotAndDotDot | QDir::Readable );
	for( int i = 0; i < list.size(); ++i)
	{
		if (list[i].isDir()) subDir << filesInSceneDir(list[i].absoluteFilePath());		
	}
	list << subDir;
	return list;
}
