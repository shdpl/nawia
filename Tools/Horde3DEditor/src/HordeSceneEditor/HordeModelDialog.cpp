#include "HordeModelDialog.h"

#include "QHordeSceneEditorSettings.h"
#include "HordeSceneEditor.h"
#include "SceneFile.h"
#include "ColladaImporter.h"
#include "GLWidget.h"

HordeModelDialog::HordeModelDialog(const HordePathSettings& targetPaths, QWidget* parent /*= 0*/, Qt::WFlags flags /*= 0*/) : HordeFileDialog(ResourceTypes::SceneGraph, targetPaths, parent, flags),
m_glWidget(0), m_oldScene(0), m_newScene(0), m_currentModel(0), m_cameraID(0)
{
	m_glFrame->setLayout(new QHBoxLayout());
	initModelViewer();
    m_importButton = new QPushButton(tr("Import Collada File"), this);
	m_importButton->setToolTip(tr("Let you import an existing collada file into the repository!"));
	m_importButton->setWhatsThis(
		tr("For the usage of your favorite modelling tool's data, you have to export the data to the collada file format.\n"
		"You can then convert the collada file using the Horde3D Collada Converter to the Horde3D specific file format.\n"
		"Using this button makes the conversion process more easy, since the execution of the Collada Converter is done\n" 
		"via a graphical user interface and the output of the Horde3D collada converter is\n"
		"automatically copied to the specifc directories of your repository."));
    HordeFileDialog::gridLayout->addWidget(m_importButton, 3, 0, 1, 1);

	connect(m_importButton, SIGNAL(clicked()), this, SLOT(importCollada()));
}


HordeModelDialog::~HordeModelDialog()
{
	if (m_newScene)		
	{
		Horde3D::removeNode(m_newScene);
		while (!m_resources.isEmpty())
			Horde3D::removeResource(m_resources.takeLast());
		Horde3D::releaseUnusedResources();
	}
	if (m_oldScene != 0)
		Horde3D::setNodeActivation(m_oldScene, true);
}

void HordeModelDialog::itemChanged(QListWidgetItem* current, QListWidgetItem* previous)
{
	if (current && m_type == ResourceTypes::SceneGraph)
	{
		setCursor(Qt::BusyCursor);
		QHordeSceneEditorSettings settings(this);
		settings.beginGroup("Repository");
		// Load model depending on the source (scene / repository)
		loadModel(current->text(), current->type() == 1);
		// indicate current selection
		m_file->setText(current->text());
		settings.endGroup();
		unsetCursor();
	}
	else // no valid selection
		HordeFileDialog::itemChanged(current, previous);
}

void HordeModelDialog::importCollada()
{	
	ColladaImporter importDlg;
	if (!importDlg.setColladaFiles()) return;
	QSettings settings(QApplication::applicationDirPath()+QDir::separator()+"HordeSceneEditor.ini", QSettings::IniFormat, this);
	settings.beginGroup("Repository");
	importDlg.initImportPath(
		settings.value("sceneGraphDir", DefaultModelsRepoPath.absolutePath()).toString(),
		settings.value("geometryDir", DefaultModelsRepoPath.absolutePath()).toString(),
		settings.value("textureDir", DefaultTextureRepoPath.absolutePath()).toString(),
		settings.value("shaderDir", DefaultShaderRepoPath.absolutePath()).toString(),	
		settings.value("materialDir", DefaultMaterialRepoPath.absolutePath()).toString(),
		settings.value("animationDir", DefaultModelsRepoPath.absolutePath()).toString());
	settings.endGroup();	
	importDlg.exec();	
	m_fileList->clear();
	if ( HordeSceneEditor::instance()->currentScene() )
		// Add all files already existing in the current scene
		populateList(m_scenePaths.SceneGraphPath.absolutePath(), m_scenePaths.SceneGraphPath.absolutePath(), m_currentFilter, false);
	settings.beginGroup("Repository");
	// Add all files existing in the repository
	populateList(settings.value("sceneGraphDir", DefaultModelsRepoPath.absolutePath()).toString(), QDir(settings.value("sceneGraphDir", DefaultModelsRepoPath.absolutePath()).toString()), m_currentFilter, true);
	settings.endGroup();
}



