#pragma once
#include "Grass.h"

class Player;

class Game
{
private:
    Grass forest_grass;

public:    
    Game();
    void GameLoop(Player& player);

    
};