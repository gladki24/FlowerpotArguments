cmake_minimum_required(VERSION 3.17)
project(FlowerpotArguments)

set(CMAKE_CXX_STANDARD 17)
set(LIB FlowerpotArguments)

add_library(${LIB} FlowerpotArguments.h classes/Parser.cpp classes/Parser.h enums/Style.h classes/Arguments.cpp classes/Arguments.h classes/handlers/ParametersHandler.cpp classes/handlers/ParametersHandler.h classes/handlers/ParametersHandlerFactory.cpp classes/handlers/ParametersHandlerFactory.h classes/handlers/ParametersKeyValue.cpp classes/handlers/ParametersKeyValue.h classes/handlers/ParametersKey.cpp classes/handlers/ParametersKey.h classes/handlers/ParametersValue.cpp classes/handlers/ParametersValue.h classes/Parameters.cpp classes/Parameters.h classes/ParametersBuilder.cpp classes/ParametersBuilder.h)

add_subdirectory(specs)