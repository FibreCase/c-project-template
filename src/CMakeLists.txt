cmake_minimum_required(VERSION 3.10)

add_library(add
    add.c
)

target_include_directories(add 
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}
)