cmake_minimum_required(VERSION 3.0.0)
project(ThreadPool2 VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(ThreadPool2 main.cpp ReqHandler.cpp ThPool.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
