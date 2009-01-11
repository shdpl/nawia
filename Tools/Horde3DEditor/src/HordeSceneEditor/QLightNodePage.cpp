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

#include "QLightNodePage.h"

#include "HordeFileDialog.h"
#include "HordeSceneEditor.h"

#include <Horde3D.h>

QLightNodePage::QLightNodePage(QWidget* parent /*= 0*/) : QWizardPage(parent)
{
	setupUi(this);
	setTitle(tr("Add new light"));
	setSubTitle(tr("Create a new light source for the current scene"));
	registerField("lightfov", m_fov, "value", SIGNAL(valueChanged(double)));
	registerField("radius", m_radius, "value", SIGNAL(valueChanged(double)));
	registerField("lightname*", m_name);
	registerField("shadowmapbias", m_shadowMapBias, "value", SIGNAL(valueChanged(double)));
	registerField("shadowcontext", m_shadowContext);
	registerField("lightingcontext", m_lightContext);	
	registerField("material", m_material, "materialFile", SIGNAL(materialChanged()));	
	registerField("slices", m_slices);
	registerField("lambda", m_lambda);
		
}


QLightNodePage::~QLightNodePage()
{
}

void QLightNodePage::initializePage()
{
	// init from pathpage wizard if available
	if (field("materialdir").isValid())
		m_material->init(
			field("materialdir").toString(), 
			field("shaderdir").toString(), 
			field("shaderdir").toString(), 
			field("texturedir").toString(), 
			field("texturedir").toString()
		);
	// Hack to check if Horde3D has been initialized already
	else if (HordeSceneEditor::instance()->glContext() != 0)
		m_material->init(
			Horde3DUtils::getResourcePath(ResourceTypes::Material), 
			Horde3DUtils::getResourcePath(ResourceTypes::Code),
			Horde3DUtils::getResourcePath(ResourceTypes::Shader),
			Horde3DUtils::getResourcePath(ResourceTypes::Texture2D),
			Horde3DUtils::getResourcePath(ResourceTypes::TextureCube)
		);	
}



