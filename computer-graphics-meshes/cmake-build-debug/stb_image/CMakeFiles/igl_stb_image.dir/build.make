# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2018.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2018.3.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-meshes

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-meshes\cmake-build-debug

# Include any dependencies generated for this target.
include stb_image\CMakeFiles\igl_stb_image.dir\depend.make

# Include the progress variables for this target.
include stb_image\CMakeFiles\igl_stb_image.dir\progress.make

# Include the compile flags for this target's objects.
include stb_image\CMakeFiles\igl_stb_image.dir\flags.make

stb_image\CMakeFiles\igl_stb_image.dir\igl_stb_image.cpp.obj: stb_image\CMakeFiles\igl_stb_image.dir\flags.make
stb_image\CMakeFiles\igl_stb_image.dir\igl_stb_image.cpp.obj: ..\libigl\external\stb\igl_stb_image.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-meshes\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object stb_image/CMakeFiles/igl_stb_image.dir/igl_stb_image.cpp.obj"
	cd C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-meshes\cmake-build-debug\stb_image
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\igl_stb_image.dir\igl_stb_image.cpp.obj /FdCMakeFiles\igl_stb_image.dir\igl_stb_image.pdb /FS -c C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-meshes\libigl\external\stb\igl_stb_image.cpp
<<
	cd C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-meshes\cmake-build-debug

stb_image\CMakeFiles\igl_stb_image.dir\igl_stb_image.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/igl_stb_image.dir/igl_stb_image.cpp.i"
	cd C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-meshes\cmake-build-debug\stb_image
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe > CMakeFiles\igl_stb_image.dir\igl_stb_image.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-meshes\libigl\external\stb\igl_stb_image.cpp
<<
	cd C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-meshes\cmake-build-debug

stb_image\CMakeFiles\igl_stb_image.dir\igl_stb_image.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/igl_stb_image.dir/igl_stb_image.cpp.s"
	cd C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-meshes\cmake-build-debug\stb_image
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\igl_stb_image.dir\igl_stb_image.cpp.s /c C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-meshes\libigl\external\stb\igl_stb_image.cpp
<<
	cd C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-meshes\cmake-build-debug

# Object files for target igl_stb_image
igl_stb_image_OBJECTS = \
"CMakeFiles\igl_stb_image.dir\igl_stb_image.cpp.obj"

# External object files for target igl_stb_image
igl_stb_image_EXTERNAL_OBJECTS =

stb_image\igl_stb_image.lib: stb_image\CMakeFiles\igl_stb_image.dir\igl_stb_image.cpp.obj
stb_image\igl_stb_image.lib: stb_image\CMakeFiles\igl_stb_image.dir\build.make
stb_image\igl_stb_image.lib: stb_image\CMakeFiles\igl_stb_image.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-meshes\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library igl_stb_image.lib"
	cd C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-meshes\cmake-build-debug\stb_image
	$(CMAKE_COMMAND) -P CMakeFiles\igl_stb_image.dir\cmake_clean_target.cmake
	cd C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-meshes\cmake-build-debug
	cd C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-meshes\cmake-build-debug\stb_image
	C:\PROGRA~2\MICROS~1.0\VC\bin\link.exe /lib /nologo /machine:X86 /out:igl_stb_image.lib @CMakeFiles\igl_stb_image.dir\objects1.rsp 
	cd C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-meshes\cmake-build-debug

# Rule to build all files generated by this target.
stb_image\CMakeFiles\igl_stb_image.dir\build: stb_image\igl_stb_image.lib

.PHONY : stb_image\CMakeFiles\igl_stb_image.dir\build

stb_image\CMakeFiles\igl_stb_image.dir\clean:
	cd C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-meshes\cmake-build-debug\stb_image
	$(CMAKE_COMMAND) -P CMakeFiles\igl_stb_image.dir\cmake_clean.cmake
	cd C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-meshes\cmake-build-debug
.PHONY : stb_image\CMakeFiles\igl_stb_image.dir\clean

stb_image\CMakeFiles\igl_stb_image.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-meshes C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-meshes\libigl\external\stb C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-meshes\cmake-build-debug C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-meshes\cmake-build-debug\stb_image C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-meshes\cmake-build-debug\stb_image\CMakeFiles\igl_stb_image.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : stb_image\CMakeFiles\igl_stb_image.dir\depend
