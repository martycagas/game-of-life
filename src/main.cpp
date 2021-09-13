/**
 * @file    main.cpp
 * @author  Martin Cagas
 * @date    2021-06-10
 *
 * @brief   Conway's Game of Life made using raylib.
 *
 * @section DESCRIPTION
 *
 * Conway's Game of Life built using C++ and low-level game creation library.
 *
 * The main game file. Instatiates the main game class, executes the main loop,
 * manages game settings and properties.
 */

#include "main.hpp"

int main()
{
    InitWindow(800, 450, "raylib [core] example - basic window");

    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
