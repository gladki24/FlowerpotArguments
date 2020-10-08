cmake_minimum_required(VERSION 3.17)
project(FlowerpotArguments)

set(CMAKE_CXX_STANDARD 17)

set(LIB FlowerpotArguments)
set(SPEC FlowerpotArgumentsTest)

add_library(${LIB} library.h classes/Parser.cpp classes/Parser.h enums/Style.h classes/Arguments.cpp classes/Arguments.h)
add_executable(${SPEC} main.cpp)

target_link_libraries(${SPEC} ${LIB})