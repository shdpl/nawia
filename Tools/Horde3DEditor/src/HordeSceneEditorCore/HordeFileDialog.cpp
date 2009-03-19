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

#include "HordeFileDialog.h"
#include "Importer.h"
#include "SceneFile.h"
#include "QHordeSceneEditorSettings.h"

#include <QtCore/QDir>
#include <QtGui/QFileDialog>
#include <QtGui/QLayout>
#include <QtCore/QTextStream>
#include <QtGui/QMessageBox>
#include <QtCore/QFile>
#include <QtGui/QImageReader>

#include <Horde3DUtils.h>
#include <math.h>
Q_DECLARE_METATYPE(QFileInfo)

HordeFileDialog::HordeFileDialog(ResourceTypes::List type, const HordePathSettings& targetPaths, QWidget* parent /*= 0*/, Qt::WFlags flags /*= 0*/) : QDialog(parent, flags), 
m_type(type), 
DefaultModelsRepoPath(QApplication::applicationDirPath()+QDir::separator()+"Repository"+QDir::separator()+"models"),
DefaultTextureRepoPath(QApplication::applicationDirPath()+QDir::separator()+"Repository"+QDir::separator()+"textures"),
DefaultShaderRepoPath(QApplication::applicationDirPath()+QDir::separator()+"Repository"+QDir::separator()+"shaders"),
DefaultMaterialRepoPath(QApplication::applicationDirPath()+QDir::separator()+"Repository"+QDir::separator()+"materials"), 
DefaultEffectsRepoPath(QApplication::applicationDirPath()+QDir::separator()+"Repository"+QDir::separator()+"effects"),
DefaultPipelineRepoPath(QApplication::applicationDirPath()+QDir::separator()+"Repository"+QDir::separator()+"pipelines"),
m_scenePaths(targetPaths)
{
	setupUi(this);
	m_xmlView->setTabStopWidth(12);
	m_xmlView->setWordWrapMode(QTextOption::NoWrap);

	switch(type)
	{
	case ResourceTypes::Shader:
		initShaderView();
		break;
	case ResourceTypes::Material:
		initMaterialView();
		break;
	case ResourceTypes::Texture:
		initTextureView(ResourceTypes::Texture);
		break;
	case ResourceTypes::ParticleEffect:
		initEffectView();
		break;
	case ResourceTypes::Pipeline:
		initPipelineView();
		break;
        default:
                break;
	}
	connect(m_fileList, SIGNAL(currentItemChanged(QListWidgetItem* , QListWidgetItem*)), this, SLOT(itemChanged(QListWidgetItem*, QListWidgetItem*)));
	m_importer = new Importer();
	m_importer->setTargetPath(ResourceTypes::Animation, targetPaths.AnimationPath);
	m_importer->setTargetPath(ResourceTypes::SceneGraph, targetPaths.SceneGraphPath);
	m_importer->setTargetPath(ResourceTypes::Material, targetPaths.MaterialPath);
	m_importer->setTargetPath(ResourceTypes::Shader, targetPaths.ShaderPath);
	m_importer->setTargetPath(ResourceTypes::Texture, targetPaths.TexturePath);
	m_importer->setTargetPath(ResourceTypes::ParticleEffect, targetPaths.EffectPath);
	m_importer->setTargetPath(ResourceTypes::Code, targetPaths.CodePath);
	m_importer->setTargetPath(ResourceTypes::Geometry, targetPaths.GeometryPath);
	m_importer->setTargetPath(ResourceTypes::Pipeline, targetPaths.PipelinePath);
}


HordeFileDialog::~HordeFileDialog()
{
	delete m_importer;
}

QString HordeFileDialog::fileName()
{
	return m_file->text();
}

