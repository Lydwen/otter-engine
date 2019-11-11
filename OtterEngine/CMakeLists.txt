# CMakeList.txt : fichier projet CMake de niveau supérieur, effectuez une configuration globale
# et incluez les sous-projets ici.
#
cmake_minimum_required (VERSION 3.8)

project (GlobalProject)

# Incluez les sous-projets.
add_subdirectory (OtterEngine)
add_subdirectory (MathEngine)
add_subdirectory (GoogleTest)

set(SRCS 
	main.cpp
	)

add_executable(main ${SRCS})
target_link_libraries(main OtterEngine)
target_link_libraries(main MathEngine)