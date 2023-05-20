cmake_minimum_required(VERSION 3.0.0)
project(MiniDS VERSION 0.1.0)

include(CTest)
enable_testing()

include_directories(src/List.h)
add_executable(MiniDS src/main.c src/List.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
