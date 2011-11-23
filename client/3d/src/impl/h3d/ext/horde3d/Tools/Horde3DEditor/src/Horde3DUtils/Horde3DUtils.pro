 
TEMPLATE = lib

CONFIG += dll

CONFIG += debug_and_release
CONFIG += qt
CONFIG += terrain

QT -= gui core

INCLUDEPATH+=../../../../Horde3D/Bindings/C++/ \
             ../../../../Horde3D/Source/Shared


HEADERS += ../../../../Horde3D/Bindings/C++/Horde3D.h \
           ../../../../Horde3D/Source/Shared/utMath.h \
           ../../../../Horde3D/Source/Shared/utDebug.h \
           ../../../../Horde3D/Source/Shared/utPlatform.h


SOURCES += ../../../../Horde3D/Source/Horde3DUtils/main.cpp \

CONFIG(debug, debug|release) {
        unix {
            !exists( ../../Build/Horde3DUtils/Debug )
            {
                system(mkdir -p ../../Build/Horde3DUtils/Debug )
            }
        }
		win32 {			
			LIBS += -lHorde3Dd 
		}
        TARGET = Horde3DUtilsd
        OBJECTS_DIR = ../../../Horde3DEditor/Build/Horde3DUtils/Debug
}

CONFIG(release, debug|release) {
        unix {
            !exists( ../../Build/Horde3DUtils/Release )
            {
                system(mkdir -p ../../Build/Horde3DUtils/Release )
            }
        }
		win32 {
			LIBS += -lHorde3D 
		}

        TARGET = Horde3DUtils
        OBJECTS_DIR = ../../../Horde3DEditor/Build/Horde3DUtils/Release
}

unix {
    DESTDIR = ../../../Horde3DEditor/bin
}

win32 {	
	LIBS += -L../../lib
	LIBS += -lopengl32 \
			-lgdi32
	DEFINES += HORDE3DUTILS_EXPORTS

    DESTDIR = ../../../Horde3DEditor/lib
    DLLDESTDIR = ../../../Horde3DEditor/bin
}

macx {
        DESTDIR = ../../../Horde3DEditor/bin
        CONFIG += x86 ppc
        QMAKE_MAC_SDK = /Developer/SDKs/MacOSX10.4u.sdk
        QMAKE_LFLAGS += -mmacosx-version-min=10.4
}
