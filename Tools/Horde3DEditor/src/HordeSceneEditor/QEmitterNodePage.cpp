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
#include "QEmitterNodePage.h"

#include "HordeSceneEditor.h"

#include <Horde3DUtils.h>

QEmitterNodePage::QEmitterNodePage(QWidget* parent /*= 0*/) : QWizardPage(parent)
{
	setupUi(this);
	setTitle(tr("Add new emitter"));
	setSubTitle(tr("Create a new particle source for the current scene"));
	registerField("name*", m_name);
	registerField("material*", m_material, "materialFile", SIGNAL(materialChanged()));		
	registerField("effect", m_effect, "effectFile", SIGNAL(effectChanged()));	
	registerField("maxCount", m_maxCount);
	registerField("respawnCount", m_respawnCount);
	registerField("emissionRate", m_emissionRate);
}


QEmitterNodePage::~QEmitterNodePage()
{
}

void QEmitterNodePage::initializePage()
{
	// Hack to check if Horde3D has been initialized already
	if (HordeSceneEditor::instance()->glContext() != 0)
	{
		m_material->init(
			Horde3DUtils::getResourcePath(ResourceTypes::Material), 
			Horde3DUtils::getResourcePath(ResourceTypes::Code),
			Horde3DUtils::getResourcePath(ResourceTypes::Shader),
			Horde3DUtils::getResourcePath(ResourceTypes::Texture)			
		);	
		m_effect->init( Horde3DUtils::getResourcePath(ResourceTypes::ParticleEffect) );	
	}
}

