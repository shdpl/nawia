# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/shd/src/nawia/editor/ext/qtd

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/shd/src/nawia/editor/ext/qtd/build/build

# Utility rule file for qtdwebkit.

CMakeFiles/qtdwebkit: lib/libqtdwebkit.a

lib/libqtdwebkit.a: CMakeFiles/qtdwebkit.dir/qtdwebkit0.o
	$(CMAKE_COMMAND) -E cmake_progress_report /home/shd/src/nawia/editor/ext/qtd/build/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Linking qtdwebkit"
	cd /home/shd/src/nawia/editor/ext/qtd && /usr/bin/cmake -E make_directory /home/shd/src/nawia/editor/ext/qtd/build/build/lib
	cd /home/shd/src/nawia/editor/ext/qtd && /usr/local/bin/dmd -version=QtdCppShared -I/home/shd/src/nawia/editor/ext/qtd/build/build -I/home/shd/src/nawia/editor/ext/qtd -I/home/shd/src/nawia/editor/ext/qtd/d2 -O -release -inline -lib /home/shd/src/nawia/editor/ext/qtd/build/build/CMakeFiles/qtdwebkit.dir/qtdwebkit0.o -of/home/shd/src/nawia/editor/ext/qtd/build/build/lib/libqtdwebkit.a

CMakeFiles/qtdwebkit.dir/qtdwebkit0.o: qt/webkit/ArrayOps2.d
CMakeFiles/qtdwebkit.dir/qtdwebkit0.o: qt/webkit/ArrayOps.d
	cd /home/shd/src/nawia/editor/ext/qtd && /usr/local/bin/dmd -version=QtdCppShared -I/home/shd/src/nawia/editor/ext/qtd/build/build -I/home/shd/src/nawia/editor/ext/qtd -I/home/shd/src/nawia/editor/ext/qtd/d2 -O -release -inline -c /home/shd/src/nawia/editor/ext/qtd/build/build/qt/webkit/ArrayOps2.d /home/shd/src/nawia/editor/ext/qtd/build/build/qt/webkit/ArrayOps.d -of/home/shd/src/nawia/editor/ext/qtd/build/build/CMakeFiles/qtdwebkit.dir/qtdwebkit0.o

qtdwebkit: CMakeFiles/qtdwebkit
qtdwebkit: lib/libqtdwebkit.a
qtdwebkit: CMakeFiles/qtdwebkit.dir/qtdwebkit0.o
qtdwebkit: CMakeFiles/qtdwebkit.dir/build.make
.PHONY : qtdwebkit

# Rule to build all files generated by this target.
CMakeFiles/qtdwebkit.dir/build: qtdwebkit
.PHONY : CMakeFiles/qtdwebkit.dir/build

CMakeFiles/qtdwebkit.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/qtdwebkit.dir/cmake_clean.cmake
.PHONY : CMakeFiles/qtdwebkit.dir/clean

CMakeFiles/qtdwebkit.dir/depend:
	cd /home/shd/src/nawia/editor/ext/qtd/build/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shd/src/nawia/editor/ext/qtd /home/shd/src/nawia/editor/ext/qtd /home/shd/src/nawia/editor/ext/qtd/build/build /home/shd/src/nawia/editor/ext/qtd/build/build /home/shd/src/nawia/editor/ext/qtd/build/build/CMakeFiles/qtdwebkit.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/qtdwebkit.dir/depend

