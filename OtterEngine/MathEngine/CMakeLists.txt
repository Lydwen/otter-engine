cmake_minimum_required (VERSION 3.8)
project (MathEngine)

# Now simply link against gtest or gtest_main as needed. Eg
#add_executable(example example.cpp)
#target_link_libraries(example gtest_main)
#add_test(NAME example_test COMMAND example)

#Set the sources for the OtterEngine
set (SOURCEFILES
	src/MathEngine.cpp
	src/Vector3D.cpp
)
set(HEADERS
	include/MathEngine.h
	include/Vector3D.hpp
)
set (MAIN src/Main.cpp)
set(PROJECT_EXE ${PROJECT_NAME}Exe)

#Create the executable for standalone use
add_executable(${PROJECT_EXE} ${SOURCEFILES} ${HEADERS} ${MAIN})
#Add library with all these sources
add_library(${PROJECT_NAME} ${SOURCEFILES} ${HEADERS})
add_library(sub::MathEngine ALIAS ${PROJECT_NAME})

#include the include directory for ease of use
target_include_directories( ${PROJECT_EXE}
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)
target_include_directories( ${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)

#tests
add_executable(TestsMathEngine ${SOURCEFILES} ${HEADERS} tests/VectorTest.cpp)
target_link_libraries(TestsMathEngine PRIVATE gtest_main)
add_test(NAME example_test COMMAND example)
#include the include directory for the tests
target_include_directories( TestsMathEngine
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)