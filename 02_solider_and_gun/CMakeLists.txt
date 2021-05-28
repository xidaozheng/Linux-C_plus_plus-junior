cmake_minimum_required(VERSION 3.0)

project(SOLIDER)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall")

set(CMAKE_BUILD_TYPE    Debug)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(my_exe_cmake main.cpp src/gun.cpp src/solider.cpp)