cmake_minimum_required(VERSION 3.12)
project(lab10_template_array_vector_specializations)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SOURCES "*.cpp")

add_executable(lab10_template_array_vector_specializations ${SOURCES})
