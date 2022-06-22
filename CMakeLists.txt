cmake_minimum_required(VERSION 3.14)

project (vin
			VERSION 1.0
			# DESCRIPTION "Vin decoder"
			LANGUAGES CXX)

set(OBJ, ${CMAKE_CURRENT_SOURCE_DIR}/.build/*.o)

set(PROJECT_SOURCES
	*.cpp
	*.h
)
