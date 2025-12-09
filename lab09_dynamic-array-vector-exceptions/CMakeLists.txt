cmake_minimum_required(VERSION 3.12)
project(lab09_dynamic_array_vector_exceptions)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SOURCES "*.cpp")

add_executable(lab09_dynamic_array_vector_exceptions ${SOURCES})
