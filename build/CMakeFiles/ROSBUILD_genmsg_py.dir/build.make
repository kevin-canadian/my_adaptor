# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/r00t/ros_workspace/my_adaptor

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/r00t/ros_workspace/my_adaptor/build

# Utility rule file for ROSBUILD_genmsg_py.

# Include the progress variables for this target.
include CMakeFiles/ROSBUILD_genmsg_py.dir/progress.make

CMakeFiles/ROSBUILD_genmsg_py: ../src/my_adaptor/msg/__init__.py

../src/my_adaptor/msg/__init__.py: ../src/my_adaptor/msg/_integer.py
	$(CMAKE_COMMAND) -E cmake_progress_report /home/r00t/ros_workspace/my_adaptor/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../src/my_adaptor/msg/__init__.py"
	/opt/ros/fuerte/share/rospy/rosbuild/scripts/genmsg_py.py --initpy /home/r00t/ros_workspace/my_adaptor/msg/integer.msg

../src/my_adaptor/msg/_integer.py: ../msg/integer.msg
../src/my_adaptor/msg/_integer.py: /opt/ros/fuerte/share/rospy/rosbuild/scripts/genmsg_py.py
../src/my_adaptor/msg/_integer.py: /opt/ros/fuerte/share/roslib/bin/gendeps
../src/my_adaptor/msg/_integer.py: ../manifest.xml
../src/my_adaptor/msg/_integer.py: /opt/ros/fuerte/share/roslang/manifest.xml
../src/my_adaptor/msg/_integer.py: /opt/ros/fuerte/share/rospy/manifest.xml
../src/my_adaptor/msg/_integer.py: /opt/ros/fuerte/share/roscpp/manifest.xml
../src/my_adaptor/msg/_integer.py: /opt/ros/fuerte/share/rosservice/manifest.xml
../src/my_adaptor/msg/_integer.py: /opt/ros/fuerte/stacks/dynamic_reconfigure/manifest.xml
../src/my_adaptor/msg/_integer.py: /opt/ros/fuerte/share/std_msgs/manifest.xml
../src/my_adaptor/msg/_integer.py: /opt/ros/fuerte/share/geometry_msgs/manifest.xml
../src/my_adaptor/msg/_integer.py: /opt/ros/fuerte/share/sensor_msgs/manifest.xml
../src/my_adaptor/msg/_integer.py: /opt/ros/fuerte/share/stereo_msgs/manifest.xml
../src/my_adaptor/msg/_integer.py: /opt/ros/fuerte/share/rosunit/manifest.xml
../src/my_adaptor/msg/_integer.py: /opt/ros/fuerte/stacks/dynamic_reconfigure/msg_gen/generated
../src/my_adaptor/msg/_integer.py: /opt/ros/fuerte/stacks/dynamic_reconfigure/srv_gen/generated
	$(CMAKE_COMMAND) -E cmake_progress_report /home/r00t/ros_workspace/my_adaptor/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../src/my_adaptor/msg/_integer.py"
	/opt/ros/fuerte/share/rospy/rosbuild/scripts/genmsg_py.py --noinitpy /home/r00t/ros_workspace/my_adaptor/msg/integer.msg

ROSBUILD_genmsg_py: CMakeFiles/ROSBUILD_genmsg_py
ROSBUILD_genmsg_py: ../src/my_adaptor/msg/__init__.py
ROSBUILD_genmsg_py: ../src/my_adaptor/msg/_integer.py
ROSBUILD_genmsg_py: CMakeFiles/ROSBUILD_genmsg_py.dir/build.make
.PHONY : ROSBUILD_genmsg_py

# Rule to build all files generated by this target.
CMakeFiles/ROSBUILD_genmsg_py.dir/build: ROSBUILD_genmsg_py
.PHONY : CMakeFiles/ROSBUILD_genmsg_py.dir/build

CMakeFiles/ROSBUILD_genmsg_py.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ROSBUILD_genmsg_py.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ROSBUILD_genmsg_py.dir/clean

CMakeFiles/ROSBUILD_genmsg_py.dir/depend:
	cd /home/r00t/ros_workspace/my_adaptor/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/r00t/ros_workspace/my_adaptor /home/r00t/ros_workspace/my_adaptor /home/r00t/ros_workspace/my_adaptor/build /home/r00t/ros_workspace/my_adaptor/build /home/r00t/ros_workspace/my_adaptor/build/CMakeFiles/ROSBUILD_genmsg_py.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ROSBUILD_genmsg_py.dir/depend

