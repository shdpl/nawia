
include_directories(../Bindings/C++ ../../../Horde3D/Bindings/C++ ../../../Horde3D/Dependencies/Include)

IF(MSVC)
SET(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /ENTRY:mainCRTStartup ")
ENDIF(MSVC)

add_executable(Sound WIN32 MACOSX_BUNDLE
	app.h
	app.cpp
	main.cpp
	)

target_link_libraries(Sound Horde3D Horde3DUtils glfw)

if(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
	FIND_LIBRARY(COCOA_LIBRARY Cocoa)
	FIND_LIBRARY(APPLICATION_SERVICES_LIBRARY ApplicationServices)
	FIND_LIBRARY(AGL_LIBRARY AGL)
	IF(COCOA_LIBRARY)   
	 target_link_libraries(Sound ${COCOA_LIBRARY} ${APPLICATION_SERVICES_LIBRARY} ${AGL_LIBRARY})
	ELSE(COCOA_LIBRARY)
	 FIND_LIBRARY(CARBON_LIBRARY Carbon)
	 target_link_libraries(Sound ${CARBON_LIBRARY} ${APPLICATION_SERVICES_LIBRARY} ${AGL_LIBRARY})
	ENDIF(COCOA_LIBRARY)
endif(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")

