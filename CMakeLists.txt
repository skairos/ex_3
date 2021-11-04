cmake_minimum_required(VERSION 3.20.0)

project(test_lib)

add_executable(${PROJECT_NAME} test.cpp)




add_subdirectory(add)


# update submodule
# cf https://www.youtube.com/watch?v=ED-WUk440qc


add_subdirectory(external/glfw)




target_link_libraries(${PROJECT_NAME} add)
target_link_libraries(${PROJECT_NAME} glfw)
