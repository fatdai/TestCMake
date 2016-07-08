cmake_minimum_required (VERSION 2.8)

#include_directories命令用来指明头文件所在路径
include_directories(${PROJECT_SOURCE_DIR}/lib)
set(SRC_APP main.cpp)
add_executable(muldir ${SRC_APP})
target_link_libraries(muldir user)
