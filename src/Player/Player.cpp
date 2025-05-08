#include "Player.h"

#include "raylib.h"

#include <random>

Player::Player(const char* fileName, float x, float y) : Sprite(fileName, x, y) {
    texture = LoadTexture(fileName);
    width = texture.width;
    height = texture.height;

    this->x = x;
    this->y = y;

    moveSpeed = 2;
}


Player::~Player() {
    //UnloadTexture(texture);
}

void Player::Update() {
    dx = 0;
    dy = 0;
    if (IsKeyDown(KEY_S)) dy += moveSpeed;
    if (IsKeyDown(KEY_W)) dy -= moveSpeed;
    if (IsKeyDown(KEY_D)) dx += moveSpeed;
    if (IsKeyDown(KEY_A)) dx -= moveSpeed;

    x += dx;
    y += dy;

    if (x < 128) x = 128;
    if (x > 80 * 16 - 256) x = 80 * 16 - 256;
    if (y < 144 / 2) y = 144 / 2;
    if (y > 80 * 16 - 128 - 16) y = 80 * 16 - 128 - 16;
}