void HordeFileDialog::accept()
{
	if( m_fileList->currentItem() == 0)
	{
		QMessageBox::information(this, tr("No model selected"), tr("You have to select a model from the list first!"));
		return;
	}

	m_importer->clearErrorLog();
	// If it's not a repostory file we want to import...
	if ( m_fileList->currentItem()->type() != 1)
	{
		QString customData;
		QFileInfo target;
		switch (m_type)
		{
		case ResourceTypes::SceneGraph:
			target = QFileInfo(m_scenePaths.SceneGraphPath, fileName());
			break;
		case ResourceTypes::Shader:
			target = QFileInfo(m_scenePaths.ShaderPath, fileName());
			customData = m_xmlView->toPlainText();
			break;
		case ResourceTypes::Texture:
			target = QFileInfo(m_scenePaths.TexturePath, fileName());						
			break;
		case ResourceTypes::Material:
			target = QFileInfo(m_scenePaths.MaterialPath, fileName());						
			customData = m_xmlView->toPlainText();
			break;
		case ResourceTypes::ParticleEffect:
			target = QFileInfo(m_scenePaths.EffectPath, fileName());									
			customData = m_xmlView->toPlainText();
			break;
		case ResourceTypes::Pipeline:
			target = QFileInfo(m_scenePaths.PipelinePath, fileName());									
			customData = m_xmlView->toPlainText();
			break;
		default:
			QMessageBox::warning(this, tr("Error"), tr("Unresolved type in HordeFileDialog"));
			return;
		}
		QFile file(m_fileList->currentItem()->data(Qt::UserRole).value<QFileInfo>().absoluteFilePath());
		if (file.fileName() != target.absoluteFilePath())
		{				
			if ( target.exists() && 
				QMessageBox::question(this, tr("Overwrite?"), tr("Do you want to overwrite the existing file\n%1").arg(target.absoluteFilePath()), 
				QMessageBox::Yes | QMessageBox::Default, QMessageBox::No | QMessageBox::Escape) == QMessageBox::No)
			{
				return;
			}
			QFile::remove(target.absoluteFilePath());
			if ( !file.copy(target.absoluteFilePath()) )
			{					
				QMessageBox::warning(this, tr("Error"), tr("Couldn't write to file %1!").arg(target.absoluteFilePath()));
			}
		}	
		else if( !customData.isEmpty() )
		{
			if( !file.open(QIODevice::WriteOnly | QIODevice::Truncate) )
				QMessageBox::warning(this, tr("Error"), tr("Couldn't write to file %1 !\n\n%2").arg(file.fileName()).arg(file.errorString()));
			else
			{
				file.write(customData.toLatin1());
				file.close();
			}
		}
	}
	// check if it is a repo file	
	else if (m_fileList->currentItem()->type() == 1)
	{

		switch (m_type)
		{
		case ResourceTypes::SceneGraph:
			m_importer->importScene(m_fileList->currentItem()->data(Qt::UserRole).value<QFileInfo>(), 
				QFileInfo(m_importer->targetPath(ResourceTypes::SceneGraph), fileName()).absoluteFilePath());
			break;
		case ResourceTypes::Shader:
			m_importer->importShader(m_fileList->currentItem()->data(Qt::UserRole).value<QFileInfo>(), 
				QFileInfo(m_importer->targetPath(ResourceTypes::Shader), fileName()).absoluteFilePath(),
				m_xmlView->toPlainText());
			break;
		case ResourceTypes::Texture:
			m_importer->importTexture(m_fileList->currentItem()->data(Qt::UserRole).value<QFileInfo>(), 
				QFileInfo(m_importer->targetPath(ResourceTypes::Texture), fileName()).absoluteFilePath(),
				m_type);
			break;
		case ResourceTypes::Material:
			m_importer->importMaterial(m_fileList->currentItem()->data(Qt::UserRole).value<QFileInfo>(), 
				QFileInfo(m_importer->targetPath(ResourceTypes::Material), fileName()).absoluteFilePath(),
				m_xmlView->toPlainText());
			break;			
		case ResourceTypes::ParticleEffect:
			m_importer->importEffect(m_fileList->currentItem()->data(Qt::UserRole).value<QFileInfo>(), 
				QFileInfo(m_importer->targetPath(ResourceTypes::ParticleEffect), fileName()).absoluteFilePath(),
				m_xmlView->toPlainText());
			break;
		case ResourceTypes::Pipeline:
			m_importer->importPipeline(m_fileList->currentItem()->data(Qt::UserRole).value<QFileInfo>(),
				QFileInfo(m_importer->targetPath(ResourceTypes::Pipeline), fileName()).absoluteFilePath(),
				m_xmlView->toPlainText());
			break;
		default:
			qWarning("Unresolved type in HordeFileDialog");
			break;
		}
	}	
	if( !m_importer->errorLog().isEmpty() )
	{
		QMessageBox::warning(this, tr("The following errors occured during the import process"), m_importer->errorLog().join("\n"));
	}
	QWidgetList widgets = qApp->allWidgets();
	foreach(QWidget* widget, widgets) QApplication::postEvent( widget, new QEvent((QEvent::Type) SceneFile::UpdateFileWatcherEvent) );
	QDialog::accept();
}