void HordeModelDialog::initModelViewer()
{
	
	SceneFile* scene = HordeSceneEditor::instance()->currentScene();
	if( scene )			
	{
		// Prepare xmlview for engine log
		m_xmlView->setStyleSheet("QTextEdit#m_xmlView { background: black;  color: white }");
		// Get previously used scene
		m_oldScene = Horde3D::getNodeChild(RootNode, 0);
		// Disable Root scene 
		Horde3D::setNodeActivation(m_oldScene, false);	
		// Add new scene for model view
		m_newScene = Horde3D::addGroupNode(RootNode, "ModelView");		

		// Get Pipeline from the last active camera
		int pipelineID = Horde3D::getNodeParami(HordeSceneEditor::instance()->glContext()->activeCam(), CameraNodeParams::PipelineRes);
		// add new camera that will be used within the modelview
		m_cameraID = Horde3D::addCameraNode(m_newScene, "Camera", pipelineID);
		Horde3D::setupCameraView(m_cameraID, 45, 4.0f/3.0f, 0.1f, 5000.f);
		// Load default light specified in the scene file
		QDomElement standardLight(scene->sceneFileDom().documentElement().namedItem("LightParameters").toElement());
		ResHandle lightMaterial = 0;
		if (standardLight.hasAttribute("material"))
			lightMaterial = Horde3D::addResource( ResourceTypes::Material, qPrintable(standardLight.attribute("material")), 0 );
		Horde3DUtils::loadResourcesFromDisk("");		
		// Add Light to cam
		NodeHandle light = Horde3D::addLightNode( 
			m_cameraID, 
			"ModelViewLight", 
			lightMaterial, 
			qPrintable(standardLight.attribute("lightingcontext", "LIGHTING")), 
			qPrintable(standardLight.attribute("shadowcontext", "SHADOWMAP")));
		Horde3D::setNodeTransform( light, 0, 0, 0, 0, 0, 0, 1, 1, 1 );
		Horde3D::setNodeParamf( light, LightNodeParams::Radius, 200.0f );
		Horde3D::setNodeParamf( light, LightNodeParams::FOV, 110.0f );
		Horde3D::setNodeParami( light, LightNodeParams::ShadowMapCount, 0 );
		Horde3D::setNodeParamf( light, LightNodeParams::Col_R, 1.0f );
		Horde3D::setNodeParamf( light, LightNodeParams::Col_G, 1.0f );
		Horde3D::setNodeParamf( light, LightNodeParams::Col_B, 1.0f );
		// Important to create the glwidget after adding the shaders 
		// because only the first context can create new shader programs
		m_glWidget = new GLWidget(HordeSceneEditor::instance()->glContext(), m_glFrame);	
		// Set widget as shared widget
		HordeSceneEditor::instance()->glContext()->setFullScreen(false, m_glWidget);
		m_glWidget->setActiveCam(m_cameraID);
		m_glFrame->layout()->addWidget(m_glWidget);
		m_glWidget->setNavigationSpeed(10.0);
	}
	QSettings settings(QApplication::applicationDirPath()+QDir::separator()+"HordeSceneEditor.ini", QSettings::IniFormat, this);
	settings.beginGroup("Repository");
	m_currentFilter = "*.scene.xml";
	if ( HordeSceneEditor::instance()->currentScene() )
		populateList(m_scenePaths.SceneGraphPath.absolutePath(), m_scenePaths.SceneGraphPath, m_currentFilter, false);
	populateList(settings.value("sceneGraphDir", DefaultModelsRepoPath.absolutePath()).toString(), QDir(settings.value("sceneGraphDir", DefaultModelsRepoPath.absolutePath()).toString()), m_currentFilter, true);
	m_stackedWidget->setCurrentWidget(m_glFrame);
}

