find_package(SWIG)
if(SWIG_FOUND)
        include(${SWIG_USE_FILE})

        ###   D   ###
        aux_source_directory(${Horde3D_SOURCE_DIR}/Horde3D/Source/Horde3DEngine/ HORDE3D_SOURCES)
        include_directories(${Horde3D_SOURCE_DIR}/Horde3D/Source/Horde3DEngine/ ${Horde3D_SOURCE_DIR}/Horde3D/Source/Shared/ ${Horde3D_SOURCE_DIR}/Extensions ${Horde3D_SOURCE_DIR}/../Bindings/C++/)

        link_directories(${Horde3D_BINARY_DIR})

        set(CMAKE_SWIG_FLAGS "-d2")
        set_source_files_properties(Horde3D.i PROPERTIES CPLUSPLUS ON)
        #SET(CMAKE_SWIG_OUTDIR ${CMAKE_CURRENT_BINARY_DIR})

        swig_add_module(Horde3D_D d Horde3D.i ${HORDE3D_SOURCES})
        swig_link_libraries(Horde3D_D Horde3D)
        set_target_properties(Horde3D_D PROPERTIES LINKER_LANGUAGE C)
endif()
