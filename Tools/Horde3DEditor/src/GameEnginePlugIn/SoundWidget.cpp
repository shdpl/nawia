// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2007 Volker Wiendl
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
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#include "SoundWidget.h"

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

SoundWidget::SoundWidget(QWidget* parent /*= 0*/, Qt::WFlags flags /*= 0*/) : QWidget(parent, flags), m_currentNode(0)
{
	setupUi(this);
	connect(m_importSound, SIGNAL(clicked()), this, SLOT(addFiles()));	
	connect(m_soundFile, SIGNAL(currentIndexChanged(const QString& )), this, SLOT(updateSoundFile( const QString& )));
	connect(m_gain, SIGNAL(valueChanged(double)), this, SLOT(gainChanged(double)));
	connect(m_maxDist, SIGNAL(valueChanged(double)), this, SLOT(maxDistChanged(double)));
	connect(m_refDist, SIGNAL(valueChanged(double)), this, SLOT(refDistChanged(double)));
	connect(m_pitch, SIGNAL(valueChanged(double)), this, SLOT(pitchChanged(double)));
	connect(m_rolloff, SIGNAL(valueChanged(double)), this, SLOT(rollOffChanged(double)));
	connect(m_loop, SIGNAL(stateChanged(int)), this, SLOT(loopChanged()));
}


SoundWidget::~SoundWidget()
{
}


bool SoundWidget::setCurrentNode(QXmlTreeNode *node)
{
	if (node && node->xmlNode().tagName() == "Sound3D")
	{				
		m_currentNode = 0;
		m_soundFile->clear();
		scanMediaDir( GameEngine::soundResourceDirectory() );
		m_soundFile->setCurrentIndex( m_soundFile->findText( node->xmlNode().attribute("file") ) );
		m_gain->setValue( node->xmlNode().attribute("gain", "0.5").toFloat() );
		m_loop->setChecked( 
			node->xmlNode().attribute("loop", "false").compare("true", Qt::CaseInsensitive) == 0 ||
			node->xmlNode().attribute("loop", "false").compare("1", Qt::CaseInsensitive) == 0 );
		m_pitch->setValue( node->xmlNode().attribute("pitch", "1.0").toFloat() );
		m_rolloff->setValue( node->xmlNode().attribute("rolloff", "1.0").toFloat() );
		m_maxDist->setValue( node->xmlNode().attribute("maxdist", "30.0").toFloat() );
		m_refDist->setValue( node->xmlNode().attribute("maxrefdist", "15.0").toFloat() );
		m_currentNode = node;
		return true;
	}
	else
		return false;
}

void SoundWidget::scanMediaDir( const QString& path )
{
	QDir baseDir = GameEngine::soundResourceDirectory();
	QStringList fileFormats = QStringList("*.wav");
	fileFormats.append("*.ogg");
	QFileInfoList sounds = QDir(path).entryInfoList(fileFormats, QDir::Files | QDir::Readable );
	for( int i = 0; i < sounds.size(); ++i )
	{
		m_soundFile->addItem( baseDir.relativeFilePath( sounds[i].absoluteFilePath() ) );
	}
	QFileInfoList dirs = QDir(path).entryInfoList(QDir::Dirs | QDir::Readable | QDir::NoDotAndDotDot );
	for( int i = 0; i < dirs.size(); ++i )
	{
		scanMediaDir( dirs[i].absoluteFilePath() );
	}	
}

void SoundWidget::addFiles()
{
	QStringList files = QFileDialog::getOpenFileNames(
		this, 
		tr("Select audio file"), 
		QDir::currentPath(), 
		tr("Wave files (*.wav);;Ogg Files (*.ogg);;All files (*.*)"));

	QStringList errorList;
	QDir baseDir( GameEngine::soundResourceDirectory() );
	for( int i = 0; i < files.size(); ++i )
	{
		if( !files[i].contains( baseDir.absolutePath() ) )
		{
			if( !QFile::copy( files[i], baseDir.absoluteFilePath( QFileInfo(files[i]).fileName() ) ) )
				errorList << files[i];
			else
				m_soundFile->addItem( QFileInfo(files[i]).fileName() );
		}
	}
	if( !errorList.isEmpty() )
		QMessageBox::warning(this, tr("Error"), 
		tr("The following files couldn't be copied to the\n"
		"sound directory: %1").arg(baseDir.absolutePath())+
		"\n\n"+errorList.join("\n"));
}


void SoundWidget::updateSoundFile( const QString& soundFile )
{
	if( m_currentNode != 0 )
	{
		m_currentNode->xmlNode().setAttribute("file", soundFile );
		GameEngine::setSoundFile( entityWorldID(), qPrintable( soundFile ) );
	}
}

void SoundWidget::gainChanged(double value)
{
	if( m_currentNode != 0 )
	{
		m_currentNode->xmlNode().setAttribute( "gain", value );
		GameEngine::setSoundGain( entityWorldID(), float(value) );
	}
}

void SoundWidget::pitchChanged(double value)
{
	if( m_currentNode != 0 )
	{
		m_currentNode->xmlNode().setAttribute( "pitch", value );
		GameEngine::setSoundPitch( entityWorldID(), float(value) );
	}
}

void SoundWidget::refDistChanged(double value)
{
	if( m_currentNode != 0 )
	{
		m_currentNode->xmlNode().setAttribute( "refdist", value );
		GameEngine::setSoundRefdist( entityWorldID(), float(value) );
	}
}

void SoundWidget::maxDistChanged(double value)
{
	if( m_currentNode != 0 )
	{
		m_currentNode->xmlNode().setAttribute( "maxdist", value );
		GameEngine::setSoundMaxdist( entityWorldID(), float(value) );
	}
}

void SoundWidget::loopChanged()
{
	if( m_currentNode != 0 )
	{
		m_currentNode->xmlNode().setAttribute( "loop", m_loop->isChecked() );
		GameEngine::setSoundLoop( entityWorldID(), m_loop->isChecked() );
	}
}

void SoundWidget::rollOffChanged(double value)
{
	if( m_currentNode != 0 )
	{
		m_currentNode->xmlNode().setAttribute( "rolloff", value );
		GameEngine::setSoundRolloff( entityWorldID(), float(value) );
	}
}

unsigned int SoundWidget::entityWorldID()
{
	if( m_currentNode )
	{
		emit modified(true); // TODO add undo functionality
		return GameEngine::entityWorldID( qPrintable(m_currentNode->xmlNode().parentNode().toElement().attribute("name")) );
	}
	else
		return 0;
}