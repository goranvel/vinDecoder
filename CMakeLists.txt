cmake_minimum_required(VERSION 3.14)

project (vin
			VERSION 1.0
			DESCRIPTION "Vin decoder"
			LANGUAGES CXX)

#set(PROJECT_SOURCES
#	main.cpp
#	library/vin.h
#	library/vin.cpp
#)

add_subdirectory(library/countries)

# link_directories(countries)

include_directories (headers/)
# target_include_directories (vin PRIVATE countries)

target_link_libraries(vin countries/us.so)
