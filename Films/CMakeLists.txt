cmake_minimum_required (VERSION 3.8)

# project name and language
project(task1 LANGUAGES CXX)

set(BUILD_DIR "${CMAKE_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BUILD_DIR}/../bin")

set(BINARY_DIR "${CMAKE_BINARY_DIR}")

set(SOURCE_FILES
    # Headers
    rnd.h
	cartoon.h
	container.h
	documentary.h
	film.h
	gaming.h
    container.h

    # Sources
    rnd.cpp
	cartoon.cpp
	documentary.cpp
	film.cpp
	gaming.cpp
    container.cpp
    main.cpp)

add_executable (films ${SOURCE_FILES})