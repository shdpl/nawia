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

#include "ColladaImporter.h"

#include "OverwriteFilesDialog.h"
#include "QHordeSceneEditorSettings.h"

#include <QtXml/qdom.h>
#include <QtCore/QProcess>
#include <QtCore/QFileSystemWatcher>
#include <QtGui/QMessageBox>
#include <QtCore/QDir>
#include <QtGui/QFileDialog>
#include <QtGui/QProgressDialog>
#include <QtCore/QFileInfo>

ColladaImporter::ColladaImporter(QWidget* parent /*= 0*/, Qt::WFlags flags /*= 0*/) : QDialog(parent, flags)
{
	setupUi(this);
	m_shaderDirWatcher = new QFileSystemWatcher(this);
	connect(m_shaderDirWatcher, SIGNAL(directoryChanged(const QString&)), this, SLOT(shaderDirModified(const QString&)));
	connect(m_setColladaFile, SIGNAL(clicked()), this, SLOT(setColladaFiles()));
	connect(m_importButton, SIGNAL(clicked()), this, SLOT(importFiles()));
	m_convertProcess = new QProcess(this);
}


ColladaImporter::~ColladaImporter()
{
	QHordeSceneEditorSettings settings(this);
	settings.beginGroup("ColladaImporter");
	settings.setValue("defaultShader", m_defaultShader->currentText());	
	settings.setValue("noOptimizeGeometry", m_noOptimizeGeometry->isChecked());
	settings.endGroup();
}


void ColladaImporter::initImportPath(const QString& resourcePath)
{
	m_resourceDir = resourcePath;
	m_shaderDirWatcher->addPath(m_resourceDir.absolutePath());
	shaderDirModified(m_resourceDir.absolutePath());
	QHordeSceneEditorSettings settings(this);
	settings.beginGroup("ColladaImporter");
	m_defaultShader->setCurrentIndex(m_defaultShader->findText(settings.value("defaultShader", "skinning.shader.xml").toString()));	
	m_noOptimizeGeometry->setChecked(settings.value("noOptimizeGeometry", false).toBool());
	settings.endGroup();
}

void ColladaImporter::shaderDirModified(const QString& path)
{	
	QStringList shaders = QDir(path).entryList(QStringList("*.shader"), QDir::Files | QDir::Readable | QDir::NoSymLinks);	
	foreach(QString shader, shaders)
	{
		if (m_defaultShader->findText(shader) == -1)
			m_defaultShader->addItem(shader);
	}
}

bool ColladaImporter::setColladaFiles()
{
	QHordeSceneEditorSettings settings(this);
	settings.beginGroup("ColladaImporter");
	QStringList files = QFileDialog::getOpenFileNames(this, tr("Select collada file(s)"), settings.value("LastDaeDir").toString(), tr("Collada files (*.collada *.dae);;All files (*.*)"));
	if (files.isEmpty()) return false;
	settings.setValue("LastDaeDir", QFileInfo(files[0]).absolutePath());
	settings.endGroup();
	m_colladaFilesLabel->setText( files.join(";") );
	m_colladaFiles = files;
	return true;
}

