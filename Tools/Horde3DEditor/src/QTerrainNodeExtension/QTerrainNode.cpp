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


#include "QTerrainNode.h"

#include <QXmlTree/QXmlNodePropertyCommand.h>
#include "PlugInManager.h"
#include "AttachmentPlugIn.h"
#include "SceneFile.h"
#include "SceneTreeModel.h"
#include "QTerrainNodePage.h"

#include <QtCore/QTextStream>
#include <QtCore/QFile>
#include <QtCore/QDir>
#include <QtCore/QFileInfo>
#include <QtGui/QWizard>

#include <Horde3D.h>
#include <Horde3DUtils.h>
#include <Horde3DTerrain.h>

QDomElement QTerrainNode::createNode(QWidget* parent)
{
	QDomDocument terrainNode;
	QWizard wizard(parent);
	wizard.addPage(new QTerrainNodePage(&wizard));
	if (wizard.exec() == QDialog::Accepted)
	{			
		terrainNode.setContent( QString( "<Terrain/>" ) );
		terrainNode.documentElement().setAttribute("name", wizard.field("name").toString());
		terrainNode.documentElement().setAttribute("material", wizard.field("material").toString());
		terrainNode.documentElement().setAttribute("heightmap", wizard.field("heightmap").toString());
	}
	return terrainNode.documentElement();
}

QSceneNode* QTerrainNode::loadNode(const QDomElement& xmlNode, int row, SceneTreeModel* model, QSceneNode* parentNode)
{
	return new QTerrainNode(xmlNode, row, model, parentNode);
}

QTerrainNode::QTerrainNode(const QDomElement& xmlNode, int row, SceneTreeModel* model, QSceneNode* parentNode) :
	QSceneNode(xmlNode, row, model, parentNode), m_heightMapID(0), m_materialID(0)
{
	setObjectName("Terrain");	
	addRepresentation();
}

QTerrainNode::~QTerrainNode()
{
	if (m_heightMapID != 0)
		Horde3D::removeResource(m_heightMapID);
	if (m_materialID != 0)
		Horde3D::removeResource(m_materialID);
}


Material QTerrainNode::material() const
{
	return Material(m_xmlNode.attribute("material"));
}

void QTerrainNode::setMaterial(const Material& material)
{
	if (signalsBlocked())
	{
		m_xmlNode.setAttribute("material", material.FileName);
		Horde3D::removeResource(m_materialID);
		m_materialID = Horde3D::addResource( ResourceTypes::Material, qPrintable(material.FileName), 0 );		
		Horde3DUtils::loadResourcesFromDisk(".");
		Horde3D::setNodeParami(m_hordeID, TerrainNodeParams::MaterialRes, m_materialID);
	}
	else if (material != QTerrainNode::material())
		m_model->undoStack()->push(new QXmlNodePropertyCommand("Set Material", this, "Material", QVariant::fromValue(material), TerrainMaterialID));
}

Texture QTerrainNode::heightMap() const
{
	return Texture(m_xmlNode.attribute("heightmap"), ResourceTypes::Texture);
}

void QTerrainNode::setHeightMap(const Texture& heightMap)
{
	if (signalsBlocked())
	{
		m_xmlNode.setAttribute("heightmap", heightMap.FileName);
		Horde3D::removeResource(m_heightMapID);
		m_heightMapID = Horde3D::addResource( ResourceTypes::Texture, qPrintable(heightMap.FileName), 0 );		
		Horde3DUtils::loadResourcesFromDisk(".");
		Horde3D::setNodeParami(m_hordeID, TerrainNodeParams::HeightMapRes, m_heightMapID);
	}
	else if (heightMap != QTerrainNode::heightMap())
		m_model->undoStack()->push(new QXmlNodePropertyCommand("Set HeightMap", this, "HeightMap", QVariant::fromValue(heightMap), TerrainHeightMapID));	
}

int QTerrainNode::blockSize() const
{
	if (m_xmlNode.hasAttribute("blocksize"))
		return m_xmlNode.attribute("blocksize").toInt();
	else
		return Horde3D::getNodeParami(m_hordeID, TerrainNodeParams::BlockSize);
}