void HordeModelDialog::loadModel(const QString& fileName, bool repoFile)
{
	if( repoFile ) // set repository pathes
	{
		QSettings settings(QApplication::applicationDirPath()+QDir::separator()+"HordeSceneEditor.ini", QSettings::IniFormat, this);
		settings.beginGroup("Repository");
		Horde3DUtils::setResourcePath(ResourceTypes::SceneGraph, qPrintable(settings.value("sceneGraphDir", DefaultModelsRepoPath.absolutePath()).toString()));
		Horde3DUtils::setResourcePath(ResourceTypes::Geometry, qPrintable(settings.value("geometryDir", DefaultModelsRepoPath.absolutePath()).toString()));
		Horde3DUtils::setResourcePath(ResourceTypes::Texture2D, qPrintable(settings.value("textureDir", DefaultTextureRepoPath.absolutePath()).toString()));
		Horde3DUtils::setResourcePath(ResourceTypes::TextureCube, qPrintable(settings.value("textureDir", DefaultTextureRepoPath.absolutePath()).toString()));
		Horde3DUtils::setResourcePath(ResourceTypes::Shader, qPrintable(settings.value("shaderDir", DefaultShaderRepoPath.absolutePath()).toString()));
		Horde3DUtils::setResourcePath(ResourceTypes::Code, qPrintable(settings.value("shaderDir", DefaultShaderRepoPath.absolutePath()).toString()));
		Horde3DUtils::setResourcePath(ResourceTypes::Material, qPrintable(settings.value("materialDir", DefaultMaterialRepoPath.absolutePath()).toString()));
		Horde3DUtils::setResourcePath(ResourceTypes::Animation, qPrintable(settings.value("animationDir", DefaultModelsRepoPath.absolutePath()).toString()));
		Horde3DUtils::setResourcePath(ResourceTypes::Effect, qPrintable(settings.value("effectsDir", DefaultEffectsRepoPath.absolutePath()).toString()));
		Horde3DUtils::setResourcePath(ResourceTypes::Pipeline, qPrintable(settings.value("pipelineDir", DefaultPipelineRepoPath.absolutePath()).toString()));
		settings.endGroup();
	}
	if (m_currentModel != 0)
	{
		Horde3D::removeNode(m_currentModel);
		m_currentModel = 0;
	}
	else
		m_stackedWidget->setCurrentWidget(m_glFrame);
	// make the first glcontext current because the shared context is not allowed
	// to create new shader programs that may be loaded by the selected model
	HordeSceneEditor::instance()->glContext()->makeCurrent();
	// Add resource for model 
	ResHandle envRes = Horde3D::addResource( ResourceTypes::SceneGraph, qPrintable(fileName), 0 );
	// Load data
	if (envRes == 0 || !Horde3DUtils::loadResourcesFromDisk( "" )) // if loading failed
	{
		// Clear log
		m_xmlView->clear();
		int level;
		QString message; // Print log messages to xmlview
		while(!(message = Horde3D::getMessage(&level, 0)).isEmpty())
		{			
			switch( level )
			{
			case 1:
				m_xmlView->append("<span style=\"color: #FFCC00\">"+message+"</font>");
				break;
			case 2:
				m_xmlView->append("<span style=\"color: #EE1100\">"+message+"</font>");				
				break;
			default:
				m_xmlView->append("<span style=\"color: #C0C0C0\">"+message+"</font>");				
				break;
			}								
		}		
		// Show XML View Widget
		m_stackedWidget->setCurrentWidget(m_xmlView);	
		// Remove the added resource
		if( envRes ) Horde3D::removeResource(envRes);
		// Restore Path settings if the selected model was from the repository
		if( repoFile ) restoreHordePath();
		// Release unused resources within Horde3D
		Horde3D::releaseUnusedResources();
		return;
	}
	if (!m_resources.contains(envRes))
		m_resources.push_back(envRes);
	// Add to scene graph
	m_currentModel = Horde3D::addNodes( m_newScene, envRes );
	float minX, minY, minZ, maxX, maxY, maxZ;			
	// get bounding box to scale each model to the same size
	Horde3D::getNodeAABB(m_currentModel, &minX, &minY, &minZ, &maxX, &maxY, &maxZ);
	//qDebug("Bounding: %.3f, %.3f, %.3f, %.3f, %.3f, %.3f", minX, minY, minZ, maxX, maxY, maxZ);
	float scale(8.0f / sqrtf(((maxX-minX)*(maxX-minX) + (maxY-minY)*(maxY-minY) + (maxZ-minZ)*(maxZ-minZ))));
	// scale model 
	Horde3D::setNodeTransform(m_currentModel, 0, 0, 0, 0, 0, 0, scale, scale, scale);	
	// get new bounding box
	Horde3D::getNodeAABB(m_currentModel, &minX, &minY, &minZ, &maxX, &maxY, &maxZ);
	// adjust transformation centered to the camera
	const float* temp;
	Horde3D::getNodeTransformMatrices(m_currentModel, &temp, 0);
	const_cast<float*>(temp)[12] -= (maxX+minX)/2;
	const_cast<float*>(temp)[13] -= (maxY+minY)/2;
	const_cast<float*>(temp)[14] += -10-maxZ;
	Horde3D::setNodeTransformMatrix(m_currentModel, temp);
	// Rotate object if it is very small in the y-dimension
	if (abs(maxY-minY) < 0.5)
		Horde3D::setNodeTransform(m_currentModel, temp[12], temp[13], temp[14], 45, 0, 0, scale, scale, scale);
	// Rotate object if it is very small in the x-dimension
	if (abs(maxX-minX) < 0.5)
		Horde3D::setNodeTransform(m_currentModel, temp[12], temp[13], temp[14], 0, 45, 0, scale, scale, scale);
	// reset camera position
	Horde3D::setNodeTransform(m_cameraID, 0, 0, 0, 0, 0, 0, 1, 1, 1);	
	if( repoFile )
		restoreHordePath();
}


QString HordeModelDialog::getModelFile(const HordePathSettings& targetPaths, QWidget* parent, const QString& caption)
{
	HordeModelDialog dlg(targetPaths, parent);
	dlg.setWindowTitle(caption);
	if (dlg.exec() == QDialog::Accepted)
	{
		return dlg.fileName();
	}
	else
		return QString();
}
