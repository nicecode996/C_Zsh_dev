# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\maxu\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.5981.166\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\maxu\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.5981.166\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\SoftWare Test\Clion\C_Zsh_dev"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\SoftWare Test\Clion\C_Zsh_dev\cmake-build-release"

# Include any dependencies generated for this target.
include CMakeFiles/Test_Demo4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Test_Demo4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Test_Demo4.dir/flags.make

CMakeFiles/Test_Demo4.dir/Test_Demo4/Day4.c.obj: CMakeFiles/Test_Demo4.dir/flags.make
CMakeFiles/Test_Demo4.dir/Test_Demo4/Day4.c.obj: ../Test_Demo4/Day4.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\SoftWare Test\Clion\C_Zsh_dev\cmake-build-release\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Test_Demo4.dir/Test_Demo4/Day4.c.obj"
	"D:\SoftWare Test\Clion\mingw64\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Test_Demo4.dir\Test_Demo4\Day4.c.obj   -c "D:\SoftWare Test\Clion\C_Zsh_dev\Test_Demo4\Day4.c"

CMakeFiles/Test_Demo4.dir/Test_Demo4/Day4.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Test_Demo4.dir/Test_Demo4/Day4.c.i"
	"D:\SoftWare Test\Clion\mingw64\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\SoftWare Test\Clion\C_Zsh_dev\Test_Demo4\Day4.c" > CMakeFiles\Test_Demo4.dir\Test_Demo4\Day4.c.i

CMakeFiles/Test_Demo4.dir/Test_Demo4/Day4.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Test_Demo4.dir/Test_Demo4/Day4.c.s"
	"D:\SoftWare Test\Clion\mingw64\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\SoftWare Test\Clion\C_Zsh_dev\Test_Demo4\Day4.c" -o CMakeFiles\Test_Demo4.dir\Test_Demo4\Day4.c.s

# Object files for target Test_Demo4
Test_Demo4_OBJECTS = \
"CMakeFiles/Test_Demo4.dir/Test_Demo4/Day4.c.obj"

# External object files for target Test_Demo4
Test_Demo4_EXTERNAL_OBJECTS =

Test_Demo4.exe: CMakeFiles/Test_Demo4.dir/Test_Demo4/Day4.c.obj
Test_Demo4.exe: CMakeFiles/Test_Demo4.dir/build.make
Test_Demo4.exe: CMakeFiles/Test_Demo4.dir/linklibs.rsp
Test_Demo4.exe: CMakeFiles/Test_Demo4.dir/objects1.rsp
Test_Demo4.exe: CMakeFiles/Test_Demo4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\SoftWare Test\Clion\C_Zsh_dev\cmake-build-release\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Test_Demo4.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Test_Demo4.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Test_Demo4.dir/build: Test_Demo4.exe

.PHONY : CMakeFiles/Test_Demo4.dir/build

CMakeFiles/Test_Demo4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Test_Demo4.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Test_Demo4.dir/clean

CMakeFiles/Test_Demo4.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\SoftWare Test\Clion\C_Zsh_dev" "D:\SoftWare Test\Clion\C_Zsh_dev" "D:\SoftWare Test\Clion\C_Zsh_dev\cmake-build-release" "D:\SoftWare Test\Clion\C_Zsh_dev\cmake-build-release" "D:\SoftWare Test\Clion\C_Zsh_dev\cmake-build-release\CMakeFiles\Test_Demo4.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Test_Demo4.dir/depend

