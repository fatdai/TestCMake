cmake_minimum_required (VERSION 2.8)
#将执行文件和库文件输出到指定文件中。二者可以存放到不同的目录下，也可以存放到相同的目录下，本文存放到相同的目录下。
project(OutputDir)

# 使用C++ 11
add_compile_options(-std=c++11)

#文件目录
#add_subdirectory命令告诉CMake去子目录中查找可用的CMakeLists.txt文件。
add_subdirectory(src)
add_subdirectory(lib)
