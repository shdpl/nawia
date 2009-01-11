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

#include "QCameraNode.h"

#include <QXmlTree/QXmlNodePropertyCommand.h>
#include "HordeSceneEditor.h"
#include "GLWidget.h"
#include "AttachmentPlugIn.h"
#include "SceneFile.h"
#include "SceneTreeModel.h"
#include "PlugInManager.h"

#include <QtCore/QTextStream>
#include <QtGui/QAction>

#include <Horde3D.h>


QSceneNode* QCameraNode::loadNode(const QDomElement& xmlNode, int row, SceneTreeModel* model, QSceneNode* parent)
{
	return new QCameraNode(xmlNode, row, model, parent);
}

QCameraNode::QCameraNode(const QDomElement& xmlNode, int row, SceneTreeModel* model, QSceneNode* parentNode) : 
QSceneNode(xmlNode, row, model, parentNode), m_pipelineID(0), m_viewportWidth(1), m_viewportHeight(0)
{
	setObjectName("Camera");
	addRepresentation();	
	// May be a hack
	connect(HordeSceneEditor::instance()->glContext(), SIGNAL(resized(int, int)), this, SLOT(viewportResized(int, int)));
	setKeepAspect(keepAspect());
}

QCameraNode::~QCameraNode()
{
	if (m_pipelineID != 0)
	{
		Horde3D::removeResource(m_pipelineID );
		m_pipelineID = 0;
	}	
	HordeSceneEditor::instance()->removeCamera(this);
}

void QCameraNode::addRepresentation()
{	
	QSceneNode* parentNode = static_cast<QSceneNode*>(parent());
	unsigned int rootID = parentNode ? parentNode->hordeId() : RootNode;
	m_pipelineID = Horde3D::addResource(ResourceTypes::Pipeline, qPrintable(m_xmlNode.attribute("pipeline")), 0);

	m_hordeID = Horde3D::addCameraNode( rootID, qPrintable(m_xmlNode.attribute("name", tr("ATTENTION no node name"))), m_pipelineID );	
	float x, y, z, rx, ry, rz, sx, sy, sz;
	getTransformation(x,y,z,rx,ry,rz,sx,sy,sz);
	Horde3D::setNodeTransform(m_hordeID, x, y, z, rx, ry, rz, sx, sy, sz);
	Frustum f(frustum());
	Horde3D::setNodeParamf(m_hordeID, CameraNodeParams::LeftPlane, f.Left);
	Horde3D::setNodeParamf(m_hordeID, CameraNodeParams::RightPlane, f.Right);
	Horde3D::setNodeParamf(m_hordeID, CameraNodeParams::TopPlane, f.Top);
	Horde3D::setNodeParamf(m_hordeID, CameraNodeParams::BottomPlane, f.Bottom);
	Horde3D::setNodeParamf(m_hordeID, CameraNodeParams::NearPlane, f.Near);
	Horde3D::setNodeParamf(m_hordeID, CameraNodeParams::FarPlane, f.Far);
	
	// Attachment
	QDomElement attachment = m_xmlNode.firstChildElement("Attachment");	
	SceneTreeModel* model = static_cast<SceneTreeModel*>(m_model);
	AttachmentPlugIn* plugIn = model->nodeFactory()->attachmentPlugIn();
	if (!attachment.isNull() &&  plugIn != 0) plugIn->initNodeAttachment(this);

	HordeSceneEditor::instance()->addCamera(this);
}

