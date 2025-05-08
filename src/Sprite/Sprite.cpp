#include "Sprite.h"

#include <random>

Sprite::Sprite(const char* fileName, float x, float y) {
    texture = LoadTexture(fileName);
    width = texture.width;
    height = texture.height;

    this->x = x;
    this->y = y;

    dx = std::rand() % 40 - 20;
    dy = std::rand() % 40 - 20;

    dx /= 10;
    dy /= 10;
}

Sprite::~Sprite() {
    UnloadTexture(texture);
}

void Sprite::Update() {
    const int screenHeight = 144;
    const int screenWidth = screenHeight * 16 / 9;

    if (x <= 0 || x >= screenWidth) dx *= -1;
    if (y <= 0 || y >= screenHeight) dy *= -1;

    x += dx;
    y += dy;
}

void Sprite::Draw() {
    DrawTexture(texture, x, y, WHITE);
}