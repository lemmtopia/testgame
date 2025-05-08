#pragma once

#include "../Sprite/Sprite.h"

class Player : public Sprite {
public:
    Player(const char* fileName, float x, float y);
    ~Player();

    void Update();
private:
    float moveSpeed;
};