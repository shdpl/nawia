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

#ifndef QGROUPNODE_H_
#define QGROUPNODE_H_

#include "QSceneNode.h"

/**
 * A group node item for the SceneTreeModel
 */
class QGroupNode : public QSceneNode
{
	Q_OBJECT
	Q_CLASSINFO("QGroupNode", "Group Specific");

	Q_PROPERTY(float Minimum_Distance READ minDist WRITE setMinDist DESIGNABLE true USER true)
	Q_CLASSINFO("Minimum_Distance", "minimum=0;");

	Q_PROPERTY(float Maximum_Distance READ maxDist WRITE setMaxDist DESIGNABLE true USER true)

public:
	static QSceneNode* loadNode(const QDomElement& xmlNode, int row, SceneTreeModel* model, QSceneNode* parent);

	QGroupNode(const QDomElement& xmlNode, int row, SceneTreeModel* model, QSceneNode* parentNode);
	virtual ~QGroupNode();

	void addRepresentation();

	float minDist() const;
	void setMinDist(float value);

	float maxDist() const;
	void setMaxDist(float value);

};
#endif
