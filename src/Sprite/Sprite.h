#pragma once

#include "raylib.h"

class Sprite {
public:
    Sprite(const char* fileName, float x, float y);
    ~Sprite();

    void Update();
    void Draw();
protected:
    float x;
    float y;
    float width;
    float height;

    float dx;
    float dy;

    Texture2D texture;
};