void ColladaImporter::importFiles()
{
	if( m_colladaFiles.isEmpty() )	return;
	// Collada to Horde Converter executable
	QHordeSceneEditorSettings settings(this);
	settings.beginGroup("ColladaImporter");
	QFileInfo converter(settings.value("Converter", QApplication::applicationDirPath()+QDir::separator()+"ColladaConv.exe").toString());	
	if (!converter.exists())
	{
#ifdef _WIN32
		converter = QFileDialog::getOpenFileName(this, tr("Select collada converter"), QDir::currentPath(), tr("Executables (*.exe)"));
#else
		converter = QFileDialog::getOpenFileName(this, tr("Select collada converter"), QDir::currentPath(), tr("Executables (*.*)"));
#endif
		if (!converter.exists())
			return;
		settings.setValue("Converter", converter.absoluteFilePath());
	}
	settings.endGroup();
	
	// Create temporary directory
	QString tempDirBase = "HordeSceneEditorConversion";
	while( QDir::temp().exists(tempDirBase) )
		tempDirBase.append('1');	

	if (!QDir::temp().mkpath(tempDirBase))
	{
		QMessageBox::warning(this, tr("Error"), tr("Couldn't create temporary directory for conversion"));
		return;
	}

	m_outputDir = QDir( QFileInfo(QDir::temp(), tempDirBase).absoluteFilePath() );

	QDir textureDir(QFileInfo(m_colladaFiles[0]).absolutePath());

	QProgressDialog progress(tr("Converting files"), tr("Cancel"), 0, m_colladaFiles.size(), this);
	progress.setMinimumDuration(0);
	// Copy collada file for conversion to temporary directory
	for( int c = 0; c < m_colladaFiles.size(); ++c )
	{
		QFileInfo tempColladaFile(m_outputDir, QFileInfo(m_colladaFiles[c]).fileName());
		QFile inputFile(m_colladaFiles[c]);
		if (!inputFile.copy(tempColladaFile.absoluteFilePath()))
		{
			QMessageBox::warning(this, tr("Error"), tr("Couldn't copy collada file %1 to temporary directory!\n%2").arg(m_colladaFiles[c]).
				arg(inputFile.errorString()));
			return;
		}

		// Prepare conversion
		QStringList arguments;
		arguments << tempColladaFile.absoluteFilePath(); 
		arguments << "-o";
		arguments << tempColladaFile.baseName();
		// Not supported by new collada converter version 
		/*arguments << "-s";
		arguments << m_defaultShader->currentText();*/
		// TODO: use new lod arguments:
		//-lodDist1 dist	distance for LOD1 (optional, default: 10)
		//-lodDist2 dist	distance for LOD2 (optional, default: 20)
		//-lodDist3 dist	distance for LOD3 (optional, default: 40)
		//-lodDist4 dist	distance for LOD4 (optional, default: 80)
		if (m_noOptimizeGeometry->isChecked())
			arguments << "-noopt";
	
		// Convert
		setCursor(Qt::BusyCursor);
		progress.setValue(c);
		m_convertProcess->start(converter.absoluteFilePath(), arguments);
		while( m_convertProcess->waitForFinished( 250 ) == false  )
		{
			if( m_convertProcess->state() == QProcess::NotRunning )
			{
				QMessageBox::warning(this, tr("Error"), tr("Collada converter exited with error \"%1\" when converting %2!").arg(m_convertProcess->errorString()).arg(m_colladaFiles[c]));
				cleanUp();
				unsetCursor();
				return;
			}
			QApplication::processEvents();
			if( progress.wasCanceled() )
			{
				cleanUp();
				unsetCursor();
				return;
			}
		}
		unsetCursor();
		// Show converter status messages
		m_logWidget->append(m_convertProcess->readAllStandardOutput());
		// Remove the copied collada file
		QFile::remove(tempColladaFile.absoluteFilePath());

		// Create ouput directories
		QDir outDir = m_resourceDir;
		if (!outDir.exists("models"))
			outDir.mkdir("models");
		outDir.cd("models");
		if (!outDir.exists(tempColladaFile.baseName()))
			outDir.mkdir(tempColladaFile.baseName());
		outDir.cd(tempColladaFile.baseName());
		QDir animOutDir = m_resourceDir;
		if (!animOutDir.exists("animations"))
			animOutDir.mkdir("animations");
		animOutDir.cd("animations");
	
		// Search created files and copy them to ouput directory
		QList<CopyJob> filesToOverwrite;
		QList<CopyJob> alreadyCopied;
		QStringList createdFiles;
		QDir searchDir = tempColladaFile.absoluteDir();
		searchDir.cd("models");
		searchDir.cd(tempColladaFile.baseName());
		QStringList sceneGraphFiles = searchDir.entryList(QStringList("*.scene.xml"), QDir::Files | QDir::Readable);
		for (int i=0; i<sceneGraphFiles.size(); ++i)
		{
			QString input(searchDir.absoluteFilePath(sceneGraphFiles[i]));
			createdFiles.append(input);
			QString output(QFileInfo(outDir, sceneGraphFiles[i]).absoluteFilePath());
			CopyJob job(input, output);
			if (!job.exec() && !filesToOverwrite.contains(job) && !alreadyCopied.contains(job))
				filesToOverwrite.push_back(job);
			else
			{
				alreadyCopied.push_back(job);
				QFile::remove(input);
			}
		}	

		QStringList geoFiles = searchDir.entryList(QStringList("*.geo"), QDir::Files | QDir::Readable);
		for (int i=0; i<geoFiles.size(); ++i)
		{
			QString input(searchDir.absoluteFilePath(geoFiles[i]));
			createdFiles.append(input);
			QString output(QFileInfo(outDir, geoFiles[i]).absoluteFilePath());
			CopyJob job(input, output);
			if (!job.exec() && !filesToOverwrite.contains(job) && !alreadyCopied.contains(job))
				filesToOverwrite.push_back(job);
			else
			{
				alreadyCopied.push_back(job);
				QFile::remove(input);
			}
		}

		QDir animDir = tempColladaFile.absoluteDir();
		animDir.cd("animations");
		QStringList animationFiles = animDir.entryList(QStringList("*.anim"), QDir::Files | QDir::Readable);
		for (int i=0; i<animationFiles.size(); ++i)
		{
			QString input(animDir.absoluteFilePath(animationFiles[i]));
			createdFiles.append(input);
			QString output(QFileInfo(animOutDir, animationFiles[i]).absoluteFilePath());
			CopyJob job(input, output);
			if (!job.exec() && !filesToOverwrite.contains(job) && !alreadyCopied.contains(job))
				filesToOverwrite.push_back(job);
			else
			{
				alreadyCopied.push_back(job);
				QFile::remove(input);
			}
		}

		// Store texture filenames used by the materials
		QStringList textureFiles;
		// Search for materials
		QStringList materialFiles = searchDir.entryList(QStringList("*.material.xml"), QDir::Files | QDir::Readable);	
		// now parse the materials for textures and copy them to the repository
		for (int i=0; i<materialFiles.size(); ++i)
		{			
			QString input(searchDir.absoluteFilePath(materialFiles[i]));
			createdFiles.append(input);
			QFile material(input);
			QDomDocument materialXml;
			if (!material.open(QIODevice::ReadOnly) || !materialXml.setContent(&material))
				QMessageBox::warning(this, tr("Error"), tr("Couldn't open material file to extract texture information!"));		
			else
			{
				QDomNodeList textures = materialXml.elementsByTagName("Sampler");
				for (int j=0; j<textures.size(); ++j)
					textureFiles << textures.at(j).toElement().attribute("map");
			}
			QString output(QFileInfo(outDir, materialFiles[i]).absoluteFilePath());
			CopyJob job(input, output);
			if (!job.exec() && !filesToOverwrite.contains(job) && !alreadyCopied.contains(job))
				filesToOverwrite.push_back(job);
			else
			{
				alreadyCopied.push_back(job);
				QFile::remove(input);
			}
		}

		for (int i=0; i<textureFiles.size(); ++i)
		{	
			QString output(QFileInfo(m_resourceDir, textureFiles[i]).absoluteFilePath());
			QString input(QFileInfo(m_resourceDir, textureFiles[i]).absoluteFilePath());
			if (!QFile::exists(input))
			{
				QFileInfo textureFile(m_resourceDir, textureFiles[i]);				
				input = QFileDialog::getOpenFileName(
					this, 
					tr("Where is the texture file %1").arg(textureFiles[i]), 
					textureDir.absolutePath(), 
					tr("Texture (%1)").arg(textureFile.fileName()));
			}
			if (!input.isEmpty())
			{
				textureDir = QFileInfo(input).absoluteDir();
				CopyJob job(input, output);
				if (!job.exec() && !filesToOverwrite.contains(job) && !alreadyCopied.contains(job))
					filesToOverwrite.push_back(job);
				else		
					alreadyCopied.push_back(job);		
			}
		}

		if (!filesToOverwrite.isEmpty())
		{
			OverwriteFilesDialog dlg(filesToOverwrite, this);
			dlg.exec();
		}
	
		// Remove temporary files and dirs
		for (int i=0; i<createdFiles.size(); ++i)
			QFile::remove(createdFiles[i]);
		QDir(m_outputDir.absolutePath() + QDir::separator()+"models").rmdir(tempColladaFile.baseName());
	}
	cleanUp();
	m_logWidget->append("\nImport finished!");
}

