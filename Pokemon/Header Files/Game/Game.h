#pragma once
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Environment\Grass.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Player\Player.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Pokemon.h"

using namespace N_Environment;
using namespace N_Player;

namespace N_Game
{  
    class Game
    {
    private:
        Grass forest_grass;
        N_Pokemon::Pokemon* encountered_pokemon;

    public:
        Game();

        void GameLoop(Player& player);

        bool PokemonLowHealth(Player& player);

        int PokemonHealthWarning(Player& player);

        ~Game();
    };
}
