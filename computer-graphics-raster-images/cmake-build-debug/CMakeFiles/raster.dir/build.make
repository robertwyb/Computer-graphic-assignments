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
CMAKE_SOURCE_DIR = C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\raster.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\raster.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\raster.dir\flags.make

CMakeFiles\raster.dir\main.cpp.obj: CMakeFiles\raster.dir\flags.make
CMakeFiles\raster.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/raster.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\raster.dir\main.cpp.obj /FdCMakeFiles\raster.dir\ /FS -c C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\main.cpp
<<

CMakeFiles\raster.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raster.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe > CMakeFiles\raster.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\main.cpp
<<

CMakeFiles\raster.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raster.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\raster.dir\main.cpp.s /c C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\main.cpp
<<

CMakeFiles\raster.dir\src\demosaic.cpp.obj: CMakeFiles\raster.dir\flags.make
CMakeFiles\raster.dir\src\demosaic.cpp.obj: ..\src\demosaic.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/raster.dir/src/demosaic.cpp.obj"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\raster.dir\src\demosaic.cpp.obj /FdCMakeFiles\raster.dir\ /FS -c C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\demosaic.cpp
<<

CMakeFiles\raster.dir\src\demosaic.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raster.dir/src/demosaic.cpp.i"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe > CMakeFiles\raster.dir\src\demosaic.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\demosaic.cpp
<<

CMakeFiles\raster.dir\src\demosaic.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raster.dir/src/demosaic.cpp.s"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\raster.dir\src\demosaic.cpp.s /c C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\demosaic.cpp
<<

CMakeFiles\raster.dir\src\desaturate.cpp.obj: CMakeFiles\raster.dir\flags.make
CMakeFiles\raster.dir\src\desaturate.cpp.obj: ..\src\desaturate.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/raster.dir/src/desaturate.cpp.obj"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\raster.dir\src\desaturate.cpp.obj /FdCMakeFiles\raster.dir\ /FS -c C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\desaturate.cpp
<<

CMakeFiles\raster.dir\src\desaturate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raster.dir/src/desaturate.cpp.i"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe > CMakeFiles\raster.dir\src\desaturate.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\desaturate.cpp
<<

CMakeFiles\raster.dir\src\desaturate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raster.dir/src/desaturate.cpp.s"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\raster.dir\src\desaturate.cpp.s /c C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\desaturate.cpp
<<

CMakeFiles\raster.dir\src\hsv_to_rgb.cpp.obj: CMakeFiles\raster.dir\flags.make
CMakeFiles\raster.dir\src\hsv_to_rgb.cpp.obj: ..\src\hsv_to_rgb.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/raster.dir/src/hsv_to_rgb.cpp.obj"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\raster.dir\src\hsv_to_rgb.cpp.obj /FdCMakeFiles\raster.dir\ /FS -c C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\hsv_to_rgb.cpp
<<

CMakeFiles\raster.dir\src\hsv_to_rgb.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raster.dir/src/hsv_to_rgb.cpp.i"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe > CMakeFiles\raster.dir\src\hsv_to_rgb.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\hsv_to_rgb.cpp
<<

CMakeFiles\raster.dir\src\hsv_to_rgb.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raster.dir/src/hsv_to_rgb.cpp.s"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\raster.dir\src\hsv_to_rgb.cpp.s /c C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\hsv_to_rgb.cpp
<<

CMakeFiles\raster.dir\src\hue_shift.cpp.obj: CMakeFiles\raster.dir\flags.make
CMakeFiles\raster.dir\src\hue_shift.cpp.obj: ..\src\hue_shift.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/raster.dir/src/hue_shift.cpp.obj"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\raster.dir\src\hue_shift.cpp.obj /FdCMakeFiles\raster.dir\ /FS -c C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\hue_shift.cpp
<<

CMakeFiles\raster.dir\src\hue_shift.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raster.dir/src/hue_shift.cpp.i"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe > CMakeFiles\raster.dir\src\hue_shift.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\hue_shift.cpp
<<

CMakeFiles\raster.dir\src\hue_shift.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raster.dir/src/hue_shift.cpp.s"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\raster.dir\src\hue_shift.cpp.s /c C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\hue_shift.cpp
<<

CMakeFiles\raster.dir\src\over.cpp.obj: CMakeFiles\raster.dir\flags.make
CMakeFiles\raster.dir\src\over.cpp.obj: ..\src\over.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/raster.dir/src/over.cpp.obj"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\raster.dir\src\over.cpp.obj /FdCMakeFiles\raster.dir\ /FS -c C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\over.cpp
<<

CMakeFiles\raster.dir\src\over.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raster.dir/src/over.cpp.i"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe > CMakeFiles\raster.dir\src\over.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\over.cpp
<<

CMakeFiles\raster.dir\src\over.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raster.dir/src/over.cpp.s"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\raster.dir\src\over.cpp.s /c C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\over.cpp
<<

