#include "Game.h"

#include "raylib.h"
#include <iostream>
#include <random>
#include <ctime>

Game::Game() {
    const int screenHeight = 144;
    const int screenWidth = screenHeight * 16 / 9;

    // Init window
    InitWindow(screenWidth * 2, screenHeight * 2, "Untitled Game");
    SetTargetFPS(60);

    // Init target
    target = LoadRenderTexture(screenWidth, screenHeight);
    
    std::srand(time(NULL));

    isRunning = true;
}

void Game::Run() {
    const int screenHeight = 144;
    const int screenWidth = screenHeight * 16 / 9;

    for (int i = 0; i < 50; i++) {
        sprites.push_back(new Sprite("assets/textures/happy.png", std::rand() % screenWidth, std::rand() % screenHeight));
    }

    Rectangle srcRect = {
        0, 0,
        screenWidth, -screenHeight
    };

    Rectangle dstRect = {
        0, 0,
        screenWidth * 2, screenHeight * 2
    };

    Vector2 origin = { 0, 0 };

    while (isRunning) {
        if (WindowShouldClose()) {
            isRunning = false;
            return;
        }
        
        // Draw game
        BeginTextureMode(target);
        ClearBackground(RAYWHITE);
        DrawText("Untitled Game", 0, 0, 10, BLACK);
        
        for (Sprite* s : sprites) {
            s->Update();
            s->Draw();
        }

        EndTextureMode();

        // Apply target
        BeginDrawing();
        DrawTexturePro(target.texture, srcRect, dstRect, origin, 0.0f, WHITE);
        EndDrawing();
    }
}

Game::~Game() {
    CloseWindow();

    sprites.clear();

    isRunning = false;
}