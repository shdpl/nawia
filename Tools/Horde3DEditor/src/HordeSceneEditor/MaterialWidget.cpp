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

#include "MaterialWidget.h"
#include "HordeFileDialog.h"
#include "QTexUnit.h"
#include <QUniform.h>
#include "QHordeSceneEditorSettings.h"

#include <Horde3D.h>
#include <Horde3DUtils.h>

#include <QtCore/QFile>
#include <QtGui/QInputDialog>
#include <QtGui/QMessageBox>
#include <QtGui/QFileDialog>
#include <QtCore/QTextStream>
#include <QtXml/qdom.h>
#include <QtCore/QProcess>
#include <QtCore/QFileSystemWatcher>

MaterialWidget::MaterialWidget(QWidget* parent /*= 0*/, Qt::WFlags flags /*= 0*/) : QWidget(parent, flags)
{
	setupUi(this);
	connect(m_editShader, SIGNAL(clicked()), this, SLOT(editShader()));
	connect(m_texUnitCombo, SIGNAL(currentIndexChanged(int)), this, SLOT(texUnitChanged(int)));
	connect(m_uniformCombo, SIGNAL(currentIndexChanged(int)), this, SLOT(uniformChanged(int)));
	connect(m_saveButton, SIGNAL(clicked()), this, SLOT(save()));
	connect(m_className, SIGNAL(textEdited(const QString&)), this, SLOT(classChanged()));
	m_texUnitProperties->registerCustomPropertyCB(CustomTypes::createCustomProperty);
	connect(m_texUnitProperties->model(), SIGNAL(dataChanged(const QModelIndex&, const QModelIndex& )), this, SLOT(texUnitDataChanged()));
	connect(m_uniformProperties->model(), SIGNAL(dataChanged(const QModelIndex&, const QModelIndex& )), this, SLOT(uniformDataChanged()));
	connect(m_shader, SIGNAL(shaderChanged()), this, SLOT(shaderChanged()));
}


MaterialWidget::~MaterialWidget()
{
}

void MaterialWidget::init()
{
	m_shader->blockSignals(true);
	m_shader->init( QDir::currentPath() );
	if( m_currentMaterialFile.isEmpty() ) 
		m_shader->setCurrentIndex(-1);
	else
	{
		QString shader = m_materialXml.documentElement().firstChildElement("Shader").attribute("source");
		m_shader->setCurrentIndex(m_shader->findText(shader));
	}
	m_shader->blockSignals(false);
}

void MaterialWidget::setCurrentMaterial(const QString &materialFileName)
{
	blockSignals(true);
	closeMaterial();
	m_currentMaterialFile = materialFileName;			
	if (!materialFileName.isEmpty())
	{
		QFile file(QDir(Horde3DUtils::getResourcePath(ResourceTypes::Material)).absoluteFilePath(m_currentMaterialFile));
		if (file.open(QIODevice::ReadOnly))
		{	
			QString errorMsg;
			int errorLine, errorColumn;
			// read material file
			if (!m_materialXml.setContent(&file, &errorMsg, &errorLine, &errorColumn))
				setStatusTip(tr("Error in line %1 column %2 when reading material file %3: %4").arg(errorLine).arg(errorColumn).arg(m_currentMaterialFile).arg(errorMsg));
			else
			{
				setStatusTip("");
				initValues();			
			}
			file.close();
		}
		else
			setStatusTip(file.errorString());
	}
	else
	{
		m_shader->setCurrentIndex(-1);
	}
	setEnabled(!materialFileName.isEmpty());
	blockSignals(false);
}

void MaterialWidget::closeMaterial()
{
	if (m_saveButton->isEnabled())
	{
		if (QMessageBox::question(
			this, 
			tr("Save changes?"), 
			tr("Save previous changes to material %1?").arg(m_currentMaterialFile), 
			QMessageBox::Save | QMessageBox::Default, 
			QMessageBox::Ignore | QMessageBox::Escape)==QMessageBox::Save)
			save();				
	}
	m_saveButton->setEnabled(false);
	if (parentWidget())
		parentWidget()->setWindowTitle(tr("Material Settings"));
	m_materialXml.setContent( QString("<Material/>") );	
	m_texUnitCombo->clear();	
	m_uniformCombo->clear();
}

void MaterialWidget::save()
{
	if (!m_currentMaterialFile.isEmpty() && m_saveButton->isEnabled())
	{
		if (m_className->text().isEmpty())
			m_materialXml.documentElement().removeAttribute("class");
		else
			m_materialXml.documentElement().setAttribute("class", m_className->text());		
		QFile file(QDir(Horde3DUtils::getResourcePath(ResourceTypes::Material)).absoluteFilePath(m_currentMaterialFile));
		if (file.open(QIODevice::WriteOnly | QIODevice::Truncate))
		{
			QTextStream stream(&file);
			m_materialXml.save(stream, 4);
			file.flush();
			file.close();
		}
		else
		{
			QMessageBox::warning(this, tr("Error"), tr("Error opening file %1 for writing:\n\n%2").arg(m_currentMaterialFile).arg(file.errorString()));
			return;
		}
	}
	m_saveButton->setEnabled(false);
}

