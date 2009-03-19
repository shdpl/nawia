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

#include "MaterialComboBox.h"

#include <QtCore/QDir>
#include "HordeFileDialog.h"

MaterialComboBox::MaterialComboBox(QWidget* parent /*= 0*/) : QComboBox(parent)
{	
	connect(this, SIGNAL(currentIndexChanged(int)), this, SLOT(currentChanged(int)));	
}


MaterialComboBox::~MaterialComboBox()
{
}

void MaterialComboBox::init(const QString& materialPath, const QString& codePath, const QString& shaderPath, const QString& texturePath )
{
	clear();	
	addItem(tr("No material"), QVariant((int) -1));
	m_shaderPath = shaderPath;
	m_codePath = codePath;
	m_texturePath = texturePath;	
	m_materialPath = materialPath;
	blockSignals(true);
	if (!materialPath.isEmpty())
		addMaterials(materialPath, materialPath);
	addItem(tr("Import from Repository"), QVariant((int) QVariant::UserType));
	if (count() == 1)
		setCurrentIndex(-1);
	blockSignals(false);
}

QString MaterialComboBox::materialFile() const
{
	if (currentIndex() == -1 || itemData(currentIndex(), Qt::UserRole).toInt() == -1)
		return QString();
	else
		return currentText();
}

void MaterialComboBox::setMaterialFile(const QString& filename)
{
	setMaterial(Material(filename));
}

Material MaterialComboBox::material() const
{
	return Material(materialFile());
}

void MaterialComboBox::setMaterial(Material material)
{
	blockSignals(true);
	if ( material.FileName.isEmpty() )
		setCurrentIndex(0); // the no material entry
	else
		setCurrentIndex(findText(material.FileName));
	blockSignals(false);
	m_init = material.FileName;
}

void MaterialComboBox::currentChanged(int index)
{
	if (itemData(index).isValid() && itemData(index) == QVariant((int)QVariant::UserType))
	{
		HordePathSettings paths;
		paths.CodePath = m_codePath;
		paths.TexturePath = m_texturePath;		
		paths.ShaderPath = m_shaderPath;
		paths.MaterialPath = m_materialPath;
		QString newMaterial = HordeFileDialog::getMaterialFile(paths, this, tr("Select material to import"));
		if (!newMaterial.isEmpty())
		{
			if (findText(newMaterial) == -1)
			{
				removeItem(index);
				addItem(newMaterial);
				addItem(tr("Import from Repository"), QVariant(QVariant::UserType));
			}
			setCurrentIndex(findText(newMaterial));
			return;
		}
		else
		{
			setCurrentIndex(findText(m_init));
			return;
		}
	}
	if (m_init != currentText())
	{
		emit editFinished();
		emit materialChanged();
	}
}

void MaterialComboBox::addMaterials(const QDir& base, const QString dir)
{	
	QList<QFileInfo> materials = QDir(dir).entryInfoList(QStringList("*.material.xml"), QDir::Files | QDir::Readable);
	foreach(QFileInfo material, materials)
	{
		addItem(base.relativeFilePath(material.absoluteFilePath()));
	}	
	QList<QFileInfo> materialDirs = QDir(dir).entryInfoList(QDir::Dirs | QDir::Readable | QDir::NoDotAndDotDot);
	foreach(QFileInfo directory, materialDirs)
	{
		addMaterials(base, directory.absoluteFilePath());
	}
}
