cmake_minimum_required(VERSION 3.2)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories("${CMAKE_SOURCE_DIR}")

project(lib1)
add_library(lib1 SHARED lib1/lib1.cpp)

project(lib2)
add_library(lib2 SHARED lib2/lib2.cpp)
target_link_libraries(lib2 lib1)

project(lib3)
add_library(lib3 SHARED lib3/lib3.cpp)
target_link_libraries(lib3 lib2)

project(runner)
add_executable(runner runner/main.cpp)
target_link_libraries(runner lib3)