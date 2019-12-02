cmake_minimum_required(VERSION 3.5)

project(Sovereign)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

add_executable(Sovereign main.cpp ./src/person.cpp src/sovereign.cpp src/sha256.cpp)