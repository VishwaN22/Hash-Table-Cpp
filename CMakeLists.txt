cmake_minimum_required(VERSION 3.20)

project(hash_table)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(hash_table
    src/main.cpp
    src/hash_table.cpp
)

target_include_directories(hash_table PRIVATE
    ${PROJECT_SOURCE_DIR}/include
)