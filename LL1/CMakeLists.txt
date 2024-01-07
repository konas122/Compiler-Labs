cmake_minimum_required(VERSION 3.16)
project(MyCompilers)

# set(CMAKE_CXX_STANDARD 17)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/grammer.txt
     DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

add_executable(
    MyCompilers
    # draft_1.cpp
    LL1.cpp
)