CMakeFiles\raster.dir\src\reflect.cpp.obj: CMakeFiles\raster.dir\flags.make
CMakeFiles\raster.dir\src\reflect.cpp.obj: ..\src\reflect.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/raster.dir/src/reflect.cpp.obj"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\raster.dir\src\reflect.cpp.obj /FdCMakeFiles\raster.dir\ /FS -c C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\reflect.cpp
<<

CMakeFiles\raster.dir\src\reflect.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raster.dir/src/reflect.cpp.i"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe > CMakeFiles\raster.dir\src\reflect.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\reflect.cpp
<<

CMakeFiles\raster.dir\src\reflect.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raster.dir/src/reflect.cpp.s"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\raster.dir\src\reflect.cpp.s /c C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\reflect.cpp
<<

CMakeFiles\raster.dir\src\rgb_to_gray.cpp.obj: CMakeFiles\raster.dir\flags.make
CMakeFiles\raster.dir\src\rgb_to_gray.cpp.obj: ..\src\rgb_to_gray.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/raster.dir/src/rgb_to_gray.cpp.obj"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\raster.dir\src\rgb_to_gray.cpp.obj /FdCMakeFiles\raster.dir\ /FS -c C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\rgb_to_gray.cpp
<<

CMakeFiles\raster.dir\src\rgb_to_gray.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raster.dir/src/rgb_to_gray.cpp.i"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe > CMakeFiles\raster.dir\src\rgb_to_gray.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\rgb_to_gray.cpp
<<

CMakeFiles\raster.dir\src\rgb_to_gray.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raster.dir/src/rgb_to_gray.cpp.s"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\raster.dir\src\rgb_to_gray.cpp.s /c C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\rgb_to_gray.cpp
<<

CMakeFiles\raster.dir\src\rgb_to_hsv.cpp.obj: CMakeFiles\raster.dir\flags.make
CMakeFiles\raster.dir\src\rgb_to_hsv.cpp.obj: ..\src\rgb_to_hsv.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/raster.dir/src/rgb_to_hsv.cpp.obj"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\raster.dir\src\rgb_to_hsv.cpp.obj /FdCMakeFiles\raster.dir\ /FS -c C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\rgb_to_hsv.cpp
<<

CMakeFiles\raster.dir\src\rgb_to_hsv.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raster.dir/src/rgb_to_hsv.cpp.i"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe > CMakeFiles\raster.dir\src\rgb_to_hsv.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\rgb_to_hsv.cpp
<<

CMakeFiles\raster.dir\src\rgb_to_hsv.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raster.dir/src/rgb_to_hsv.cpp.s"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\raster.dir\src\rgb_to_hsv.cpp.s /c C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\rgb_to_hsv.cpp
<<

CMakeFiles\raster.dir\src\rgba_to_rgb.cpp.obj: CMakeFiles\raster.dir\flags.make
CMakeFiles\raster.dir\src\rgba_to_rgb.cpp.obj: ..\src\rgba_to_rgb.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/raster.dir/src/rgba_to_rgb.cpp.obj"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\raster.dir\src\rgba_to_rgb.cpp.obj /FdCMakeFiles\raster.dir\ /FS -c C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\rgba_to_rgb.cpp
<<

CMakeFiles\raster.dir\src\rgba_to_rgb.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raster.dir/src/rgba_to_rgb.cpp.i"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe > CMakeFiles\raster.dir\src\rgba_to_rgb.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\rgba_to_rgb.cpp
<<

CMakeFiles\raster.dir\src\rgba_to_rgb.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raster.dir/src/rgba_to_rgb.cpp.s"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\raster.dir\src\rgba_to_rgb.cpp.s /c C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\rgba_to_rgb.cpp
<<

CMakeFiles\raster.dir\src\rotate.cpp.obj: CMakeFiles\raster.dir\flags.make
CMakeFiles\raster.dir\src\rotate.cpp.obj: ..\src\rotate.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/raster.dir/src/rotate.cpp.obj"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\raster.dir\src\rotate.cpp.obj /FdCMakeFiles\raster.dir\ /FS -c C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\rotate.cpp
<<

CMakeFiles\raster.dir\src\rotate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raster.dir/src/rotate.cpp.i"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe > CMakeFiles\raster.dir\src\rotate.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\rotate.cpp
<<

CMakeFiles\raster.dir\src\rotate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raster.dir/src/rotate.cpp.s"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\raster.dir\src\rotate.cpp.s /c C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\rotate.cpp
<<

CMakeFiles\raster.dir\src\simulate_bayer_mosaic.cpp.obj: CMakeFiles\raster.dir\flags.make
CMakeFiles\raster.dir\src\simulate_bayer_mosaic.cpp.obj: ..\src\simulate_bayer_mosaic.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/raster.dir/src/simulate_bayer_mosaic.cpp.obj"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\raster.dir\src\simulate_bayer_mosaic.cpp.obj /FdCMakeFiles\raster.dir\ /FS -c C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\simulate_bayer_mosaic.cpp
<<

