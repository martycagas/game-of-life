# CMakeList.txt : CMake project for game-of-life, include source and define
# project specific logic here.
#
cmake_minimum_required(VERSION 3.8)

# Requires at least version 3.0
find_package(raylib 3.0 CONFIG REQUIRED)

file(GLOB_RECURSE HEADERS_LIST "*.h" "*.hpp")

set(SOURCES_LIST
    "main.cpp"
    "game.cpp"
    "settings.cpp"
)

# Add source to this project's executable.
add_executable(${PROJECT_NAME} ${SOURCES_LIST} ${HEADERS_LIST})

target_include_directories(${PROJECT_NAME} PRIVATE ${RAYLIB_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} PRIVATE ${RAYLIB_LIBRARIES})

# TODO: Add tests and install targets if needed.
