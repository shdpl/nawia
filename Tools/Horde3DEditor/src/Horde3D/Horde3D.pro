TEMPLATE = lib

CONFIG += dll

CONFIG += debug_and_release
CONFIG += qt
CONFIG += terrain

QT -= gui core

INCLUDEPATH+=../../../../Horde3D/Source/Horde3DEngine/ \
            ../../../../Horde3D/Source/Shared/ \


HEADERS += ../../../../Horde3D/Source/Horde3DEngine/egAnimatables.h \
           ../../../../Horde3D/Source/Horde3DEngine/egAnimation.h \
           ../../../../Horde3D/Source/Horde3DEngine/egCamera.h \
           ../../../../Horde3D/Source/Horde3DEngine/egCom.h \
           ../../../../Horde3D/Source/Horde3DEngine/egExtensions.h \
           ../../../../Horde3D/Source/Horde3DEngine/egGeometry.h \
           ../../../../Horde3D/Source/Horde3DEngine/egLight.h \
           ../../../../Horde3D/Source/Horde3DEngine/egMaterial.h \
           ../../../../Horde3D/Source/Horde3DEngine/egModel.h \
           ../../../../Horde3D/Source/Horde3DEngine/egModules.h \
           ../../../../Horde3D/Source/Horde3DEngine/egParticle.h \
           ../../../../Horde3D/Source/Horde3DEngine/egPipeline.h \
           ../../../../Horde3D/Source/Horde3DEngine/egPrerequisites.h \
           ../../../../Horde3D/Source/Horde3DEngine/egPrimitives.h \
           ../../../../Horde3D/Source/Horde3DEngine/egRendererBase.h \
           ../../../../Horde3D/Source/Horde3DEngine/egRenderer.h \
           ../../../../Horde3D/Source/Horde3DEngine/egResource.h \
           ../../../../Horde3D/Source/Horde3DEngine/egSceneGraphRes.h \
           ../../../../Horde3D/Source/Horde3DEngine/egScene.h \
           ../../../../Horde3D/Source/Horde3DEngine/egShader.h \
           ../../../../Horde3D/Source/Horde3DEngine/egTextures.h \
           ../../../../Horde3D/Source/Horde3DEngine/utImage.h \
           ../../../../Horde3D/Source/Horde3DEngine/utOpenGL.h \
           ../../../../Horde3D/Source/Shared/utXMLParser.h \
           ../../../../Horde3D/Source/Shared/utMath.h \
           ../../../../Horde3D/Source/Shared/utDebug.h \
           ../../../../Horde3D/Source/Shared/utPlatform.h


SOURCES += ../../../../Horde3D/Source/Horde3DEngine/egAnimatables.cpp \
           ../../../../Horde3D/Source/Horde3DEngine/egAnimation.cpp \
           ../../../../Horde3D/Source/Horde3DEngine/egCamera.cpp \
           ../../../../Horde3D/Source/Horde3DEngine/egCom.cpp \
           ../../../../Horde3D/Source/Horde3DEngine/egExtensions.cpp \
           ../../../../Horde3D/Source/Horde3DEngine/egGeometry.cpp \
           ../../../../Horde3D/Source/Horde3DEngine/egLight.cpp \
           ../../../../Horde3D/Source/Horde3DEngine/egMain.cpp \
           ../../../../Horde3D/Source/Horde3DEngine/egMaterial.cpp \
           ../../../../Horde3D/Source/Horde3DEngine/egModel.cpp \
           ../../../../Horde3D/Source/Horde3DEngine/egModules.cpp \
           ../../../../Horde3D/Source/Horde3DEngine/egParticle.cpp \
           ../../../../Horde3D/Source/Horde3DEngine/egPipeline.cpp \
           ../../../../Horde3D/Source/Horde3DEngine/egPrimitives.cpp \
           ../../../../Horde3D/Source/Horde3DEngine/egRendererBase.cpp \
           ../../../../Horde3D/Source/Horde3DEngine/egRenderer.cpp \
           ../../../../Horde3D/Source/Horde3DEngine/egResource.cpp \
           ../../../../Horde3D/Source/Horde3DEngine/egScene.cpp \
           ../../../../Horde3D/Source/Horde3DEngine/egSceneGraphRes.cpp \
           ../../../../Horde3D/Source/Horde3DEngine/egShader.cpp \
           ../../../../Horde3D/Source/Horde3DEngine/egTextures.cpp \
           ../../../../Horde3D/Source/Horde3DEngine/utImage.cpp \
           ../../../../Horde3D/Source/Horde3DEngine/utOpenGL.cpp \
           ../../../../Horde3D/Source/Shared/utXMLParser.cpp

terrain {
    INCLUDEPATH += ../../../../Extensions/
    HEADERS += ../../../../Extensions/Terrain/Source/extension.h \
               ../../../../Extensions/Terrain/Source/terrain.h
    SOURCES += ../../../../Extensions/Terrain/Source/extension.cpp \
               ../../../../Extensions/Terrain/Source/terrain.cpp
}

CONFIG(debug, debug|release) {
        unix {
            !exists( ../../Build/Horde3D/Debug )
            {
                system(mkdir -p ../../Build/Horde3D/Debug )
            }
        }
        TARGET = Horde3Dd
        OBJECTS_DIR = ../../../Horde3DEditor/Build/Horde3D/Debug
}

CONFIG(release, debug|release) {
        unix {
            !exists( ../../Build/Horde3D/Release)
            {
                system(mkdir -p ../../Build/Horde3D/Release )
            }
        }        TARGET = Horde3D
        OBJECTS_DIR = ../../../Horde3DEditor/Build/Horde3D/Release
}

unix {
    DESTDIR = ../../../Horde3DEditor/bin    
}

win32 {
    DESTDIR = ../../../Horde3DEditor/lib
    DLLDESTDIR = ../../../Horde3DEditor/bin
}

macx {
        DESTDIR = ../../../Horde3DEditor/bin
        CONFIG += x86 ppc
        QMAKE_MAC_SDK = /Developer/SDKs/MacOSX10.4u.sdk
        QMAKE_LFLAGS += -mmacosx-version-min=10.4
}
