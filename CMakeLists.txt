cmake_minimum_required(VERSION 3.10.0)
project(RSZParser VERSION 0.1.0 LANGUAGES C CXX)

include_directories("Json Parser" PRIVATE)

add_library(RSZParser SHARED
    dllmain.cpp
    RSZStructConstructor.hpp
    RSZStructConstructor.cpp
)

target_compile_features(RSZParser PRIVATE cxx_std_20)

install(
    TARGETS RSZParser
    DESTINATION bin
    COMPONENT RSZParser
)