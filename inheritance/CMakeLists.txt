cmake_minimum_required(VERSION 3.1)
project(inheritance)
add_library(
    in 
    ./src/employee.cxx
)
add_executable(${PROJECT_NAME} ./src/main.cc)
target_link_libraries(${PROJECT_NAME} in)
