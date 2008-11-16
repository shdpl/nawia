// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2008 Volker Wiendl
// 
// This file is part of the GameEngine developed at the 
// Lab for Multimedia Concepts and Applications of the University of Augsburg
//
// The GameEngine is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation version 3 of the License 
//
// The GameEngine is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// ****************************************************************************************


// ****************************************************************************************
//
// GameEngine Horde3D Editor Plugin of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Felix Kistler
// 
// ****************************************************************************************
#include "PhonemeEditorWidget.h"

#include <QXmlTree/QXmlTreeNode.h>
#include <QXmlTree/QXmlTreeModel.h>

#include <Qt/qfiledialog.h>
#include <Qt/qfile.h>
#include <Qt/qdir.h>
#include <Qt/qmessagebox.h>
#include <Qt/qdesktopservices.h>
#include <QtCore/QTextStream>

#include <GameEngine/GameEngine.h>
#include <GameEngine/GameEngine_Sound.h>

Q_DECLARE_METATYPE(QDomElement)

PhonemeEditorWidget::PhonemeEditorWidget(QWidget* parent /*= 0*/, Qt::WFlags flags /*= 0*/) : QWidget(parent, flags), m_entityWorldID(0)
{
	m_phonemeFileName = QString();
	setupUi(this);
	connect(m_playButton, SIGNAL(clicked()), this, SLOT(playSound()) );
	connect(m_stopButton, SIGNAL(clicked()), this, SLOT(stopSound()) );
	connect(m_closeButton, SIGNAL(clicked()), this, SLOT(closePhonemeEditor()) );
	connect(m_saveButton, SIGNAL(clicked()), this, SLOT(save()) );
	m_saveButton->setEnabled(false);
}


PhonemeEditorWidget::~PhonemeEditorWidget()
{
}


void PhonemeEditorWidget::playSound()
{
	if( m_entityWorldID != 0)
		GameEngine::enableSound( m_entityWorldID, true );
}

void PhonemeEditorWidget::stopSound()
{
	if( m_entityWorldID != 0)
		GameEngine::enableSound( m_entityWorldID, false );
}

void PhonemeEditorWidget::loadPhonemeFile(unsigned int id, const QString& path)
{
	blockSignals(true);
	m_entityWorldID = id;
	m_phonemeFileName = QString(path);
	if( !m_phonemeFileName.isEmpty() )
	{
		// Open phoneme file
		QFile file( QDir(GameEngine::soundResourceDirectory()).absoluteFilePath(m_phonemeFileName) );
		if (file.open(QIODevice::ReadOnly))
		{	
			QString errorMsg;
			int errorLine, errorColumn;
			// read phoneme file
			if (!m_phonemeXml.setContent(&file, &errorMsg, &errorLine, &errorColumn))
				setStatusTip(tr("Error in line %1 column %2 when reading phoneme file %3: %4").arg(errorLine).arg(errorColumn).arg(m_phonemeFileName).arg(errorMsg));
			else
			{
				setStatusTip("");			
			}
			file.close();

			//TODO: make Content visible
		}
		else
			setStatusTip(file.errorString());
	}
	setEnabled(!m_phonemeFileName.isEmpty());
	blockSignals(false);
}

void PhonemeEditorWidget::closePhonemeEditor()
{
	if (m_saveButton->isEnabled())
	{
		if (QMessageBox::question(
			this, 
			tr("Save changes?"), 
			tr("Save previous changes to phoneme file %1?").arg(m_phonemeFileName), 
			QMessageBox::Save | QMessageBox::Default, 
			QMessageBox::Ignore | QMessageBox::Escape)==QMessageBox::Save)
			save();				
	}
	m_saveButton->setEnabled(false);
	m_phonemeXml = QDomDocument();
	emit closeEditor();
}

void PhonemeEditorWidget::save()
{
	blockSignals(true);
	//Save changes to phoneme file
	if (!m_phonemeFileName.isEmpty() && m_saveButton->isEnabled())
	{
		QFile file( QDir(GameEngine::soundResourceDirectory()).absoluteFilePath(m_phonemeFileName) );
		if (file.open(QIODevice::WriteOnly | QIODevice::Truncate))
		{
			QTextStream stream(&file);
			m_phonemeXml.save(stream, 4);
			file.flush();
			file.close();
		}
		else
		{
			QMessageBox::warning(this, tr("Error"), tr("Error opening file %1 for writing:\n\n%2").arg(m_phonemeFileName).arg(file.errorString()));
			return;
		}
	}
	m_saveButton->setEnabled(false);
	blockSignals(false);
}