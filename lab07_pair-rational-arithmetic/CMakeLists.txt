cmake_minimum_required(VERSION 3.12)
project(lab07_pair_rational_arithmetic)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SOURCES "*.cpp")

add_executable(lab07_pair_rational_arithmetic ${SOURCES})
