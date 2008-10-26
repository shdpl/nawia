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

#include "SceneWizard.h"
#include "SceneFile.h"
#include "SceneFilePage.h"
#include "PathPage.h"
#include "PlugInPage.h"

#include "QCameraNodePage.h"
#include "QGroupNodePage.h"
#include "QReferenceNodePage.h"
#include "QLightNodePage.h"
#include "QEmitterNodePage.h"
#include "QCameraNodePage.h"

#include <QtGui/QLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtCore/QDir>
#include <QtXml/qdom.h>
#include <QtGui/QMessageBox>
#include <QtCore/QTextStream>

#include <math.h>
#include <Horde3D/Horde3D.h>

namespace SceneWizard
{
	SceneFile* createScene(QWidget* parent /*=0*/)
	{
		SceneFile* sceneFile = 0;
		QWizard wizard(parent);
		wizard.addPage(new SceneFilePage(&wizard));
		wizard.addPage(new PathPage(&wizard));
		wizard.addPage(new QCameraNodePage(&wizard));
		wizard.addPage(new QLightNodePage(&wizard));
		wizard.addPage(new PlugInPage(&wizard));
		if (wizard.exec() == QDialog::Accepted)
		{	
			// Create new scene file
			sceneFile = new SceneFile();			
			// Set filename
			QFileInfo sceneFileInfo(QDir(wizard.field("scenepath").toString()), wizard.field("scenefile").toString());
			sceneFile->setSceneFileName(sceneFileInfo.absoluteFilePath());
			// create scenegraph file
			QFileInfo sceneGraphFile(QDir(wizard.field("scenegraphdir").toString()), sceneFileInfo.baseName() + ".scene.xml");
			// set the scene graph file within the configuration file
			sceneFile->setSceneGraphFile(QDir::current().relativeFilePath(sceneGraphFile.absoluteFilePath()));

			// Create Configuration XML structure
			QDomDocument sceneFileXml("SceneConfiguration");		
			sceneFileXml.appendChild(sceneFileXml.createElement("Configuration"));
			// store pipeline settings
			QDomElement element = sceneFileXml.documentElement().appendChild(sceneFileXml.createElement("Pipeline")).toElement();			
			element.setAttribute("path", QDir::current().relativeFilePath(wizard.field("pipeline").toString()));			
			// store scenegraph settings
			element = sceneFileXml.documentElement().appendChild(sceneFileXml.createElement("SceneGraph")).toElement();
			// save scene graph file relative to the scene graph directory set in Horde3D
			element.setAttribute("path", QDir( wizard.field("scenegraphdir").toString()).relativeFilePath(sceneGraphFile.absoluteFilePath()));
			sceneFile->setSceneGraphFile(sceneGraphFile.absoluteFilePath());
			sceneFile->setSceneFileDom(sceneFileXml);
			// set engine pathes
			element = sceneFileXml.createElement("EnginePath");
			element.setAttribute("geometrypath", wizard.field("geometrydir").toString());
			element.setAttribute("animationpath", wizard.field("animationdir").toString());
			element.setAttribute("shaderpath", wizard.field("shaderdir").toString());
			element.setAttribute("materialpath", wizard.field("materialdir").toString());
			element.setAttribute("texturepath", wizard.field("texturedir").toString());
			element.setAttribute("scenegraphpath", wizard.field("scenegraphdir").toString());
			element.setAttribute("effectspath", wizard.field("effectsdir").toString());
			element.setAttribute("pipelinepath", wizard.field("pipelinedir").toString());
			sceneFileXml.documentElement().appendChild(element);		
			// set standard light parameters
			element = sceneFileXml.createElement("LightParameters");
			if ( !wizard.field("material").toString().isEmpty() ) // Only create material attribute if necessary
				element.setAttribute("material", wizard.field("material").toString());
			element.setAttribute("lightingcontext", wizard.field("lightingcontext").toString());
			element.setAttribute("shadowcontext", wizard.field("shadowcontext").toString());
			sceneFileXml.documentElement().appendChild(element);
			// set AttachmentPlugin
			if (wizard.field("plugin").toString().compare("None", Qt::CaseInsensitive)!=0)
			{
				element = sceneFileXml.documentElement().appendChild(sceneFileXml.createElement("AttachmentPlugIn")).toElement();
				element.setAttribute("name", wizard.field("plugin").toString());
			}
			// set extras 
			sceneFileXml.documentElement().appendChild(sceneFileXml.createElement("Extras"));
			sceneFileXml.documentElement().appendChild(sceneFileXml.createElement("ActiveCamera")).toElement().setAttribute("name", wizard.field("cameraname").toString());
			// create basic scene structure
			QDomDocument sceneGraphXml("HordeSceneGraph");
			QDomElement rootNode = sceneGraphXml.createElement("Group");
			rootNode.setAttribute("name", QFileInfo(sceneFile->sceneGraphFile()).baseName());
			QDomElement cameraNode = sceneGraphXml.createElement("Camera");
			cameraNode.setAttribute("name", wizard.field("cameraname").toString());
			cameraNode.setAttribute("pipeline", wizard.field("pipeline").toString());
			float left, right, bottom, top, near, far;
			if (wizard.field("asymFrustum").toBool())
			{				
				left = wizard.field("leftPlane").toDouble();
				right = wizard.field("rightPlane").toDouble();
				bottom = wizard.field("bottomPlane").toDouble();
				top = wizard.field("topPlane").toDouble();
				near = wizard.field("asymNear").toDouble();
				far = wizard.field("asymFar").toDouble();
			}
			else
			{
				near = wizard.field("symNear").toDouble();
				far = wizard.field("symFar").toDouble();
				float ymax = near * tanf( ( wizard.field("camerafov").toDouble() * 3.1415926 / 360.0f ) );
				float xmax = ymax * wizard.field("quo").toDouble() / wizard.field("div").toDouble();
				left = -xmax;
				right = xmax;
				bottom = -ymax;
				top = ymax;
			}
			cameraNode.setAttribute("leftPlane", left);
			cameraNode.setAttribute("rightPlane", right);
			cameraNode.setAttribute("bottomPlane", bottom);
			cameraNode.setAttribute("topPlane", top);
			cameraNode.setAttribute("nearPlane", near);
			cameraNode.setAttribute("farPlane", far);
			rootNode.appendChild(cameraNode);
			QDomElement lightNode = sceneGraphXml.createElement("Light");			
			lightNode.setAttribute("name", wizard.field("lightname").toString());
			lightNode.setAttribute("radius", wizard.field("radius").toDouble());
			lightNode.setAttribute("fov", wizard.field("lightfov").toDouble());
			lightNode.setAttribute("col_R", 1.0f);
			lightNode.setAttribute("col_G", 1.0f);
			lightNode.setAttribute("col_B", 1.0f);
			lightNode.setAttribute("shadowMapBias", wizard.field("shadowmapbias").toDouble());
			lightNode.setAttribute("shadowSplitLambda", wizard.field("lambda").toDouble());
			lightNode.setAttribute("shadowMapCount", wizard.field("slices").toInt());
			lightNode.setAttribute("shadowContext", wizard.field("shadowcontext").toString());
			lightNode.setAttribute("lightingContext", wizard.field("lightingcontext").toString());
			if ( !wizard.field("material").toString().isEmpty() ) // Only create material attribute if necessary	
				lightNode.setAttribute("material", wizard.field("material").toString());
			rootNode.appendChild(lightNode);
			sceneGraphXml.appendChild(rootNode);
			QFile tempFile(sceneFile->sceneGraphFile());
			if (!tempFile.open(QIODevice::WriteOnly))
				QMessageBox::warning(0, QString("Error"), QString("File couldn't be opened for writing: ")+sceneFile->sceneGraphFile());
			else
			{
				QTextStream graphStream(&tempFile);
				sceneGraphXml.save(graphStream, 4);
				tempFile.close();
			}
			// save the new created scene
			if (!sceneFile->save())
				QMessageBox::warning(0, QObject::tr("Error"), QObject::tr("Error saving file: %1").arg(sceneFile->absoluteSceneFilePath()));
		}		
		return sceneFile;
	}

