#pragma once
#include <iostream>
#include "Pokemon.h"
#include "PokemonOptions.h"

using namespace std;

class Player
{
public:
    string player_name;
    Pokemon player_pokemon;
    PokemonOptions chosen_pokemon;

    Player();

    void EnterName();
   
    PokemonOptions ChoosePokemon();
    
    void NextDialogue();

    ~Player();
    
};