//void QCameraNode::addDebugRepresentation()
//{
//	// Add Camera Geometry
//	//NodeHandle geometry = Horde3D::addResource(ResourceTypes::Geometry, "QCameraNode.geo", 0);
//	//QFile cameraDebugGeometry(":/Models/Resources/QCameraNode.geo");	
//	//if (!cameraDebugGeometry.open(QIODevice::ReadOnly))
//	//{
//	//	qWarning("Error opening resource: %s", qPrintable(cameraDebugGeometry.fileName()));
//	//	return;
//	//}
//	//QByteArray data(cameraDebugGeometry.readAll());
//	//QString path(Horde3DUtils::getResourcePath(ResourceTypes::Geometry));
//	//path += "QCameraNode.geo";
//	//if (!Horde3D::loadResource(qPrintable(path), data.constData(), data.size()))
//	//	return;
//	//// Add Camera Material
//	//NodeHandle material = Horde3D::addResource(ResourceTypes::Material, "QCameraNode.material.xml", 0);
//	//QFile cameraDebugMaterial(":/Models/Resources/QCameraNode.material.xml");	
//	//if (!cameraDebugMaterial.open(QIODevice::ReadOnly))
//	//{
//	//	qWarning("Error opening resource: %s", qPrintable(cameraDebugMaterial.fileName()));
//	//	return;
//	//}
//	//data = cameraDebugMaterial.readAll();
//	//path = Horde3DUtils::getResourcePath(ResourceTypes::Material);
//	//path += "QCameraNode.material.xml";
//	//if (!Horde3D::loadResource(qPrintable(path), data.constData(), data.size()))
//	//	return;
//	//// Add Camera Model 
//	//m_debugID = Horde3D::addResource(ResourceTypes::SceneGraph, "QCameraNode.scene.xml", 0);
//	//QFile cameraDebugModel(":/Models/Resources/QCameraNode.scene.xml");	
//	//if (!cameraDebugModel.open(QIODevice::ReadOnly))
//	//{
//	//	qWarning("Error opening resource: %s", qPrintable(cameraDebugModel.fileName()));
//	//	return;
//	//}
//	//data = cameraDebugModel.readAll();
//	//path = Horde3DUtils::getResourcePath(ResourceTypes::SceneGraph);
//	//path += "QCameraNode.scene.xml";
//	//if (!Horde3D::loadResource(qPrintable(path), data.constData(), data.size()))
//	//	return;
//	//Horde3D::addNodes(m_hordeID, m_debugID);
//}


Frustum QCameraNode::frustum() const
{
	return Frustum(m_xmlNode.attribute("leftPlane", "-0.055228457").toFloat(),
				   m_xmlNode.attribute("rightPlane", "0.055228457").toFloat(),
				   m_xmlNode.attribute("bottomPlane", "-0.041421354").toFloat(),
				   m_xmlNode.attribute("topPlane", "0.041421354").toFloat(),
				   m_xmlNode.attribute("nearPlane", "0.1").toFloat(),
				   m_xmlNode.attribute("farPlane", "1000").toFloat());	
}

void QCameraNode::setFrustum(const Frustum& frustum)
{
	if (signalsBlocked())
	{
		m_xmlNode.setAttribute("leftPlane", frustum.Left);	
		m_xmlNode.setAttribute("rightPlane", frustum.Right);	
		if ( keepAspect() )
		{
			double factor = ( m_viewportWidth * (frustum.Top - frustum.Bottom) ) / ( m_viewportHeight * (frustum.Right - frustum.Left) );
			Horde3D::setNodeParamf(m_hordeID, CameraNodeParams::LeftPlane, frustum.Left * factor );
			Horde3D::setNodeParamf(m_hordeID, CameraNodeParams::RightPlane, frustum.Right * factor);
		}
		else
		{
			Horde3D::setNodeParamf(m_hordeID, CameraNodeParams::LeftPlane, frustum.Left);
			Horde3D::setNodeParamf(m_hordeID, CameraNodeParams::RightPlane, frustum.Right);
		}
		m_xmlNode.setAttribute("topPlane", frustum.Top);	
		Horde3D::setNodeParamf(m_hordeID, CameraNodeParams::TopPlane, frustum.Top);
		m_xmlNode.setAttribute("bottomPlane", frustum.Bottom);
		Horde3D::setNodeParamf(m_hordeID, CameraNodeParams::BottomPlane, frustum.Bottom);
		m_xmlNode.setAttribute("nearPlane", frustum.Near);
		Horde3D::setNodeParamf(m_hordeID, CameraNodeParams::NearPlane, frustum.Near);
		m_xmlNode.setAttribute("farPlane", frustum.Far);
		Horde3D::setNodeParamf(m_hordeID, CameraNodeParams::FarPlane, frustum.Far);
	}
	else if (frustum != QCameraNode::frustum())
		m_model->undoStack()->push(new QXmlNodePropertyCommand("Set Frustum", this, "Frustum", QVariant::fromValue(frustum), FrustumID));
}

Pipeline QCameraNode::pipeline() const
{
	Pipeline pipeline(m_xmlNode.attribute("pipeline"));
	pipeline.ResourceID = m_pipelineID;
	return pipeline;
}

