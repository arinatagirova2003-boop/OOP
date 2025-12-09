cmake_minimum_required(VERSION 3.12)
project(lab04_operator_overloading)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SOURCES "*.cpp")

add_executable(lab04_operator_overloading ${SOURCES})
