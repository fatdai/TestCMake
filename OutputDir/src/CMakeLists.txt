cmake_minimum_required (VERSION 2.8)

#include_directories命令用来指明头文件所在路径
include_directories(${PROJECT_SOURCE_DIR}/lib)
set(SRC_APP main.cpp)

# 添加这句，将lib存放到与执行文件相同的目录下，也可以存放到不同目录。
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

add_executable(muldir ${SRC_APP})
target_link_libraries(muldir user)
