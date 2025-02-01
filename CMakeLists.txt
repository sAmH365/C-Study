cmake_minimum_required(VERSION 3.10)
project(C-Study C)

file(GLOB_RECURSE SOURCES "src/*.c")
add_executable(C-Study ${SOURCES})