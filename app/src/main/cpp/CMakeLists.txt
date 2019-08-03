cmake_minimum_required(VERSION 3.4.1)

add_library(hello SHARED hello.cpp)

target_link_libraries(hello android log)