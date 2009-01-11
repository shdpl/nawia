TEMPLATE = app

SOURCES = AboutDialog.cpp \
	CameraToolBar.cpp \
	ColladaImporter.cpp \
	ExtraTreeView.cpp \
	FindDialog.cpp \
	GLWidget.cpp \
	HordeModelDialog.cpp \
	HordeSceneEditor.cpp \
	ImgLabel.cpp \
	LuaBindingsHorde.cpp \
	LuaController.cpp \
	MaterialWidget.cpp \
	MiscToolBar.cpp \
	NodeWidget.cpp \
	PathPage.cpp \
	PipelineTreeModel.cpp \
	PipelineTreeView.cpp \
	PlugInPage.cpp \
	QCameraNode.cpp \
	QCameraNodePage.cpp \
	QEmitterNode.cpp \
	QEmitterNodePage.cpp \
	QGroupNode.cpp \
	QGroupNodePage.cpp \
	QJointNode.cpp \
	QLightNode.cpp \
	QLightNodePage.cpp \
	QMeshNode.cpp \
	QModelNode.cpp \
	QOneTimeDialog.cpp \
	QPipelineCommandQueueNode.cpp \
	QPipelineNode.cpp \
	QPipelineRenderTargetNode.cpp \
	QPipelineSetupNode.cpp \
	QPipelineStageNode.cpp \
	QReferenceNode.cpp \
	QReferenceNodePage.cpp \
	QStdOutListener.cpp \
	QTexUnit.cpp \
	QUniform.cpp \
	RenderTargetView.cpp \
	SceneFilePage.cpp \
	SceneTreeView.cpp \
	SceneTreeWidget.cpp \
	SceneWizard.cpp \
	SettingsDialog.cpp \
	main.cpp

HEADERS= AboutDialog.h \
	CameraToolBar.h \
	ColladaImporter.h \
	ExtraTreeView.h \
	FindDialog.h \
	GLWidget.h \
	HordeModelDialog.h \
	HordeSceneEditor.h \
	ImgLabel.h \
	LuaBindingsHorde.h \
	LuaController.h \
	MaterialWidget.h \
	MiscToolBar.h \
	NodeWidget.h \
	PathPage.h \
	PipelineTreeModel.h \
	PipelineTreeView.h \
	PlugInPage.h \
	QCameraNode.h \
	QCameraNodePage.h \
	QEmitterNode.h \
	QEmitterNodePage.h \
	QGroupNode.h \
	QGroupNodePage.h \
	QJointNode.h \
	QLightNode.h \
	QLightNodePage.h \
	QMeshNode.h \
	QModelNode.h \
	QOneTimeDialog.h \
	QPipelineCommandQueueNode.h \
	QPipelineNode.h \
	QPipelineRenderTargetNode.h \
	QPipelineSetupNode.h \
	QPipelineStageNode.h \
	QReferenceNode.h \
	QReferenceNodePage.h \
	QStdOutListener.h \
	QTexUnit.h \
	QUniform.h \
	RenderTargetView.h \
	SceneFilePage.h \
	SceneTreeView.h \
	SceneTreeWidget.h \
	SceneWizard.h \
	SettingsDialog.h 	

RESOURCES += resources.qrc
RC_FILE = HordeSceneEditor.rc

FORMS=AboutDialog.ui \
	CameraToolBar.ui \
	ColladaImporter.ui \
	FindDialog.ui \
	HordeSceneEditor.ui \
	LuaController.ui \
	MaterialWidget.ui \
	MiscToolBar.ui \
	PathPage.ui \
	PlugInPage.ui \
	QCameraNodePage.ui \
	QEmitterNodePage.ui \
	QGroupNodePage.ui \
	QLightNodePage.ui \
	QOneTimeDialog.ui \
	QReferenceNodePage.ui \
	RenderTargetView.ui \
	SceneFilePage.ui \
	SceneTreeWidget.ui \
	SettingsDialog.ui 


CONFIG += debug_and_release
CONFIG += qt
QT +=  opengl xml

INCLUDEPATH+=../../include
INCLUDEPATH+=../HordeSceneEditorCore \
            ../../../../Horde3D/Bindings/C++

DESTDIR = ../../bin

CONFIG(debug, debug|release) {
	LIBS += -L../../lib
	unix {
    	LIBS += -L../../bin
		DOLLAR=$
		QMAKE_RPATH = $${QMAKE_RPATH}$${DOLLAR}$${DOLLAR}ORIGIN
		QMAKE_LFLAGS+=\'$${QMAKE_RPATH}\'		
	}
	LIBS += -lLuad
	LIBS += -lEditorLibd
	LIBS += -lHorde3Dd
	LIBS += -lHorde3DUtilsd
	LIBS += -lQPropertyEditord
	LIBS += -lHordeSceneEditorCored
	LIBS += -lQXmlTreed
	TARGET = HordeSceneEditord
	MOC_DIR = ../../Build/HordeSceneEditor/Debug
	OBJECTS_DIR = ../../Build/HordeSceneEditor/Debug
}

CONFIG(release, debug|release) { 
	LIBS += -L../../lib
	unix {
    	LIBS += -L../../bin
		DOLLAR=$
		QMAKE_RPATH = $${QMAKE_RPATH}$${DOLLAR}$${DOLLAR}ORIGIN
		QMAKE_LFLAGS+=\'$${QMAKE_RPATH}\'
	}
	LIBS += -lHorde3D
	LIBS += -lHorde3DUtils		
	LIBS += -lLua
	LIBS += -lEditorLib
	LIBS += -lQPropertyEditor
	LIBS += -lQXmlTree
	LIBS += -lHordeSceneEditorCore
	TARGET = HordeSceneEditor
	MOC_DIR = ../../Build/HordeSceneEditor/Release
	OBJECTS_DIR = ../../Build/HordeSceneEditor/Release
}

macx {
	CONFIG += x86 ppc
	QMAKE_MAC_SDK = /Developer/SDKs/MacOSX10.4u.sdk
	QMAKE_LFLAGS += -mmacosx-version-min=10.4
}
