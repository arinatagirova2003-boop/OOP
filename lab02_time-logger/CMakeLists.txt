cmake_minimum_required(VERSION 3.12)
project(lab02_time_logger)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SOURCES "*.cpp")

add_executable(lab02_time_logger ${SOURCES})