void ColladaImporter::cleanUp()
{
	QStringList modelDirs = QDir(m_outputDir.absoluteFilePath("models")).entryList( QDir::Dirs | QDir::NoDotAndDotDot | QDir::NoSymLinks );
	for( int i = 0; i < modelDirs.size(); ++i )
	{
		QFileInfoList files = QDir(modelDirs[i]).entryInfoList( QDir::Files | QDir::NoSymLinks );
		foreach( QFileInfo file, files )
			QFile::remove( file.absoluteFilePath() );
		QDir(m_outputDir.absoluteFilePath("models")).rmdir(modelDirs[i]);
	}

	m_outputDir.rmdir("models");

	QStringList animDirs = QDir(m_outputDir.absoluteFilePath("animations")).entryList( QDir::Dirs | QDir::NoDotAndDotDot | QDir::NoSymLinks );
	for( int i = 0; i < animDirs.size(); ++i )
	{
		QFileInfoList files = QDir(animDirs[i]).entryInfoList( QDir::Files | QDir::NoSymLinks );
		foreach( QFileInfo file, files )
			QFile::remove( file.absoluteFilePath() );
		QDir(m_outputDir.absoluteFilePath("animations")).rmdir(animDirs[i]);
	}

	m_outputDir.rmdir("animations");

	QStringList files = m_outputDir.entryList( QDir::Files | QDir::NoSymLinks );
	foreach( QString file, files )
		QFile::remove(file);

	QDir::temp().rmdir(m_outputDir.absolutePath());

}

