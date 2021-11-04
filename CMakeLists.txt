cmake_minimum_required(VERSION 3.20.0)

project(test_lib)

add_executable(${PROJECT_NAME} test.cpp)

add_subdirectory(add)

target_link_libraries(${PROJECT_NAME} add)
