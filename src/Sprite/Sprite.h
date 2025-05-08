#pragma once

#include "raylib.h"

class Sprite {
public:
    Sprite(const char* fileName, float x, float y);
    ~Sprite();

    virtual void Update();
    void Draw();

    void SetStatic();
protected:
    float x;
    float y;
    float width;
    float height;

    float dx;
    float dy;

    Texture2D texture;
};