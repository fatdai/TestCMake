cmake_minimum_required (VERSION 2.8)

#编译动态库示例
project(OutputDir)

# 使用C++ 11
add_compile_options(-std=c++11)

#文件目录
#add_subdirectory命令告诉CMake去子目录中查找可用的CMakeLists.txt文件。
add_subdirectory(src)
add_subdirectory(lib)
