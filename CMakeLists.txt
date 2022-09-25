cmake_minimum_required(VERSION 3.14)

project (VinDecoder
			VERSION 1.0
			DESCRIPTION "Vin decoder"
			LANGUAGES CXX)

set (HEADERS_BASE ${PROJECT_SOURCE_DIR}/headers)

add_subdirectory (source)

add_executable (vinDecoder
	source/main.cpp
)

target_include_directories(vinDecoder PUBLIC ${HEADERS_BASE})

target_link_libraries (vinDecoder PUBLIC vin)