	QDomElement createReference(QWidget* parent)
	{
		QDomElement referenceNode;
		QWizard wizard(parent);
		wizard.addPage(new QReferenceNodePage(&wizard));
		if (wizard.exec() == QDialog::Accepted)
		{			
			referenceNode = QDomDocument().createElement("Reference");
			referenceNode.setAttribute("name", wizard.field("name").toString());
			referenceNode.setAttribute("sceneGraph", wizard.field("file").toString());
			referenceNode.setAttribute("sx", 1.0f);
			referenceNode.setAttribute("sy", 1.0f);
			referenceNode.setAttribute("sz", 1.0f);
		}
		return referenceNode;
	}

	QDomElement createLight(QWidget* parent)
	{
		QDomElement lightNode;
		QWizard wizard(parent);
		wizard.addPage(new QLightNodePage(&wizard));
		if (wizard.exec() == QDialog::Accepted)
		{			
			lightNode = QDomDocument().createElement("Light");
			lightNode.setAttribute("name", wizard.field("lightname").toString());
			lightNode.setAttribute("radius", wizard.field("radius").toDouble());
			lightNode.setAttribute("fov", wizard.field("lightfov").toDouble());
			lightNode.setAttribute("shadowMapBias", wizard.field("shadowmapbias").toDouble());
			lightNode.setAttribute("shadowMapEnabled", wizard.field("shadowmap").toBool() ? "true" : "false");
			lightNode.setAttribute("col_R", 1.0f);
			lightNode.setAttribute("col_G", 1.0f);
			lightNode.setAttribute("col_B", 1.0f);
			lightNode.setAttribute("shadowSplitLambda", wizard.field("lambda").toDouble());
			lightNode.setAttribute("shadowMapCount", wizard.field("slices").toInt());
			lightNode.setAttribute("shadowContext", wizard.field("shadowcontext").toString());
			lightNode.setAttribute("lightingContext", wizard.field("lightingcontext").toString());
			if ( !wizard.field("material").toString().isEmpty() ) // Only create material attribute if necessary
				lightNode.setAttribute("material", wizard.field("material").toString());
		}
		return lightNode;
	}

