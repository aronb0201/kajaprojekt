# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Titkos\Desktop\CLionProjects\akarmi

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Titkos\Desktop\CLionProjects\akarmi\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/akarmi.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/akarmi.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/akarmi.dir/flags.make

CMakeFiles/akarmi.dir/main.cpp.obj: CMakeFiles/akarmi.dir/flags.make
CMakeFiles/akarmi.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Titkos\Desktop\CLionProjects\akarmi\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/akarmi.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\akarmi.dir\main.cpp.obj -c C:\Users\Titkos\Desktop\CLionProjects\akarmi\main.cpp

CMakeFiles/akarmi.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/akarmi.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Titkos\Desktop\CLionProjects\akarmi\main.cpp > CMakeFiles\akarmi.dir\main.cpp.i

CMakeFiles/akarmi.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/akarmi.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Titkos\Desktop\CLionProjects\akarmi\main.cpp -o CMakeFiles\akarmi.dir\main.cpp.s

CMakeFiles/akarmi.dir/ingredient.cpp.obj: CMakeFiles/akarmi.dir/flags.make
CMakeFiles/akarmi.dir/ingredient.cpp.obj: ../ingredient.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Titkos\Desktop\CLionProjects\akarmi\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/akarmi.dir/ingredient.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\akarmi.dir\ingredient.cpp.obj -c C:\Users\Titkos\Desktop\CLionProjects\akarmi\ingredient.cpp

CMakeFiles/akarmi.dir/ingredient.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/akarmi.dir/ingredient.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Titkos\Desktop\CLionProjects\akarmi\ingredient.cpp > CMakeFiles\akarmi.dir\ingredient.cpp.i

CMakeFiles/akarmi.dir/ingredient.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/akarmi.dir/ingredient.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Titkos\Desktop\CLionProjects\akarmi\ingredient.cpp -o CMakeFiles\akarmi.dir\ingredient.cpp.s

CMakeFiles/akarmi.dir/dishes.cpp.obj: CMakeFiles/akarmi.dir/flags.make
CMakeFiles/akarmi.dir/dishes.cpp.obj: ../dishes.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Titkos\Desktop\CLionProjects\akarmi\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/akarmi.dir/dishes.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\akarmi.dir\dishes.cpp.obj -c C:\Users\Titkos\Desktop\CLionProjects\akarmi\dishes.cpp

CMakeFiles/akarmi.dir/dishes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/akarmi.dir/dishes.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Titkos\Desktop\CLionProjects\akarmi\dishes.cpp > CMakeFiles\akarmi.dir\dishes.cpp.i

CMakeFiles/akarmi.dir/dishes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/akarmi.dir/dishes.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Titkos\Desktop\CLionProjects\akarmi\dishes.cpp -o CMakeFiles\akarmi.dir\dishes.cpp.s

# Object files for target akarmi
akarmi_OBJECTS = \
"CMakeFiles/akarmi.dir/main.cpp.obj" \
"CMakeFiles/akarmi.dir/ingredient.cpp.obj" \
"CMakeFiles/akarmi.dir/dishes.cpp.obj"

# External object files for target akarmi
akarmi_EXTERNAL_OBJECTS =

akarmi.exe: CMakeFiles/akarmi.dir/main.cpp.obj
akarmi.exe: CMakeFiles/akarmi.dir/ingredient.cpp.obj
akarmi.exe: CMakeFiles/akarmi.dir/dishes.cpp.obj
akarmi.exe: CMakeFiles/akarmi.dir/build.make
akarmi.exe: CMakeFiles/akarmi.dir/linklibs.rsp
akarmi.exe: CMakeFiles/akarmi.dir/objects1.rsp
akarmi.exe: CMakeFiles/akarmi.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Titkos\Desktop\CLionProjects\akarmi\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable akarmi.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\akarmi.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/akarmi.dir/build: akarmi.exe

.PHONY : CMakeFiles/akarmi.dir/build

CMakeFiles/akarmi.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\akarmi.dir\cmake_clean.cmake
.PHONY : CMakeFiles/akarmi.dir/clean

CMakeFiles/akarmi.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Titkos\Desktop\CLionProjects\akarmi C:\Users\Titkos\Desktop\CLionProjects\akarmi C:\Users\Titkos\Desktop\CLionProjects\akarmi\cmake-build-debug C:\Users\Titkos\Desktop\CLionProjects\akarmi\cmake-build-debug C:\Users\Titkos\Desktop\CLionProjects\akarmi\cmake-build-debug\CMakeFiles\akarmi.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/akarmi.dir/depend

