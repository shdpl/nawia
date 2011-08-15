TEMPLATE = app

SOURCES = GLWidget.cpp \
	main.cpp 	

HEADERS = GLWidget.h 	

CONFIG += debug_and_release
CONFIG += qt
QT +=  opengl

INCLUDEPATH+=../../Bindings/C++

CONFIG(debug, debug|release) {
	LIBS += -L../../Bindings/C++
	unix {
		DESTDIR = ../../Binaries/Linux_x86
    	LIBS += -L../../Binaries/Linux_x86
		DOLLAR=$
		QMAKE_RPATH = $${QMAKE_RPATH}$${DOLLAR}$${DOLLAR}ORIGIN
		QMAKE_LFLAGS+=\'$${QMAKE_RPATH}\'		
		LIBS += -lHorde3D
		LIBS += -lHorde3DUtils
	}
	win32 {
		DESTDIR = ../../Binaries/Win32
		LIBS += -lHorde3D_vc8
		LIBS += -lHorde3DUtils_vc8
	}
	
	TARGET = Horde3D_Qt
	MOC_DIR = ../../Build/Horde3D_Qt/Debug
	OBJECTS_DIR = ../../Build/Horde3D_Qt/Debug
}

CONFIG(release, debug|release) { 
	LIBS += -L../../Bindings/C++
	unix {
		DESTDIR = ../../Binaries/Linux_x86
    	LIBS += -L../../Binaries/Linux_x86
		DOLLAR=$
		QMAKE_RPATH = $${QMAKE_RPATH}$${DOLLAR}$${DOLLAR}ORIGIN
		QMAKE_LFLAGS+=\'$${QMAKE_RPATH}\'		
		LIBS += -lHorde3D
		LIBS += -lHorde3DUtils
	}
	win32 {
		DESTDIR = ../../Binaries/Win32
		LIBS += -lHorde3D_vc8
		LIBS += -lHorde3DUtils_vc8
	}
	
	TARGET = Horde3D_Qt
	MOC_DIR = ../../Build/Horde3D_Qt/Release
	OBJECTS_DIR = ../../Build/Horde3D_Qt/Release
}

macx {
	CONFIG += x86 ppc
	QMAKE_MAC_SDK = /Developer/SDKs/MacOSX10.4u.sdk
	QMAKE_LFLAGS += -mmacosx-version-min=10.4
}
