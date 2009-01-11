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

#ifndef HORDEFILEDIALOG_H_
#define HORDEFILEDIALOG_H_

#include "ui_HordeFileDialog.h"

#include <QtCore/QFileInfo>
#include <QtXml/qdom.h>
#include <QtCore/QDir>

#include <Horde3D.h>
#include <Horde3DUtils.h>

struct HordePathSettings
{
	HordePathSettings(bool empty = true) : Empty(empty) {}

	bool Empty;

	QDir SceneGraphPath;
	QDir CodePath;
	QDir Texture2DPath;
	QDir TextureCubePath;
	QDir GeometryPath;
	QDir ShaderPath;
	QDir EffectPath;
	QDir PipelinePath;
	QDir MaterialPath;
	QDir AnimationPath;

	void initFromHorde()
	{
		SceneGraphPath = Horde3DUtils::getResourcePath(ResourceTypes::SceneGraph);
		CodePath = Horde3DUtils::getResourcePath(ResourceTypes::Code);
		Texture2DPath = Horde3DUtils::getResourcePath(ResourceTypes::Texture2D);
		TextureCubePath = Horde3DUtils::getResourcePath(ResourceTypes::TextureCube);
		GeometryPath = Horde3DUtils::getResourcePath(ResourceTypes::Geometry);
		ShaderPath = Horde3DUtils::getResourcePath(ResourceTypes::Shader);
		EffectPath = Horde3DUtils::getResourcePath(ResourceTypes::Effect);
		MaterialPath = Horde3DUtils::getResourcePath(ResourceTypes::Material);
		AnimationPath = Horde3DUtils::getResourcePath(ResourceTypes::Animation);
		PipelinePath = Horde3DUtils::getResourcePath(ResourceTypes::Pipeline);
	}
};

class Importer;

/**
 * The HordeFileDialog provides an user friendly dialog to select different Horde resources
 * 
 * It provides a preview for models and textures as well as an editor for shaders. Next to the
 * files available in the current scene directories it allows the import of files from an editor
 * repository where often used files can be stored. 
 * @see HordeSceneEditor
 */
class HordeFileDialog : public QDialog, protected Ui_HordeFileDialog
{
	Q_OBJECT
public:
	HordeFileDialog(ResourceTypes::List type, const HordePathSettings& targetPaths, QWidget* parent = 0, Qt::WFlags flags = 0);
	virtual ~HordeFileDialog();

	QString fileName();

	/**
	 * Returns the selected shader filename relative to the currently set Horde3D shader path
     * @param parent widget the HordeFileDialog will be child of
	 * @param caption string to be displayed as window caption
	 * @return QString filename of the selected shader
	 */
	static QString getShaderFile(const HordePathSettings& targetPaths, QWidget* parent, const QString& caption);

	/**
	 * Returns the selected material filename relative to the currently set Horde3D material path
     * @param parent widget the HordeFileDialog will be child of
	 * @param caption string to be displayed as window caption
	 * @return QString filename of the selected material
	 */
	static QString getMaterialFile(const HordePathSettings& targetPaths, QWidget* parent, const QString& caption);

	/**
	 * Returns the selected effect filename relative to the currently set Horde3D effect path
     * @param parent widget the HordeFileDialog will be child of
	 * @param caption string to be displayed as window caption
	 * @return QString filename of the selected effect
	 */
	static QString getEffectFile(const HordePathSettings& targetPaths, QWidget* parent, const QString& caption);

	/**
	 * Returns the selected texture filename relative to the currently set Horde3D texture path
	 * @param parent widget the HordeFileDialog will be child of
	 * @param caption string to be displayed as window caption	 
	 * @param type indicates the texture type (CUBE / 2D)
	 * @return QString filename of the selected texture
	 */
	static QString getTextureFile(const HordePathSettings& targetPaths, QWidget* parent, const QString& caption, ResourceTypes::List type);


	/**
	 * Returns the selected pipeline filename relative to the currently set Horde3D pipeline path
	 * @param parent widget the HordeFileDialog will be child of
	 * @param caption string to be displayed as window caption	 
	 * @return QString filename of the selected pipeline
	 */
	static QString getPipelineFile(const HordePathSettings& targetPaths, QWidget* parent, const QString& caption);

public slots:
	void accept();
	void reject();

protected slots:
	virtual void itemChanged(QListWidgetItem* current, QListWidgetItem* previous);

	
protected:

	void initTextureView(ResourceTypes::List type);
	void initShaderView();
	void initMaterialView();
	void initEffectView();
	void initPipelineView();

	void populateList(const QString& path, const QDir& baseDir, const QString& filter, bool repo);

	void loadXmlFile(const QFileInfo& fileName);
	void loadTexture(const QFileInfo& fileName);

	void restoreHordePath();


	Importer*				m_importer;

	QString					m_currentFilter;

	QList<unsigned int>		m_resources;
	
	
	ResourceTypes::List		m_type;

	const QDir DefaultModelsRepoPath;
	const QDir DefaultTextureRepoPath;
	const QDir DefaultShaderRepoPath;
	const QDir DefaultMaterialRepoPath;	
	const QDir DefaultEffectsRepoPath;
	const QDir DefaultPipelineRepoPath;

	HordePathSettings		m_scenePaths;

};

#endif
