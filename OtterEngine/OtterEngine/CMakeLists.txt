cmake_minimum_required (VERSION 3.8)
project (OtterEngine)

#Set the sources for the OtterEngine
set (SOURCES
	src/OtterEngine.cpp
)

set(HEADERS
	include/OtterEngine.h
)

#Add library with all these sources
add_library(${PROJECT_NAME} ${SOURCES})
add_library(sub::OtterEngine ALIAS ${PROJECT_NAME})

target_include_directories( ${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)