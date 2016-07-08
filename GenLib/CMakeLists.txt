cmake_minimum_required (VERSION 2.8)

project(GenLib)

# 使用C++ 11
add_compile_options(-std=c++11)

# 设置 一个变量SRC_LIBUSER的值为 User.cpp
set(SRC_LIBUSER User.cpp)

# 设置 主程序的代码文件
set(SRC_APP main.cpp)

#生成库
add_library(user ${SRC_LIBUSER})

#生成可执行文件
add_executable(genlib ${SRC_APP})

#链接库
target_link_libraries(genlib user)
