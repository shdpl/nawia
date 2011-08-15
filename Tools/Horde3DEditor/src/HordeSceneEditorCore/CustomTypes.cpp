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

#include "CustomTypes.h"

#include "Vec3fProperty.h"
#include "MaterialProperty.h"
#include "TextureProperty.h"
#include "FrustumProperty.h"
#include "PipelineProperty.h"
#include "EffectProperty.h"
#include <QPropertyEditor/Property.h>

namespace CustomTypes
{
	void registerTypes()
	{
		static bool registered = false;
		if (!registered)
		{
			qRegisterMetaType<QVec3f>("QVec3f");
			qRegisterMetaType<QMatrix4f>("QMatrix4f");
			qRegisterMetaType<Material>("Material");
			qRegisterMetaType<Effect>("Effect");
			qRegisterMetaType<Texture>("Texture");
			qRegisterMetaType<Frustum>("Frustum");
			qRegisterMetaType<Shader>("Shader");
			qRegisterMetaType<Pipeline>("Pipeline");
			registered = true;
		}
	}

	Property* createCustomProperty(const QString& name, QObject* propertyObject, Property* parent)
	{
		int userType = propertyObject->property(qPrintable(name)).userType();
		if (userType == QMetaType::type("QVec3f"))
			return new Vec3fProperty(name, propertyObject, parent);
		else if (userType == QMetaType::type("Material"))
			return new MaterialProperty(name, propertyObject, parent);
		else if (userType == QMetaType::type("Texture"))
			return new TextureProperty(name, propertyObject, parent);
		else if (userType == QMetaType::type("Frustum"))
			return new FrustumProperty(name, propertyObject, parent);
		else if (userType == QMetaType::type("Pipeline"))
			return new PipelineProperty(name, propertyObject, parent);
		else if (userType == QMetaType::type("Effect"))
			return new EffectProperty(name, propertyObject, parent);
		else
			return 0;
	}
}