CMakeFiles\raster.dir\src\simulate_bayer_mosaic.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raster.dir/src/simulate_bayer_mosaic.cpp.i"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe > CMakeFiles\raster.dir\src\simulate_bayer_mosaic.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\simulate_bayer_mosaic.cpp
<<

CMakeFiles\raster.dir\src\simulate_bayer_mosaic.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raster.dir/src/simulate_bayer_mosaic.cpp.s"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\raster.dir\src\simulate_bayer_mosaic.cpp.s /c C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\simulate_bayer_mosaic.cpp
<<

CMakeFiles\raster.dir\src\write_ppm.cpp.obj: CMakeFiles\raster.dir\flags.make
CMakeFiles\raster.dir\src\write_ppm.cpp.obj: ..\src\write_ppm.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/raster.dir/src/write_ppm.cpp.obj"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\raster.dir\src\write_ppm.cpp.obj /FdCMakeFiles\raster.dir\ /FS -c C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\write_ppm.cpp
<<

CMakeFiles\raster.dir\src\write_ppm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raster.dir/src/write_ppm.cpp.i"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe > CMakeFiles\raster.dir\src\write_ppm.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\write_ppm.cpp
<<

CMakeFiles\raster.dir\src\write_ppm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raster.dir/src/write_ppm.cpp.s"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\raster.dir\src\write_ppm.cpp.s /c C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\src\write_ppm.cpp
<<

# Object files for target raster
raster_OBJECTS = \
"CMakeFiles\raster.dir\main.cpp.obj" \
"CMakeFiles\raster.dir\src\demosaic.cpp.obj" \
"CMakeFiles\raster.dir\src\desaturate.cpp.obj" \
"CMakeFiles\raster.dir\src\hsv_to_rgb.cpp.obj" \
"CMakeFiles\raster.dir\src\hue_shift.cpp.obj" \
"CMakeFiles\raster.dir\src\over.cpp.obj" \
"CMakeFiles\raster.dir\src\reflect.cpp.obj" \
"CMakeFiles\raster.dir\src\rgb_to_gray.cpp.obj" \
"CMakeFiles\raster.dir\src\rgb_to_hsv.cpp.obj" \
"CMakeFiles\raster.dir\src\rgba_to_rgb.cpp.obj" \
"CMakeFiles\raster.dir\src\rotate.cpp.obj" \
"CMakeFiles\raster.dir\src\simulate_bayer_mosaic.cpp.obj" \
"CMakeFiles\raster.dir\src\write_ppm.cpp.obj"

# External object files for target raster
raster_EXTERNAL_OBJECTS =

raster.exe: CMakeFiles\raster.dir\main.cpp.obj
raster.exe: CMakeFiles\raster.dir\src\demosaic.cpp.obj
raster.exe: CMakeFiles\raster.dir\src\desaturate.cpp.obj
raster.exe: CMakeFiles\raster.dir\src\hsv_to_rgb.cpp.obj
raster.exe: CMakeFiles\raster.dir\src\hue_shift.cpp.obj
raster.exe: CMakeFiles\raster.dir\src\over.cpp.obj
raster.exe: CMakeFiles\raster.dir\src\reflect.cpp.obj
raster.exe: CMakeFiles\raster.dir\src\rgb_to_gray.cpp.obj
raster.exe: CMakeFiles\raster.dir\src\rgb_to_hsv.cpp.obj
raster.exe: CMakeFiles\raster.dir\src\rgba_to_rgb.cpp.obj
raster.exe: CMakeFiles\raster.dir\src\rotate.cpp.obj
raster.exe: CMakeFiles\raster.dir\src\simulate_bayer_mosaic.cpp.obj
raster.exe: CMakeFiles\raster.dir\src\write_ppm.cpp.obj
raster.exe: CMakeFiles\raster.dir\build.make
raster.exe: CMakeFiles\raster.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Linking CXX executable raster.exe"
	"D:\CLion 2018.3.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\raster.dir --manifests  -- C:\PROGRA~2\MICROS~1.0\VC\bin\link.exe /nologo @CMakeFiles\raster.dir\objects1.rsp @<<
 /out:raster.exe /implib:raster.lib /pdb:C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\cmake-build-debug\raster.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\raster.dir\build: raster.exe

.PHONY : CMakeFiles\raster.dir\build

CMakeFiles\raster.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\raster.dir\cmake_clean.cmake
.PHONY : CMakeFiles\raster.dir\clean

CMakeFiles\raster.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\cmake-build-debug C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\cmake-build-debug C:\Users\rober\OneDrive\csc\CSC418\computer-graphics-raster-images\cmake-build-debug\CMakeFiles\raster.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\raster.dir\depend

