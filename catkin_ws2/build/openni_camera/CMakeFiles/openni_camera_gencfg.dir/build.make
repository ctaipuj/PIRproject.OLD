# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ctai/catkin_ws2/src/openni_camera/openni_camera

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ctai/catkin_ws2/build/openni_camera

# Utility rule file for openni_camera_gencfg.

# Include the progress variables for this target.
include CMakeFiles/openni_camera_gencfg.dir/progress.make

CMakeFiles/openni_camera_gencfg: /home/ctai/catkin_ws2/devel/.private/openni_camera/include/openni_camera/OpenNIConfig.h
CMakeFiles/openni_camera_gencfg: /home/ctai/catkin_ws2/devel/.private/openni_camera/lib/python2.7/dist-packages/openni_camera/cfg/OpenNIConfig.py

/home/ctai/catkin_ws2/devel/.private/openni_camera/include/openni_camera/OpenNIConfig.h: /home/ctai/catkin_ws2/src/openni_camera/openni_camera/cfg/OpenNI.cfg
/home/ctai/catkin_ws2/devel/.private/openni_camera/include/openni_camera/OpenNIConfig.h: /opt/ros/kinetic/share/dynamic_reconfigure/templates/ConfigType.py.template
/home/ctai/catkin_ws2/devel/.private/openni_camera/include/openni_camera/OpenNIConfig.h: /opt/ros/kinetic/share/dynamic_reconfigure/templates/ConfigType.h.template
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ctai/catkin_ws2/build/openni_camera/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating dynamic reconfigure files from cfg/OpenNI.cfg: /home/ctai/catkin_ws2/devel/.private/openni_camera/include/openni_camera/OpenNIConfig.h /home/ctai/catkin_ws2/devel/.private/openni_camera/lib/python2.7/dist-packages/openni_camera/cfg/OpenNIConfig.py"
	catkin_generated/env_cached.sh /home/ctai/catkin_ws2/src/openni_camera/openni_camera/cfg/OpenNI.cfg /opt/ros/kinetic/share/dynamic_reconfigure/cmake/.. /home/ctai/catkin_ws2/devel/.private/openni_camera/share/openni_camera /home/ctai/catkin_ws2/devel/.private/openni_camera/include/openni_camera /home/ctai/catkin_ws2/devel/.private/openni_camera/lib/python2.7/dist-packages/openni_camera

/home/ctai/catkin_ws2/devel/.private/openni_camera/share/openni_camera/docs/OpenNIConfig.dox: /home/ctai/catkin_ws2/devel/.private/openni_camera/include/openni_camera/OpenNIConfig.h
	@$(CMAKE_COMMAND) -E touch_nocreate /home/ctai/catkin_ws2/devel/.private/openni_camera/share/openni_camera/docs/OpenNIConfig.dox

/home/ctai/catkin_ws2/devel/.private/openni_camera/share/openni_camera/docs/OpenNIConfig-usage.dox: /home/ctai/catkin_ws2/devel/.private/openni_camera/include/openni_camera/OpenNIConfig.h
	@$(CMAKE_COMMAND) -E touch_nocreate /home/ctai/catkin_ws2/devel/.private/openni_camera/share/openni_camera/docs/OpenNIConfig-usage.dox

/home/ctai/catkin_ws2/devel/.private/openni_camera/lib/python2.7/dist-packages/openni_camera/cfg/OpenNIConfig.py: /home/ctai/catkin_ws2/devel/.private/openni_camera/include/openni_camera/OpenNIConfig.h
	@$(CMAKE_COMMAND) -E touch_nocreate /home/ctai/catkin_ws2/devel/.private/openni_camera/lib/python2.7/dist-packages/openni_camera/cfg/OpenNIConfig.py

/home/ctai/catkin_ws2/devel/.private/openni_camera/share/openni_camera/docs/OpenNIConfig.wikidoc: /home/ctai/catkin_ws2/devel/.private/openni_camera/include/openni_camera/OpenNIConfig.h
	@$(CMAKE_COMMAND) -E touch_nocreate /home/ctai/catkin_ws2/devel/.private/openni_camera/share/openni_camera/docs/OpenNIConfig.wikidoc

openni_camera_gencfg: CMakeFiles/openni_camera_gencfg
openni_camera_gencfg: /home/ctai/catkin_ws2/devel/.private/openni_camera/include/openni_camera/OpenNIConfig.h
openni_camera_gencfg: /home/ctai/catkin_ws2/devel/.private/openni_camera/share/openni_camera/docs/OpenNIConfig.dox
openni_camera_gencfg: /home/ctai/catkin_ws2/devel/.private/openni_camera/share/openni_camera/docs/OpenNIConfig-usage.dox
openni_camera_gencfg: /home/ctai/catkin_ws2/devel/.private/openni_camera/lib/python2.7/dist-packages/openni_camera/cfg/OpenNIConfig.py
openni_camera_gencfg: /home/ctai/catkin_ws2/devel/.private/openni_camera/share/openni_camera/docs/OpenNIConfig.wikidoc
openni_camera_gencfg: CMakeFiles/openni_camera_gencfg.dir/build.make
.PHONY : openni_camera_gencfg

# Rule to build all files generated by this target.
CMakeFiles/openni_camera_gencfg.dir/build: openni_camera_gencfg
.PHONY : CMakeFiles/openni_camera_gencfg.dir/build

CMakeFiles/openni_camera_gencfg.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/openni_camera_gencfg.dir/cmake_clean.cmake
.PHONY : CMakeFiles/openni_camera_gencfg.dir/clean

CMakeFiles/openni_camera_gencfg.dir/depend:
	cd /home/ctai/catkin_ws2/build/openni_camera && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ctai/catkin_ws2/src/openni_camera/openni_camera /home/ctai/catkin_ws2/src/openni_camera/openni_camera /home/ctai/catkin_ws2/build/openni_camera /home/ctai/catkin_ws2/build/openni_camera /home/ctai/catkin_ws2/build/openni_camera/CMakeFiles/openni_camera_gencfg.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/openni_camera_gencfg.dir/depend

