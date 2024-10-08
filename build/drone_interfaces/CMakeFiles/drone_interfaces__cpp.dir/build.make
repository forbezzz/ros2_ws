# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/ros2_ws/src/drone_interfaces

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/ros2_ws/build/drone_interfaces

# Utility rule file for drone_interfaces__cpp.

# Include any custom commands dependencies for this target.
include CMakeFiles/drone_interfaces__cpp.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/drone_interfaces__cpp.dir/progress.make

CMakeFiles/drone_interfaces__cpp: rosidl_generator_cpp/drone_interfaces/msg/velocity_ned.hpp
CMakeFiles/drone_interfaces__cpp: rosidl_generator_cpp/drone_interfaces/msg/detail/velocity_ned__builder.hpp
CMakeFiles/drone_interfaces__cpp: rosidl_generator_cpp/drone_interfaces/msg/detail/velocity_ned__struct.hpp
CMakeFiles/drone_interfaces__cpp: rosidl_generator_cpp/drone_interfaces/msg/detail/velocity_ned__traits.hpp
CMakeFiles/drone_interfaces__cpp: rosidl_generator_cpp/drone_interfaces/msg/detail/velocity_ned__type_support.hpp
CMakeFiles/drone_interfaces__cpp: rosidl_generator_cpp/drone_interfaces/msg/telemetry_data.hpp
CMakeFiles/drone_interfaces__cpp: rosidl_generator_cpp/drone_interfaces/msg/detail/telemetry_data__builder.hpp
CMakeFiles/drone_interfaces__cpp: rosidl_generator_cpp/drone_interfaces/msg/detail/telemetry_data__struct.hpp
CMakeFiles/drone_interfaces__cpp: rosidl_generator_cpp/drone_interfaces/msg/detail/telemetry_data__traits.hpp
CMakeFiles/drone_interfaces__cpp: rosidl_generator_cpp/drone_interfaces/msg/detail/telemetry_data__type_support.hpp
CMakeFiles/drone_interfaces__cpp: rosidl_generator_cpp/drone_interfaces/msg/rosidl_generator_cpp__visibility_control.hpp

rosidl_generator_cpp/drone_interfaces/msg/velocity_ned.hpp: /opt/ros/jazzy/lib/rosidl_generator_cpp/rosidl_generator_cpp
rosidl_generator_cpp/drone_interfaces/msg/velocity_ned.hpp: /opt/ros/jazzy/lib/python3.12/site-packages/rosidl_generator_cpp/__init__.py
rosidl_generator_cpp/drone_interfaces/msg/velocity_ned.hpp: /opt/ros/jazzy/share/rosidl_generator_cpp/resource/action__builder.hpp.em
rosidl_generator_cpp/drone_interfaces/msg/velocity_ned.hpp: /opt/ros/jazzy/share/rosidl_generator_cpp/resource/action__struct.hpp.em
rosidl_generator_cpp/drone_interfaces/msg/velocity_ned.hpp: /opt/ros/jazzy/share/rosidl_generator_cpp/resource/action__traits.hpp.em
rosidl_generator_cpp/drone_interfaces/msg/velocity_ned.hpp: /opt/ros/jazzy/share/rosidl_generator_cpp/resource/action__type_support.hpp.em
rosidl_generator_cpp/drone_interfaces/msg/velocity_ned.hpp: /opt/ros/jazzy/share/rosidl_generator_cpp/resource/idl.hpp.em
rosidl_generator_cpp/drone_interfaces/msg/velocity_ned.hpp: /opt/ros/jazzy/share/rosidl_generator_cpp/resource/idl__builder.hpp.em
rosidl_generator_cpp/drone_interfaces/msg/velocity_ned.hpp: /opt/ros/jazzy/share/rosidl_generator_cpp/resource/idl__struct.hpp.em
rosidl_generator_cpp/drone_interfaces/msg/velocity_ned.hpp: /opt/ros/jazzy/share/rosidl_generator_cpp/resource/idl__traits.hpp.em
rosidl_generator_cpp/drone_interfaces/msg/velocity_ned.hpp: /opt/ros/jazzy/share/rosidl_generator_cpp/resource/idl__type_support.hpp.em
rosidl_generator_cpp/drone_interfaces/msg/velocity_ned.hpp: /opt/ros/jazzy/share/rosidl_generator_cpp/resource/msg__builder.hpp.em
rosidl_generator_cpp/drone_interfaces/msg/velocity_ned.hpp: /opt/ros/jazzy/share/rosidl_generator_cpp/resource/msg__struct.hpp.em
rosidl_generator_cpp/drone_interfaces/msg/velocity_ned.hpp: /opt/ros/jazzy/share/rosidl_generator_cpp/resource/msg__traits.hpp.em
rosidl_generator_cpp/drone_interfaces/msg/velocity_ned.hpp: /opt/ros/jazzy/share/rosidl_generator_cpp/resource/msg__type_support.hpp.em
rosidl_generator_cpp/drone_interfaces/msg/velocity_ned.hpp: /opt/ros/jazzy/share/rosidl_generator_cpp/resource/srv__builder.hpp.em
rosidl_generator_cpp/drone_interfaces/msg/velocity_ned.hpp: /opt/ros/jazzy/share/rosidl_generator_cpp/resource/srv__struct.hpp.em
rosidl_generator_cpp/drone_interfaces/msg/velocity_ned.hpp: /opt/ros/jazzy/share/rosidl_generator_cpp/resource/srv__traits.hpp.em
rosidl_generator_cpp/drone_interfaces/msg/velocity_ned.hpp: /opt/ros/jazzy/share/rosidl_generator_cpp/resource/srv__type_support.hpp.em
rosidl_generator_cpp/drone_interfaces/msg/velocity_ned.hpp: rosidl_adapter/drone_interfaces/msg/VelocityNed.idl
rosidl_generator_cpp/drone_interfaces/msg/velocity_ned.hpp: rosidl_adapter/drone_interfaces/msg/TelemetryData.idl
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/root/ros2_ws/build/drone_interfaces/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating C++ code for ROS interfaces"
	/usr/bin/python3 /opt/ros/jazzy/share/rosidl_generator_cpp/cmake/../../../lib/rosidl_generator_cpp/rosidl_generator_cpp --generator-arguments-file /root/ros2_ws/build/drone_interfaces/rosidl_generator_cpp__arguments.json

