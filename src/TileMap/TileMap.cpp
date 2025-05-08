#include "TileMap.h"

#include <cstdlib>

TileMap::TileMap(const char* fileName, int width, int height) {
    this->width = width;
    this->height = height;

    // TODO: load tilemap from file
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            Tile* tile = new Tile();
            tile->x = i * 16;
            tile->y = j * 16;
            tile->texture = LoadTexture(fileName);
            tiles.push_back(tile);
        }
    }
}

TileMap::~TileMap() {
    tiles.clear();
}

void TileMap::Draw(float offsetX, float offsetY) {
    for (Tile* tile : tiles) {
        DrawTexture(tile->texture, tile->x + offsetX, tile->y + offsetY, WHITE);
    }
}