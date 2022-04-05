cmake_minimum_required(VERSION 3.1)
project(Base)
add_library(
    base_derived SHARED
    ./src/base.cxx
    ./src/derived.cxx
)
add_executable(${PROJECT_NAME} ./src/main.cc)
target_link_libraries(${PROJECT_NAME} base_derived)
