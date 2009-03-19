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


#include "QModelNode.h"

#include "HordeSceneEditor.h"
#include "GLWidget.h"
#include "AttachmentPlugIn.h"
#include "SceneFile.h"
#include "SceneTreeModel.h"
#include "PlugInManager.h"

#include <QXmlTree/QXmlNodePropertyCommand.h>

#include <QtCore/QTextStream>
#include <QtCore/QFile>
#include <QtCore/QDir>
#include <QtCore/QFileInfo>

#include <Horde3D.h>
#include <Horde3DUtils.h>

QSceneNode* QModelNode::loadNode(const QDomElement& xmlNode, int row, SceneTreeModel* model, QSceneNode* parent)
{
	return new QModelNode(xmlNode, row, model, parent);
}

QModelNode::QModelNode(const QDomElement& xmlNode, int row, SceneTreeModel* model, QSceneNode* parentNode) :
	QSceneNode(xmlNode, row, model, parentNode)
{
	setObjectName("Model");	
	addRepresentation();
}

QModelNode::~QModelNode()
{
	if (m_resourceID != 0)
		Horde3D::removeResource(m_resourceID);
}

QString QModelNode::geometry() const
{
	return m_xmlNode.attribute("geometry");
}

bool QModelNode::softwareSkinning() const
{
	return m_xmlNode.attribute("softwareSkinning", "false").compare("true", Qt::CaseInsensitive) == 0 ||
		m_xmlNode.attribute("softwareSkinning", "0").compare("1", Qt::CaseInsensitive) == 0;
}

void QModelNode::setSoftwareSkinning(bool softwareSkinning)
{
	if (signalsBlocked())
	{
		m_xmlNode.setAttribute("softwareSkinning", softwareSkinning);
		Horde3D::setNodeParami(m_hordeID, ModelNodeParams::SoftwareSkinning, softwareSkinning);
	}
	else if( softwareSkinning != QModelNode::softwareSkinning() )
		m_model->undoStack()->push(new QXmlNodePropertyCommand("Set Software Skinning", this, "Software_Skinning", QVariant::fromValue(softwareSkinning), SoftwareSkinningID));
}

void QModelNode::addRepresentation()
{
	m_resourceID = Horde3D::addResource(ResourceTypes::Geometry, qPrintable(m_xmlNode.attribute("geometry")), 0);

	// Load resource immediately since a later call to loadResourceFromDisk results in a bad behaviour of the Horde3D engine
	QString resourceName = Horde3DUtils::getResourcePath(ResourceTypes::Geometry);
	if( !resourceName.isEmpty() && !resourceName.endsWith('/') && !resourceName.endsWith('\\'))
		resourceName += '/';
	resourceName += geometry();

	QFile file(QFileInfo(resourceName).absoluteFilePath());
	if (!file.open(QIODevice::ReadOnly))
		qWarning("Error opening resource %s", qPrintable(m_xmlNode.attribute("geometry")));
	
	// Stupid return value, if false it can also be the case that the resource was loaded before instead of that their was an error
	Horde3D::loadResource(m_resourceID, file.readAll().constData(), file.size());
	file.close();

	QSceneNode* parentNode = static_cast<QSceneNode*>(parent());
	unsigned int rootID = parentNode ? parentNode->hordeId() : RootNode;

	m_hordeID = Horde3D::addModelNode(rootID, qPrintable(m_xmlNode.attribute("name", "ATTENTION No Node Name")), m_resourceID);
	
	float x, y, z, rx, ry, rz, sx, sy, sz;
	getTransformation(x,y,z,rx,ry,rz,sx,sy,sz);
	Horde3D::setNodeTransform(m_hordeID, x, y, z, rx, ry, rz, sx, sy, sz);
	
	Horde3D::setNodeParami(m_hordeID, ModelNodeParams::SoftwareSkinning, softwareSkinning());

	// Attachment
	QDomElement attachment = m_xmlNode.firstChildElement("Attachment");	
	SceneTreeModel* model = static_cast<SceneTreeModel*>(m_model);
	AttachmentPlugIn* plugIn = model->nodeFactory()->attachmentPlugIn();
	if (!attachment.isNull() &&  plugIn != 0)
		plugIn->initNodeAttachment(this);
}

void QModelNode::activate()
{
	float minX, minY, minZ, maxX, maxY, maxZ;
	Horde3D::getNodeAABB(m_hordeID, &minX, &minY, &minZ, &maxX, &maxY, &maxZ);

	unsigned int cameraID = HordeSceneEditor::instance()->glContext()->activeCam();
	float leftPlane = Horde3D::getNodeParamf(cameraID, CameraNodeParams::LeftPlane);
	float rightPlane = Horde3D::getNodeParamf(cameraID, CameraNodeParams::RightPlane);
	float bottomPlane = Horde3D::getNodeParamf(cameraID, CameraNodeParams::BottomPlane);
	float topPlane = Horde3D::getNodeParamf(cameraID, CameraNodeParams::TopPlane);
	float nearPlane = Horde3D::getNodeParamf(cameraID, CameraNodeParams::NearPlane);

	const float* camera = 0;
	NodeHandle parentNode = Horde3D::getNodeParent(cameraID);
	if ( !Horde3D::getNodeTransformMatrices(parentNode, 0, &camera) ) return;
	
	/** 
	 * (maxX - minX)                           =   width of the bounding box 
	 * rightPlane / (rightPlane - leftPlane)   =   right fraction of the viewing frustum
	 */
	float offsetX = (maxX - minX) * rightPlane / (rightPlane - leftPlane);
	float offsetY = (maxY - minY) * topPlane / (topPlane - bottomPlane);
	QMatrix4f newCamTrans = QMatrix4f::TransMat(maxX - offsetX, maxY - offsetY, maxZ);
	newCamTrans.translate(0, 0, qMax(nearPlane * offsetX / rightPlane, nearPlane * offsetY / topPlane));		
	Horde3D::setNodeTransformMatrix(cameraID, (QMatrix4f(camera).inverted() * newCamTrans).x);	
}


