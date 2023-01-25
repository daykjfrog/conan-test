cmake_minimum_required(VERSION 3.15)
project(newpkg CXX)

add_library(newpkg src/newpkg.cpp)
target_include_directories(newpkg PUBLIC include)

set_target_properties(newpkg PROPERTIES PUBLIC_HEADER "include/newpkg.h")
install(TARGETS newpkg)
