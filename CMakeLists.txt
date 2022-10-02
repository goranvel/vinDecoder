cmake_minimum_required(VERSION 3.14)

project (VinDecoder
			VERSION 1.0
			DESCRIPTION "Vin decoder"
			LANGUAGES CXX
)

set (HEADERS_BASE ${PROJECT_SOURCE_DIR}/headers)

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build)
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)

add_executable (vinDecoder
	vin/main.cpp
)

add_subdirectory (vin)
add_subdirectory (countries)

target_include_directories(vinDecoder PUBLIC ${HEADERS_BASE})
