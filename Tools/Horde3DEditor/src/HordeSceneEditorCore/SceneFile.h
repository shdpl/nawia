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

#ifndef SCENEFILE_H_
#define SCENEFILE_H_

#include <QtCore/QString>
#include <QtCore/QFileInfo>
#include <QtXml/qdom.h>
#include <QtCore/QEvent>
#include <QtCore/QDir>

class PlugInManager;


/**
* The SceneFile class handles the settings for loading the main Horde3D scenegraph, such as
* the Resource Directory Settings, the used Attachment Engine and the used pipeline configuration file
*/ 
class SceneFile
{	
	friend class HordeSceneEditor;

public:
	enum {UpdateFileWatcherEvent = QEvent::User + 1};

	/** 
	* Tries to create a new SceneFile instance from the given file
	* @param sceneFileName name of the file containing the Scene specification
	* @return SceneFile* a Null Pointer if loading failed, otherwise pointer to the newly created instance (take care of deleting it)
	*/
	static SceneFile* load(const QString& sceneFileName);

	SceneFile();

	QString sceneFileName(){ return m_sceneFile.fileName(); }
	QString absoluteSceneFilePath() {return m_sceneFile.absoluteFilePath();}
	QDomDocument sceneFileDom() {return m_sceneFileXml;}
	void setSceneFileDom(const QDomDocument& document) {m_sceneFileXml = document;}
	void setSceneFileName(const QString& fileName) {m_sceneFile = QFileInfo(fileName);}

	void setSceneGraphFile(const QString& sceneGraph) {m_sceneGraph = QFileInfo(sceneGraph);}
	QString sceneGraphFile() {return m_sceneGraph.absoluteFilePath();}

	QString attachmentPlugInName(){ return m_sceneFileXml.documentElement().firstChildElement("AttachmentPlugIn").attribute("name"); }

	PlugInManager* pluginManager() const { return m_pluginManager; }
	void setPlugInManager( PlugInManager* manager ) { m_pluginManager = manager; }

	/**
	* \brief Init Horde3D settings saved in scene file
	* 
	*  Initializes the Horde3D Engine Options and Resource Directories and 
	*  sets the current directory to the scene file's one
	*/
	void init();

	bool save();
	bool saveAs(const QFileInfo& fileName);

	QString activeCam() const;
	void setActiveCam(const QString& cameraName);

	QString materialDir() const
	{
		QString directory = m_sceneFileXml.documentElement().firstChildElement("EnginePath").attribute("materialpath", "materials");
		directory.replace('\\', QDir::separator());
		directory.replace('/', QDir::separator());
		return directory;
	}
	void setMaterialDir(const QString& directory);

	QString textureDir() const
	{
		QString directory = m_sceneFileXml.documentElement().firstChildElement("EnginePath").attribute("texturepath", "textures");
		directory.replace('\\', QDir::separator());
		directory.replace('/', QDir::separator());
		return directory;
	}
	void setTextureDir(const QString& directory);

	QString animationDir() const
	{
		QString directory = m_sceneFileXml.documentElement().firstChildElement("EnginePath").attribute("animationpath", "animations");
		directory.replace('\\', QDir::separator());
		directory.replace('/', QDir::separator());
		return directory;
	}	
	void setAnimationDir(const QString& directory);


	QString shaderDir() const
	{
		QString directory = m_sceneFileXml.documentElement().firstChildElement("EnginePath").attribute("shaderpath", "shaders");
		directory.replace('\\', QDir::separator());
		directory.replace('/', QDir::separator());
		return directory;
	}
	void setShaderDir(const QString& directory);

	QString geometryDir() const
	{
		QString directory = m_sceneFileXml.documentElement().firstChildElement("EnginePath").attribute("geometrypath", "models");
		directory.replace('\\', QDir::separator());
		directory.replace('/', QDir::separator());
		return directory;
	}
	void setGeometryDir(const QString& directory);

	QString sceneGraphDir() const
	{
		QString directory = m_sceneFileXml.documentElement().firstChildElement("EnginePath").attribute("scenegraphpath", "models");
		directory.replace('\\', QDir::separator());
		directory.replace('/', QDir::separator());
		return directory;
	}
	void setSceneGraphDir(const QString& directory);

	QString effectDir() const
	{
		QString directory = m_sceneFileXml.documentElement().firstChildElement("EnginePath").attribute("effectspath", "effects");
		directory.replace('\\', QDir::separator());
		directory.replace('/', QDir::separator());
		return directory;
	}
	void setEffectDir(const QString& directory);

	QString pipelineDir() const
	{
		QString directory = m_sceneFileXml.documentElement().firstChildElement("EnginePath").attribute("pipelinepath", "pipelines");
		directory.replace('\\', QDir::separator());
		directory.replace('/', QDir::separator());
		return directory;
	}
	void setPipelineDir(const QString& directory);

	QFileInfoList fileReferences() const;

	void cleanSceneDirectory();

private:

	QFileInfoList findReferences(const QFileInfo& fileName) const;
	QFileInfoList findReferences(const QDomElement& node) const;
	QFileInfoList filesInSceneDir(const QDir& directory) const;

	QFileInfo		m_sceneFile;
	QFileInfo		m_sceneGraph;

	QDomDocument	m_sceneFileXml;

	PlugInManager*	m_pluginManager;

};
#endif