	QDomElement createCamera(QWidget* parent)
	{
		QDomElement cameraNode;
		QWizard wizard(parent);
		wizard.addPage(new QCameraNodePage(/*QDomElement(), */&wizard));
		if (wizard.exec() == QDialog::Accepted)
		{
			cameraNode = QDomDocument().createElement("Camera");
			cameraNode.setAttribute("name", wizard.field("cameraname").toString());
			float left, right, bottom, top, near, far;
			if (wizard.field("asymFrustum").toBool())
			{				
				left = wizard.field("leftPlane").toDouble();
				right = wizard.field("rightPlane").toDouble();
				bottom = wizard.field("bottomPlane").toDouble();
				top = wizard.field("topPlane").toDouble();
				near = wizard.field("asymNear").toDouble();
				far = wizard.field("asymFar").toDouble();
			}
			else
			{
				near = wizard.field("symNear").toDouble();
				far = wizard.field("symFar").toDouble();
				float ymax = near * tanf( ( wizard.field("camerafov").toDouble() * 3.1415926 / 360.0f ) );
				float xmax = ymax * wizard.field("quo").toDouble() / wizard.field("div").toDouble();
				left = -xmax;
				right = xmax;
				bottom = -ymax;
				top = ymax;
			}
			cameraNode.setAttribute("leftPlane", left);
			cameraNode.setAttribute("rightPlane", right);
			cameraNode.setAttribute("bottomPlane", bottom);
			cameraNode.setAttribute("topPlane", top);
			cameraNode.setAttribute("nearPlane", near);
			cameraNode.setAttribute("farPlane", far);
			cameraNode.setAttribute("pipeline", wizard.field("pipeline").toString());
		}
		return cameraNode;
	}

	QDomElement createGroup(QWidget* parent)
	{
		QDomElement groupNode;
		QWizard wizard(parent);
		wizard.addPage(new QGroupNodePage(&wizard));
		if (wizard.exec() == QDialog::Accepted)
		{
			groupNode = QDomDocument().createElement("Group");
			groupNode.setAttribute("name", wizard.field("name").toString());
		}
		return groupNode;
	}

	QDomElement createEmitter(QWidget* parent)
	{
		QDomElement emitterNode;
		QWizard wizard(parent);
		wizard.addPage(new QEmitterNodePage(&wizard));
		if (wizard.exec() == QDialog::Accepted)
		{			
			emitterNode = QDomDocument().createElement("Emitter");
			emitterNode.setAttribute("name", wizard.field("name").toString());
			emitterNode.setAttribute("effect", wizard.field("effect").toString());
			emitterNode.setAttribute("material", wizard.field("material").toString());
			emitterNode.setAttribute("maxCount", wizard.field("maxCount").toDouble());
			emitterNode.setAttribute("respawnCount", wizard.field("respawnCount").toDouble());
			emitterNode.setAttribute("emissionRate", wizard.field("emissionRate").toUInt());
		}
		return emitterNode;
	}
}


