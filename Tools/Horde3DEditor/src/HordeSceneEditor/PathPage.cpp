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

#include "PathPage.h"

#include <QtCore/QSignalMapper>
#include <QtGui/QFileDialog>
#include <QtGui/QMessageBox>

PathPage::PathPage(QWidget* parent /*= 0*/) : QWizardPage(parent)
{
	setupUi(this);
	m_mapper = new QSignalMapper(this);
	setTitle(tr("Configure Directory Settings"));
	setSubTitle(tr("Specify the directories where all the resources of the new scene will be stored. The resource directories will be saved relative to the scenefile where possible. If a directory does not exist already, it will be created."));
	connect(m_setAnimDir, SIGNAL(clicked()), m_mapper, SLOT(map()));
	m_mapper->setMapping(m_setAnimDir, m_animationDir);
	connect(m_setMaterialDir, SIGNAL(clicked()), m_mapper, SLOT(map()));
	m_mapper->setMapping(m_setMaterialDir, m_materialDir);
	connect(m_setGeometryDir, SIGNAL(clicked()), m_mapper, SLOT(map()));
	m_mapper->setMapping(m_setGeometryDir, m_geometryDir);
	connect(m_setShaderDir, SIGNAL(clicked()), m_mapper, SLOT(map()));
	m_mapper->setMapping(m_setShaderDir, m_shaderDir);
	connect(m_setTextureDir, SIGNAL(clicked()), m_mapper, SLOT(map()));
	m_mapper->setMapping(m_setTextureDir, m_textureDir);
	connect(m_setSceneGraphDir, SIGNAL(clicked()), m_mapper, SLOT(map()));
	m_mapper->setMapping(m_setSceneGraphDir, m_sceneGraphDir);
	connect(m_setEffectsDir, SIGNAL(clicked()), m_mapper, SLOT(map()));
	m_mapper->setMapping(m_setEffectsDir, m_effectsDir);
	connect(m_setPipelineDir, SIGNAL(clicked()), m_mapper, SLOT(map()));
	m_mapper->setMapping(m_setPipelineDir, m_pipelineDir);
	connect(m_mapper, SIGNAL(mapped(QWidget*)), this, SLOT(setDirectory(QWidget*)));
	registerField("geometrydir*", m_geometryDir);
	registerField("animationdir*", m_animationDir);
	registerField("shaderdir*", m_shaderDir);
	registerField("materialdir*", m_materialDir);
	registerField("texturedir*", m_textureDir);
	registerField("scenegraphdir*", m_sceneGraphDir);
	registerField("effectsdir*", m_effectsDir);
	registerField("pipelinedir*", m_pipelineDir);
}


PathPage::~PathPage()
{
}


void PathPage::initializePage()
{
	if (m_geometryDir->text().isEmpty())
	{
		m_geometryDir->setText(QString(".")+QDir::separator() + "models");
		m_sceneGraphDir->setText(QString(".")+QDir::separator() + "models");
		m_animationDir->setText(QString(".")+QDir::separator() + "animations");
		m_shaderDir->setText(QString(".")+QDir::separator() + "shaders");
		m_materialDir->setText(QString(".")+QDir::separator() + "materials");
		m_textureDir->setText(QString(".")+QDir::separator() + "textures");
		m_effectsDir->setText(QString(".")+QDir::separator() + "effects");
		m_pipelineDir->setText(QString(".")+QDir::separator() + "pipelines");
	}
}

void PathPage::setDirectories(const QString& geometryDir, const QString& materialDir, const QString& pipelineDir, const QString& textureDir, 
		const QString& sceneGraphDir, const QString& animationDir, const QString& shaderDir, const QString& effectDir)
{
	m_geometryDir->setText(geometryDir);
	m_materialDir->setText(materialDir);
	m_pipelineDir->setText(pipelineDir);
	m_animationDir->setText(animationDir);
	m_effectsDir->setText(effectDir);
	m_sceneGraphDir->setText(sceneGraphDir);
	m_shaderDir->setText(shaderDir);
	m_textureDir->setText(textureDir);
}

