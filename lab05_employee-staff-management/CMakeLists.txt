cmake_minimum_required(VERSION 3.12)
project(lab05_vector_template)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SOURCES "*.cpp")

add_executable(lab05_vector_template ${SOURCES})
