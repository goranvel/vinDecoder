add_library (countries SHARED
	us.cpp
)

target_include_directories (countries 
	PRIVATE ${HEADERS_BASE}
	PRIVATE ${HEADERS_BASE}/countries)
