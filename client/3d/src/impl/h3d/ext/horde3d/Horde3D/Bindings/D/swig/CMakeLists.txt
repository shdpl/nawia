find_package(SWIG)
if(SWIG_FOUND)
        include(${SWIG_USE_FILE})

        ###   D   ###
        aux_source_directory(${Horde3D_SOURCE_DIR}/Horde3D/Source/Horde3DEngine/ HORDE3D_SOURCES)
        include_directories(${Horde3D_SOURCE_DIR}/Horde3D/Source/Horde3DEngine/ ${Horde3D_SOURCE_DIR}/Horde3D/Source/Shared/ ${Horde3D_SOURCE_DIR}/Extensions ${Horde3D_SOURCE_DIR}/../Bindings/C++/ )

        link_directories(${Horde3D_BINARY_DIR})

        set(CMAKE_SWIG_FLAGS -d2 -wrapperlibrary Horde3D_D)
        set_source_files_properties(Horde3D.i PROPERTIES CPLUSPLUS ON)
        swig_add_module(Horde3D_D d Horde3D.i)

        set(CMAKE_SWIG_FLAGS -d2 -wrapperlibrary Horde3DUtils_D)
        set_source_files_properties(Horde3DUtils.i PROPERTIES CPLUSPLUS ON)
        swig_add_module(Horde3DUtils_D d Horde3DUtils.i)

        swig_link_libraries(Horde3D_D Horde3D)
        swig_link_libraries(Horde3DUtils_D Horde3DUtils)
        #set_target_properties(Horde3D_D PROPERTIES LINKER_LANGUAGE C)
        #set_target_properties(Horde3DUtils_D PROPERTIES LINKER_LANGUAGE C)
	install(TARGETS Horde3D_D Horde3DUtils_D
		RUNTIME DESTINATION bin
		LIBRARY DESTINATION lib
		ARCHIVE DESTINATION lib
	)

	SET ( swig_bindings ${CMAKE_CURRENT_BINARY_DIR} )
	SET ( d_headers
		${swig_bindings}/horde3d.d
		${swig_bindings}/horde3d_im.d
		${swig_bindings}/horde3dutils.d
		${swig_bindings}/horde3dutils_im.d
	)
	
	foreach ( d_header ${d_headers} )
	endforeach ( d_header )

	install(FILES ${d_headers}
		DESTINATION include/d/dmd/druntime/import
	)
endif()
