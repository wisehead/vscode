cmake_minimum_required(VERSION 3.10)

# 设置项目名称
project(MyCppProject)

# 设置 CMake 构建类型为 DEBUG
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug CACHE STRING "Choose the type of build." FORCE)
    set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release" "MinSizeRel" "RelWithDebInfo")
endif()

# 设置C++标准
set(CMAKE_CXX_STANDARD 17)
# 设置 C 和 C++ 编译器的 DEBUG 编译选项
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -g -O0")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g -O0")

# 添加可执行文件
add_executable(my_program src/main.cpp)

# 包含头文件目录
target_include_directories(my_program PRIVATE include)