void QTerrainNode::setBlockSize(const int blockSize)
{
	if (signalsBlocked())
	{
		m_xmlNode.setAttribute("blocksize", blockSize);
		Horde3D::setNodeParami(m_hordeID, TerrainNodeParams::BlockSize, blockSize);
	}
	else if (blockSize != QTerrainNode::blockSize())
		m_model->undoStack()->push(new QXmlNodePropertyCommand("Set BlockSize", this, "Blocksize", QVariant::fromValue(blockSize), TerrainBlockSizeID));	
}

float QTerrainNode::meshQuality() const
{
	if (m_xmlNode.hasAttribute("meshQuality"))
		return m_xmlNode.attribute("meshQuality").toDouble();
	else
		return Horde3D::getNodeParamf(m_hordeID, TerrainNodeParams::MeshQuality);
}

void QTerrainNode::setMeshQuality(const float quality)
{
	if (signalsBlocked())
	{
		m_xmlNode.setAttribute("meshQuality", quality);
		Horde3D::setNodeParamf(m_hordeID, TerrainNodeParams::MeshQuality, quality);
	}
	else if (quality != QTerrainNode::meshQuality())
		m_model->undoStack()->push(new QXmlNodePropertyCommand("Set Mesh Quality", this, "Mesh_Quality", QVariant::fromValue(quality), TerrainMeshQualityID));	
}

float QTerrainNode::skirtHeight() const
{
	if (m_xmlNode.hasAttribute("skirtHeight"))
		return m_xmlNode.attribute("skirtHeight").toDouble();
	else
		return Horde3D::getNodeParamf(m_hordeID, TerrainNodeParams::SkirtHeight);
}

void QTerrainNode::setSkirtHeight(const float height)
{
	if (signalsBlocked())
	{
		m_xmlNode.setAttribute("skirtHeight", height);
		Horde3D::setNodeParamf(m_hordeID, TerrainNodeParams::SkirtHeight, height);
	}
	else if (height!= QTerrainNode::skirtHeight())
		m_model->undoStack()->push(new QXmlNodePropertyCommand("Set Skirt Height", this, "Skirt_Height", QVariant::fromValue(height), TerrainSkirtHeightID));	
}

void QTerrainNode::addRepresentation()
{
	m_heightMapID = Horde3D::addResource(
		ResourceTypes::Texture, 
		qPrintable(m_xmlNode.attribute("heightmap")), 
		ResourceFlags::NoTexCompression | ResourceFlags::NoTexMipmaps );
	m_materialID = Horde3D::addResource(ResourceTypes::Material, qPrintable(m_xmlNode.attribute("material")), 0);
	// Load resource immediately since a later call to loadResourceFromDisk results in a bad behaviour of the Horde3D engine
	QDir textureDir(Horde3DUtils::getResourcePath(ResourceTypes::Texture));
	QFile file(textureDir.absoluteFilePath(m_xmlNode.attribute("heightmap")));
	if (!file.open(QIODevice::ReadOnly))
		qWarning("Error opening resource %s", qPrintable(m_xmlNode.attribute("heightmap")));
	
	// Stupid return value, if false it can also be the case that the resource was loaded before instead of that their was an error
	Horde3D::loadResource(m_heightMapID, file.readAll().constData(), file.size());
	file.close();

	QSceneNode* parentNode = static_cast<QSceneNode*>(parent());
	unsigned int rootID = parentNode ? parentNode->hordeId() : RootNode;

	m_hordeID = Horde3DTerrain::addTerrainNode(rootID, qPrintable(m_xmlNode.attribute("name", "ATTENTION No Node Name")), m_heightMapID, m_materialID);
	Horde3D::setNodeParami(m_hordeID, TerrainNodeParams::BlockSize, blockSize());
	Horde3D::setNodeParamf(m_hordeID, TerrainNodeParams::MeshQuality, meshQuality());
	Horde3D::setNodeParamf(m_hordeID, TerrainNodeParams::SkirtHeight, skirtHeight());

	float x, y, z, rx, ry, rz, sx, sy, sz;
	getTransformation(x,y,z,rx,ry,rz,sx,sy,sz);
	Horde3D::setNodeTransform(m_hordeID, x, y, z, rx, ry, rz, sx, sy, sz);

	// Attachment		
	QDomElement attachment = m_xmlNode.firstChildElement("Attachment");	
	SceneTreeModel* model = static_cast<SceneTreeModel*>(m_model);
	AttachmentPlugIn* plugIn = model->nodeFactory()->attachmentPlugIn();
	if (!attachment.isNull() &&  plugIn != 0)
		plugIn->initNodeAttachment(this);
}

