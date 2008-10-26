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
#ifndef OVERWRITEFILESDIALOG_H_
#define OVERWRITEFILESDIALOG_H_

#include "ui_OverwriteFilesDialog.h"
#include "Importer.h"

class QPushButton;
/**
 * Dialog to confirm the overwriting of files (used by the HordeFileDialog when importing files from a repository)
 */
class OverwriteFilesDialog : public QDialog, protected Ui_OverwriteFilesDialog
{
	Q_OBJECT
public:
	OverwriteFilesDialog(const QList<CopyJob>& filesToOverwrite, QWidget* parent = 0, Qt::WFlags flags = 0);
	virtual ~OverwriteFilesDialog();


private slots:
	void renameSelectedFiles();
	void overwriteSelectedFiles();
	
private:
	QPushButton*	m_renameButton;
	QPushButton*	m_overwriteButton;
};

#endif

