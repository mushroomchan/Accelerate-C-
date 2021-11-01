cmake_minimum_required(VERSION 3.20)
project(Students_grades)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Students_grades
        grade.cpp
        grade.h
        main.cpp
        median.cpp
        median.h
        Student_info.cpp
        Student_info.h
        extract_fgrade.cpp)
