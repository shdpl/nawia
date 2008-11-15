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

#include <GameEngine/GameEngine.h>
#include <GameEngine/GameEngine_Sound.h>

Q_DECLARE_METATYPE(QDomElement)

PhonemeEditorWidget::PhonemeEditorWidget(QWidget* parent /*= 0*/, Qt::WFlags flags /*= 0*/) : QWidget(parent, flags), m_entityWorldID(0)
{
	m_phonemeFile = QString();
	setupUi(this);
	connect(m_playButton, SIGNAL(clicked()), this, SLOT(playSound()) );
	connect(m_stopButton, SIGNAL(clicked()), this, SLOT(stopSound()) );
	connect(m_closeButton, SIGNAL(clicked()), this, SIGNAL(closeEditor()) );
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
	m_entityWorldID = id;
	m_phonemeFile = QString(path);
}