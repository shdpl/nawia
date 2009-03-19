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

#include "QMeshNode.h"

#include <QXmlTree/QXmlNodePropertyCommand.h>
#include "HordeSceneEditor.h"
#include "GLWidget.h"
#include "AttachmentPlugIn.h"
#include "SceneFile.h"
#include "SceneTreeModel.h"
#include "PlugInManager.h"

#include <QtCore/QTextStream>
#include <QtCore/QFile>
#include <QtCore/QDir>
#include <QtCore/QFileInfo>

#include <Horde3D.h>
#include <Horde3DUtils.h>

QSceneNode* QMeshNode::loadNode(const QDomElement& xmlNode, int row, SceneTreeModel* model, QSceneNode* parent)
{
	return new QMeshNode(xmlNode, row, model, parent);
}

QMeshNode::QMeshNode(const QDomElement& xmlNode, int row, SceneTreeModel* model, QSceneNode* parentNode) : 
	QSceneNode(xmlNode, row, model, parentNode)
{
	setObjectName("Mesh");
	QMeshNode::addRepresentation();
}


QMeshNode::~QMeshNode()
{
	if (m_resourceID != 0)
	{
		Horde3D::removeResource(m_resourceID);
		m_resourceID = 0;
	}
}


void QMeshNode::addRepresentation()
{
	m_resourceID = Horde3D::addResource(ResourceTypes::Material, qPrintable(m_xmlNode.attribute("material")), 0);

	QSceneNode* parentNode = static_cast<QSceneNode*>(parent());
	unsigned int rootID = parentNode ? parentNode->hordeId() : RootNode;

	m_hordeID = Horde3D::addMeshNode(
		rootID, 
		qPrintable(m_xmlNode.attribute("name")), 
		m_resourceID, 
		m_xmlNode.attribute("batchStart").toUInt(),
		m_xmlNode.attribute("batchCount").toUInt(),
		m_xmlNode.attribute("vertRStart").toUInt(),
		m_xmlNode.attribute("vertREnd").toUInt()
	);	
	// load transformation from file...
	float x, y, z, rx, ry, rz, sx, sy, sz;
	getTransformation(x,y,z,rx,ry,rz,sx,sy,sz);
	// ...and update scene representation
	Horde3D::setNodeTransform(m_hordeID, x, y, z, rx, ry, rz, sx, sy, sz);
	
	// Attachment
	QDomElement attachment = m_xmlNode.firstChildElement("Attachment");	
	SceneTreeModel* model = static_cast<SceneTreeModel*>(m_model);
	AttachmentPlugIn* plugIn = model->nodeFactory()->attachmentPlugIn();
	if (!attachment.isNull() &&  plugIn != 0)
		plugIn->initNodeAttachment(this);

}

Material QMeshNode::material() const
{
	return Material(m_xmlNode.attribute("material"));
}

void QMeshNode::setMaterial(const Material &material)
{
	if (signalsBlocked())
	{
		m_xmlNode.setAttribute("material", material.FileName);
		ResHandle resourceID = Horde3D::findResource(ResourceTypes::Material, qPrintable(QMeshNode::material().FileName));
		if (resourceID != 0)
			Horde3D::removeResource(resourceID);
		resourceID = Horde3D::addResource( ResourceTypes::Material, qPrintable(material.FileName), 0 );		
		Horde3D::setNodeParami(m_hordeID, MeshNodeParams::MaterialRes, resourceID);
		Horde3DUtils::loadResourcesFromDisk(".");
	}
	else if (material != QMeshNode::material())
		m_model->undoStack()->push(new QXmlNodePropertyCommand("Set Material", this, "Material", QVariant::fromValue(material), MeshMaterialID));
}

int QMeshNode::batchCount() const
{
	return m_xmlNode.attribute("batchCount").toInt();
}

int QMeshNode::batchStart() const
{
	return m_xmlNode.attribute("batchStart").toInt();
}

int QMeshNode::vertRStart() const
{
	return m_xmlNode.attribute("vertRStart").toInt();
}


int QMeshNode::vertREnd() const
{
	return m_xmlNode.attribute("vertREnd").toInt();
}

void QMeshNode::activate()
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
