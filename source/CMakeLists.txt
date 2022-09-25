add_subdirectory (countries)

add_library (vin SHARED
	make.cpp
	vin.cpp
)

target_include_directories (vin 
	PRIVATE ${HEADERS_BASE}
	PRIVATE ${HEADERS_BASE}/countries
)

target_link_libraries (vin PRIVATE countries)
