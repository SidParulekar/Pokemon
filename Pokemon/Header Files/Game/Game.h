#pragma once
#include "..\..\..\..\..\GitHub\Pokemon\Pokemon\Header Files\Environment\Grass.h"


class Player;

class Game
{
private:
    Grass forest_grass;

public:    
    Game();

    void GameLoop(Player& player);

    ~Game();
};