void PathPage::setDirectory(QWidget *edit)
{
	QString directory = QFileDialog::getExistingDirectory(this, tr("Select directory"), QDir::currentPath());
	if (!directory.isEmpty())
	{		
		QLineEdit* lineEdit = qobject_cast<QLineEdit*>(edit);
		if( lineEdit )
			lineEdit->setText(QDir::current().relativeFilePath(directory));
	}	
}

bool PathPage::validatePage()
{	
	QDir geometryDir(m_geometryDir->text());
	QDir sceneGraphDir(m_sceneGraphDir->text());
	QDir animDir(m_animationDir->text());
	QDir shaderDir(m_shaderDir->text());
	QDir materialDir(m_materialDir->text());
	QDir textureDir(m_textureDir->text());
	QDir effectsDir(m_effectsDir->text());
	QDir pipelinesDir(m_pipelineDir->text());
	if (!geometryDir.exists() || !sceneGraphDir.exists() || !animDir.exists() || !shaderDir.exists() || !materialDir.exists() || !textureDir.exists() || !effectsDir.exists() || !pipelinesDir.exists())
	{
		int result = QMessageBox::question(
			this, 
			tr("Create directories"), 
			tr("One or more directories do not exist yet!\n\nShould these directories be created?"), 
			QMessageBox::Yes | QMessageBox::Default, 
			QMessageBox::No, 
			QMessageBox::Cancel | QMessageBox::Escape);
		if (result == QMessageBox::No)
		{
			QMessageBox::warning(this, tr("Warning"), tr("The scene can not be loaded correctly if resource directories do not exist!"));
			return true;
		}
		if (result == QMessageBox::Cancel)
			return false;
	}
	if (!geometryDir.exists() && !geometryDir.mkpath(geometryDir.absolutePath()))
	{
		QMessageBox::warning(0, QString("Error"), QString("An error occured when trying to create %1\n").arg(geometryDir.absolutePath()));
		return false;
	}
	if (!sceneGraphDir.exists() && !sceneGraphDir.mkpath(sceneGraphDir.absolutePath()))
	{
		QMessageBox::warning(0, QString("Error"), QString("An error occured when trying to create %1\n").arg(sceneGraphDir.absolutePath()));
		return false;
	}
	if (!animDir.exists() && !animDir.mkpath(animDir.absolutePath()))
	{
		QMessageBox::warning(0, QString("Error"), QString("An error occured when trying to create %1\n").arg(animDir.absolutePath()));
		return false;
	}
	if (!shaderDir.exists() && !shaderDir.mkpath(shaderDir.absolutePath()))
	{
		QMessageBox::warning(0, QString("Error"), QString("An error occured when trying to create %1\n").arg(shaderDir.absolutePath()));
		return false;
	}
	if (!materialDir.exists() && !materialDir.mkpath(materialDir.absolutePath()))
	{
		QMessageBox::warning(0, QString("Error"), QString("An error occured when trying to create %1\n").arg(materialDir.absolutePath()));
		return false;
	}
	if (!textureDir.exists() && !textureDir.mkpath(textureDir.absolutePath()))
	{
		QMessageBox::warning(0, QString("Error"), QString("An error occured when trying to create %1\n").arg(textureDir.absolutePath()));
		return false;
	}
	if (!effectsDir.exists() && !textureDir.mkpath(effectsDir.absolutePath()))
	{
		QMessageBox::warning(0, QString("Error"), QString("An error occured when trying to create %1\n").arg(effectsDir.absolutePath()));
		return false;
	}
	if (!pipelinesDir.exists() && !textureDir.mkpath(pipelinesDir.absolutePath()))
	{
		QMessageBox::warning(0, QString("Error"), QString("An error occured when trying to create %1\n").arg(pipelinesDir.absolutePath()));
		return false;
	}
	return true;
}
