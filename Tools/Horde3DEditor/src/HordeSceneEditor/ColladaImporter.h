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

#ifndef COLLADAIMPORTER_H_
#define COLLADAIMPORTER_H_

#include "ui_ColladaImporter.h"

#include <QtCore/QDir>

class QFileSystemWatcher;
class QProcess;
class ColladaImporter : public QDialog, protected Ui_ColladaImporter
{
	Q_OBJECT
public:
	ColladaImporter(QWidget* parent = 0, Qt::WFlags flags = 0);
	virtual ~ColladaImporter();

	void initImportPath(const QString& sceneGraphDir, const QString& geometryDir, const QString& textureDir, const QString& shaderDir, const QString& materialDir, const QString& animationDir);

public slots:
	bool setColladaFiles();

private slots:
	void shaderDirModified(const QString& path);
	void importFiles();


private:
	void cleanUp();

	QDir m_sceneGraphDir;
	QDir m_textureDir;
	QDir m_shaderDir;
	QDir m_materialDir;
	QDir m_geometryDir;
	QDir m_animationDir;

	// Temp dir for conversion
	QDir m_outputDir;

	QFileSystemWatcher*		m_shaderDirWatcher;
	QProcess*				m_convertProcess;

	QStringList				m_colladaFiles;
};
#endif

