#pragma once
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Environment\Grass.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Player\Player.h"

using namespace N_Environment;
using namespace N_Player;

namespace N_Game
{  
    class Game
    {
    private:
        Grass forest_grass; 

    public:
        Game();

        void GameLoop(Player& player);

        ~Game();
    };
}
