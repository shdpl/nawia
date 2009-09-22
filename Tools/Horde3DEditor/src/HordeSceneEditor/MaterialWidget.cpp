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

MaterialWidget::MaterialWidget(QWidget* parent /*= 0*/, Qt::WFlags flags /*= 0*/) : QWidget(parent, flags), m_shaderData(0)
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
	connect(m_shaderFlags, SIGNAL(stateChanged( int, bool ) ), this, SLOT( flagsChanged( int, bool ) ) );
	m_shaderFlags->setDisplayText( tr( "Shader Flags" ) );
}


MaterialWidget::~MaterialWidget()
{
	release();
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
		QFile file( QDir::current().absoluteFilePath(m_currentMaterialFile) );
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
	release();
}

void MaterialWidget::save()
{
	if (!m_currentMaterialFile.isEmpty() && m_saveButton->isEnabled())
	{
		if (m_className->text().isEmpty())
			m_materialXml.documentElement().removeAttribute("class");
		else
			m_materialXml.documentElement().setAttribute("class", m_className->text());		
		QFile file( QDir::current().absoluteFilePath(m_currentMaterialFile));
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
		QMessageBox::warning(this, tr("Error"), tr("Shader \"%1\" not found!").arg(shader));

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
	//QTexUnit* unit = static_cast<QTexUnit*>(m_texUnitCombo->itemData(m_texUnitCombo->currentIndex()).value<void*>());
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

void MaterialWidget::flagsChanged( int index, bool checked )
{
	m_saveButton->setEnabled(true);
}

void MaterialWidget::release()
{
	// Release all QUniform instances that are not allocated by the m_shaderData
	for( int i = 0; i < m_uniformCombo->count(); ++i )
	{
		QUniform* uniform = static_cast<QUniform*>( m_uniformCombo->itemData( i ).value<void*>() );
		if( !uniform->isShaderUniform() )
			delete uniform;			
	}
	m_uniformCombo->clear();

	// Delete the shader data
	delete m_shaderData;
	m_shaderData = 0;

	// Release all QTexUnit instances
	for( int i = 0; i < m_texUnitCombo->count(); ++i )
	{
		QTexUnit* unit = static_cast<QTexUnit*>( m_texUnitCombo->itemData( i ).value<void*>() );
		delete unit;
	}
	m_texUnitCombo->clear();
	
	m_shaderFlags->clear();

}

void MaterialWidget::syncWithShader()
{	
	QFile shaderFile( QDir::current().absoluteFilePath( m_shader->currentText() ) );
	if( !shaderFile.open( QIODevice::ReadOnly ) )
	{
		QMessageBox::warning( this, tr("Error"), tr("Error opening shader file\n\n%1").arg( QDir::current().absoluteFilePath( m_shader->currentText() ) ) );
		return;
	}
	release();

	m_shaderData = new ShaderData( shaderFile.readAll() );
	if( !m_shaderData->isValid() )
	{
		QMessageBox::warning( 
			this, 
			tr("Error"), 
			tr("Error reading shader file\n\n%1\n\n%2").arg( QDir::current().absoluteFilePath( m_shader->currentText() ) ).arg( m_shaderData->lastError() ) 
		);
		delete m_shaderData;
		m_shaderData = 0;
		return;
	}
	
	QDomNodeList flags = m_materialXml.elementsByTagName( "ShaderFlag" );
	for( int i = 0; i < m_shaderData->flags().size(); ++i)
	{
		bool set = false;
		for( int j = 0; j < flags.size(); ++j )
		{
			QString flag = flags.at(j).toElement().attribute( "name" );
			if( flag.compare( 
				QString( "_F%1_%2" ).arg( m_shaderData->flags().at(i).Flag, 2, 10, QChar::fromLatin1('0') ).arg( m_shaderData->flags().at(i).Name ),
				Qt::CaseInsensitive ) == 0 )
			{
				set = true;
				break;
			}
		}
		m_shaderFlags->addItem( m_shaderData->flags().at(i).Name, set );
		m_shaderFlags->setItemData( m_shaderFlags->count(), m_shaderData->flags().at(i).Flag, Qt::UserRole + 1 );
	}

	QDomNodeList samplers = m_materialXml.documentElement().elementsByTagName("Sampler");
	for( int i = 0; i < m_shaderData->samplers().size(); ++i )
	{
		QString tip("Texture Unit %1");
		tip.arg( m_shaderData->samplers().at(i).TexUnit );
		m_texUnitCombo->setItemData( m_texUnitCombo->count(), tip, Qt::ToolTipRole );
		m_texUnitCombo->setItemData( m_texUnitCombo->count(), tip, Qt::StatusTipRole);
		QDomElement sampler;
		for( int j = 0;  j < samplers.count(); ++j)
		{			
			if( samplers.at(j).toElement().attribute("name") == m_shaderData->samplers().at( i ).Id )
			{
				sampler = samplers.at(j).toElement();
				break;
			}	
		}
		if( sampler.isNull() )
		{
			sampler = m_materialXml.appendChild( m_materialXml.createElement("Sampler") ).toElement();
			sampler.setAttribute( "name", m_shaderData->samplers().at( i ).Id );
		}
		QTexUnit *unit = new QTexUnit( m_shaderData->samplers().at(i).TexUnit, sampler, m_texUnitCombo );
		m_texUnitCombo->addItem( m_shaderData->samplers().at(i).Id, QVariant::fromValue<void*>( unit ) );
	}

	QDomNodeList uniforms = m_materialXml.documentElement().elementsByTagName("Uniform");
	for( int i = 0; i < m_shaderData->uniforms().size(); ++i )
	{
		QUniform* uni = 0;		
		for( int j = 0;  j < uniforms.count(); ++j)
		{
			QDomElement uniform = uniforms.at(j).toElement();
			if( uniform.attribute("name").compare( m_shaderData->uniforms().at( i )->name() ) == 0 )
			{
				uni = new QUniform( uniform, false );
				break;
			}	
		}
		if( !uni )
			uni = m_shaderData->uniforms().at(i);
		m_uniformCombo->addItem( uni->name(), QVariant::fromValue<void*>( uni ) );
	}


}
