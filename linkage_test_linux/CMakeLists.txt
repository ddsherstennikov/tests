cmake_minimum_required(VERSION 3.2)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")



project(lib1)
add_library(lib1 SHARED lib1.cpp)

project(lib2)
add_library(lib2 SHARED lib2.cpp)
target_link_libraries(lib2 debug lib1)

project(libX)
add_library(libX SHARED libX.cpp)
target_link_libraries(libX debug lib1)

project(linkage_test)
add_executable(linkage_test main.cpp)
target_link_libraries(libX debug lib2)