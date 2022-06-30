cmake_minimum_required(VERSION 3.14)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(PROJECT_SOURCES
	main.cpp
	vin.h
	vin.cpp
)

# add_library(germany	SHARED germany.cpp)
# add_library(japan	SHARED japan.cpp)
# add_library(mexico	SHARED mexico.cpp)
# add_library(us		SHARED us.cpp)

add_library(${PROJECT_NAME} SHARED ${SOURCES})
