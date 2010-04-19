
include_directories(../../Bindings/C++)
include_directories(../glfw)

IF(MSVC)
SET(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /ENTRY:mainCRTStartup ")
ENDIF(MSVC)

add_executable(Chicago WIN32 MACOSX_BUNDLE
	app.h
	crowd.h
	app.cpp
	crowd.cpp
	main.cpp
	)

target_link_libraries(Chicago Horde3D Horde3DUtils glfw)

if(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
		
	   FIND_LIBRARY(COCOA_LIBRARY Cocoa)
       FIND_LIBRARY(APPLICATION_SERVICES_LIBRARY ApplicationServices)
       FIND_LIBRARY(AGL_LIBRARY AGL)
       IF(COCOA_LIBRARY)   
         target_link_libraries(Chicago ${COCOA_LIBRARY} ${APPLICATION_SERVICES_LIBRARY} ${AGL_LIBRARY})
       ELSE(COCOA_LIBRARY)
         FIND_LIBRARY(CARBON_LIBRARY Carbon)
         target_link_libraries(Chicago ${CARBON_LIBRARY} ${APPLICATION_SERVICES_LIBRARY} ${AGL_LIBRARY})
       ENDIF(COCOA_LIBRARY)
endif(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
