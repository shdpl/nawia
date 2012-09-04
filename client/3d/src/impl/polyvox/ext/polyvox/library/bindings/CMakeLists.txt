find_package(SWIG)
if(SWIG_FOUND)
	include(${SWIG_USE_FILE})
	
	### PYTHON ###
#	find_package(PythonLibs)
#	include_directories(${PYTHON_INCLUDE_PATH})
#	include_directories(${PolyVoxCore_SOURCE_DIR}/include ${PolyVoxCore_SOURCE_DIR}/include/PolyVoxCore)
#	link_directories(${PolyVoxCore_BINARY_DIR})

#	set(CMAKE_SWIG_FLAGS "")
#	set_source_files_properties(PolyVoxCore.i PROPERTIES CPLUSPLUS ON)
	
#	swig_add_module(PolyVoxCorePYTHON python PolyVoxCore.i)
#	swig_link_libraries(PolyVoxCorePYTHON ${PYTHON_LIBRARIES} PolyVoxCore)
	#set_target_properties(${SWIG_MODULE_PolyVoxCore_REAL_NAME} PROPERTIES SUFFIX ".pyd")

	###   D   ###

        include_directories(${PolyVoxCore_SOURCE_DIR}/include ${PolyVoxCore_SOURCE_DIR}/include/PolyVoxCore)
        link_directories(${PolyVoxCore_BINARY_DIR})

        SET(CMAKE_SWIG_FLAGS -d2 -wrapperlibrary PolyVoxCoreD)
        set_source_files_properties(PolyVoxCore.i PROPERTIES CPLUSPLUS ON)

        swig_add_module(PolyVoxCoreD d PolyVoxCore.i)
        swig_link_libraries(PolyVoxCoreD PolyVoxCore)
        SET_TARGET_PROPERTIES(PolyVoxCoreD PROPERTIES LINKER_LANGUAGE C)
	install(FILES ${CMAKE_CURRENT_BINARY_DIR}/PolyVoxCore.d ${CMAKE_CURRENT_BINARY_DIR}/PolyVoxCore_im.d
                DESTINATION include/d/dmd/druntime/import
        )

	###  ###  ###

	install(TARGETS PolyVoxCoreD
                RUNTIME DESTINATION bin
                LIBRARY DESTINATION lib
                ARCHIVE DESTINATION lib
        )
endif()
