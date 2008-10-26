TEMPLATE = lib
CONFIG += staticlib
CONFIG += debug_and_release

HEADERS =	AttachmentPlugIn.h \
			CustomTypes.h \
			EffectComboBox.h \
			EffectProperty.h \
			ExtSceneNodePlugIn.h \
			FrustumProperty.h \
			HordeFileDialog.h \
			Importer.h \
			MaterialComboBox.h \
			MaterialProperty.h \
			OverwriteFilesDialog.h \
			PipelineComboBox.h \
			PipelineProperty.h \
			PlugInManager.h \
			QHordeSceneEditorSettings.h \
			QSceneNode.h \
			SceneFile.h \
			SceneTreeModel.h \
			ShaderComboBox.h \
			TextureComboBox.h \
			TextureProperty.h \
			ToolPlugIn.h \
			Vec3fProperty.h

SOURCES = 	CustomTypes.cpp \
			EffectComboBox.cpp \
			EffectProperty.cpp \
			FrustumProperty.cpp \
			HordeFileDialog.cpp \
			Importer.cpp \
			MaterialComboBox.cpp \
			MaterialProperty.cpp \
			OverwriteFilesDialog.cpp \
			PipelineComboBox.cpp \
			PipelineProperty.cpp \
			PlugInManager.cpp \
			QHordeSceneEditorSettings.cpp \
			QSceneNode.cpp \
			SceneFile.cpp \
			SceneTreeModel.cpp \
			ShaderComboBox.cpp \
			TextureComboBox.cpp \
			TextureProperty.cpp \
			Vec3fProperty.cpp 

FORMS = HordeFileDialog.ui \
        OverwriteFilesDialog.ui

INCLUDEPATH+=../../include
DESTDIR = ../../lib
UI_DIR = .

CONFIG(debug, debug|release) { 
	TARGET = HordeSceneEditorCored
	OBJECTS_DIR = ../../Build/HordeSceneEditorCore/Debug
	MOC_DIR = ../../Build/HordeSceneEditorCore/Debug
}

CONFIG(release, debug|release) { 
    
	TARGET = HordeSceneEditorCore
	OBJECTS_DIR = ../../Build/HordeSceneEditorCore/Release
	MOC_DIR = ../../Build/HordeSceneEditorCore/Release
	DEFINES+=QT_NO_DEBUG	
}

macx {
	CONFIG += x86 ppc
	QMAKE_MAC_SDK = /Developer/SDKs/MacOSX10.4u.sdk
	QMAKE_LFLAGS += -mmacosx-version-min=10.4
}
