# CMakeLists.txt

# 设置最低的 CMake 版本要求
cmake_minimum_required(VERSION 3.16)

# 项目名称
project(UnixPractice VERSION 1.0.1)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 添加可执行文件
add_executable(myprog myprog.cpp)