rosidl_generator_cpp/drone_interfaces/msg/detail/velocity_ned__builder.hpp: rosidl_generator_cpp/drone_interfaces/msg/velocity_ned.hpp
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_cpp/drone_interfaces/msg/detail/velocity_ned__builder.hpp

rosidl_generator_cpp/drone_interfaces/msg/detail/velocity_ned__struct.hpp: rosidl_generator_cpp/drone_interfaces/msg/velocity_ned.hpp
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_cpp/drone_interfaces/msg/detail/velocity_ned__struct.hpp

rosidl_generator_cpp/drone_interfaces/msg/detail/velocity_ned__traits.hpp: rosidl_generator_cpp/drone_interfaces/msg/velocity_ned.hpp
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_cpp/drone_interfaces/msg/detail/velocity_ned__traits.hpp

rosidl_generator_cpp/drone_interfaces/msg/detail/velocity_ned__type_support.hpp: rosidl_generator_cpp/drone_interfaces/msg/velocity_ned.hpp
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_cpp/drone_interfaces/msg/detail/velocity_ned__type_support.hpp

rosidl_generator_cpp/drone_interfaces/msg/telemetry_data.hpp: rosidl_generator_cpp/drone_interfaces/msg/velocity_ned.hpp
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_cpp/drone_interfaces/msg/telemetry_data.hpp

rosidl_generator_cpp/drone_interfaces/msg/detail/telemetry_data__builder.hpp: rosidl_generator_cpp/drone_interfaces/msg/velocity_ned.hpp
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_cpp/drone_interfaces/msg/detail/telemetry_data__builder.hpp

rosidl_generator_cpp/drone_interfaces/msg/detail/telemetry_data__struct.hpp: rosidl_generator_cpp/drone_interfaces/msg/velocity_ned.hpp
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_cpp/drone_interfaces/msg/detail/telemetry_data__struct.hpp

rosidl_generator_cpp/drone_interfaces/msg/detail/telemetry_data__traits.hpp: rosidl_generator_cpp/drone_interfaces/msg/velocity_ned.hpp
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_cpp/drone_interfaces/msg/detail/telemetry_data__traits.hpp

rosidl_generator_cpp/drone_interfaces/msg/detail/telemetry_data__type_support.hpp: rosidl_generator_cpp/drone_interfaces/msg/velocity_ned.hpp
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_cpp/drone_interfaces/msg/detail/telemetry_data__type_support.hpp

rosidl_generator_cpp/drone_interfaces/msg/rosidl_generator_cpp__visibility_control.hpp: rosidl_generator_cpp/drone_interfaces/msg/velocity_ned.hpp
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_cpp/drone_interfaces/msg/rosidl_generator_cpp__visibility_control.hpp

drone_interfaces__cpp: CMakeFiles/drone_interfaces__cpp
drone_interfaces__cpp: rosidl_generator_cpp/drone_interfaces/msg/detail/telemetry_data__builder.hpp
drone_interfaces__cpp: rosidl_generator_cpp/drone_interfaces/msg/detail/telemetry_data__struct.hpp
drone_interfaces__cpp: rosidl_generator_cpp/drone_interfaces/msg/detail/telemetry_data__traits.hpp
drone_interfaces__cpp: rosidl_generator_cpp/drone_interfaces/msg/detail/telemetry_data__type_support.hpp
drone_interfaces__cpp: rosidl_generator_cpp/drone_interfaces/msg/detail/velocity_ned__builder.hpp
drone_interfaces__cpp: rosidl_generator_cpp/drone_interfaces/msg/detail/velocity_ned__struct.hpp
drone_interfaces__cpp: rosidl_generator_cpp/drone_interfaces/msg/detail/velocity_ned__traits.hpp
drone_interfaces__cpp: rosidl_generator_cpp/drone_interfaces/msg/detail/velocity_ned__type_support.hpp
drone_interfaces__cpp: rosidl_generator_cpp/drone_interfaces/msg/rosidl_generator_cpp__visibility_control.hpp
drone_interfaces__cpp: rosidl_generator_cpp/drone_interfaces/msg/telemetry_data.hpp
drone_interfaces__cpp: rosidl_generator_cpp/drone_interfaces/msg/velocity_ned.hpp
drone_interfaces__cpp: CMakeFiles/drone_interfaces__cpp.dir/build.make
.PHONY : drone_interfaces__cpp

# Rule to build all files generated by this target.
CMakeFiles/drone_interfaces__cpp.dir/build: drone_interfaces__cpp
.PHONY : CMakeFiles/drone_interfaces__cpp.dir/build

CMakeFiles/drone_interfaces__cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/drone_interfaces__cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/drone_interfaces__cpp.dir/clean

CMakeFiles/drone_interfaces__cpp.dir/depend:
	cd /root/ros2_ws/build/drone_interfaces && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/ros2_ws/src/drone_interfaces /root/ros2_ws/src/drone_interfaces /root/ros2_ws/build/drone_interfaces /root/ros2_ws/build/drone_interfaces /root/ros2_ws/build/drone_interfaces/CMakeFiles/drone_interfaces__cpp.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/drone_interfaces__cpp.dir/depend

