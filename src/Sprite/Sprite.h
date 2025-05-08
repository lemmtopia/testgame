#pragma once

#include "raylib.h"

class Sprite {
public:
    Sprite(const char* fileName, float x, float y);
    ~Sprite();

    virtual void Update();
    void Draw(float offsetX, float offsetY);

    void SetStatic();

    float GetX();
    float GetY();
protected:
    float x;
    float y;
    float width;
    float height;

    float dx;
    float dy;

    Texture2D texture;
};