#pragma once
#include <iostream>
#include "..\..\..\..\..\GitHub\Pokemon\Pokemon\Header Files\Pokemon\Pokemon.h"
#include "..\..\..\..\..\GitHub\Pokemon\Pokemon\Header Files\Pokemon\PokemonOptions.h"
using namespace std;

using namespace N_Pokemon;

namespace N_Player
{
    class Player
    {
    public:
        string player_name;
        N_Pokemon::Pokemon player_pokemon; 
        PokemonOptions chosen_pokemon;

        Player();

        void EnterName();

        PokemonOptions ChoosePokemon();

        void NextDialogue();

        ~Player();

    };
}


