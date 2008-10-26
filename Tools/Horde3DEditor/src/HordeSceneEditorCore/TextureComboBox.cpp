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

#include "TextureComboBox.h"

#include <QtCore/QDir>
#include <Horde3D/Horde3D.h>
#include "HordeFileDialog.h"

TextureComboBox::TextureComboBox(QWidget* parent /*= 0*/) : QComboBox(parent)
{
	connect(this, SIGNAL(currentIndexChanged(int)), this, SLOT(currentChanged(int)));
}


TextureComboBox::~TextureComboBox()
{
}

void TextureComboBox::init(const QString& texture2DPath, const QString& textureCubePath)
{
	clear();
	m_texture2DPath = texture2DPath;
	m_textureCubePath = textureCubePath;
	
	addTextures(texture2DPath, texture2DPath, ResourceTypes::Texture2D);
	addTextures(textureCubePath, textureCubePath, ResourceTypes::TextureCube);
	addItem(tr("Import Texture2D from Repository"), QVariant((int) ResourceTypes::Texture2D));
	addItem(tr("Import Cube-Texture from Repository"), QVariant((int) ResourceTypes::TextureCube));

}


Texture TextureComboBox::texture() const
{
	return Texture(currentText(), itemData(currentIndex()).toInt());
}

void TextureComboBox::setTexture(Texture texture)
{
	setCurrentIndex(findText(texture.FileName));	
	m_init = texture.FileName;
}

void TextureComboBox::currentChanged(int index)
{
	if ( itemData(index).isValid() && ( itemData(index) == QVariant((int) ResourceTypes::Texture2D) || itemData(index) == QVariant((int) ResourceTypes::TextureCube) ) )
	{
		HordePathSettings paths;
		paths.Texture2DPath = m_texture2DPath;
		paths.TextureCubePath = m_textureCubePath;
		QString newTexture = HordeFileDialog::getTextureFile(paths, this, tr("Select texture to import"), (ResourceTypes::List) itemData(index).toInt());
		if (!newTexture.isEmpty())
		{
			if (findText(newTexture) == -1)
			{
				QString text = itemText(index);
				QVariant data = itemData(index);
				removeItem(index);
				addItem(newTexture);
				addItem(text, data);
			}
			setCurrentIndex(findText(newTexture));
			return;
		}
		else
		{
			setCurrentIndex(findText(m_init));
			return;
		}
	}
	if ( m_init != currentText() )
	{
		emit editFinished();
		emit textureChanged();
	}
}

void TextureComboBox::addTextures(const QDir& base, const QString dir, int type)
{
	QStringList filter;
	filter << "*.jpg" << "*.png" << "*.tga" << "*.bmp" << "*.pgm";
	QList<QFileInfo> textures = QDir(dir).entryInfoList(filter, QDir::Files | QDir::Readable);
	foreach(QFileInfo texture, textures)
	{
		QString texFile = base.relativeFilePath(texture.absoluteFilePath());
		if (findText(texFile) == -1)
			addItem(texFile);
	}	
	QList<QFileInfo> textureDirs = QDir(dir).entryInfoList(QDir::Dirs | QDir::Readable | QDir::NoDotAndDotDot);
	foreach(QFileInfo directory, textureDirs)
	{
		addTextures(base, directory.absoluteFilePath(), type);
	}
}
