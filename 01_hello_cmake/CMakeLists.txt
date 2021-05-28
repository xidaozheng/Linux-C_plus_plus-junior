cmake_minimum_required(VERSION 3.0)

project(HELLOWORLD)

set(CMAKE_CXX_FLAGS "${CMKAE_CXX_FLAGS} -g -Wall")

add_executable(hello hello.cpp)