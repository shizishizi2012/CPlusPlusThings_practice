cmake_minimum_required(VERSION 3.0.0)
project(operator VERSION 0.1.0)

include(CTest)
enable_testing()

add_subdirectory(util)

add_executable(operator main.cpp)

target_link_libraries(operator PRIVATE Util)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