void HordeFileDialog::reject()
{
	QDialog::reject();
}

void HordeFileDialog::initTextureView(ResourceTypes::List type)
{
	QHordeSceneEditorSettings settings(this);
	settings.beginGroup("Repository");
	m_currentFilter = "*.jpg;*.png;*.tga;*.bmp;*.psd";
	populateList(m_scenePaths.TexturePath.absolutePath(), m_scenePaths.TexturePath, m_currentFilter, false);
	populateList(settings.value("textureDir", DefaultTextureRepoPath.absolutePath()).toString(), QDir(settings.value("textureDir", DefaultTextureRepoPath.absolutePath()).toString()), m_currentFilter, true);
	m_stackedWidget->setCurrentWidget(m_imageView);
}

void HordeFileDialog::initShaderView()
{
	QHordeSceneEditorSettings settings(this);
	settings.beginGroup("Repository");
	m_currentFilter = "*.shader.xml";
	populateList(m_scenePaths.ShaderPath.absolutePath(), m_scenePaths.ShaderPath, m_currentFilter, false);
	populateList(settings.value("shaderDir", DefaultShaderRepoPath.absolutePath()).toString(), QDir(settings.value("shaderDir", DefaultShaderRepoPath.absolutePath()).toString()), m_currentFilter, true);
	m_stackedWidget->setCurrentWidget(m_xmlView);
}

void HordeFileDialog::initMaterialView()
{
	QSettings settings(QApplication::applicationDirPath()+QDir::separator()+"HordeSceneEditor.ini", QSettings::IniFormat, this);
	settings.beginGroup("Repository");
	m_currentFilter = "*.material.xml";
	populateList(m_scenePaths.MaterialPath.absolutePath(), m_scenePaths.MaterialPath, m_currentFilter, false);
	populateList(settings.value("materialDir", DefaultMaterialRepoPath.absolutePath()).toString(), QDir(settings.value("materialDir", DefaultMaterialRepoPath.absolutePath()).toString()), m_currentFilter, true);
	m_stackedWidget->setCurrentWidget(m_xmlView);
}

void HordeFileDialog::initEffectView()
{
	QHordeSceneEditorSettings settings(this);
	settings.beginGroup("Repository");
	m_currentFilter = "*.effect.xml";
	populateList(m_scenePaths.EffectPath.absolutePath(), m_scenePaths.EffectPath.absolutePath(), m_currentFilter, false);
	populateList(settings.value("effectsDir", DefaultEffectsRepoPath.absolutePath()).toString(), QDir(settings.value("effectsDir", DefaultEffectsRepoPath.absolutePath()).toString()), m_currentFilter, true);
	m_stackedWidget->setCurrentWidget(m_xmlView);
}

