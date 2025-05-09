@echo off

set RAYLIB_PATH=C:\raylib\raylib\src
set GLFW_PATH=%RAYLIB_PATH%\external\glfw
set SRCFILES=src/*.cpp src/Game/*.cpp src/Sprite/*.cpp src/Player/*.cpp src/TileMap/*.cpp

g++ -std=c++17 %SRCFILES% -o bin/game.exe -L%RAYLIB_PATH% -L%GLFW_PATH%\src -I%GLFW_PATH%\include-I%RAYLIB_PATH% -lraylib -lopengl32 -lgdi32 -lwinmm -mwindows
