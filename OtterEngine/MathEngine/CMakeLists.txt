cmake_minimum_required (VERSION 3.8)
project (MathEngine)

#Set the sources for the OtterEngine
set (SOURCEFILES
	src/MathEngine.cpp
)

set(HEADERS
	include/MathEngine.h
)


add_executable(${PROJECT_NAME}Exe ${HEADERS} ${SOURCEFILES})
#Add library with all these sources
add_library(${PROJECT_NAME} ${SOURCEFILES} ${HEADERS})
add_library(sub::MathEngine ALIAS ${PROJECT_NAME})

target_include_directories( ${PROJECT_NAME}Exe
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)

target_include_directories( ${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)

