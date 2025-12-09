cmake_minimum_required(VERSION 3.12)
project(lab01_student_records)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SOURCES "*.cpp")

add_executable(lab01_student_records ${SOURCES})