void MaterialWidget::editShader()
{
	QHordeSceneEditorSettings settings(this);
	settings.beginGroup("General");
	// TODO either create a shader editor or add a file system watcher or something like that
	QProcess::startDetached(
		settings.value("ShaderEditor", "notepad.exe").toString(), 
		QStringList( QDir::current().absoluteFilePath( m_shader->currentText() ) ) 
	);
	settings.endGroup();	
}

void MaterialWidget::initValues()
{
	m_className->setText(m_materialXml.documentElement().attribute("class"));
	QString shader = m_materialXml.documentElement().firstChildElement("Shader").attribute("source");
	m_shader->setCurrentIndex(m_shader->findText(shader));
	if (m_shader->currentIndex() == -1)
		QMessageBox::warning(this, tr("Error"), tr("Shader \"%1\" not found in shader directory").arg(shader));

	QDomNodeList texUnits = m_materialXml.documentElement().elementsByTagName("TexUnit");
	for (int i=0; i<texUnits.count(); ++i)
	{
		QDomElement texUnit = texUnits.at(i).toElement();
		QTexUnit* unit = new QTexUnit(texUnit);
		m_texUnitCombo->insertItem(texUnit.attribute("unit").toInt(), texUnit.attribute("map"), QVariant::fromValue<void*>(unit));
	}
	QDomNodeList uniforms = m_materialXml.documentElement().elementsByTagName("Uniform");
	for (int i=0; i<uniforms.count(); ++i)
	{
		QDomElement uniform = uniforms.at(i).toElement();
		QUniform* uni = new QUniform(uniform);
		m_uniformCombo->addItem(uniform.attribute("name"), QVariant::fromValue<void*>(uni));
	}
	if (parentWidget())
		parentWidget()->setWindowTitle(tr("Material - %1").arg(m_currentMaterialFile));	
	m_saveButton->setEnabled(false);
}

void MaterialWidget::texUnitChanged(int /*index*/)
{
	QTexUnit* unit = static_cast<QTexUnit*>(m_texUnitCombo->itemData(m_texUnitCombo->currentIndex()).value<void*>());
	m_texUnitProperties->setObject(unit);
}

void MaterialWidget::texUnitDataChanged()
{
	QTexUnit* unit = static_cast<QTexUnit*>(m_texUnitCombo->itemData(m_texUnitCombo->currentIndex()).value<void*>());
	if (unit && m_texUnitCombo->currentText() != QFileInfo(unit->map().FileName).fileName() )
		m_texUnitCombo->setItemText(m_texUnitCombo->currentIndex(), QFileInfo(unit->map().FileName).fileName());	
	m_saveButton->setEnabled(true);	
}

void MaterialWidget::uniformChanged(int)
{
	QUniform* uniform = static_cast<QUniform*>(m_uniformCombo->itemData(m_uniformCombo->currentIndex()).value<void*>());	
	m_uniformProperties->setObject(uniform);
}

void MaterialWidget::uniformDataChanged()
{
	QUniform* uniform = static_cast<QUniform*>(m_uniformCombo->itemData(m_uniformCombo->currentIndex()).value<void*>());	
	if (uniform && m_uniformCombo->currentText() != uniform->name() )
		m_uniformCombo->setItemText( m_uniformCombo->currentIndex(), uniform->name() );		
	m_saveButton->setEnabled(true);	
}

void MaterialWidget::shaderChanged()
{
	QDomElement shader = m_materialXml.documentElement().firstChildElement("Shader");
	if( shader.isNull() && !m_shader->currentText().isEmpty() )
		shader = m_materialXml.insertBefore( m_materialXml.createElement("Shader"), QDomNode()).toElement();
	shader.setAttribute("source", m_shader->currentText());
	if ( m_shader->currentText().isEmpty() )
		m_materialXml.documentElement().removeChild(shader);
	syncWithShader();
	m_saveButton->setEnabled(true);
}

void MaterialWidget::classChanged()
{
	m_saveButton->setEnabled(true);
}

void MaterialWidget::syncWithShader()
{	
	QFile shaderFile( QDir::current().absoluteFilePath( m_shader->currentText() ) );
	if( !shaderFile.open( QIODevice::ReadOnly ) )
	{
		QMessageBox::warning( this, tr("Error"), tr("Error opening shader file\n\n%1").arg( QDir::current().absoluteFilePath( m_shader->currentText() ) ) );
		return;
	}
	m_shaderData = ShaderData( shaderFile.readAll() );
	if( !m_shaderData.isValid() )
	{
		QMessageBox::warning( 
			this, 
			tr("Error"), 
			tr("Error reading shader file\n\n%1\n\n%2").arg( QDir::current().absoluteFilePath( m_shader->currentText() ) ).arg( m_shaderData.lastError() ) 
		);
		return;
	}


}