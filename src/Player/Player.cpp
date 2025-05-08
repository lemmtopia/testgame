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
    if (IsKeyDown(KEY_DOWN)) dy += moveSpeed;
    if (IsKeyDown(KEY_UP)) dy -= moveSpeed;
    if (IsKeyDown(KEY_RIGHT)) dx += moveSpeed;
    if (IsKeyDown(KEY_LEFT)) dx -= moveSpeed;

    x += dx;
    y += dy;
}