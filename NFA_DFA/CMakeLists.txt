cmake_minimum_required(VERSION 3.16)
project(MyCompilers)

set(CMAKE_CXX_STANDARD 17)

add_executable(
    MyCompilers
    main.cpp 
    Preprocessor.cpp 
    Preprocessor.h 
    LexicalAnalyzer.cpp 
    LexicalAnalyzer.h 
    Lex.cpp 
    Lex.h 
    utils.h 
    a.cpp
)
