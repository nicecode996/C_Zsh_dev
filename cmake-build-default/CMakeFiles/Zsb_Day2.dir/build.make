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
CMAKE_BINARY_DIR = "D:\SoftWare Test\Clion\C_Zsh_dev\cmake-build-default"

# Include any dependencies generated for this target.
include CMakeFiles/Zsb_Day2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Zsb_Day2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Zsb_Day2.dir/flags.make

CMakeFiles/Zsb_Day2.dir/Zsb_Day2/Zsb_Day2.c.obj: CMakeFiles/Zsb_Day2.dir/flags.make
CMakeFiles/Zsb_Day2.dir/Zsb_Day2/Zsb_Day2.c.obj: ../Zsb_Day2/Zsb_Day2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\SoftWare Test\Clion\C_Zsh_dev\cmake-build-default\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Zsb_Day2.dir/Zsb_Day2/Zsb_Day2.c.obj"
	"D:\SoftWare Test\Clion\mingw64\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Zsb_Day2.dir\Zsb_Day2\Zsb_Day2.c.obj   -c "D:\SoftWare Test\Clion\C_Zsh_dev\Zsb_Day2\Zsb_Day2.c"

CMakeFiles/Zsb_Day2.dir/Zsb_Day2/Zsb_Day2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Zsb_Day2.dir/Zsb_Day2/Zsb_Day2.c.i"
	"D:\SoftWare Test\Clion\mingw64\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\SoftWare Test\Clion\C_Zsh_dev\Zsb_Day2\Zsb_Day2.c" > CMakeFiles\Zsb_Day2.dir\Zsb_Day2\Zsb_Day2.c.i

CMakeFiles/Zsb_Day2.dir/Zsb_Day2/Zsb_Day2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Zsb_Day2.dir/Zsb_Day2/Zsb_Day2.c.s"
	"D:\SoftWare Test\Clion\mingw64\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\SoftWare Test\Clion\C_Zsh_dev\Zsb_Day2\Zsb_Day2.c" -o CMakeFiles\Zsb_Day2.dir\Zsb_Day2\Zsb_Day2.c.s

# Object files for target Zsb_Day2
Zsb_Day2_OBJECTS = \
"CMakeFiles/Zsb_Day2.dir/Zsb_Day2/Zsb_Day2.c.obj"

# External object files for target Zsb_Day2
Zsb_Day2_EXTERNAL_OBJECTS =

Zsb_Day2.exe: CMakeFiles/Zsb_Day2.dir/Zsb_Day2/Zsb_Day2.c.obj
Zsb_Day2.exe: CMakeFiles/Zsb_Day2.dir/build.make
Zsb_Day2.exe: CMakeFiles/Zsb_Day2.dir/linklibs.rsp
Zsb_Day2.exe: CMakeFiles/Zsb_Day2.dir/objects1.rsp
Zsb_Day2.exe: CMakeFiles/Zsb_Day2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\SoftWare Test\Clion\C_Zsh_dev\cmake-build-default\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Zsb_Day2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Zsb_Day2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Zsb_Day2.dir/build: Zsb_Day2.exe

.PHONY : CMakeFiles/Zsb_Day2.dir/build

CMakeFiles/Zsb_Day2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Zsb_Day2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Zsb_Day2.dir/clean

CMakeFiles/Zsb_Day2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\SoftWare Test\Clion\C_Zsh_dev" "D:\SoftWare Test\Clion\C_Zsh_dev" "D:\SoftWare Test\Clion\C_Zsh_dev\cmake-build-default" "D:\SoftWare Test\Clion\C_Zsh_dev\cmake-build-default" "D:\SoftWare Test\Clion\C_Zsh_dev\cmake-build-default\CMakeFiles\Zsb_Day2.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Zsb_Day2.dir/depend