void HordeFileDialog::initPipelineView()
{
	QHordeSceneEditorSettings settings(this);
	settings.beginGroup("Repository");
	m_currentFilter = "*.pipeline.xml";
	populateList(m_scenePaths.PipelinePath.absolutePath(), m_scenePaths.PipelinePath.absolutePath(), m_currentFilter, false);
	populateList(settings.value("pipelineDir", DefaultPipelineRepoPath.absolutePath()).toString(), QDir(settings.value("pipelineDir", DefaultPipelineRepoPath.absolutePath()).toString()), m_currentFilter, true);
	m_stackedWidget->setCurrentWidget(m_xmlView);
}

void HordeFileDialog::populateList(const QString& path, const QDir& baseDir, const QString& filter, bool repo)
{
	// get all files in the given directory
	QFileInfoList files = QDir(path).entryInfoList(filter.split(';', QString::SkipEmptyParts), QDir::Files | QDir::Readable);
	m_fileList->blockSignals(true);
	foreach(QFileInfo file, files)
	{
		QListWidgetItem* item = 0;
		if (repo)
		{
			item = new QListWidgetItem(QIcon(QString::fromUtf8(":/Icons/Resources/Repository.png")), baseDir.relativeFilePath(file.absoluteFilePath()), m_fileList, 1);
			item->setToolTip("Repository file");		
		}
		else
			item = new QListWidgetItem(baseDir.relativeFilePath(file.absoluteFilePath()), m_fileList, 0);
		item->setData(Qt::UserRole, QVariant::fromValue<QFileInfo>(file));		
	}
	QFileInfoList subDirs = QDir(path).entryInfoList(QDir::Dirs | QDir::NoDotAndDotDot | QDir::NoSymLinks | QDir::Readable);
	foreach(QFileInfo dir, subDirs)
		populateList(dir.absoluteFilePath(), baseDir, filter, repo);
	m_fileList->blockSignals(false);
}

void HordeFileDialog::itemChanged(QListWidgetItem* current, QListWidgetItem* /*previous*/)
{
	setCursor(Qt::BusyCursor);
	QHordeSceneEditorSettings settings(this);
	settings.beginGroup("Repository");
	if (current)
	{
		switch(m_type)
		{		
		case ResourceTypes::Texture:
			loadTexture(current->data(Qt::UserRole).value<QFileInfo>());
			break;		
		case ResourceTypes::ParticleEffect:
		case ResourceTypes::Material:
		case ResourceTypes::Shader:
		case ResourceTypes::Pipeline:
			// Load shader
			loadXmlFile(current->data(Qt::UserRole).value<QFileInfo>());
			break;					
		default:
			qWarning("Unresolved type in HordeFileDialog");
			break;
		}
		// indicate current selection
		m_file->setText(current->text());
	}
	else // no valid selection
		m_file->setText("");
	settings.endGroup();
	unsetCursor();
}


//void HordeFileDialog::setFile()
//{
//	QString file = QFileDialog::getOpenFileName(this, tr("Select file"), QDir::currentPath(), m_currentFilter);
//	if (!file.isEmpty())
//	{
//		QFileInfo info(file);
//		if (!m_fileList->findItems(info.fileName(), Qt::MatchFixedString).isEmpty())
//		{
//			QMessageBox::information(this, tr("Error"), tr("Another item with this name already exists"));
//			return;
//		}
//		QListWidgetItem* item = new QListWidgetItem(info.fileName(), m_fileList);
//		item->setData(Qt::UserRole, QVariant::fromValue<QFileInfo>(info));
//	}
//}


void HordeFileDialog::loadXmlFile(const QFileInfo& fileName)
{
	QFile file(fileName.absoluteFilePath());
	if (file.open(QIODevice::ReadOnly))				
	{
		m_xmlView->setDocumentTitle(fileName.fileName());
		m_xmlView->setPlainText(file.readAll());				
	}
	else
		m_xmlView->setPlainText(tr("Couldn't open file: %1").arg(file.fileName()));
	file.close();			
}

