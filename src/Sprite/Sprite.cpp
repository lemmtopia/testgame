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
    //UnloadTexture(texture);
}

void Sprite::Update() {
    const int screenHeight = 144;
    const int screenWidth = screenHeight * 16 / 9;

    if (x <= 0 || x >= 16 * 80) dx *= -1;
    if (y <= 0 || y >= 16 * 80) dy *= -1;

    x += dx;
    y += dy;
}

void Sprite::Draw(float offsetX, float offsetY) {
    DrawTexture(texture, x + offsetX, y + offsetY, WHITE);
}

void Sprite::SetStatic() {
    dx = 0;
    dy = 0;
}

float Sprite::GetX() {
    return x;
}

float Sprite::GetY() {
    return y;
}