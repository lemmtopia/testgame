#pragma once

#include "../Sprite/Sprite.h"
#include <vector>

class Game {
public:
    Game();
    ~Game();

    void Run();

private:
    RenderTexture2D target;
    std::vector<Sprite*> sprites;
    bool isRunning;
};