void HordeFileDialog::loadTexture(const QFileInfo& fileName)
{
	QImageReader imgReader;
	imgReader.setFileName(fileName.absoluteFilePath());
	if (imgReader.canRead())
	{
		QImage img = imgReader.read();
		if (img.isNull())
			m_imageView->setText(imgReader.errorString());
		else
			m_imageView->setPixmap(QPixmap::fromImage(img.scaledToWidth(240, Qt::SmoothTransformation)));
	}
	else
		m_imageView->setText("Image format not supported for preview");
}


void HordeFileDialog::restoreHordePath()
{
	Horde3DUtils::setResourcePath(ResourceTypes::SceneGraph, qPrintable(m_scenePaths.SceneGraphPath.absolutePath()));
	Horde3DUtils::setResourcePath(ResourceTypes::Geometry, qPrintable(m_scenePaths.GeometryPath.absolutePath()));
	Horde3DUtils::setResourcePath(ResourceTypes::Texture, qPrintable(m_scenePaths.TexturePath.absolutePath()));	
	Horde3DUtils::setResourcePath(ResourceTypes::Shader, qPrintable(m_scenePaths.ShaderPath.absolutePath()));
	Horde3DUtils::setResourcePath(ResourceTypes::Code, qPrintable(m_scenePaths.CodePath.absolutePath()));
	Horde3DUtils::setResourcePath(ResourceTypes::Material, qPrintable(m_scenePaths.MaterialPath.absolutePath()));
	Horde3DUtils::setResourcePath(ResourceTypes::Animation, qPrintable(m_scenePaths.AnimationPath.absolutePath()));
	Horde3DUtils::setResourcePath(ResourceTypes::ParticleEffect, qPrintable(m_scenePaths.EffectPath.absolutePath()));
	Horde3DUtils::setResourcePath(ResourceTypes::Pipeline, qPrintable(m_scenePaths.PipelinePath.absolutePath()));
}




QString HordeFileDialog::getShaderFile(const HordePathSettings& targetPaths, QWidget* parent, const QString& caption)
{
	HordeFileDialog dlg(ResourceTypes::Shader, targetPaths, parent);
	dlg.setWindowTitle(caption);	
	if (dlg.exec() == QDialog::Accepted)
	{
		return dlg.fileName();
	}
	else
		return QString();
}

QString HordeFileDialog::getMaterialFile(const HordePathSettings& targetPaths, QWidget* parent, const QString& caption)
{
	HordeFileDialog dlg(ResourceTypes::Material, targetPaths, parent);
	dlg.setWindowTitle(caption);	
	if (dlg.exec() == QDialog::Accepted)
	{
		return dlg.fileName();
	}
	else
		return QString();
}

QString HordeFileDialog::getEffectFile(const HordePathSettings& targetPaths, QWidget* parent, const QString& caption)
{
	HordeFileDialog dlg(ResourceTypes::ParticleEffect, targetPaths, parent);
	dlg.setWindowTitle(caption);	
	if (dlg.exec() == QDialog::Accepted)
	{
		return dlg.fileName();
	}
	else
		return QString();
}


QString HordeFileDialog::getTextureFile(const HordePathSettings& targetPaths, QWidget *parent, const QString& caption)
{	
	HordeFileDialog dlg(ResourceTypes::Texture, targetPaths, parent);
	dlg.setWindowTitle(caption);
	if (dlg.exec() == QDialog::Accepted)
		return dlg.fileName();
	else
		return QString();	
}

QString HordeFileDialog::getPipelineFile(const HordePathSettings& targetPaths, QWidget *parent, const QString& caption)
{	
	HordeFileDialog dlg(ResourceTypes::Pipeline, targetPaths, parent);
	dlg.setWindowTitle(caption);
	if (dlg.exec() == QDialog::Accepted)
		return dlg.fileName();
	else
		return QString();	
}
