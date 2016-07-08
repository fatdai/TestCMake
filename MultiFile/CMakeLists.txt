cmake_minimum_required (VERSION 2.8)
PROJECT(ShowUser)

# 使用C++ 11
add_compile_options(-std=c++11)
SET (SRC_LIST main.cpp User.cpp)
ADD_EXECUTABLE (showuser ${SRC_LIST})
