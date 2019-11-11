cmake_minimum_required (VERSION 3.8)
project (MathEngine)

#Set the sources for the OtterEngine
set (SOURCEFILES
	src/MathEngine.cpp
)

set(HEADERS
	include/MathEngine.h
)

set (MAIN src/Main.cpp)

set(PROJECT_EXE ${PROJECT_NAME}Exe)

add_executable(${PROJECT_EXE} ${SOURCEFILES} ${HEADERS} ${MAIN})
#Add library with all these sources
add_library(${PROJECT_NAME} ${SOURCEFILES} ${HEADERS})
add_library(sub::MathEngine ALIAS ${PROJECT_NAME})

target_include_directories( ${PROJECT_EXE}
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)

target_include_directories( ${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)

