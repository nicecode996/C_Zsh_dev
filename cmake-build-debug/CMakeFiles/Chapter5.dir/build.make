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
CMAKE_BINARY_DIR = "D:\SoftWare Test\Clion\C_Zsh_dev\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Chapter5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Chapter5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Chapter5.dir/flags.make

CMakeFiles/Chapter5.dir/Chapter5/main5.c.obj: CMakeFiles/Chapter5.dir/flags.make
CMakeFiles/Chapter5.dir/Chapter5/main5.c.obj: ../Chapter5/main5.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\SoftWare Test\Clion\C_Zsh_dev\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Chapter5.dir/Chapter5/main5.c.obj"
	"D:\SoftWare Test\Clion\mingw64\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Chapter5.dir\Chapter5\main5.c.obj   -c "D:\SoftWare Test\Clion\C_Zsh_dev\Chapter5\main5.c"

CMakeFiles/Chapter5.dir/Chapter5/main5.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Chapter5.dir/Chapter5/main5.c.i"
	"D:\SoftWare Test\Clion\mingw64\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\SoftWare Test\Clion\C_Zsh_dev\Chapter5\main5.c" > CMakeFiles\Chapter5.dir\Chapter5\main5.c.i

CMakeFiles/Chapter5.dir/Chapter5/main5.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Chapter5.dir/Chapter5/main5.c.s"
	"D:\SoftWare Test\Clion\mingw64\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\SoftWare Test\Clion\C_Zsh_dev\Chapter5\main5.c" -o CMakeFiles\Chapter5.dir\Chapter5\main5.c.s

# Object files for target Chapter5
Chapter5_OBJECTS = \
"CMakeFiles/Chapter5.dir/Chapter5/main5.c.obj"

# External object files for target Chapter5
Chapter5_EXTERNAL_OBJECTS =

Chapter5.exe: CMakeFiles/Chapter5.dir/Chapter5/main5.c.obj
Chapter5.exe: CMakeFiles/Chapter5.dir/build.make
Chapter5.exe: CMakeFiles/Chapter5.dir/linklibs.rsp
Chapter5.exe: CMakeFiles/Chapter5.dir/objects1.rsp
Chapter5.exe: CMakeFiles/Chapter5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\SoftWare Test\Clion\C_Zsh_dev\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Chapter5.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Chapter5.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Chapter5.dir/build: Chapter5.exe

.PHONY : CMakeFiles/Chapter5.dir/build

CMakeFiles/Chapter5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Chapter5.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Chapter5.dir/clean

CMakeFiles/Chapter5.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\SoftWare Test\Clion\C_Zsh_dev" "D:\SoftWare Test\Clion\C_Zsh_dev" "D:\SoftWare Test\Clion\C_Zsh_dev\cmake-build-debug" "D:\SoftWare Test\Clion\C_Zsh_dev\cmake-build-debug" "D:\SoftWare Test\Clion\C_Zsh_dev\cmake-build-debug\CMakeFiles\Chapter5.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Chapter5.dir/depend

