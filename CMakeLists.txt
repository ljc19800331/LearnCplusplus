cmake_minimum_required(VERSION 3.12)
project(Program_1)
set(CMAKE_CXX_STANDARD 14)

find_package(OpenCV REQUIRED)
find_package(PCL 1.3 REQUIRED COMPONENTS common io)

add_executable(Program_1 main.cpp test_opencv.cpp test_pcl.cpp)

include_directories(${PCL_INCLUDE_DIRS})
include_directories($(OpenCV_INCLUDE_DIRS))

target_link_libraries(Program_1 ${OpenCV_LIBS})
target_link_libraries(Program_1 ${PCL_COMMON_LIBRARIES} ${PCL_IO_LIBRARIES})

link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})