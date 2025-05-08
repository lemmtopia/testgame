#pragma once

#include "raylib.h"

#include <vector>

class Tile {
public:
    int x;
    int y;

    Texture2D texture;
};

class TileMap {
public:
    TileMap(const char* fileName, int width, int height);
    ~TileMap();

    void Draw(float offsetX, float offsetY);
protected:
    int width;
    int height;

    std::vector<Tile*> tiles;
};