void QCameraNode::setPipeline(const Pipeline &pipeline)
{
	if (signalsBlocked())
	{
		m_xmlNode.setAttribute("pipeline", pipeline.FileName);					
		Horde3D::setNodeParami(m_hordeID, CameraNodeParams::PipelineRes, pipeline.ResourceID);
		Horde3D::removeResource(m_pipelineID);
		m_pipelineID = pipeline.ResourceID;		
		blockSignals(false); // We have to unblock signals here, otherwise the pipeline tree view won't get notified about the change
		emit pipelineChanged(this);
	}
	else if (pipeline != QCameraNode::pipeline())
		m_model->undoStack()->push(new QXmlNodePropertyCommand("Set Pipeline", this, "Pipeline", QVariant::fromValue(pipeline), PipelineID));

}

bool QCameraNode::keepAspect() const
{
	return 	
		m_xmlNode.attribute("keepAspect", "true").compare("true", Qt::CaseInsensitive)==0 ||
		m_xmlNode.attribute("keepAspect", "1").compare("1")==0;
}

void QCameraNode::setKeepAspect(bool keep)
{
	if (signalsBlocked())
	{
		m_xmlNode.setAttribute("keepAspect", keep);
		if( keep )
		{
			Q_ASSERT( HordeSceneEditor::instance()->glContext() != 0 );
			viewportResized(HordeSceneEditor::instance()->glContext()->width(), HordeSceneEditor::instance()->glContext()->height());
		}
	}
	else if (keep != QCameraNode::keepAspect())
		m_model->undoStack()->push(new QXmlNodePropertyCommand("Set Keep Aspect Ratio", this, "Keep_Aspect_Ratio", QVariant(keep), KeepAspectID));
}

bool QCameraNode::ortho() const
{
	return 
		m_xmlNode.attribute("orthographic", "false").compare("true", Qt::CaseInsensitive) == 0 ||
		m_xmlNode.attribute("orthographic", "0").compare("1") == 0;
}

void QCameraNode::setOrtho(bool ortho)
{
	if (signalsBlocked())
	{
		m_xmlNode.setAttribute("orthographic", ortho);
		Horde3D::setNodeParami(m_hordeID, CameraNodeParams::Orthographic, ortho ? 1 : 0);
	}
	else if (ortho != QCameraNode::ortho())
		m_model->undoStack()->push(new QXmlNodePropertyCommand("Set Ortho Projection", this, "Ortho", QVariant(ortho), OrthoProjectionID));
}

bool QCameraNode::occlusionCulling() const
{
	return m_xmlNode.attribute("occlusionCulling", "false").compare("true", Qt::CaseInsensitive) == 0 ||
		m_xmlNode.attribute("occlusionCulling", "0").compare("1", Qt::CaseInsensitive) == 0;
}

void QCameraNode::setOcclusionCulling(bool culling)
{
	if (signalsBlocked())
	{
		m_xmlNode.setAttribute("occlusionCulling", culling);
		Horde3D::setNodeParami(m_hordeID, CameraNodeParams::OcclusionCulling, culling ? 1 : 0);
	}
	else if (culling != QCameraNode::occlusionCulling())
		m_model->undoStack()->push(new QXmlNodePropertyCommand("Set Occlusion Culling", this, "Occlusion_Culling", QVariant(culling), OcclusionCullingID));
}


void QCameraNode::activate()
{
	QVec3f t = position(), r = rotation(), s = scale();
	Horde3D::setNodeTransform(m_hordeID, t.X, t.Y, t.Z, r.X, r.Y, r.Z, s.X, s.Y, s.Z);
	HordeSceneEditor::instance()->setCamera(this);
}

void QCameraNode::viewportResized(int width, int height)
{
	m_viewportWidth = width;
	m_viewportHeight = height;
	//if (m_xmlNode.attribute("keepAspect", "true").compare("true", Qt::CaseInsensitive)==0 ||
	//	m_xmlNode.attribute("keepAspect", "1").compare("1")==0)
	//{
	//	float left = m_xmlNode.attribute("leftPlane", "-0.055228457").toFloat();
	//	float right = m_xmlNode.attribute("rightPlane", "0.055228457").toFloat();
	//	float top = m_xmlNode.attribute("topPlane", "0.041421354").toFloat();
	//	float bottom =  m_xmlNode.attribute("bottomPlane", "-0.041421354").toFloat();
	//	double factor = ( width * (top - bottom) ) / ( height * (right - left) );
	//	Horde3D::setNodeParamf(m_hordeID, CameraNodeParams::LeftPlane, left * factor);
	//	Horde3D::setNodeParamf(m_hordeID, CameraNodeParams::RightPlane, right * factor );
	//}
}

