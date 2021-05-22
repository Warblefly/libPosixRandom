cmake_minimum_required(VERSION 3.5)
project(posixrandom VERSION 0.5.0 LANGUAGES C)

set(DEFAULT_BUILD_TYPE "Release")

#include(GNUInstallDirs)

add_library(${PROJECT_NAME} SHARED src/random.c)

set_target_properties(${PROJECT_NAME} PROPERTIES VERSION ${PROJECT_VERSION} SOVERSION 0)

install(TARGETS ${PROJECT_NAME} EXPORT PosixRandomConfig
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        RUNTIME DESTINATION bin)

install(EXPORT PosixRandomConfig DESTINATION share/PosixRandom/cmake)

export(TARGETS ${PROJECT_NAME} FILE PosixRandomConfig.cmake)
