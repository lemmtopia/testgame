#pragma once

#include "../Sprite/Sprite.h"
#include "../Player/Player.h"
#include "../TileMap/TileMap.h"
#include <vector>

class Game {
public:
    Game();
    ~Game();

    void Run();

private:
    RenderTexture2D target;
    std::vector<Sprite*> sprites;
    TileMap* map;
    Player* player;
    bool isRunning;
};