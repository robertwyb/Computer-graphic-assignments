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
CMAKE_SOURCE_DIR = C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-bounding-volume-hierarchy

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-bounding-volume-hierarchy\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\intersections.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\intersections.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\intersections.dir\flags.make

CMakeFiles\intersections.dir\intersections.cpp.obj: CMakeFiles\intersections.dir\flags.make
CMakeFiles\intersections.dir\intersections.cpp.obj: ..\intersections.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-bounding-volume-hierarchy\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/intersections.dir/intersections.cpp.obj"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\intersections.dir\intersections.cpp.obj /FdCMakeFiles\intersections.dir\ /FS -c C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-bounding-volume-hierarchy\intersections.cpp
<<

CMakeFiles\intersections.dir\intersections.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/intersections.dir/intersections.cpp.i"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe > CMakeFiles\intersections.dir\intersections.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-bounding-volume-hierarchy\intersections.cpp
<<

CMakeFiles\intersections.dir\intersections.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/intersections.dir/intersections.cpp.s"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\intersections.dir\intersections.cpp.s /c C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-bounding-volume-hierarchy\intersections.cpp
<<

# Object files for target intersections
intersections_OBJECTS = \
"CMakeFiles\intersections.dir\intersections.cpp.obj"

# External object files for target intersections
intersections_EXTERNAL_OBJECTS =

intersections.exe: CMakeFiles\intersections.dir\intersections.cpp.obj
intersections.exe: CMakeFiles\intersections.dir\build.make
intersections.exe: core.lib
intersections.exe: glad\glad.lib
intersections.exe: glfw\src\glfw3.lib
intersections.exe: CMakeFiles\intersections.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-bounding-volume-hierarchy\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable intersections.exe"
	"D:\CLion 2018.3.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\intersections.dir --manifests  -- C:\PROGRA~2\MICROS~1.0\VC\bin\link.exe /nologo @CMakeFiles\intersections.dir\objects1.rsp @<<
 /out:intersections.exe /implib:intersections.lib /pdb:C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-bounding-volume-hierarchy\cmake-build-debug\intersections.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console core.lib opengl32.lib glad\glad.lib glfw\src\glfw3.lib kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\intersections.dir\build: intersections.exe

.PHONY : CMakeFiles\intersections.dir\build

CMakeFiles\intersections.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\intersections.dir\cmake_clean.cmake
.PHONY : CMakeFiles\intersections.dir\clean

CMakeFiles\intersections.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-bounding-volume-hierarchy C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-bounding-volume-hierarchy C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-bounding-volume-hierarchy\cmake-build-debug C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-bounding-volume-hierarchy\cmake-build-debug C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-bounding-volume-hierarchy\cmake-build-debug\CMakeFiles\intersections.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\intersections.dir\depend

