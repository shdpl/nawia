SUBDIRS( MiniCL BulletMultiThreaded BulletSoftBody BulletCollision BulletDynamics LinearMath )

IF(INSTALL_LIBS)
	#INSTALL of other files requires CMake 2.6
	IF (${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION} GREATER 2.5)
		IF (APPLE AND BUILD_SHARED_LIBS AND FRAMEWORK)
			# Don't actually need to install any common files, the frameworks include everything
		ELSE (APPLE AND BUILD_SHARED_LIBS AND FRAMEWORK)
			INSTALL(FILES btBulletCollisionCommon.h
btBulletDynamicsCommon.h Bullet-C-Api.h DESTINATION ${INCLUDE_INSTALL_DIR})
		ENDIF (APPLE AND BUILD_SHARED_LIBS AND FRAMEWORK)
	ENDIF (${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION} GREATER 2.5)
ENDIF(INSTALL_LIBS)

find_package(SWIG)
if(SWIG_FOUND)
        include(${SWIG_USE_FILE})

        ###   D   ###

	INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR})

        SET(CMAKE_SWIG_FLAGS -c++ -d2 -wrapperlibrary BulletD)
        set_source_files_properties(BTPhysics.i PROPERTIES CPLUSPLUS ON)

        swig_add_module(BulletD d BTPhysics.i)
        swig_link_libraries(BulletD BulletDynamics BulletCollision LinearMath)
        SET_TARGET_PROPERTIES(BulletD PROPERTIES LINKER_LANGUAGE C)
        install(FILES ${CMAKE_CURRENT_BINARY_DIR}/BTPhysics.d ${CMAKE_CURRENT_BINARY_DIR}/BTPhysics_im.d
                DESTINATION include/d/dmd/druntime/import
        )

        ###  ###  ###

        install(TARGETS BulletD
                RUNTIME DESTINATION bin
                LIBRARY DESTINATION lib
                ARCHIVE DESTINATION lib
        )
endif()
