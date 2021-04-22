# CMakeList.txt : CMake project for game-of-life, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("game-of-life")

# Add source to this project's executable.
add_executable (game-of-life "game-of-life.cpp" "game-of-life.h")

# TODO: Add tests and install targets if needed.
