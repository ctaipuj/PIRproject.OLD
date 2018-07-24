cmake_minimum_required(VERSION 2.8.3)
project(cri_gazebo_plugins)

find_package(catkin REQUIRED COMPONENTS
  gazebo_msgs
  gazebo_ros
  std_srvs
  geometry_msgs
  moveit_msgs
)

find_package(gazebo REQUIRED)
find_package(Boost REQUIRED COMPONENTS thread)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GAZEBO_CXX_FLAGS}")

catkin_package(
  INCLUDE_DIRS
    include
  CATKIN_DEPENDS
    gazebo_msgs
    std_srvs
    geometry_msgs
    moveit_msgs
)

include_directories(include
  ${Boost_INCLUDE_DIRS}
  ${catkin_INCLUDE_DIRS}
  ${GAZEBO_INCLUDE_DIRS}
)

link_directories(${GAZEBO_LIBRARY_DIRS})

## Plugins
add_library(gazebo_ros_moveit_planning_scene src/gazebo_ros_moveit_planning_scene.cpp)
target_link_libraries(gazebo_ros_moveit_planning_scene ${GAZEBO_LIBRARIES} ${catkin_LIBRARIES})
