cmake_minimum_required(VERSION 3.0.0)
project(cpp_basic VERSION 0.1.0)

include(CTest)
enable_testing()

#libs
add_subdirectory (build_in_data)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} BuildInData)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
