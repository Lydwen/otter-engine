cmake_minimum_required (VERSION 3.8)
project (OtterEngine)

# Now simply link against gtest or gtest_main as needed. Eg
#add_executable(example example.cpp)
#target_link_libraries(example gtest_main)
#add_test(NAME example_test COMMAND example)

#Set the sources for the OtterEngine
set (SOURCEFILES
	src/OtterEngine.cpp
)

set(HEADERS
	include/OtterEngine.h
)

set (MAIN src/Main.cpp)

set(PROJECT_EXE ${PROJECT_NAME}Exe)

add_executable(${PROJECT_EXE} ${SOURCEFILES} ${HEADERS} ${MAIN})
#Add library with all these sources
add_library(${PROJECT_NAME} ${SOURCEFILES} ${HEADERS})
add_library(sub::OtterEngine ALIAS ${PROJECT_NAME})

target_include_directories( ${PROJECT_EXE}
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)

target_include_directories( ${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)

#tests
add_executable(TestsOtterEngine tests/Example.cpp)
target_link_libraries(TestsOtterEngine PRIVATE gtest_main)
