cmake_minimum_required (VERSION 2.8)
set(SRC_LIB User.cpp)

# 添加以下这句，注意/bin要与"}"紧贴，bin文件夹如果不存在，会自动创建。
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

add_library(user ${SRC_LIB})
